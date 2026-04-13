/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCHSTRINGResult@23@@Z @ 0x18003F620
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_9fac51eb88c67b78a673ed9c220943b4_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x18002D348 (--R_lambda_9fac51eb88c67b78a673ed9c220943b4_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_9fac51eb88c67b78a673ed9c220943b4_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
