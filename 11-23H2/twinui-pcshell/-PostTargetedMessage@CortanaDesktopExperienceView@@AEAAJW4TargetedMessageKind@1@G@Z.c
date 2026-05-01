/*
 * XREFs of ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180486D2C
 * Callers:
 *     ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180480B70 (-AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x180482130 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180483F10 (-LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485BD0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180486120 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180487A60 (-ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x180487A90 (-ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180488460 (-WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PostTargetedMessage(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(
         *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(a1 + 120),
         (struct IUnknown *)a1,
         (void *)0x401,
         a2 | (unsigned __int64)(a3 << 16));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
