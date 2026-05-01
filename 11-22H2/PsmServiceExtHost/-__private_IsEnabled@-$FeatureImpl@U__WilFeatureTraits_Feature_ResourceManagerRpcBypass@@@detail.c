/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAA_NXZ @ 0x18004D234
 * Callers:
 *     HamRpcSrvConnect @ 0x180041D20 (HamRpcSrvConnect.c)
 *     ?CrmpClientRequiresRpc@@YAKK@Z @ 0x180053568 (-CrmpClientRequiresRpc@@YAKK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004CDEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D05C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
