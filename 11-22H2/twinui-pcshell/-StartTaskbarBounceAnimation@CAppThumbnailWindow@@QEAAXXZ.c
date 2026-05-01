/*
 * XREFs of ?StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ @ 0x18055CA00
 * Callers:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CAppThumbnailWindow::StartTaskbarBounceAnimation(
        CAppThumbnailWindow *this,
        struct IApplicationView *a2)
{
  __int64 (__fastcall ****v2)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 (__fastcall ****i)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 WindowForView; // rax
  const char *v5; // r9
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))*((_QWORD *)this + 69);
  for ( i = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))*((_QWORD *)this + 68); i != v2; ++i )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(*i, a2);
    if ( WindowForView )
    {
      if ( !(unsigned int)GetWindowMinimizeRect(WindowForView, v6) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x638,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          v5);
    }
  }
}
