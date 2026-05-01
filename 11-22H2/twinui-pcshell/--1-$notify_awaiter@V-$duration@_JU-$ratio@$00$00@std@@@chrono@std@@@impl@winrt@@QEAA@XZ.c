/*
 * XREFs of ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1_::_1_::dtor$1 @ 0x18021A45A (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_18021A45A.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x18021D563 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_18021D563.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$32 @ 0x18023A354 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--dtor$32.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180246468 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_180246468.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180247380 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1802475E8 (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1_--.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$4 @ 0x180259481 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_180259481.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$8 @ 0x180259518 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_180259518.c)
 * Callees:
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18018F8B8 (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 */

void __fastcall winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(
        __int64 a1)
{
  volatile __int64 *v2; // rbx

  _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ((struct _TP_TIMER **)(a1 + 8));
  v2 = *(volatile __int64 **)a1;
  if ( v2 )
  {
    while ( _InterlockedExchange64(v2, 0LL) == 1 )
      _Thrd_yield();
  }
}
