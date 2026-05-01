/*
 * XREFs of ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1805505C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180556400 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::ContinueSwipe(
        VirtualDesktopGestureHandler *this,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdx
  VirtualDesktopGestureContext *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 5) )
  {
    v4 = 1572LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v6 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
  if ( !v6 )
  {
    v4 = 1573LL;
    goto LABEL_3;
  }
  VirtualDesktopGestureContext::UpdateOffset(v6, a2, a4);
  return 0LL;
}
