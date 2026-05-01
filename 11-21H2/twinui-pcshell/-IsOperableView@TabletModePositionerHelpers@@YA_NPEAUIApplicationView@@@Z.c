/*
 * XREFs of ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x1804B5A10 (-IsDraggable@CPPIAllUpViewController@@UEAA-AW4DragEffects@@PEAUISwitchItem@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502E7C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180503A48 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180503BD4 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180504234 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180504750 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180509E50 (-ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18050A4D8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x18050B910 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x180516A00 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804B358C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B35C0 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8 (-IsOperableWindow@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFB48 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2)
{
  char v3; // bl
  struct IApplicationView *v4; // rdx
  HWND WindowForView; // rax
  struct IApplicationView *v6; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( TabletModePositionerHelpers::IsControlledView((TabletModePositionerHelpers *)this, a2) )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, v4);
    if ( (IsOperableWindow(WindowForView)
       || (int)GetViewLayoutBehaviorFlags((struct IApplicationView *)this, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v8) >= 0
       && (v8 & 2) != 0)
      && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)this, v6)
      && ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), int *))(*this)[27])(
           this,
           &v8) >= 0 )
    {
      return v8 != 0;
    }
  }
  return v3;
}
