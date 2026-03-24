/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00184A8
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074EC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007588 (Controller_RaiseAndTrackIrql.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C0008274 (DmaEnabler_AllocateCommonBufferPage.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B44 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9F0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_D0Exit @ 0x1C000EE40 (Controller_D0Exit.c)
 *     Register_ControllerStop @ 0x1C000EEE0 (Register_ControllerStop.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000F0B0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000F440 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_InterruptDisable @ 0x1C000F80C (Interrupter_InterruptDisable.c)
 *     Controller_NotifyPortStateToPep @ 0x1C000FBAC (Controller_NotifyPortStateToPep.c)
 *     RootHub_HandleResumedPorts @ 0x1C0010250 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C0010514 (RootHub_WaitForResumeCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013260 (UsbDevice_UcxEvtEnable.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0013880 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013FE0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014500 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014EB0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016CE0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00176B0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018568 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0018740 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C001887C (Register_WaitForControllerReady.c)
 *     Interrupter_InterruptEnable @ 0x1C0018978 (Interrupter_InterruptEnable.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019DE4 (XilDeviceSlot_SetDeviceContext.c)
 *     DynamicLock_Create @ 0x1C001AAC4 (DynamicLock_Create.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B310 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C001BFC0 (RootHub_UcxEvtGet30PortInfo.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C390 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C001C530 (Controller_PopulateTestRegistrySettings.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C001CA00 (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001CA4C (XilCoreDeviceSlot_AllocateResources.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C001CBF0 (RootHub_UcxEvtGet20PortInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D48C (UsbDevice_UpdateUsbDevice.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C001E300 (RootHub_UcxEvtGetInfo.c)
 *     Controller_IsRegKeySetToDisableS0Idle @ 0x1C001EAC8 (Controller_IsRegKeySetToDisableS0Idle.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002F5B0 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C002F6C0 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C002FF50 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C0030040 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030170 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C00312B0 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0031448 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0031600 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0031760 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C00318C0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031A20 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031D04 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031E68 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C0031FD8 (XilCommand_SendRequestToRingDoorbell.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0032550 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C0033890 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033C04 (Controller_InternalReset.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0034100 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0034328 (Controller_ReferenceTrustletProcess.c)
 *     Controller_TelemetryReport @ 0x1C0034A08 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034DB0 (Controller_TelemetryReportWorker.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0035100 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0037CA4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0037E1C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0037FA4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0038128 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0038294 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0038440 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00385A8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0038734 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00388B8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0038D80 (XilEndpoint_CreateSecureObject.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003DE10 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E3C0 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_MapSecureMmio @ 0x1C003EC24 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003ED08 (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003F0E8 (Register_WriteSecureMmio.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F4BC (RootHub_ForceU0AndWait.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040518 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C0040850 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C00408F0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     TR_AcquireSecureSegments @ 0x1C0040E24 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C004129C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00417F0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C004192C (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047E20 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0048168 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0051F50 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C00520B0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C0052170 (SecureDmaEnabler_Unmap.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052370 (SecureChannel_SendRequestSynchronously.c)
 *     Isoch_Initialize @ 0x1C006D440 (Isoch_Initialize.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006E3C8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006E774 (Controller_UpdateIdleTimeout.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C006EC34 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006ECBC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_CreateWdfDevice @ 0x1C006EFFC (Controller_CreateWdfDevice.c)
 *     RootHub_Create @ 0x1C006F778 (RootHub_Create.c)
 *     IoControl_Create @ 0x1C006F950 (IoControl_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FAA0 (Controller_WdfEvtDeviceAdd.c)
 *     Interrupter_Create @ 0x1C006FE08 (Interrupter_Create.c)
 *     Register_Create @ 0x1C006FE80 (Register_Create.c)
 *     Command_Create @ 0x1C006FFA4 (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00700FC (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C00701D8 (Interrupter_CreateInterrupter.c)
 *     DeviceSlot_Create @ 0x1C0070494 (DeviceSlot_Create.c)
 *     Wmi_Create @ 0x1C00705C0 (Wmi_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0071010 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C0071304 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071BC8 (Register_ParseCapabilityRegister.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A70 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C68 (Interrupter_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C0072DE0 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F6C (CommonBuffer_Create.c)
 *     DmaEnabler_Create @ 0x1C0073180 (DmaEnabler_Create.c)
 *     Register_PrepareHardware @ 0x1C00733C8 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739F8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C0073BAC (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D7C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0073F2C (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C007429C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x1C0074B0C (Controller_RetrievePciData.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C0075114 (RootHub_PopulatePortFlagsFromRegistry.c)
 *     Controller_GetDeviceEnumerator @ 0x1C007534C (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0078408 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C0078618 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C007886C (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0078D14 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0078FFC (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C00792B0 (Controller_UpdateSqmDatapoints.c)
 *     Register_CreateSecureObject @ 0x1C007A238 (Register_CreateSecureObject.c)
 *     IntelPptFilter_Create @ 0x1C007A584 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007A72C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C007A934 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C007AAB0 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007ABB4 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C007AE18 (SecureChannel_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C00184A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00184A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00184A8: mov     [rsp+arg_0], rbx
 * 00000001C00184AD: mov     [rsp+arg_8], rbp
 * 00000001C00184B2: mov     [rsp+arg_10], rsi
 * 00000001C00184B7: push    rdi
 * 00000001C00184B8: push    r14
 * 00000001C00184BA: push    r15
 * 00000001C00184BC: sub     rsp, 40h
 * 00000001C00184C0: mov     r14d, r8d
 * 00000001C00184C3: mov     r15, rcx
 * 00000001C00184C6: mov     edi, r8d
 * 00000001C00184C9: shr     rdi, 10h
 * 00000001C00184CD: movzx   esi, dl
 * 00000001C00184D0: lea     ebx, [r14-1]
 * 00000001C00184D4: movzx   ebp, r9w
 * 00000001C00184D8: mov     r10d, ebx
 * 00000001C00184DB: and     ebx, 1Fh
 * 00000001C00184DE: shr     r10, 5
 * 00000001C00184E2: lea     rax, [rdi+rdi*4]
 * 00000001C00184E6: and     r10d, 7FFh
 * 00000001C00184ED: mov     edx, ebx
 * 00000001C00184EF: mov     ebx, 4
 * 00000001C00184F4: lea     r11, [r10+rax*4]
 * 00000001C00184F8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00184FF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0018504: bt      eax, edx
 * 00000001C0018507: jb      loc_1C002B17A
 * 00000001C001850D: and     [rsp+58h+var_20], 0
 * 00000001C0018513: lea     rax, [rsp+58h+arg_28]
 * 00000001C001851B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0018523: mov     r8d, r14d
 * 00000001C0018526: mov     [rsp+58h+var_28], rbx
 * 00000001C001852B: mov     edx, esi
 * 00000001C001852D: mov     [rsp+58h+var_30], rax
 * 00000001C0018532: mov     rcx, r15
 * 00000001C0018535: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C001853A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018541: nop     dword ptr [rax+rax+00h]
 * 00000001C0018546: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001854B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0018550: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0018555: add     rsp, 40h
 * 00000001C0018559: pop     r15
 * 00000001C001855B: pop     r14
 * 00000001C001855D: pop     rdi
 * 00000001C001855E: retn
 * 00000001C002B17A: lea     rcx, [rdi+rdi*4]
 * 00000001C002B17E: add     rcx, rcx
 * 00000001C002B181: cmp     [r10+rcx*8+29h], sil
 * 00000001C002B186: jb      loc_1C001850D
 * 00000001C002B18C: and     [rsp+58h+var_28], 0
 * 00000001C002B192: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002B19A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B1A1: mov     r9d, ebp
 * 00000001C002B1A4: mov     r8, [rsp+58h+arg_20]
 * 00000001C002B1AC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002B1B1: mov     [rsp+58h+var_30], rbx
 * 00000001C002B1B6: mov     [rsp+58h+var_38], rdx
 * 00000001C002B1BB: mov     edx, 2Bh ; '+'
 * 00000001C002B1C0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B1C6: nop
 * 00000001C002B1C7: jmp     loc_1C001850D
 */
