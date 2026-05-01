/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DSCTrial@@@wil@@SA_NXZ @ 0x1801564A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DSCTrial@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801564C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DSCTrial@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_DSCTrial>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DSCTrial>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DSCTrial>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
