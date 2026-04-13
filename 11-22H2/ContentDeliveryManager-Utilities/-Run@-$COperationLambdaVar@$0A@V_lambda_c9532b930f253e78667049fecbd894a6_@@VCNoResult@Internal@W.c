/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x18003F660
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z @ 0x18002E308 (--R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>::Run(
        __int64 a1,
        void *a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_c9532b930f253e78667049fecbd894a6_::operator()(a1 + 8, a2);
  return (unsigned int)a3;
}
