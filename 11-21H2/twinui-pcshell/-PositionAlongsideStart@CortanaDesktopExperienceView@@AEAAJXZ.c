/*
 * XREFs of ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AB190
 * Callers:
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803AB110 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1803ACD50 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803A6744 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x1803A7CEC (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PositionAlongsideStart(CortanaDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1947LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveLauncherMonitor);
    return (unsigned int)ImmersiveLauncherMonitor;
  }
  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1948LL;
    goto LABEL_3;
  }
  return 0LL;
}
