/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ @ 0x18020C248
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18020A554 (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1805142E0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x180517144 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180209898 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18020B564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
