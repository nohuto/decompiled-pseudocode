/*
 * XREFs of ??1_tip_SearchHideTest@@QEAA@XZ @ 0x1801E8B54
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     _StartExperiencePackageHelper::AllowPackageInstall_::_1_::dtor$0 @ 0x18023806F (_StartExperiencePackageHelper--AllowPackageInstall_--_1_--dtor$0.c)
 *     _WidgetPlatformPackageHelper::AllowPackageInstall_::_1_::dtor$0 @ 0x1802381B1 (_WidgetPlatformPackageHelper--AllowPackageInstall_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180242962 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_180242962.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1802429AE (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1802429AE.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$14 @ 0x180242A20 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_180242A20.c)
 * Callees:
 *     <none>
 */

void __fastcall _tip_SearchHideTest::~_tip_SearchHideTest(_tip_SearchHideTest *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 48);
}
