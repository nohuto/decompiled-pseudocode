/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003545C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800B4C54 (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x1800DEC64 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?OnConnected@InputProcessProxy@@MEAAJXZ @ 0x180195460 (-OnConnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x180195540 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x180196590 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801968CC (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x180196AFC (-StopProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x180196CB4 (-UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801BBEB4 (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002EBC0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@detail.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004C4A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x163AF04u,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    v6,
    3);
}
