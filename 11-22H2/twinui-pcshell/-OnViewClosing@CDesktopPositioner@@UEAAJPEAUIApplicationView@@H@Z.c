/*
 * XREFs of ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x180074600
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1802A6570 (-OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z @ 0x1802A6590 (-OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180074DE8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopPositioner::OnViewClosing(CDesktopPositioner *this, struct IApplicationView *a2, int a3)
{
  HWND WindowForView; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, a2);
    if ( WindowForView )
    {
      if ( (int)DwmpBeginTransitionRequest(50LL) >= 0 )
      {
        v6 = DwmpTransitionWindow(WindowForView, 536870997LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1C0,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v6,
            v11);
        v7 = DwmpEndTransitionRequest(50LL);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1C1,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v7,
            v11);
      }
    }
  }
  v8 = CDesktopPositioner::_PersistPosition((CDesktopPositioner *)((char *)this - 120), a2);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C6,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8,
    v11);
  return v9;
}
