/*
 * XREFs of ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180758730
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?IsPackagedBrowserReplacementActivated@Private@BrowserReplacementVariant@@YA_NXZ @ 0x18075865C (-IsPackagedBrowserReplacementActivated@Private@BrowserReplacementVariant@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AC1C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@.c)
 */

bool __fastcall IsPackagedBrowserReplacementFeaturePresent(__int64 a1, __int64 a2)
{
  BrowserReplacementVariant::Private *v2; // rcx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::GetImpl'::`2'::impl,
    a2,
    0LL);
  return BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated(v2);
}
