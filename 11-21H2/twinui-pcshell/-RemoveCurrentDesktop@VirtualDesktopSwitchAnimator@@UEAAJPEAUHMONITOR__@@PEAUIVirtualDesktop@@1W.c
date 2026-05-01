/*
 * XREFs of ?RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@1W4VirtualDesktopSwitchDirection@@@Z @ 0x18055A540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@ZPEAUHMONITOR__@@0W4VirtualDesktopSwitchDirection@@00@Z @ 0x18055A2D4 (--$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDes.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::RemoveCurrentDesktop(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *,IVirtualDesktop *>(a1 - 8, a2, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
