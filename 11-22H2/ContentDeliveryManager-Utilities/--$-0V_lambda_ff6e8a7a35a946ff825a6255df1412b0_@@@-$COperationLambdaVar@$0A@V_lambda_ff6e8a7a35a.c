/*
 * XREFs of ??$?0V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@?$COperationLambdaVar@$0A@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@QEAA@$$QEAV_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@Z @ 0x18002435C
 * Callers:
 *     ??$MakeAsyncOperation@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@W4SVUpgradeEligibilityState@ContentManagement@@VComTaskPoolHandler@23@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@Z @ 0x180027BF8 (--$MakeAsyncOperation@V-$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Intern.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022A28 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Windows::Internal::COperationLambdaVar<0,_lambda_ff6e8a7a35a946ff825a6255df1412b0_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 24),
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *(_DWORD *)(a1 + 16) = 0;
  return a1;
}
