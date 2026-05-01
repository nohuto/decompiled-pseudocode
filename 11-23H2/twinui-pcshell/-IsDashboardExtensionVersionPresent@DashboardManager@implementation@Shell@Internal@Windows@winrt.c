/*
 * XREFs of ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180697178
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x180096FA8 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionVersionPresent(
        void **a1)
{
  char v2; // al
  _DWORD *v3; // rcx
  _DWORD *v4; // rax
  char v5; // bl
  _DWORD *v7; // [rsp+20h] [rbp-29h] BYREF
  _DWORD *v8; // [rsp+28h] [rbp-21h]
  _BYTE v9[32]; // [rsp+38h] [rbp-11h] BYREF
  char v10; // [rsp+58h] [rbp+Fh]
  _DWORD *v11; // [rsp+60h] [rbp+17h] BYREF
  _DWORD *v12; // [rsp+68h] [rbp+1Fh]
  _BYTE v13[32]; // [rsp+78h] [rbp+2Fh] BYREF

  anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)&v7);
  v2 = v10;
  if ( v10 )
  {
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64 *)&v11, a1);
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
          goto LABEL_11;
        if ( *v4 > *v3 )
          goto LABEL_12;
        ++v4;
        ++v3;
      }
      while ( v4 != v8 );
      if ( v4 != v8 )
        goto LABEL_12;
    }
    if ( v3 != v12 )
LABEL_11:
      v5 = 0;
    else
LABEL_12:
      v5 = 1;
    std::wstring::_Tidy_deallocate((__int64)v13);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v11);
    v2 = v10;
  }
  else
  {
    v5 = 0;
  }
  if ( v2 )
  {
    std::wstring::_Tidy_deallocate((__int64)v9);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v7);
  }
  return v5;
}
