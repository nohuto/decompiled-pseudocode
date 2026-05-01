/*
 * XREFs of ?s_SearchAltTabProxyWndProc@SearchAppDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18047E260
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x18047C4FC (-SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 */

LRESULT __fastcall SearchAppDesktopExperienceView::s_SearchAltTabProxyWndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LONG_PTR *a4)
{
  int v8; // eax
  HWND WindowLongPtrW; // rax
  HWND LastActivePopup; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *a4);
    v8 = SearchAppDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(hWnd);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x922,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
      PostMessageW(hWnd, 0x401u, 0LL, 0LL);
  }
  else if ( a2 == 1025 && GetForegroundWindow() == hWnd )
  {
    WindowLongPtrW = (HWND)GetWindowLongPtrW(hWnd, 0);
    LastActivePopup = GetLastActivePopup(WindowLongPtrW);
    SetForegroundWindow(LastActivePopup);
  }
  return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
