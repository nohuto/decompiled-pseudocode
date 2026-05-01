/*
 * XREFs of ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308
 * Callers:
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18011E834 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1801C4670 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--_optional__anonymous_namespace_.c)
 *     ??1?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x1801C476C (--1-$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$allocat.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x1801C4994 (_anonymous_namespace_--DashboardExtensionVersion--operator__.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801D0148 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 */

// Hidden C++ exception states: #wind=4
char winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent(void)
{
  char v0; // bl
  __int64 v1; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-50h] BYREF
  void *v5[4]; // [rsp+58h] [rbp-30h] BYREF

  anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v4);
  v0 = 0;
  if ( v4[24] )
  {
    std::wstring::wstring(v5, L"0.1");
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(v3, v5);
    std::wstring::~wstring(v5);
    v1 = std::optional__anonymous_namespace_::DashboardExtensionVersion_::value(v4);
    v0 = anonymous_namespace_::DashboardExtensionVersion::operator__(v1, v3);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>(v3);
  }
  std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_(v4);
  return v0;
}
