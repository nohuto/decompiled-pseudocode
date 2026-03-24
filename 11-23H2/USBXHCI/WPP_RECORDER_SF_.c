/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005BBC
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0008160 (CommonBuffer_QueueWorkItem.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000B6DC (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000ED94 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014130 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C001498C (XilCoreDeviceSlot_Initialize.c)
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00151B4 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C00186F0 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C001882C (Register_WaitForControllerReady.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C001A3D0 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B2C0 (Controller_UcxEvtQueryUsbCapability.c)
 *     XilCoreCommand_AllocateResources @ 0x1C001BC30 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001C9FC (XilCoreDeviceSlot_AllocateResources.c)
 *     Controller_ClearHSIIWorkaround @ 0x1C001E9C0 (Controller_ClearHSIIWorkaround.c)
 *     Controller_SetHSIIWorkaround @ 0x1C001ED3C (Controller_SetHSIIWorkaround.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FDB4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00302B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031B60 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032794 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0032ACC (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032E20 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x1C003318C (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0033250 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C00339D0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033D44 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0034468 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C00347EC (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C0034B48 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034EF0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035660 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtReset @ 0x1C0035AB0 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035BA0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036270 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E500 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F5FC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F9A4 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003FB54 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003FD20 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0040000 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040658 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F64 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0045ED0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0052090 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00524B0 (SecureChannel_SendRequestSynchronously.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007275C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C28 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0072D44 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Register_PrepareHardware @ 0x1C0073388 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1C0073C40 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D3C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0073EEC (Controller_SetDeviceDescription.c)
 *     Command_ReleaseHardware @ 0x1C0077ED0 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0079D9C (Interrupter_FilterAllMSIResources.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007AB74 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C007C100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C007C230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005BBC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005BBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005BBC: mov     [rsp+arg_0], rbx
 * 00000001C0005BC1: mov     [rsp+arg_8], rbp
 * 00000001C0005BC6: mov     [rsp+arg_10], rsi
 * 00000001C0005BCB: push    rdi
 * 00000001C0005BCC: push    r14
 * 00000001C0005BCE: push    r15
 * 00000001C0005BD0: sub     rsp, 30h
 * 00000001C0005BD4: mov     r14d, r8d
 * 00000001C0005BD7: mov     r15, rcx
 * 00000001C0005BDA: mov     edi, r8d
 * 00000001C0005BDD: shr     rdi, 10h
 * 00000001C0005BE1: movzx   ebp, r9w
 * 00000001C0005BE5: lea     ebx, [r14-1]
 * 00000001C0005BE9: movzx   esi, dl
 * 00000001C0005BEC: mov     r10d, ebx
 * 00000001C0005BEF: and     ebx, 1Fh
 * 00000001C0005BF2: shr     r10, 5
 * 00000001C0005BF6: lea     rax, [rdi+rdi*4]
 * 00000001C0005BFA: and     r10d, 7FFh
 * 00000001C0005C01: lea     r11, [r10+rax*4]
 * 00000001C0005C05: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005C0C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005C11: bt      eax, ebx
 * 00000001C0005C14: jb      loc_1C0023174
 * 00000001C0005C1A: and     [rsp+48h+var_20], 0
 * 00000001C0005C20: mov     r8d, r14d
 * 00000001C0005C23: mov     r9, [rsp+48h+arg_20]
 * 00000001C0005C28: mov     edx, esi
 * 00000001C0005C2A: mov     rcx, r15
 * 00000001C0005C2D: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005C32: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005C39: nop     dword ptr [rax+rax+00h]
 * 00000001C0005C3E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005C43: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005C48: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005C4D: add     rsp, 30h
 * 00000001C0005C51: pop     r15
 * 00000001C0005C53: pop     r14
 * 00000001C0005C55: pop     rdi
 * 00000001C0005C56: retn
 * 00000001C0023174: lea     rcx, [rdi+rdi*4]
 * 00000001C0023178: add     rcx, rcx
 * 00000001C002317B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0023180: jb      loc_1C0005C1A
 * 00000001C0023186: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002318D: mov     r9d, ebp
 * 00000001C0023190: and     [rsp+48h+var_28], 0
 * 00000001C0023196: mov     edx, 2Bh ; '+'
 * 00000001C002319B: mov     r8, [rsp+48h+arg_20]
 * 00000001C00231A0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00231A5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00231AB: nop
 * 00000001C00231AC: jmp     loc_1C0005C1A
 */
