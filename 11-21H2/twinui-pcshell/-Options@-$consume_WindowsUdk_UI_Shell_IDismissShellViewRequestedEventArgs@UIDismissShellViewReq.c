/*
 * XREFs of ?Options@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F4D4
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180192800 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801AAE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1801ABD40 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1801C6200 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8 (--R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
