/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0010010
 * Callers:
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C0001010 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00090A0 (Isoch_Stage_MapIntoRing.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_GetFrameNumber @ 0x1C000AA60 (Controller_GetFrameNumber.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000C440 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_InterruptDisable @ 0x1C000CC70 (Interrupter_InterruptDisable.c)
 *     Controller_NotifyPortStateToPep @ 0x1C000CFBC (Controller_NotifyPortStateToPep.c)
 *     RootHub_HandleResumedPorts @ 0x1C000D530 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000D648 (RootHub_WaitForResumeCompletion.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     Controller_D0Exit @ 0x1C000DC0C (Controller_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     Register_WaitForControllerReady @ 0x1C0013BAC (Register_WaitForControllerReady.c)
 *     Interrupter_InterruptEnable @ 0x1C0013C78 (Interrupter_InterruptEnable.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0014090 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00149A0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C00155D8 (Controller_PopulateTestRegistrySettings.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016478 (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00164C4 (XilCoreDeviceSlot_AllocateResources.c)
 *     DynamicLock_Create @ 0x1C0016778 (DynamicLock_Create.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C001686C (DmaEnabler_AllocateCommonBufferPage.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016EC0 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0017280 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0017420 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0017624 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C00179E0 (RootHub_UcxEvtGet20PortInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001843C (UsbDevice_UpdateUsbDevice.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002DDB0 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C002DEB0 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C002E3A0 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C002E730 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C002E810 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002FA04 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002FB9C (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002FD54 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002FEB4 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030014 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030174 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C003045C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00305C0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C0030730 (XilCommand_SendRequestToRingDoorbell.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0030CA0 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C0031E70 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C00326B0 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C00328D8 (Controller_ReferenceTrustletProcess.c)
 *     Controller_TelemetryReport @ 0x1C0033110 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C00334B0 (Controller_TelemetryReportWorker.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0033800 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0036424 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C003659C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0036724 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00368A8 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0036A14 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036BC0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036D28 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036EB4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037038 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C00374A0 (XilEndpoint_CreateSecureObject.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C700 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_MapSecureMmio @ 0x1C003CF64 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003D040 (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003D41C (Register_WriteSecureMmio.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D604 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003DB7C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003DD2C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E620 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003EB60 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003EC00 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     TR_AcquireSecureSegments @ 0x1C003F134 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003FAF0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003FC2C (TR_InitializeTransferSegment.c)
 *     Isoch_CommonBufferCallback @ 0x1C0041CA0 (Isoch_CommonBufferCallback.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0045964 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0045CAC (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004FF90 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C0050050 (SecureDmaEnabler_Unmap.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 *     Isoch_Initialize @ 0x1C006B570 (Isoch_Initialize.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006C1A0 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006C49C (Controller_UpdateIdleTimeout.c)
 *     Controller_CreateWdfDevice @ 0x1C006C580 (Controller_CreateWdfDevice.c)
 *     IoControl_Create @ 0x1C006CCFC (IoControl_Create.c)
 *     Interrupter_Create @ 0x1C006CE48 (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 *     Command_Create @ 0x1C006D3CC (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C006D524 (Command_CreateCommandWatchdogTimer.c)
 *     Wmi_Create @ 0x1C006D600 (Wmi_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006D740 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006DBC8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006DD7C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006DE50 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006DFF8 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006E350 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C006E458 (Controller_ConfigureSxWakeSettings.c)
 *     DmaEnabler_Create @ 0x1C006E4E0 (DmaEnabler_Create.c)
 *     CommonBuffer_Create @ 0x1C006E6D0 (CommonBuffer_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C006EBBC (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006F1BC (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C006F968 (RootHub_PrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006FFE0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C00702D4 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 *     Register_Create @ 0x1C0071450 (Register_Create.c)
 *     DeviceSlot_Create @ 0x1C0071574 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C00716A0 (RootHub_Create.c)
 *     Controller_RetrievePciData @ 0x1C007215C (Controller_RetrievePciData.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C0072764 (RootHub_PopulatePortFlagsFromRegistry.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00728B8 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0076084 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C0076294 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C00764E8 (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0076990 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0076C78 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0076F30 (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C00779A0 (Interrupter_FilterAllMSIResources.c)
 *     Register_CreateSecureObject @ 0x1C0077E80 (Register_CreateSecureObject.c)
 *     IntelPptFilter_Create @ 0x1C00781D4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007837C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C0078584 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0078700 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0078804 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C0078A68 (SecureChannel_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007A2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0010010
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010010: mov     [rsp+arg_0], rbx
 * 00000001C0010015: mov     [rsp+arg_8], rbp
 * 00000001C001001A: mov     [rsp+arg_10], rsi
 * 00000001C001001F: push    rdi
 * 00000001C0010020: push    r14
 * 00000001C0010022: push    r15
 * 00000001C0010024: sub     rsp, 40h
 * 00000001C0010028: mov     r14d, r8d
 * 00000001C001002B: mov     r15, rcx
 * 00000001C001002E: mov     edi, r8d
 * 00000001C0010031: shr     rdi, 10h
 * 00000001C0010035: movzx   esi, dl
 * 00000001C0010038: lea     ebx, [r14-1]
 * 00000001C001003C: movzx   ebp, r9w
 * 00000001C0010040: mov     r10d, ebx
 * 00000001C0010043: and     ebx, 1Fh
 * 00000001C0010046: shr     r10, 5
 * 00000001C001004A: lea     rax, [rdi+rdi*4]
 * 00000001C001004E: and     r10d, 7FFh
 * 00000001C0010055: mov     edx, ebx
 * 00000001C0010057: mov     ebx, 4
 * 00000001C001005C: lea     r11, [r10+rax*4]
 * 00000001C0010060: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0010067: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001006C: bt      eax, edx
 * 00000001C001006F: jb      loc_1C001DE9E
 * 00000001C0010075: and     [rsp+58h+var_20], 0
 * 00000001C001007B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0010083: mov     r9, [rsp+58h+arg_20]
 * 00000001C001008B: mov     r8d, r14d
 * 00000001C001008E: mov     [rsp+58h+var_28], rbx
 * 00000001C0010093: mov     edx, esi
 * 00000001C0010095: mov     [rsp+58h+var_30], rax
 * 00000001C001009A: mov     rcx, r15
 * 00000001C001009D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00100A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00100A9: nop     dword ptr [rax+rax+00h]
 * 00000001C00100AE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00100B3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00100B8: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00100BD: add     rsp, 40h
 * 00000001C00100C1: pop     r15
 * 00000001C00100C3: pop     r14
 * 00000001C00100C5: pop     rdi
 * 00000001C00100C6: retn
 * 00000001C001DE9E: lea     rcx, [rdi+rdi*4]
 * 00000001C001DEA2: add     rcx, rcx
 * 00000001C001DEA5: cmp     [r10+rcx*8+29h], sil
 * 00000001C001DEAA: jb      loc_1C0010075
 * 00000001C001DEB0: and     [rsp+58h+var_28], 0
 * 00000001C001DEB6: lea     rdx, [rsp+58h+arg_28]
 * 00000001C001DEBE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001DEC5: mov     r9d, ebp
 * 00000001C001DEC8: mov     r8, [rsp+58h+arg_20]
 * 00000001C001DED0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001DED5: mov     [rsp+58h+var_30], rbx
 * 00000001C001DEDA: mov     [rsp+58h+var_38], rdx
 * 00000001C001DEDF: mov     edx, 2Bh ; '+'
 * 00000001C001DEE4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001DEEA: nop
 * 00000001C001DEEB: jmp     loc_1C0010075
 */
