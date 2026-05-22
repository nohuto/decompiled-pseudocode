/*
 * XREFs of ?WndProc@SessionMonitor@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18005A870
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionStatusChanged@SessionMonitor@@AEAAJII@Z @ 0x18005A7BC (-OnSessionStatusChanged@SessionMonitor@@AEAAJII@Z.c)
 */

LRESULT __fastcall SessionMonitor::WndProc(SessionMonitor *a1, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 == 2 )
  {
    PostQuitMessage(0);
  }
  else
  {
    if ( a2 != 689 )
      return DefWindowProcW((HWND)a1, a2, a3, a4);
    if ( SessionMonitor::_instance )
      SessionMonitor::OnSessionStatusChanged(a1, a3, a4);
  }
  return 0LL;
}
