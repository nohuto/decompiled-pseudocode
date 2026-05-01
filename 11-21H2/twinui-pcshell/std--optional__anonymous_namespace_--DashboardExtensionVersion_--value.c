/*
 * XREFs of std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801D0148
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional__anonymous_namespace_::DashboardExtensionVersion_::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 24) )
    std::_Throw_bad_optional_access();
  return a1;
}
