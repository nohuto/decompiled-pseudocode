/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@wil@@SA_NXZ @ 0x18014E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E3D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
