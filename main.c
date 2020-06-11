#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    if (argc==1)
    {
        printf("Keves parameter!\nFormatum: */run.sh <egeszszam>");
        return(100);
    }
    int n=atoi(argv[1]);
    if (n<1)
    {
        printf("A parameter erteke nem lehet kisebb mint 1!");
        return (2);
    }
    float *xvector=malloc(n*sizeof(float));
    float *yvector=malloc(n*sizeof(float));
    pid_t pid;
    int i;
    for (i=0;i<2*n;i++)
        {
            if (i/n==0)
            {
                scanf("%f",&xvector[i]);
            }
            else
            {
                scanf("%f",&yvector[i%n]);
            }
        }
    sleep( 2 );
    
for(i=0;i<n-1&&fork()>0;i++);
    
    if ( i==n-1 )
    {
    	printf("%.0f:%.0f\n",xvector[i],xvector[i]*yvector[i]);
    	sleep(2);
    } else
    {
        printf("%.0f:%.0f\n",xvector[i],xvector[i]*yvector[i]);
    	sleep(1);
    }
    free(xvector);
    free(yvector);
    return 0;
}
