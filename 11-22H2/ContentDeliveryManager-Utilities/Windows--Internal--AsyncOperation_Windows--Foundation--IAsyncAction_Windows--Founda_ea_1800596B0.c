/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::GetResults @ 0x1800596B0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::ErrorCode @ 0x180055EC0 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180055EC0.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::GetResults(
        __int64 a1)
{
  __int64 v1; // rdi
  signed __int32 v2; // ecx
  unsigned __int32 v3; // ebx
  signed __int32 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int32 v6; // [rsp+38h] [rbp+10h] BYREF
  signed __int32 v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1 - 168;
  v2 = *(_DWORD *)(a1 - 168 + 48);
  v5 = -2;
  _InterlockedCompareExchange(&v5, v2, -2);
  if ( v5 == 3 )
  {
    Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::ErrorCode(
      v1,
      &v7);
    v3 = v7;
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_7;
  }
  else
  {
    if ( v5 == 1 )
    {
      v6 = 0;
LABEL_7:
      Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::ErrorCode(
        v1,
        (volatile signed __int32 *)&v6);
      return v6;
    }
    v3 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  return v3;
}
