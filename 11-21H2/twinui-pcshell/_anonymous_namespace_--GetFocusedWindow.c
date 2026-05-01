/*
 * XREFs of _anonymous_namespace_::GetFocusedWindow @ 0x18045E50C
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

HWND anonymous_namespace_::GetFocusedWindow()
{
  HWND result; // rax
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  memset_0(&pgui, 0, sizeof(pgui));
  pgui.cbSize = 72;
  GetGUIThreadInfo(0, &pgui);
  result = pgui.hwndFocus;
  if ( !pgui.hwndFocus )
    return GetForegroundWindow();
  return result;
}
