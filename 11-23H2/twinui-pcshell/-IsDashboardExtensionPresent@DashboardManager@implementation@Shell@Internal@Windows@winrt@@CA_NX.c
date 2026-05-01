/*
 * XREFs of ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910
 * Callers:
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x180239044 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x180244470 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_180244470.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 * Callees:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x180096FA8 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
char winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent(void)
{
  __int64 v0; // rdx
  char v1; // al
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  _DWORD *v4; // rax
  char v5; // bl
  _DWORD *v7; // [rsp+20h] [rbp-49h] BYREF
  _DWORD *v8; // [rsp+28h] [rbp-41h]
  _BYTE v9[32]; // [rsp+38h] [rbp-31h] BYREF
  char v10; // [rsp+58h] [rbp-11h]
  _DWORD *v11; // [rsp+60h] [rbp-9h] BYREF
  _DWORD *v12; // [rsp+68h] [rbp-1h]
  _BYTE v13[32]; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v14[32]; // [rsp+98h] [rbp+2Fh] BYREF

  anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(&v7);
  v1 = v10;
  if ( v10 )
  {
    std::wstring::wstring(v14, L"0.1");
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(&v11, v14);
    std::wstring::_Tidy_deallocate(v14, v2);
    if ( !v10 )
      std::_Throw_bad_optional_access();
    v3 = v11;
    v4 = v7;
    if ( v7 != v8 )
    {
      do
      {
        if ( v3 == v12 )
          break;
        if ( *v4 < *v3 )
          goto LABEL_13;
        if ( *v4 > *v3 )
          goto LABEL_7;
        ++v4;
        ++v3;
      }
      while ( v4 != v8 );
      if ( v4 != v8 )
        goto LABEL_7;
    }
    if ( v3 != v12 )
LABEL_13:
      v5 = 0;
    else
LABEL_7:
      v5 = 1;
    std::wstring::_Tidy_deallocate(v13, v8);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(&v11);
    v1 = v10;
  }
  else
  {
    v5 = 0;
  }
  if ( v1 )
  {
    std::wstring::_Tidy_deallocate(v9, v0);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(&v7);
  }
  return v5;
}
