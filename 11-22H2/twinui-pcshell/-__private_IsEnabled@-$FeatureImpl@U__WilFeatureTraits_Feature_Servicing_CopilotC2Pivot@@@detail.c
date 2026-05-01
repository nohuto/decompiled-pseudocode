/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180274CD4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID52127539@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180262FDC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID52127539@@@details@wi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180262610 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180272968 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotC2Pivot>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
