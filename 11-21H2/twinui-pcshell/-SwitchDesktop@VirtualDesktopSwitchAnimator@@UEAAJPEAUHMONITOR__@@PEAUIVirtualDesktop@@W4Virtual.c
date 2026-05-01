/*
 * XREFs of ?SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x18055A590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUHMONITOR__@@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z01W4VirtualDesktopSwitchDirection@@01@Z @ 0x18055A1A8 (--$AnimateOperation@PEAUHMONITOR__@@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8I.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::SwitchDesktop(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = VirtualDesktopSwitchAnimator::AnimateOperation<HMONITOR__ *,IVirtualDesktop *>(a1 - 8, a2, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
