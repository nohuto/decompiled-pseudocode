/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run @ 0x18006257C
 * Callers:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::OnCancel @ 0x18005AE20 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18005AE20.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::OnStart @ 0x18005AE40 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18005AE40.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Run @ 0x18005D750 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18005D750.c)
 * Callees:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterComplete @ 0x18006001C (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18006001C.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterExecute @ 0x18006007C (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18006007C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // cl
  int v5; // eax
  signed __int32 v6; // edx

  if ( (_DWORD)a2 == 2 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 244)) != 1 )
      return;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
      *(_QWORD *)(a1 + 256),
      a2,
      a3,
      a1 + 280);
    v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 252), 0xFFFFFFFF) == 0;
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 248)) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
        *(_QWORD *)(a1 + 256),
        1LL,
        2147943623LL,
        a1 + 280);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 252), 0xFFFFFFFF) != 1 )
        return;
    }
    else if ( !v4 )
    {
      return;
    }
    Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterComplete(a1);
  }
  else if ( (_DWORD)a2 == 1 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 248)) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
           *(_QWORD *)(a1 + 256),
           1LL,
           a3,
           a1 + 280);
    if ( v5 >= 0 && *(_BYTE *)(a1 + 289) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 272), 0xFFFFFFFF) != 1 )
        return;
      v6 = *(_DWORD *)(a1 + 276);
    }
    else
    {
      v6 = v5;
    }
    Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterExecute(
      (volatile signed __int32 *)a1,
      v6);
  }
}
