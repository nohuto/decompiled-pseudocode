/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_AUTest@@@wil@@SA_NXZ @ 0x1801195E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801196CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_AUTest>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
