/*
 * XREFs of ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180041254
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_ToggleDashboardExtension@@@tip@@QEAA?AV?$test_watcher@U_tip_ToggleDashboardExtension@@@2@XZ @ 0x180033ED8 (-start_and_watch_errors@-$tip_test@U_tip_ToggleDashboardExtension@@@tip@@QEAA-AV-$test_watcher@U.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_WidgetsAppInstallTIP@@@tip@@QEAA?AV?$test_watcher@U_tip_WidgetsAppInstallTIP@@@2@XZ @ 0x1801CFFBC (-start_and_watch_errors@-$tip_test@U_tip_WidgetsAppInstallTIP@@@tip@@QEAA-AV-$test_watcher@U_tip.c)
 *     ?open@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA_NU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180452868 (-open@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA_NU_GUID@@W4TestRetrie.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1804756F0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AV?$test_watcher@U_tip_AppThumbnailTest@@@2@XZ @ 0x1804979F8 (-start_and_watch_errors@-$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA-AV-$test_watcher@U_tip_App.c)
 *     ?open@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1805BB8E0 (-open@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tip::details::test_common_data<1>::has_ever_started(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 120) || (*(_DWORD *)(a1 + 24) & 0x100) != 0 )
    return 1;
  return result;
}
