/*
 * XREFs of _PnpGetObjectProperty @ 0x1406D01F0
 * Callers:
 *     PiRebalanceOptOut @ 0x140564D90 (PiRebalanceOptOut.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14069B198 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406C9F84 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDqPnPGetObjectProperty @ 0x1406CCCF0 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD5DC (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406CEB60 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpGetObjectProperty @ 0x1406D00B0 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1406D09D4 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406D64B0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6858 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1407408A0 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140782278 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140783800 (PiUEventCacheObjectProperties.c)
 *     PiDcHandleDeviceEvent @ 0x140787320 (PiDcHandleDeviceEvent.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     PnpAssignResourcesToDevices @ 0x1407905A4 (PnpAssignResourcesToDevices.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790784 (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x140791078 (PnpGetDevicePropertyData.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796788 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407973CC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1407989E8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmUpdateDevicePanel @ 0x140798CFC (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1407997F8 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDeviceParent @ 0x14079A334 (_CmGetDeviceParent.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C54D0 (IoGetDeviceInterfaceAlias.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CF798 (PpForEachDeviceInstanceDriver.c)
 *     PiUEventDeviceNeedsInstall @ 0x1407D9D00 (PiUEventDeviceNeedsInstall.c)
 *     PiDcHandleInterfaceEvent @ 0x1407DB2E4 (PiDcHandleInterfaceEvent.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DBE84 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140801230 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbSetupNodes @ 0x1408115B8 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140812BDC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140812D08 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDmListInitEnumCallback @ 0x14082F280 (PiDmListInitEnumCallback.c)
 *     _CmGetParentDeviceContainerId @ 0x1408607B4 (_CmGetParentDeviceContainerId.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140866F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CC64 (PiDevCfgQueryObjectProperties.c)
 *     PiDcContainerRequiresConfiguration @ 0x140877B50 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x14087A1F0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14087C300 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgCopyObjectProperties @ 0x14087C3F4 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D3B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     _CmUpdateDevicePanelInterface @ 0x140885CB0 (_CmUpdateDevicePanelInterface.c)
 *     PipGetDeviceObjectLocation @ 0x140952F54 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140957850 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x140958DC0 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A5AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095A910 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B230 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FB50 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096ACD0 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14096F718 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14096FD8C (PiAuditDeviceStart.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970CE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140A623DC (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A63170 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140A64120 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A67E0C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A686E4 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A690E0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406D0384 (_PnpGetObjectPropertyWorker.c)
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
