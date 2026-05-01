/*
 * XREFs of ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180273F34
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806FDA20 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_InitCoro$2 @ 0x180273C50 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(__int64 a1, _BYTE *a2, int a3)
{
  void *v5; // rax
  int v7; // [rsp+B8h] [rbp+10h] BYREF
  int v8; // [rsp+C0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x62uLL);
  v7 = 0;
  CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
