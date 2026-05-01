/*
 * XREFs of ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x180118F78
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180118190 (-Run@-$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@U.c)
 *     ??R?$__func@V_lambda_44650c9621fd3a33d583d03ae4e77f70_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x1805DD6E0 (--R-$__func@V_lambda_44650c9621fd3a33d583d03ae4e77f70_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 *     ?RefreshTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJXZ @ 0x1805DE070 (-RefreshTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118FA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1801198E8 (-InitUserConfig_B@Theming@@YAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        __int64 a2)
{
  __int64 v2; // rdx
  Theming *v3; // rcx
  Theming *v4; // rcx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XXTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XXTests>::GetImpl'::`2'::impl,
    a2);
  Theming::InitUserConfig(v3, v2);
  Theming::InitUserConfig_B(v4);
  return 0LL;
}
