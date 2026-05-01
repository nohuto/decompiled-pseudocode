/*
 * XREFs of ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x18006D810
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x18006D83C (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewRemoved(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(this, a2, 0LL, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB3,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
