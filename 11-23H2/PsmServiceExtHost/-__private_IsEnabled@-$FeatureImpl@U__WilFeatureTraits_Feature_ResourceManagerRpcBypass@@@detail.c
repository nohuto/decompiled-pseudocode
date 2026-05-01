/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAA_NXZ @ 0x18004D274
 * Callers:
 *     HamRpcSrvConnect @ 0x180041CA0 (HamRpcSrvConnect.c)
 *     ?CrmpClientRequiresRpc@@YAKK@Z @ 0x18005332C (-CrmpClientRequiresRpc@@YAKK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004CD20 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D034 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // r9
  signed __int32 v7; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = v7 & 1;
  LOBYTE(v3) = v7 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::ReportUsage(a1, v3, v4, v5);
  return v2;
}
