/*
 * XREFs of ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180274584
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x180273118 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180275E60 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2 @ 0x180273FA8 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal(__int64 a1, _BYTE *a2, char a3)
{
  char *v5; // rax
  int v7; // [rsp+178h] [rbp+10h] BYREF
  char v8; // [rsp+180h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x122uLL);
  v7 = 0;
  CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
