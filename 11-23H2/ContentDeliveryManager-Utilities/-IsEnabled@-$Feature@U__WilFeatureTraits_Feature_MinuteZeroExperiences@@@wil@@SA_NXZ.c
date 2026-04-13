/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@SA_NXZ @ 0x180059F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D078 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@wil@@QEAA.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinuteZeroExperiences>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
