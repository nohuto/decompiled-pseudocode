/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MACFlyout@@@wil@@SA_NXZ @ 0x1800CCC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::IsEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    a2,
    a3);
  return 1;
}
