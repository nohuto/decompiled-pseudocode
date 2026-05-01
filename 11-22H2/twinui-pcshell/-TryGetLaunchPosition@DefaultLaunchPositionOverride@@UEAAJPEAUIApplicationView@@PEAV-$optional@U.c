/*
 * XREFs of ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x18004CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004CB14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018BFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 */

__int64 __fastcall DefaultLaunchPositionOverride::TryGetLaunchPosition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    a2);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSV>::GetImpl'::`2'::impl,
    v2);
  return 2147943568LL;
}
