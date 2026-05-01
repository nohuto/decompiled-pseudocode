/*
 * XREFs of ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1801B6FDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a89b23c60a349d7b14f7d2b756a2fd89___::Run @ 0x1801B6FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a89b23c60a349d7b14f7d2b756a2fd89___--Run.c)
 *     wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1806E1D60 (wistd--__function--__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(un_ea_1806E1D60.c)
 *     ?RefreshTheme@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHXZ @ 0x1806E35A0 (-RefreshTheme@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThe.c)
 * Callees:
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1800AFF98 (-InitUserConfig_B@Theming@@YAXXZ.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800B2628 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801154A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4Reporting.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  Theming *v5; // rcx
  __int64 v6; // rdx
  Theming *v7; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XXTests>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XXTests>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  Theming::InitUserConfig(v5, v4);
  Theming::InitUserConfig_B(v7, v6);
  return 0LL;
}
