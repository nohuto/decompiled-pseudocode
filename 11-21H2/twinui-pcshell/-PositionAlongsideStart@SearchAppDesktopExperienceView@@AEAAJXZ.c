/*
 * XREFs of ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039CF90
 * Callers:
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039CF10 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x18039E530 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803993C0 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x18039A6BC (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::PositionAlongsideStart(SearchAppDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1348LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveLauncherMonitor);
    return (unsigned int)ImmersiveLauncherMonitor;
  }
  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1349LL;
    goto LABEL_3;
  }
  return 0LL;
}
