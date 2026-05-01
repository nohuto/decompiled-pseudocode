/*
 * XREFs of ?await_ready@?$notify_awaiter@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801CEDB4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BD250 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1801CDB70 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1000>> const &>::await_ready(
        __int64 a1)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  return *(_QWORD *)(a1 + 16) <= 0LL;
}
