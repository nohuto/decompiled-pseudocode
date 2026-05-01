/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x1801C4994
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::DashboardExtensionVersion::operator__(_DWORD **a1, __int64 a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rax
  _DWORD *i; // rdx

  v2 = *(_DWORD **)(a2 + 8);
  v3 = *(_DWORD **)a2;
  for ( i = *a1; i != a1[1]; ++i )
  {
    if ( v3 == v2 )
      return 1;
    if ( *i < *v3 )
      return 0;
    if ( *i > *v3 )
      return 1;
    ++v3;
  }
  return v3 == v2;
}
