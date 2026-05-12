/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0003280
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0008434 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000F510 (RaidHandleCreateCloseIrp.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C000F62C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0011558 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0011628 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001170C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0011CB4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0013A68 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014760 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014810 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001C918 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C001D970 (RaUnitStreamsIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C001DAB0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001EA0C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F1FC (RaidAdapterCheckWaitTimeout.c)
 *     RaidCompleteWmiIrp @ 0x1C0020024 (RaidCompleteWmiIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C002042C (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00216F4 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C0021AE0 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0021D74 (RaUnitClaimDeviceSrb.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0021E18 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0022040 (StorASyncScsiPassThroughCompletion.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0033B78 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0033C08 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0035D20 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0036018 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x1C0036324 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x1C0036438 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x1C0036530 (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x1C0036658 (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C0036964 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C0036B3C (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0036E30 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0036FF0 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterReconfigureMFND @ 0x1C0037294 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x1C0037E58 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0038134 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C003818C (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0038208 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0038F94 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C0039070 (RaidAdapterSetLedState.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C003993C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0039DCC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0039E80 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C003A1F8 (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C003A23C (RaidAdapterStorageSetPropertyIoctl.c)
 *     RaidPnPAsyncStartComplete @ 0x1C003CFA0 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003CFF0 (RaidPnPAsyncStartCompleteWorker.c)
 *     RaProcessDFxPendingIrp @ 0x1C003FBC0 (RaProcessDFxPendingIrp.c)
 *     StorExtCompleteServiceIrp @ 0x1C0045540 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0048700 (StorpCompleteServiceIrp.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x1C0051624 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x1C005369C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x1C00538C0 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x1C0053A80 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaidCancelIrp @ 0x1C005847C (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C005D398 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C005DB38 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C005DBC4 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C005DF04 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C005E014 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C005E088 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C005E0FC (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C005E1A4 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C005E34C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C005E730 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C005EC84 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C005FC48 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C005FCD4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005FD60 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C005FEC8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C0060030 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0060198 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0060354 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00610B0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0062040 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetLedState @ 0x1C0062DFC (RaidUnitSetLedState.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0063260 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitQueryBypassIOProperty @ 0x1C006368C (StorUnitQueryBypassIOProperty.c)
 *     StorUnitStartBypassIo @ 0x1C0063780 (StorUnitStartBypassIo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C009F938 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C009FDE4 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00A0A34 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C00A0FC8 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00A245C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C00A265C (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00A3098 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00A370C (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C00A37F4 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C00A38A4 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C00A70B8 (RaidAdapterScsiIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00A9724 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C00A9754 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C00A97A0 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C00A97D8 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00A9810 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C00A98DC (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00A99B0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00A9C60 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00A9E08 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C00AA010 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x1C00AA12C (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C00AA1FC (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C00AA518 (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitUnknownSrb @ 0x1C00AA5F8 (RaUnitUnknownSrb.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1C00AB3A8 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x1C00AB42C (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitQueryNamespaceIdProperty @ 0x1C00AB4B0 (StorUnitQueryNamespaceIdProperty.c)
 * Callees:
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     GetSrbScsiData @ 0x1C0017418 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x1C00323E0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1C00324B8 (McTemplateK0pqd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  char v12; // r12
  unsigned __int8 SecurityQos; // r13
  char v14; // r14
  unsigned int v15; // eax
  char v16; // r15
  __int64 v17; // rcx
  char v18; // al
  _DWORD *Information; // rcx
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int64 v21; // rdx
  _BYTE *v22; // r10
  unsigned __int8 v23; // r11
  char v24; // r8
  _BYTE *v25; // rcx
  _BYTE *v26; // rax
  unsigned int v27; // eax
  int v28; // ecx
  char v29; // [rsp+60h] [rbp-68h] BYREF
  char v30[3]; // [rsp+61h] [rbp-67h] BYREF
  int v31; // [rsp+64h] [rbp-64h]
  unsigned int FullCreateOptions; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h] BYREF
  __int128 v34; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v34 = 0LL;
  IoGetActivityIdIrp(Irp, &v34);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
    if ( byte_1C0092A01 < 0 )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      v12 = 0;
      SecurityQos = 0;
      v14 = 0;
      v15 = BYTE2(SecurityContext->SecurityQos);
      v16 = 0;
      v29 = 0;
      v33 = 0LL;
      v30[0] = 0;
      LOBYTE(v31) = 0;
      if ( (_BYTE)v15 == 40 )
      {
        FullCreateOptions = SecurityContext->FullCreateOptions;
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(
                                           (_DWORD)SecurityContext,
                                           0,
                                           0,
                                           (unsigned int)&v29,
                                           (__int64)&v33,
                                           (__int64)v30);
        v17 = FullCreateOptions;
        if ( SrbScsiData )
          SecurityQos = *SrbScsiData;
        v18 = v29;
      }
      else
      {
        SecurityQos = (unsigned __int8)SecurityContext[3].SecurityQos;
        v17 = v15;
        v18 = BYTE4(SecurityContext->SecurityQos);
      }
      v29 = v18;
      if ( (unsigned int)IsReadWriteRequest(v17, SecurityQos) )
      {
        v24 = BYTE3(SecurityContext->SecurityQos);
        if ( v24 == 1 || !v22 || !v23 )
        {
          v28 = v31;
LABEL_42:
          if ( byte_1C0092A01 < 0 )
          {
            if ( !(_BYTE)v28 )
            {
              v14 = 0;
              v12 = 0;
              v16 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v28,
              v21,
              (unsigned int)&v34,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v24,
              v29,
              v16,
              v12,
              v14,
              (char)Irp);
          }
          goto LABEL_4;
        }
        LOBYTE(v21) = 0;
        v25 = &v22[v23];
        v26 = v22 + 8;
        if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
        {
          if ( v26 > v25 )
            goto LABEL_38;
          v12 = v22[2];
          v16 = v22[1] & 0xF;
          v14 = v22[3];
        }
        else
        {
          if ( v26 > v25 )
            goto LABEL_38;
          v16 = v22[2] & 0xF;
          v27 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v27 = (unsigned __int8)v22[7] + 8;
          v21 = (unsigned __int64)&v22[v27];
          if ( (unsigned __int64)(v22 + 13) <= v21 )
            v12 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v21 )
            v14 = v22[13];
        }
        LOBYTE(v21) = 1;
LABEL_38:
        v28 = (unsigned __int8)v31;
        if ( (_BYTE)v21 )
          v28 = 1;
        goto LABEL_42;
      }
    }
  }
  else if ( MajorFunction == 14 )
  {
    if ( (byte_1C0092A02 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(
        CurrentStackLocation,
        &EventNonReadWriteRequestComplete,
        &v34,
        Irp,
        Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C0092A02 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(CurrentStackLocation, &EventPnpRequestComplete, &v34, Irp, Irp->IoStatus.Status);
    }
    else if ( (byte_1C0092A02 & 0x40) != 0 )
    {
      Information = (_DWORD *)Irp->IoStatus.Information;
      if ( Information )
        LODWORD(Information) = *Information;
      McTemplateK0pqd_EtwWriteTransfer(
        (_DWORD)Information,
        v7,
        (unsigned int)&v34,
        (_DWORD)Irp,
        (char)Information,
        Irp->IoStatus.Status);
    }
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
