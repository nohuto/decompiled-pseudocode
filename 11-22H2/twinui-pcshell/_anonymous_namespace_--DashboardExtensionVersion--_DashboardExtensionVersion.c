/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800A8D64
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent_::_1_::dtor$2 @ 0x1802C066C (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsDashboardExte_ea_1802C066C.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionVersionPresent_::_1_::dtor$1 @ 0x18069725F (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsDashboardExte_ea_18069725F.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(__int64 a1, __int64 a2)
{
  std::wstring::_Tidy_deallocate(a1 + 24, a2);
  return std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
}
