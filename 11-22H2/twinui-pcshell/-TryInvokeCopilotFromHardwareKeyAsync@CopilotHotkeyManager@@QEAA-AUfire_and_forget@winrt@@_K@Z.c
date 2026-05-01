/*
 * XREFs of ?TryInvokeCopilotFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@_K@Z @ 0x180273BE8
 * Callers:
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806FDA20 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync$_InitCoro$2 @ 0x180273A1C (CopilotHotkeyManager--TryInvokeCopilotFromHardwareKeyAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v6 = operator new(0x2AuLL);
  v8 = 0;
  CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  return a2;
}
