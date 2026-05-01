/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806C107C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180114A28 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180098944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098A0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
