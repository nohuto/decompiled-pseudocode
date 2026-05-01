/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@QEAA_NXZ @ 0x18016F8F8
 * Callers:
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x18016F88C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18016F934 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016FAF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@QEAAX_N.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveUWLMForDesktop>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveUWLMForDesktop>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveUWLMForDesktop>::ReportUsage(a1, v3);
  return v2;
}
