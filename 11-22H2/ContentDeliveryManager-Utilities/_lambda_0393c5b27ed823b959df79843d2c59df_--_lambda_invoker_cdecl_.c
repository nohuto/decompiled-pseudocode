/*
 * XREFs of _lambda_0393c5b27ed823b959df79843d2c59df_::_lambda_invoker_cdecl_ @ 0x1800A81B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005CE4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAA_NXZ @ 0x18006287C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil.c)
 */

bool __fastcall lambda_0393c5b27ed823b959df79843d2c59df_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl) == 0;
}
