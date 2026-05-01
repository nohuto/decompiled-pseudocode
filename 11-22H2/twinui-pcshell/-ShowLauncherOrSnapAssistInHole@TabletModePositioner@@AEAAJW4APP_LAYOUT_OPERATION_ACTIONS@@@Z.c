/*
 * XREFs of ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1805BEF88
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::Run @ 0x1805BE350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--Run.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x1805C2DA0 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1805BEC08 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1805BEC58 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1805BECA8 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?ShowSnapAssist@TabletModePositioner@@AEAAJXZ @ 0x1805BF00C (-ShowSnapAssist@TabletModePositioner@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModePositioner::ShowLauncherOrSnapAssistInHole(IUnknown **a1, char a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( TabletModePositioner::ShouldShowLauncher((TabletModePositioner *)a1) )
  {
    v4 = TabletModePositioner::ShowLauncher(a1, (a2 & 0x40) != 0);
    if ( v4 < 0 )
    {
      v5 = 3113LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  else if ( TabletModePositioner::ShouldShowSnapAssist((TabletModePositioner *)a1, (a2 & 2) != 0) )
  {
    v4 = TabletModePositioner::ShowSnapAssist((TabletModePositioner *)a1);
    if ( v4 < 0 )
    {
      v5 = 3117LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
