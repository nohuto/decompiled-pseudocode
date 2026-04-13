/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x180044A30
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z @ 0x18002B1F8 (--R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_,Windows::Internal::CNoResult,>::Run(
        __int64 a1,
        __int64 a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_::operator()(a1 + 8, a2);
  return (unsigned int)a3;
}
