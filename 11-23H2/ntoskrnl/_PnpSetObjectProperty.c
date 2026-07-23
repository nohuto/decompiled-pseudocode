/*
 * XREFs of _PnpSetObjectProperty @ 0x140796D6C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14079529C (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140795568 (PnpClearDeviceTemporaryProperties.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796978 (PiPnpRtlSetObjectProperty.c)
 *     _CmUpdateDevicePanel @ 0x140798EEC (_CmUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x1407DD30C (PnpInitializeInheritedRestrictedSd.c)
 *     PnpInitializeSessionId @ 0x1407E0B50 (PnpInitializeSessionId.c)
 *     PiDrvDbSetupNodes @ 0x140811888 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x140811A0C (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140812EAC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140827BE0 (PipDmgSaveDeviceDmarPolicy.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x14084DAD8 (PiIommuSaveDeviceAtsSettings.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408671C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PiDcContainerRequiresConfiguration @ 0x140877D90 (PiDcContainerRequiresConfiguration.c)
 *     _CmUpdateDevicePanelInterface @ 0x140885EF0 (_CmUpdateDevicePanelInterface.c)
 *     IoGetDeviceDirectory @ 0x140955210 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x140958FC0 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096BAC4 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipSetGuestAssignedProperty @ 0x14096F2A8 (PipSetGuestAssignedProperty.c)
 *     _CmDeleteDeviceWorker @ 0x140A6268C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A676CC (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A680BC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A68994 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140B94540 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x140796EEC (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptorLength);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v18 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
  v16 = v18;
  if ( v14 )
  {
    LODWORD(SecurityDescriptorLength[0]) = v18;
    v19 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
