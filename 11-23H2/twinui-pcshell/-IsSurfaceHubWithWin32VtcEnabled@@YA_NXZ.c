/*
 * XREFs of ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18
 * Callers:
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F6730 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1805B897C (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805BB474 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1805BB6D0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805C1890 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C2330 (-ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1805C3CC8 (-IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1805C8850 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D6B90 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18066F550 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180796580 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_Win32Vtc_Converged_SC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180564FDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_Win32Vtc_Converged_SC@@@details@wil@@.c)
 */

char IsSurfaceHubWithWin32VtcEnabled(void)
{
  __int64 v0; // rdx
  char v1; // bl

  v1 = 0;
  if ( IsPPIEdition() )
  {
    v1 = 1;
    LOBYTE(v0) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_Win32Vtc_Converged_SC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Hub_Win32Vtc_Converged_SC>::GetImpl'::`2'::impl,
      v0);
  }
  return v1;
}
