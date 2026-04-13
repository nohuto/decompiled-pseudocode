/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180073D3C
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Internal::ComTaskPoolHandler_unsigned_short_const___const_&_enum_TrustLevel_&_ @ 0x180072A14 (Microsoft--WRL--Details--Make_Windows--Internal--AsyncOperation_Windows--Foundation_ea_180072A14.c)
 * Callees:
 *     Microsoft::WRL::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___ @ 0x180074194 (Microsoft--WRL--RuntimeClass_Microsoft--WRL--RuntimeClassFlags_3__Windows--Internal_ea_180074194.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned __int64 v5; // r14
  __int64 result; // rax

  v5 = a1 + 8;
  *(_QWORD *)a1 = &Windows::Internal::AsyncProgress<int>::`vftable';
  Microsoft::WRL::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___(a1 + 8);
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)a1 = off_1800E3D60;
  *(_QWORD *)v5 = off_1800E5AF8;
  *(_QWORD *)(a1 + 80) = off_1800E3970;
  *(_QWORD *)(a1 + 168) = off_1800E33F0;
  *(_QWORD *)(a1 + 176) = off_1800E35B0;
  *(_QWORD *)(a1 + 184) = off_1800E3C18;
  *(_QWORD *)(a1 + 192) = off_1800E3BF8;
  *(_QWORD *)(a1 + 200) = off_1800E3E08;
  *(_QWORD *)(a1 + 208) = off_1800E35F8;
  *(_DWORD *)(a1 + 240) = a4;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 2;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 2;
  *(_DWORD *)(a1 + 276) = 1;
  *(_WORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 312) = *(_DWORD *)(a2 + 8);
  result = a1;
  *(_QWORD *)(a1 + 280) = v5 & -(__int64)(a1 != 0);
  return result;
}
