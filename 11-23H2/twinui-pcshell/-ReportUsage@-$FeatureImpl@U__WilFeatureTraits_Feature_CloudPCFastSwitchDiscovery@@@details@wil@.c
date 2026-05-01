/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1807074F4
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18027F1E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@deta.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAA_NXZ @ 0x180707C6C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDis_ea_180707C6C.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180706378 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscove.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  volatile unsigned __int32 v6; // r8d
  unsigned int v7; // esi
  int v8; // [rsp+30h] [rbp-28h]
  signed __int32 v9[6]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v8 = v4;
  v10 = 0;
  v11 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x2695C21u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}
