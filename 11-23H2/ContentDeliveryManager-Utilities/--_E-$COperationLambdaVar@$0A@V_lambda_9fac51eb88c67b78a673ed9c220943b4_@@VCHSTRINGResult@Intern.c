/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x18002B994 (--1-$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Interna.c)
 */

void *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::~COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
