/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x1800285AC
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$1 @ 0x1800EE2DB (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800EE2DB.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_bd2c9ce24b7a5ce2e1d9cd7856918807____::_1_::dtor$1 @ 0x1800EE315 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING_____Windows--In.c)
 *     _ContentManagement::IdentityManager::TryGetUpgradeEligibilityAsync_::_1_::dtor$1 @ 0x1800EF1E3 (_ContentManagement--IdentityManager--TryGetUpgradeEligibilityAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$3 @ 0x1800EFA0B (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800EFA0B.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_4f27881777b3828299edd9a0e9cb6746____::_1_::dtor$0 @ 0x1800F1FE3 (_Windows--Internal--COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows--Int.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$10 @ 0x1800F3DA8 (_UnlockActionHelper--Execute_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
