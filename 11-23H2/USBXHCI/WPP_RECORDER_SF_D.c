/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0018458
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C0008244 (DmaEnabler_AllocateCommonBufferPage.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_D0Exit @ 0x1C000EE10 (Controller_D0Exit.c)
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000F080 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000F410 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_InterruptDisable @ 0x1C000F7DC (Interrupter_InterruptDisable.c)
 *     Controller_NotifyPortStateToPep @ 0x1C000FB7C (Controller_NotifyPortStateToPep.c)
 *     RootHub_HandleResumedPorts @ 0x1C0010220 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C00104E4 (RootHub_WaitForResumeCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0013830 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014E60 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C00186F0 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C001882C (Register_WaitForControllerReady.c)
 *     Interrupter_InterruptEnable @ 0x1C0018928 (Interrupter_InterruptEnable.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019D94 (XilDeviceSlot_SetDeviceContext.c)
 *     DynamicLock_Create @ 0x1C001AA74 (DynamicLock_Create.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B2C0 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C001BF70 (RootHub_UcxEvtGet30PortInfo.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C001C4E0 (Controller_PopulateTestRegistrySettings.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C001C9B0 (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001C9FC (XilCoreDeviceSlot_AllocateResources.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C001CBA0 (RootHub_UcxEvtGet20PortInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C001E2B0 (RootHub_UcxEvtGetInfo.c)
 *     Controller_IsRegKeySetToDisableS0Idle @ 0x1C001EA78 (Controller_IsRegKeySetToDisableS0Idle.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002F6F0 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C002F800 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C0030090 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C0030180 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00302B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C00313F0 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0031588 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0031740 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C00318A0 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0031A00 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031B60 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031E44 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031FA8 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C0032118 (XilCommand_SendRequestToRingDoorbell.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0032690 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C00339D0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033D44 (Controller_InternalReset.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0034240 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0034468 (Controller_ReferenceTrustletProcess.c)
 *     Controller_TelemetryReport @ 0x1C0034B48 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034EF0 (Controller_TelemetryReportWorker.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0035240 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035BA0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0037DE4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0037F5C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00380E4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0038268 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C00383D4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0038580 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00386E8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0038874 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00389F8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0038EC0 (XilEndpoint_CreateSecureObject.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003DF50 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E500 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_MapSecureMmio @ 0x1C003ED64 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003EE48 (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003F228 (Register_WriteSecureMmio.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F5FC (RootHub_ForceU0AndWait.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040658 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C0040990 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C0040A30 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F64 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C00413DC (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0041930 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0041A6C (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047F60 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C00482A8 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0052090 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C00521F0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C00522B0 (SecureDmaEnabler_Unmap.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00524B0 (SecureChannel_SendRequestSynchronously.c)
 *     Isoch_Initialize @ 0x1C006D400 (Isoch_Initialize.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006E388 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006E734 (Controller_UpdateIdleTimeout.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C006EBF4 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 *     Controller_CreateWdfDevice @ 0x1C006EFBC (Controller_CreateWdfDevice.c)
 *     RootHub_Create @ 0x1C006F738 (RootHub_Create.c)
 *     IoControl_Create @ 0x1C006F910 (IoControl_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 *     Interrupter_Create @ 0x1C006FDC8 (Interrupter_Create.c)
 *     Register_Create @ 0x1C006FE40 (Register_Create.c)
 *     Command_Create @ 0x1C006FF64 (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00700BC (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070198 (Interrupter_CreateInterrupter.c)
 *     DeviceSlot_Create @ 0x1C0070454 (DeviceSlot_Create.c)
 *     Wmi_Create @ 0x1C0070580 (Wmi_Create.c)
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070FD0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C28 (Interrupter_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C0072DA0 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F2C (CommonBuffer_Create.c)
 *     DmaEnabler_Create @ 0x1C0073140 (DmaEnabler_Create.c)
 *     Register_PrepareHardware @ 0x1C0073388 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739B8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C0073B6C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D3C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0073EEC (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C007425C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x1C0074ACC (Controller_RetrievePciData.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C00750D4 (RootHub_PopulatePortFlagsFromRegistry.c)
 *     Controller_GetDeviceEnumerator @ 0x1C007530C (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C00783C8 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C00785D8 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C007882C (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0078CD4 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0078FBC (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0079270 (Controller_UpdateSqmDatapoints.c)
 *     Register_CreateSecureObject @ 0x1C007A1F8 (Register_CreateSecureObject.c)
 *     IntelPptFilter_Create @ 0x1C007A544 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007A6EC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C007A8F4 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C007AA70 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007AB74 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C007ADD8 (SecureChannel_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0018458
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018458
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018458: mov     [rsp+arg_0], rbx
 * 00000001C001845D: mov     [rsp+arg_8], rbp
 * 00000001C0018462: mov     [rsp+arg_10], rsi
 * 00000001C0018467: push    rdi
 * 00000001C0018468: push    r14
 * 00000001C001846A: push    r15
 * 00000001C001846C: sub     rsp, 40h
 * 00000001C0018470: mov     r14d, r8d
 * 00000001C0018473: mov     r15, rcx
 * 00000001C0018476: mov     edi, r8d
 * 00000001C0018479: shr     rdi, 10h
 * 00000001C001847D: movzx   esi, dl
 * 00000001C0018480: lea     ebx, [r14-1]
 * 00000001C0018484: movzx   ebp, r9w
 * 00000001C0018488: mov     r10d, ebx
 * 00000001C001848B: and     ebx, 1Fh
 * 00000001C001848E: shr     r10, 5
 * 00000001C0018492: lea     rax, [rdi+rdi*4]
 * 00000001C0018496: and     r10d, 7FFh
 * 00000001C001849D: mov     edx, ebx
 * 00000001C001849F: mov     ebx, 4
 * 00000001C00184A4: lea     r11, [r10+rax*4]
 * 00000001C00184A8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00184AF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00184B4: bt      eax, edx
 * 00000001C00184B7: jb      loc_1C002B2BA
 * 00000001C00184BD: and     [rsp+58h+var_20], 0
 * 00000001C00184C3: lea     rax, [rsp+58h+arg_28]
 * 00000001C00184CB: mov     r9, [rsp+58h+arg_20]
 * 00000001C00184D3: mov     r8d, r14d
 * 00000001C00184D6: mov     [rsp+58h+var_28], rbx
 * 00000001C00184DB: mov     edx, esi
 * 00000001C00184DD: mov     [rsp+58h+var_30], rax
 * 00000001C00184E2: mov     rcx, r15
 * 00000001C00184E5: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00184EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00184F1: nop     dword ptr [rax+rax+00h]
 * 00000001C00184F6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00184FB: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0018500: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0018505: add     rsp, 40h
 * 00000001C0018509: pop     r15
 * 00000001C001850B: pop     r14
 * 00000001C001850D: pop     rdi
 * 00000001C001850E: retn
 * 00000001C002B2BA: lea     rcx, [rdi+rdi*4]
 * 00000001C002B2BE: add     rcx, rcx
 * 00000001C002B2C1: cmp     [r10+rcx*8+29h], sil
 * 00000001C002B2C6: jb      loc_1C00184BD
 * 00000001C002B2CC: and     [rsp+58h+var_28], 0
 * 00000001C002B2D2: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002B2DA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B2E1: mov     r9d, ebp
 * 00000001C002B2E4: mov     r8, [rsp+58h+arg_20]
 * 00000001C002B2EC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002B2F1: mov     [rsp+58h+var_30], rbx
 * 00000001C002B2F6: mov     [rsp+58h+var_38], rdx
 * 00000001C002B2FB: mov     edx, 2Bh ; '+'
 * 00000001C002B300: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B306: nop
 * 00000001C002B307: jmp     loc_1C00184BD
 */
