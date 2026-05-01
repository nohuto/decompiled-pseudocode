/*
 * XREFs of ?PostSearchVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x1802D535C
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800257B0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostSearchVisibility(unsigned __int8 a1, LPARAM a2)
{
  HWND WindowW; // rax
  WPARAM v4; // rdi

  WindowW = (HWND)qword_1807B3C10;
  v4 = a1;
  if ( !qword_1807B3C10 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_1807B3C10 = (__int64)WindowW;
  }
  PostMessageW(WindowW, 0x5D1u, v4, a2);
}
