/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1406CEF60
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     PipOpenServiceEnumKeys @ 0x14068E904 (PipOpenServiceEnumKeys.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC3C0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE2A4 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140787F44 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14079B290 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B574 (_CmGetDeviceContainerIdFromBase.c)
 *     PipHardwareConfigOpenKey @ 0x140813018 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14082BC08 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082BD40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14082BF10 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14082C03C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14082C384 (_CmGetMatchingCommonClassListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     DrvDbLoadDatabaseNode @ 0x1408775F0 (DrvDbLoadDatabaseNode.c)
 *     PiDevCfgInitMigrationContext @ 0x14087C528 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C9C8 (PiDevCfgConfigureDeviceLocation.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14087D7F0 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140882F04 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtEnableLastKnownGood @ 0x140884340 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x140885380 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140951EEC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140958688 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14095ED88 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140965EE8 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140969340 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140969A4C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A611A8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A618A0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61F64 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A6390C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A64334 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A647EC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6603C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A66990 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A66D74 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140A6779C (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A69BA4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B435C4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B43650 (PipProcessPendingOsExtensionResources.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B64C8C (PnpOpenCCSPnpRegKey.c)
 *     PipHardwareConfigInit @ 0x140B6D528 (PipHardwareConfigInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B95B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B95D90 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406CEFEC (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 == 12 || a2 == 13 )
          goto LABEL_12;
        v6 = a2 - 14;
        if ( a2 != 14 )
          goto LABEL_10;
      }
    }
    else if ( a2 != 10 )
    {
      if ( a2 == 4 )
        goto LABEL_12;
      if ( a2 != 5 )
      {
        if ( a2 == 6 )
          goto LABEL_12;
        if ( a2 == 7 )
          goto LABEL_12;
        v6 = a2 - 8;
        if ( a2 == 8 )
          goto LABEL_12;
LABEL_10:
        if ( v6 != 1 )
          goto LABEL_12;
      }
    }
    v7 = *(_QWORD *)(a1 + 56);
    v4 = v7 - 16;
    if ( v7 != a1 + 56 )
    {
LABEL_13:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_12:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_13;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
