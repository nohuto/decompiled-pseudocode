/*
 * XREFs of ?GetPixelDensity@CDWMDisplay@@QEBAMXZ @ 0x18003E1CC
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UniformDpiProgrammingModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UniformDpiProgrammingModel@@@details@wil@.c)
 */

float __fastcall CDWMDisplay::GetPixelDensity(CDWMDisplay *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UniformDpiProgrammingModel>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UniformDpiProgrammingModel>::GetImpl'::`2'::impl,
    0LL);
  return FLOAT_1_0;
}
