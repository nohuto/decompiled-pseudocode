/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ @ 0x18017A630
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3074 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 1;
}
