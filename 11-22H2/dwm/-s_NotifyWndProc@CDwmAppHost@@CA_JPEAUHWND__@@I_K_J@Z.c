/*
 * XREFs of ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400027B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400027D4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

__int64 __fastcall CDwmAppHost::s_NotifyWndProc(CDwmAppHost *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  return CDwmAppHost::NotifyWndProc(a1, (HWND)a1, a2, a3, a4);
}
