/*
 * XREFs of ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x1801CF600 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DC010 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801DF010 (CControlCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0920 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801E15D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E2980 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801FF760 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x180200960 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18020D0F0 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18021A7B0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x18021B4D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_18021B4D0.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18021BA90 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x180240B20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x180244470 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_180244470.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x180258100 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
