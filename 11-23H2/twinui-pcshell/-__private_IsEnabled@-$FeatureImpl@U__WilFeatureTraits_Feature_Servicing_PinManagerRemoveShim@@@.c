/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@details@wil@@QEAA_NXZ @ 0x1802530EC
 * Callers:
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802505F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180251360 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PinManagerRemoveShim>::ReportUsage(a1, v4 & 1);
  return v2;
}
