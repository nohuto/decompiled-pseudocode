/*
 * XREFs of _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC
 * Callers:
 *     _CActionCenterExperienceManager::DismissRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801927E1 (_CActionCenterExperienceManager--DismissRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180192800 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CActionCenterExperienceManager::ShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801935AD (_CActionCenterExperienceManager--ShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801935D0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::DismissRequested$_InitCoro$2_::_1_::dtor$1 @ 0x180194BE1 (_CControlCenterExperienceManager--DismissRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::ShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801958BD (_CControlCenterExperienceManager--ShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _MiniSearchExperienceManager::LauncherDismissRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801A76BD (_MiniSearchExperienceManager--LauncherDismissRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     MiniSearchExperienceManager::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801A76E0 (MiniSearchExperienceManager--LauncherDismissRequested$_ResumeCoro$1.c)
 *     _MiniSearchExperienceManager::LauncherShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801A7AFD (_MiniSearchExperienceManager--LauncherShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1 @ 0x1801A7B20 (MiniSearchExperienceManager--LauncherShowRequested$_ResumeCoro$1.c)
 *     _XamlLauncher::LauncherShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801AB3A9 (_XamlLauncher--LauncherShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     _XamlLauncher::SearchShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801AC421 (_XamlLauncher--SearchShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1801AC440 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     __lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator()_::_1_::dtor$1 @ 0x1801B1B71 (__lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2--operator()_--_1_--dtor$1.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     _CMultitaskingViewManager::DismissRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801B1F3D (_CMultitaskingViewManager--DismissRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1801B1F60 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2_::_1_::dtor$1 @ 0x1801B2489 (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2_--_1_--dtor$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B24B0 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::ShowRequested$_InitCoro$2_::_1_::dtor$1 @ 0x1801B2A01 (_CMultitaskingViewManager--ShowRequested$_InitCoro$2_--_1_--dtor$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1801B2A20 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(
        __int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v1; // rcx

  v1 = (winrt::Windows::Foundation::IUnknown *)(a1 + 8);
  if ( *(_QWORD *)v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
}
