/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@23@@Z @ 0x18003F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002E564 (--R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()(a1, a4);
  return (unsigned int)a3;
}
