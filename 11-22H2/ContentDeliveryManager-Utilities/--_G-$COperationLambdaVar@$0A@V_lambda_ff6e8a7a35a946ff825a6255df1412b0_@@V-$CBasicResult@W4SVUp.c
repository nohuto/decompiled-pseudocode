/*
 * XREFs of ??_G?$COperationLambdaVar@$0A@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002EE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$COperationLambdaVar@$0A@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x18002BA28 (--1-$COperationLambdaVar@$0A@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@V-$CBasicResult@W4SVUpg.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::~COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
