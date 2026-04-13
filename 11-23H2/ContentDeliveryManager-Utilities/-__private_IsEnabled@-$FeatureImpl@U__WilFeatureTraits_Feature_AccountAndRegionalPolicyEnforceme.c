/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180043510
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800342E8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Integrated_ea_1800342E8.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033384 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E7B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@det.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
