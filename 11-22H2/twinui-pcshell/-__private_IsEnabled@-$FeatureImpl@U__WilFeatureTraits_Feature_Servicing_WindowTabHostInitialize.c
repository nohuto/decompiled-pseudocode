/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@details@wil@@QEAA_NXZ @ 0x18021AB58
 * Callers:
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x18006C120 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18021A544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021A97C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
