/*
 * XREFs of ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D9B8
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1802000A0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180200F70 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x18046E12C (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528C18 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
