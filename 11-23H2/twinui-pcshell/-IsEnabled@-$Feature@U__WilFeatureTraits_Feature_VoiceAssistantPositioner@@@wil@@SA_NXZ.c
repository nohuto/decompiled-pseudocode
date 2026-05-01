/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ @ 0x18018BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018BFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
