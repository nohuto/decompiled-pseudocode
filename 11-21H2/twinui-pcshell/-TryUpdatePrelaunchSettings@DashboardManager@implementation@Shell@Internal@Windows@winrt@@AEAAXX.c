/*
 * XREFs of ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180030878
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801C91E0 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1 @ 0x1801CAA10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x1801CAF20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x1801CC440 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaun_ea_1801CC440.c)
 * Callees:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18003091C (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  int v1; // ebx
  _QWORD *v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3[0] = off_1806456B0;
  v3[1] = this;
  v4 = v3;
  v1 = winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(this, v3, 30000LL);
  if ( v4 )
  {
    v2 = v3;
    LOBYTE(v2) = v4 != v3;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 32LL))(v4, v2);
  }
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x519,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v1,
      v3[0]);
}
