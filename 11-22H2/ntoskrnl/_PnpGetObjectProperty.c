/*
 * XREFs of _PnpGetObjectProperty @ 0x1406D02A0
 * Callers:
 *     PiRebalanceOptOut @ 0x140564E30 (PiRebalanceOptOut.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14069B198 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406CA034 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDqPnPGetObjectProperty @ 0x1406CCDA0 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD68C (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406CEC10 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpGetObjectProperty @ 0x1406D0160 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1406D0A84 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406D6560 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6908 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140740DB0 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140782788 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140783D10 (PiUEventCacheObjectProperties.c)
 *     PiDcHandleDeviceEvent @ 0x140787830 (PiDcHandleDeviceEvent.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     PnpAssignResourcesToDevices @ 0x140790AB4 (PnpAssignResourcesToDevices.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790C94 (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x140791588 (PnpGetDevicePropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796C98 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407978DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140798EF8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmUpdateDevicePanel @ 0x14079920C (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140799D08 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDeviceParent @ 0x14079A844 (_CmGetDeviceParent.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C5A60 (IoGetDeviceInterfaceAlias.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFCF8 (PpForEachDeviceInstanceDriver.c)
 *     PiUEventDeviceNeedsInstall @ 0x1407DA280 (PiUEventDeviceNeedsInstall.c)
 *     PiDcHandleInterfaceEvent @ 0x1407DB864 (PiDcHandleInterfaceEvent.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DC404 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408018E0 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbSetupNodes @ 0x140813B38 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14081515C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140815288 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDmListInitEnumCallback @ 0x140830DD0 (PiDmListInitEnumCallback.c)
 *     _CmGetParentDeviceContainerId @ 0x140860914 (_CmGetParentDeviceContainerId.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140867450 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipSetDevNodeProblem @ 0x1408697BC (PipSetDevNodeProblem.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086D134 (PiDevCfgQueryObjectProperties.c)
 *     PiDcContainerRequiresConfiguration @ 0x140878020 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x14087A6C0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14087C7D0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgCopyObjectProperties @ 0x14087C8C4 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D884 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140882C80 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     _CmUpdateDevicePanelInterface @ 0x140886180 (_CmUpdateDevicePanelInterface.c)
 *     PipGetDeviceObjectLocation @ 0x140953004 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140957900 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x140958E70 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A65C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095A9C0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B2E0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AD80 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14096F7C8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14096FE3C (PiAuditDeviceStart.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140A6244C (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A631E0 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140A64190 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A67E7C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A68754 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A69150 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406D0434 (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  unsigned int v11; // r14d
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int ObjectPropertyWorker; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD v22[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A4h] [rbp-5h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B0h] [rbp+7h]
  int v32; // [rsp+B4h] [rbp+Bh]

  v11 = a3;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v29 = 0;
  v32 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v30 = a10;
  v31 = a11;
  v23 = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 8LL, 1, v22);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(v22[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(a1, a2, v11, v23, v24, v25, v26, v27, v28, v30, v31);
  v16 = ObjectPropertyWorker;
  if ( v14 )
  {
    LODWORD(v22[0]) = ObjectPropertyWorker;
    v19 = v14(a1, a2, v11, 8LL, 2, v22);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(v22[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
