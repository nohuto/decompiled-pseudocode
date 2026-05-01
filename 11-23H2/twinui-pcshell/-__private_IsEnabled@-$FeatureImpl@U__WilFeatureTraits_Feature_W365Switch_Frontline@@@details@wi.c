/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAA_NXZ @ 0x180115AF0
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18070FE84 (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180115B2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B8ABC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(a1, v3);
  return v2;
}
