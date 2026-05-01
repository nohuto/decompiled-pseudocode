/*
 * XREFs of ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@2@XZ @ 0x180062FA0 (-start_and_watch_errors@-$tip_test@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@tip@@QE.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@2@XZ @ 0x18011F83C (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA-AV-.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_DashboardExtensionCall@@@tip@@QEAA?AV?$test_watcher@U_tip_DashboardExtensionCall@@@2@XZ @ 0x180169630 (-start_and_watch_errors@-$tip_test@U_tip_DashboardExtensionCall@@@tip@@QEAA-AV-$test_watcher@U_t.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1801A1900 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?start@?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x1801CFF10 (-start@-$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A38B8 (-StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?start@?$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x18049794C (-start@-$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18059A7B4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18 (-GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUI.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SmartFillTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SmartFillTest@@@2@XZ @ 0x1805A7FF4 (-start_and_watch_errors@-$tip_test@U_tip_SmartFillTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SmartF.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SnapLayoutProviderTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SnapLayoutProviderTest@@@2@XZ @ 0x1805AD2FC (-start_and_watch_errors@-$tip_test@U_tip_SnapLayoutProviderTest@@@tip@@QEAA-AV-$test_watcher@U_t.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@2@XZ @ 0x1805BE86C (-start_and_watch_errors@-$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA-AV-$test_watcher.c)
 * Callees:
 *     <none>
 */

char __fastcall tip::details::test_common_data<0>::has_ever_started(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 120) || (*(_DWORD *)(a1 + 24) & 0x100) != 0 )
    return 1;
  return result;
}
