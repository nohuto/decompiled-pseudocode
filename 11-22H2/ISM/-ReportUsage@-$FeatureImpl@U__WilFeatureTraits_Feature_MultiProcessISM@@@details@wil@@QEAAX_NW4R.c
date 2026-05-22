/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003DD8C
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003BC78 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x180040108 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800DCDEC (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x1801C1360 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801E7A7C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003DE10 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003E5C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@detail.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           23310084LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           3);
}
