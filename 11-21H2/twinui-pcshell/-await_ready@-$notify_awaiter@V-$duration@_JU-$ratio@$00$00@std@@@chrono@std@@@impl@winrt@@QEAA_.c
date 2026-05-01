/*
 * XREFs of ?await_ready@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x180168050
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1801BA2E0.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_ready(__int64 a1)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  return *(_QWORD *)(a1 + 16) <= 0LL;
}
