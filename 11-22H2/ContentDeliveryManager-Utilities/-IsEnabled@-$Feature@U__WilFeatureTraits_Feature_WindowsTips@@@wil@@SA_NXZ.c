/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ @ 0x18005A090
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D374 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAAX_NW4Repor.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsTips>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
