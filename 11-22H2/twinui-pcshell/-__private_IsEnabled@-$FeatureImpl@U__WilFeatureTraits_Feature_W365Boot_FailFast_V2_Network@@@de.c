/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network@@@details@wil@@QEAA_NXZ @ 0x18072E85C
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18072D694 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Net.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18072E558 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Network>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
