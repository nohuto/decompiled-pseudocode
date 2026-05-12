/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0008480
 * Callers:
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 *     RaUnitAsyncError @ 0x1C000BF68 (RaUnitAsyncError.c)
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0011720 (RaUnitScsiMiniportIoctl.c)
 *     RaidHandleCreateCloseIrp @ 0x1C00145A4 (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C00147E8 (RaidAdapterPowerIrp.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0014D6C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitPowerIrp @ 0x1C0016744 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0016828 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00168E4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0018244 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00184B0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0018650 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00186F0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0018A20 (RaUnitQuiesceDeviceSrb.c)
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0020000 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020F3C (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStreamsIoctl @ 0x1C0021128 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021688 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C00224FC (RaidCompleteWmiIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C00225F8 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00226C4 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C00228C4 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0022A08 (RaUnitClaimDeviceSrb.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0022B60 (StorASyncScsiPassThroughCompletion.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0032F18 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0032FA8 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034EB4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0034FE4 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x1C00354B8 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C0035798 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00358E4 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0035BD0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0035D90 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterReconfigureMFND @ 0x1C0036034 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x1C0036A2C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0036D00 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0036D58 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0036DD4 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0037B34 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C0037C10 (RaidAdapterSetLedState.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0038428 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0038850 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0038904 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C0038BF4 (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C0038C38 (RaidAdapterStorageSetPropertyIoctl.c)
 *     RaidPnPAsyncStartComplete @ 0x1C003B1B0 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003B200 (RaidPnPAsyncStartCompleteWorker.c)
 *     RaProcessDFxPendingIrp @ 0x1C003D904 (RaProcessDFxPendingIrp.c)
 *     StorExtCompleteServiceIrp @ 0x1C0042960 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0045228 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C004E1A4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0050B84 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0051348 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C00513D4 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C0051548 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0051658 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00516CC (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0051740 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C00517E8 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00518B4 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0051F24 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0052474 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C0053284 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0053310 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005339C (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C00538B0 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0053B14 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSetLedState @ 0x1C0056038 (RaidUnitSetLedState.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitQueryBypassIOProperty @ 0x1C00568BC (StorUnitQueryBypassIOProperty.c)
 *     StorUnitStartBypassIo @ 0x1C0056990 (StorUnitStartBypassIo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0084950 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C0084F48 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0087340 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00879FC (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0087BAC (RaUnitQueryIdIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterPassThrough @ 0x1C0088544 (RaidAdapterPassThrough.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0088924 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0089494 (RaWmiDispatchIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0089A50 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0089AB8 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0089C74 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0089D80 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0089E68 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0089F18 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C008CB6C (RaidAdapterScsiIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C008CD90 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C008EFE0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C008F010 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C008F05C (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C008F094 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C008F0C4 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C008F190 (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C008F47C (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C008F530 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C008F6D0 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x1C008F7EC (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C008F8BC (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C008FBCC (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitUnknownSrb @ 0x1C008FCAC (RaUnitUnknownSrb.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1C0090710 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x1C0090794 (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitQueryNamespaceIdProperty @ 0x1C0090818 (StorUnitQueryNamespaceIdProperty.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x1C0031D9C (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1C0031E74 (McTemplateK0pqd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _DWORD *Information; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  char v14; // r12
  char Flags; // r13
  char SecurityQos; // r14
  int v17; // eax
  char LowPart_high; // r15
  char *SrbScsiData; // rax
  char v20; // r9
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v22; // r8
  unsigned __int64 v23; // rcx
  char v24; // r11
  char v25; // r9
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  bool v29; // cc
  char *v30; // r8
  char v31; // [rsp+60h] [rbp-68h] BYREF
  char v32[3]; // [rsp+61h] [rbp-67h] BYREF
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int FullCreateOptions; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v35; // [rsp+70h] [rbp-58h] BYREF
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v36 = 0LL;
  IoGetActivityIdIrp(Irp, &v36);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
    if ( byte_1C00799E1 < 0 )
    {
      LOBYTE(v8) = 0;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      v14 = 0;
      Flags = 0;
      SecurityQos = 0;
      v17 = BYTE2(SecurityContext->SecurityQos);
      LowPart_high = 0;
      v31 = 0;
      v35 = 0LL;
      v32[0] = 0;
      v33 = v8;
      if ( (_BYTE)v17 == 40 )
      {
        FullCreateOptions = SecurityContext->FullCreateOptions;
        SrbScsiData = (char *)GetSrbScsiData(
                                (_DWORD)SecurityContext,
                                0,
                                0,
                                (unsigned int)&v31,
                                (__int64)&v35,
                                (__int64)v32);
        v20 = v31;
        AccessState = v35;
        v22 = v32[0];
        LOBYTE(v8) = v33;
        LODWORD(v23) = FullCreateOptions;
        if ( SrbScsiData )
          SecurityQos = *SrbScsiData;
      }
      else
      {
        v20 = BYTE4(SecurityContext->SecurityQos);
        LODWORD(v23) = v17;
        SecurityQos = (char)SecurityContext[3].SecurityQos;
        AccessState = SecurityContext[1].AccessState;
        v22 = BYTE3(SecurityContext->AccessState);
        v31 = v20;
      }
      if ( !(_DWORD)v23 && ((SecurityQos - 8) & 0x5D) == 0 )
      {
        v24 = BYTE3(SecurityContext->SecurityQos);
        if ( v24 == 1 || !AccessState || !v22 )
        {
LABEL_39:
          if ( byte_1C00799E1 < 0 )
          {
            if ( !(_BYTE)v8 )
            {
              LowPart_high = 0;
              Flags = 0;
              v14 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v23,
              (_DWORD)AccessState,
              (unsigned int)&v36,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v24,
              v20,
              v14,
              Flags,
              LowPart_high,
              (char)Irp);
          }
          goto LABEL_4;
        }
        v25 = 0;
        v23 = (unsigned __int64)AccessState + v22;
        p_SecurityEvaluated = &AccessState->SecurityEvaluated;
        if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)p_SecurityEvaluated > v23 )
            goto LABEL_37;
          Flags = BYTE2(AccessState->OperationID.LowPart);
          v14 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
        }
        else
        {
          if ( (unsigned __int64)p_SecurityEvaluated > v23 )
            goto LABEL_37;
          v27 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v28 = v22;
          v14 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v29 = v27 <= v22;
          v30 = (char *)&AccessState->Flags + 1;
          if ( v29 )
            v28 = v27;
          if ( v30 <= (char *)AccessState + v28 )
            Flags = AccessState->Flags;
          v23 = (unsigned __int64)AccessState + (unsigned int)v28;
          if ( (unsigned __int64)&AccessState->Flags + 2 <= v23 )
            LowPart_high = *v30;
        }
        v25 = 1;
LABEL_37:
        v3 = v25 == 0;
        v20 = v31;
        if ( !v3 )
          LOBYTE(v8) = 1;
        goto LABEL_39;
      }
    }
  }
  else if ( MajorFunction == 14 )
  {
    if ( (byte_1C00799E2 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(
        CurrentStackLocation,
        &EventNonReadWriteRequestComplete,
        &v36,
        Irp,
        Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C00799E2 & 0x40) != 0 )
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( Information )
          LODWORD(Information) = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)Information,
          v7,
          (unsigned int)&v36,
          (_DWORD)Irp,
          (char)Information,
          Irp->IoStatus.Status);
      }
    }
    else if ( (byte_1C00799E2 & 0x20) != 0 )
    {
      McTemplateK0pd_EtwWriteTransfer(CurrentStackLocation, &EventPnpRequestComplete, &v36, Irp, Irp->IoStatus.Status);
    }
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
