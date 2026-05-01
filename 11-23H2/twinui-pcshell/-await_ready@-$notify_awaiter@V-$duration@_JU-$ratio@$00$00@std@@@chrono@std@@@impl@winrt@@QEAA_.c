/*
 * XREFs of ?await_ready@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1802E8734
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_ready(__int64 a1)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  return *(_QWORD *)(a1 + 16) <= 0LL;
}
