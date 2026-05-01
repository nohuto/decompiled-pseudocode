/*
 * XREFs of ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180275E60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$CBG@Z @ 0x18025D900 (--$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$CBG@Z @ 0x18025D944 (--$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$C.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180261880 (-CancelHoldAsync@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x180265440 (-IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x1802716A4 (-IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180274584 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID55478411@@@details@wil@@QEAA_NXZ @ 0x180274C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID55478411@@@details@wil@@QEAA_NX.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1806FDC50 (-Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

LRESULT __fastcall CopilotHotkeyManager::v_WndProc(
        CopilotHotkeyManager *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  char v7; // r14
  const char *v8; // r9
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  CopilotHotkeyManager *v12; // rcx
  CopilotHotkeyManager *v13; // rcx
  _DWORD *v14; // rsi
  char v15; // r14
  __int64 v16; // rcx
  char v17; // si
  CopilotHotkeyManager *v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r9
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v23; // [rsp+70h] [rbp+30h] BYREF

  if ( a3 == 8 )
  {
    v19 = CopilotHotkeyManagerTelemetry::Provider();
    if ( *(_DWORD *)v19 > 5u )
    {
      v21[0] = (__int64)L"WM_KILLFOCUS";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v19,
        (int)&dword_18087BCCF,
        0,
        v20,
        (const WCHAR **)v21);
    }
    goto LABEL_33;
  }
  if ( a3 == 257 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID55478411>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID55478411>::GetImpl'::`2'::impl) )
    {
      v14 = (_DWORD *)((char *)this + 336);
      if ( (CopilotHotkeyManager::IsCopilotHWKeyPressed(v12) || *v14 != 110)
        && (CopilotHotkeyManager::IsWinCHotKeyPressed(v13) || *v14 != 109) )
      {
        return 0LL;
      }
      v15 = 1;
      AcquireSRWLockExclusive((PSRWLOCK)this + 8);
      if ( !*((_BYTE *)this + 75) )
      {
        v15 = 0;
        *((_BYTE *)this + 75) = 1;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
      if ( v15 )
        return 0LL;
      if ( *v14 != 110 )
      {
        if ( *v14 == 109 )
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[35]>((__int64)L"WM_KEYUP && !IsWinCHotKeyPressed()");
        goto LABEL_33;
      }
    }
    else
    {
      v17 = 1;
      AcquireSRWLockExclusive((PSRWLOCK)this + 8);
      if ( !*((_BYTE *)this + 75) && !CopilotHotkeyManager::IsCopilotHWKeyPressed(v18) )
      {
        v17 = *((_BYTE *)this + 75);
        *((_BYTE *)this + 75) = 1;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
      if ( v17 )
        return 0LL;
    }
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[37]>(v16);
LABEL_33:
    CopilotHotkeyManager::CancelHoldAsync((__int64)this - 104, &v23);
    return 0LL;
  }
  if ( a3 != 275 || a4 != 200 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v7 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  *((_BYTE *)this + 72) = 1;
  if ( !KillTimer(a2, 0xC8uLL) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x5D8,
      (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      v8);
  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v7 = 1;
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 328,
                  v21)
             + 269) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)v21);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
  if ( v7 )
  {
    v9 = CopilotHotkeyManagerTelemetry::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v21[0] = (__int64)L"For wasWalkieTalkieActive: TrySendingCopilotHardwareKeyLongPressSignal(m_walkieTalkieActive /*isStart*/)";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v9,
        (int)&dword_18087BCCF,
        0,
        v10,
        (const WCHAR **)v21);
    }
    CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal((__int64)this - 104, &v23, *((_BYTE *)this + 73));
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 328,
                  v21)
             + 270) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)v21);
  }
  return 0LL;
}
