/*
 * XREFs of ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800F2728
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F276C (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1804FB0B0 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1804FC694 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1804FD2BC (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1804FE1EC (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetScaleFactorForRect(const struct tagRECT *a1)
{
  HMONITOR v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 100;
  v1 = MonitorFromRect(a1, 0);
  if ( v1 )
    GetScaleFactorForMonitor(v1, &v3);
  return v3;
}
