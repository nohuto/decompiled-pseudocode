/*
 * XREFs of ?ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180550620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180556400 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::ContinueTouchSwipe(
        VirtualDesktopGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  VirtualDesktopGestureContext *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    VirtualDesktopGestureContext::UpdateOffset(v2, (int)*((float *)a2 + 2), (int)*((float *)a2 + 4));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x665,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
