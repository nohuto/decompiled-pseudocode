/*
 * XREFs of ?VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x180490170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18048FFDC (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopMoved(
        RTL_SRWLOCK *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = VirtualDesktop::UpdateDesktopIndex(this - 2);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14C,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
