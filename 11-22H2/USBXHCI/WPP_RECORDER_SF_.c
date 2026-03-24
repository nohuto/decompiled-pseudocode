/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005BEC
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0005010 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007588 (Controller_RaiseAndTrackIrql.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A54 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0008190 (CommonBuffer_QueueWorkItem.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B44 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2E4 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x1C000A9C8 (Command_InternalSendCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000B70C (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9F0 (Controller_WdfEvtDeviceD0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000EDC4 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerStop @ 0x1C000EEE0 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013FE0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014180 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014500 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C00149DC (XilCoreDeviceSlot_Initialize.c)
 *     Controller_Start @ 0x1C0014F8C (Controller_Start.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0015204 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0015740 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016CE0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016FA0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00176B0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018568 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0018740 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C001887C (Register_WaitForControllerReady.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C001A420 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001ABB8 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B310 (Controller_UcxEvtQueryUsbCapability.c)
 *     XilCoreCommand_AllocateResources @ 0x1C001BC80 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001CA4C (XilCoreDeviceSlot_AllocateResources.c)
 *     Controller_ClearHSIIWorkaround @ 0x1C001EA10 (Controller_ClearHSIIWorkaround.c)
 *     Controller_SetHSIIWorkaround @ 0x1C001ED8C (Controller_SetHSIIWorkaround.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FC74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030170 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031A20 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032654 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003298C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032CE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x1C003304C (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0033110 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C0033890 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033C04 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0034328 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C00346AC (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C0034A08 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034DB0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035520 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtReset @ 0x1C0035970 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036130 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E3C0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F4BC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F864 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003FA14 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003FBE0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003FEC0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040518 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0040E24 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0045D90 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0051F50 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052370 (SecureChannel_SendRequestSynchronously.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006ECBC (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C0071304 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071BC8 (Register_ParseCapabilityRegister.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007279C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C68 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0072D84 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Register_PrepareHardware @ 0x1C00733C8 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1C0073C80 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D7C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0073F2C (Controller_SetDeviceDescription.c)
 *     Command_ReleaseHardware @ 0x1C0077F10 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0079DDC (Interrupter_FilterAllMSIResources.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007ABB4 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C007C100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C007C230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005BEC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005BEC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005BEC: mov     [rsp+arg_0], rbx
 * 00000001C0005BF1: mov     [rsp+arg_8], rbp
 * 00000001C0005BF6: mov     [rsp+arg_10], rsi
 * 00000001C0005BFB: push    rdi
 * 00000001C0005BFC: push    r14
 * 00000001C0005BFE: push    r15
 * 00000001C0005C00: sub     rsp, 30h
 * 00000001C0005C04: mov     r14d, r8d
 * 00000001C0005C07: mov     r15, rcx
 * 00000001C0005C0A: mov     edi, r8d
 * 00000001C0005C0D: shr     rdi, 10h
 * 00000001C0005C11: movzx   ebp, r9w
 * 00000001C0005C15: lea     ebx, [r14-1]
 * 00000001C0005C19: movzx   esi, dl
 * 00000001C0005C1C: mov     r10d, ebx
 * 00000001C0005C1F: and     ebx, 1Fh
 * 00000001C0005C22: shr     r10, 5
 * 00000001C0005C26: lea     rax, [rdi+rdi*4]
 * 00000001C0005C2A: and     r10d, 7FFh
 * 00000001C0005C31: lea     r11, [r10+rax*4]
 * 00000001C0005C35: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005C3C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005C41: bt      eax, ebx
 * 00000001C0005C44: jb      loc_1C0023034
 * 00000001C0005C4A: and     [rsp+48h+var_20], 0
 * 00000001C0005C50: mov     r8d, r14d
 * 00000001C0005C53: mov     r9, [rsp+48h+arg_20]
 * 00000001C0005C58: mov     edx, esi
 * 00000001C0005C5A: mov     rcx, r15
 * 00000001C0005C5D: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005C62: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005C69: nop     dword ptr [rax+rax+00h]
 * 00000001C0005C6E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005C73: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005C78: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005C7D: add     rsp, 30h
 * 00000001C0005C81: pop     r15
 * 00000001C0005C83: pop     r14
 * 00000001C0005C85: pop     rdi
 * 00000001C0005C86: retn
 * 00000001C0023034: lea     rcx, [rdi+rdi*4]
 * 00000001C0023038: add     rcx, rcx
 * 00000001C002303B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0023040: jb      loc_1C0005C4A
 * 00000001C0023046: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002304D: mov     r9d, ebp
 * 00000001C0023050: and     [rsp+48h+var_28], 0
 * 00000001C0023056: mov     edx, 2Bh ; '+'
 * 00000001C002305B: mov     r8, [rsp+48h+arg_20]
 * 00000001C0023060: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0023065: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002306B: nop
 * 00000001C002306C: jmp     loc_1C0005C4A
 */
