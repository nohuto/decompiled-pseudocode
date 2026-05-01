/*
 * XREFs of ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x180272AF0
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CopilotHotkeyManager::RestoreForeground(HWND *this)
{
  const char *v2; // r9
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( IsWindow(this[14]) )
  {
    if ( !RemovePropW(this[14], L"NonRudeHWND") )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x422,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v2);
    if ( !RemovePropW(this[14], L"UIA_WindowPatternEnabled") )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x423,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v3);
    if ( !DestroyWindow(this[14]) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x424,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v4);
    if ( !UnregisterClassW(L"CopilotKeyPressFocusFrame", &_ImageBase) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x425,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v5);
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)(this + 54),
                  (__int64 *)&v7)
             + 278) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v7);
  }
}
