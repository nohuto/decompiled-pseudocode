/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TestNM@@@wil@@SA_NXZ @ 0x18014F170
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TestNM>::IsEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2,
    a3);
  return 1;
}
