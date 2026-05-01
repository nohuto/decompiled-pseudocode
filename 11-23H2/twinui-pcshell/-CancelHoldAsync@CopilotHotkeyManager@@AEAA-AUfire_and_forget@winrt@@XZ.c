/*
 * XREFs of ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180261880
 * Callers:
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180275E60 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_InitCoro$2 @ 0x18026155C (CopilotHotkeyManager--CancelHoldAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::CancelHoldAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x52uLL);
  v6 = 0;
  CopilotHotkeyManager::CancelHoldAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
