/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@SA_NXZ @ 0x18005A030
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SilentInstalledApps>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
