/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002BAF4
 * Callers:
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_HSTRING______Windows::Foundation::IAsyncOperationCompletedHandler_HSTRING______Windows::Internal::INilDelegate_Windows::Internal::CHSTRINGResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800D501F (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_HSTRING______Windows--F.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_enum_ContentManagement::SVUpgradeEligibilityState__Windows::Foundation::IAsyncOperationCompletedHandler_enum_ContentManagement::SVUpgradeEligibilityState__Windows::Internal::INilDelegate_Windows::Internal::CBasicResult_enum_ContentManagement::SVUpgradeEligibilityState_0__Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800D5031 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_enum_ContentManagement-.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800D5043 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Foundation--IAsyn.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______Windows::Internal::INilDelegate_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800D8A3D (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_Windows--Foundation--Co.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_bool__Windows::Foundation::IAsyncOperationCompletedHandler_bool__Windows::Internal::INilDelegate_Windows::Internal::CBasicResult_unsigned_char_0__Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800DA3D0 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_bool__Windows--Foundati.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
