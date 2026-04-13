/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x1800746E0
 * Callers:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_scalar_deleting_destructor_ @ 0x180075880 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180075880.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        _QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *a1 = off_1800E3A70;
  a1[1] = off_1800E6130;
  a1[10] = off_1800E35D8;
  a1[21] = off_1800E3528;
  a1[22] = off_1800E3548;
  a1[23] = off_1800E3880;
  a1[24] = off_1800E3860;
  a1[25] = off_1800E3B18;
  a1[26] = off_1800E38F0;
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[32];
  if ( v2 )
    (**v2)(v2, 1LL);
  a1[32] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 37);
  return Microsoft::WRL::Details::RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::_RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___(a1 + 1);
}
