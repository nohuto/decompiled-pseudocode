/*
 * XREFs of Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::PutOnComplete @ 0x18005C320
 * Callers:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::put_Completed @ 0x180064D60 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180064D60.c)
 * Callees:
 *     ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x180026468 (--$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAc.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckValidStateForDelegateCall @ 0x1800551D8 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_1800551D8.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceDelegateAssigned @ 0x18005F93C (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005F93C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int v4; // edi
  signed __int32 v5; // ecx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
    {
      v4 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(
             a1 + 112,
             a2);
      if ( v4 >= 0 )
      {
        Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceDelegateAssigned(a1);
        if ( a2 )
        {
          *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
        }
        _InterlockedOr(v7, 0);
        v5 = *(_DWORD *)(a1 + 48);
        v8 = -2;
        _InterlockedCompareExchange(&v8, v5, -2);
        if ( (unsigned int)(v8 - 1) <= 3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      }
    }
    else
    {
      return (unsigned int)-2147483624;
    }
  }
  return (unsigned int)v4;
}
