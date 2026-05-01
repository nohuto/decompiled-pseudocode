/*
 * XREFs of ?IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x1802716A4
 * Callers:
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180275E60 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CopilotHotkeyManager::IsWinCHotKeyPressed(CopilotHotkeyManager *this)
{
  unsigned __int8 KeyState; // di
  unsigned __int8 v2; // bl
  char v3; // al

  KeyState = GetKeyState(91);
  v2 = GetKeyState(92);
  v3 = GetKeyState(67);
  return ((KeyState | v2) & 0x80) != 0 && v3 < 0;
}
