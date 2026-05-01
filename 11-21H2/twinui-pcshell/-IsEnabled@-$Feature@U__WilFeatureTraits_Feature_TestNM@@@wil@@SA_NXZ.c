/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TestNM@@@wil@@SA_NXZ @ 0x1801495F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TestNM>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
