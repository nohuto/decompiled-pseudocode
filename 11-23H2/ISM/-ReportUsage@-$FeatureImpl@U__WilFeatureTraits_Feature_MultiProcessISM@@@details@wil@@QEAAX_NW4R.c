/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003589C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x18003EAA8 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800CDABC (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     ?OnConnected@InputProcessProxy@@MEAAJXZ @ 0x1801B3390 (-OnConnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x1801B3470 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801B4550 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x1801B48D0 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x1801B4AC4 (-StopProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x1801B4C84 (-UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801DA23C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034A0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@detail.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180035174 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  unsigned __int8 v7; // [rsp+38h] [rbp-20h]
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    a1 + 2,
    0x163AF04u,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (__int64)&v9,
    v6,
    3,
    v7);
}
