/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     PipOpenServiceEnumKeys @ 0x14068E904 (PipOpenServiceEnumKeys.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC340 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE224 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140787C24 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14079AF70 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     PipHardwareConfigOpenKey @ 0x140810D68 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14082A3B8 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082A4F0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14082A6C0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14082A7EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14082AB34 (_CmGetMatchingCommonClassListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     DrvDbLoadDatabaseNode @ 0x140877360 (DrvDbLoadDatabaseNode.c)
 *     PiDevCfgInitMigrationContext @ 0x14087C298 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C738 (PiDevCfgConfigureDeviceLocation.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14087D560 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140882C74 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtEnableLastKnownGood @ 0x1408840B0 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x1408850F0 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14095203C (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1409587D8 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14095EED8 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140966038 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140969B9C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A613E8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A61AE0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A621A4 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A63B4C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A64574 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A64A2C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6627C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A66BD0 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A66FB4 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140A679DC (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A69DE4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B3FEC4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B3FF50 (PipProcessPendingOsExtensionResources.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B6111C (PnpOpenCCSPnpRegKey.c)
 *     PipHardwareConfigInit @ 0x140B6C43C (PipHardwareConfigInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406CEF6C (_PnpCtxGetCachedNodeBaseKey.c)
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
