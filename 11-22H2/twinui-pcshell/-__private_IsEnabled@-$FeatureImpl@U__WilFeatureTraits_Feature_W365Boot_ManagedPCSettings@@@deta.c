/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180279F24
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802793F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplay.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1807116A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180717DD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(a1, v3, 0LL);
  return v2;
}
