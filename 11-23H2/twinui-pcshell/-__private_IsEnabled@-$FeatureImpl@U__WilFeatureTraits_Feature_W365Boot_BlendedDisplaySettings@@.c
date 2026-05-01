/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x180279EE8
 * Callers:
 *     ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x18027FF10 (-GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Wind.c)
 *     ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180280468 (-SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windo.c)
 *     ?IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x1807141B0 (-IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x18072B4F0 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x18072BD04 (-IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4Loc.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x18072C074 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18027930C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplayS.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802794F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
