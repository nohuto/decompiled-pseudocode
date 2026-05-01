/*
 * XREFs of ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30
 * Callers:
 *     ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x180570260 (-IsDraggable@CPPIAllUpViewController@@UEAA-AW4DragEffects@@PEAUISwitchItem@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805BB658 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805BC058 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1805BC1E8 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x1805BC7D0 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805BCCE0 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1805BF140 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C2330 (-ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C29C8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0D0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1805D6EA4 (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18056FD5C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FD90 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18056FECC (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1807462CC (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2)
{
  char v3; // bl
  struct IApplicationView *v4; // rdx
  TabletModePositionerHelpers *WindowForView; // rax
  HWND v6; // rdx
  struct IApplicationView *v7; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( TabletModePositionerHelpers::IsControlledView((TabletModePositionerHelpers *)this, a2) )
  {
    WindowForView = (TabletModePositionerHelpers *)ApplicationViewHelpers::GetWindowForView(this, v4);
    if ( (TabletModePositionerHelpers::IsOperableWindow(WindowForView, v6)
       || (int)GetViewLayoutBehaviorFlags((struct IApplicationView *)this, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v9) >= 0
       && (v9 & 2) != 0)
      && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)this, v7)
      && ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), int *))(*this)[27])(
           this,
           &v9) >= 0 )
    {
      return v9 != 0;
    }
  }
  return v3;
}
