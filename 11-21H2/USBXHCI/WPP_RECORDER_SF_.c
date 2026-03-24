/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000A588
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003A40 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x1C0003E9C (Command_InternalSendCommand.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000A058 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000DF68 (CommonBuffer_FlushWorkItems.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00117FC (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011B68 (Controller_Start.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     Register_WaitForControllerReady @ 0x1C0013BAC (Register_WaitForControllerReady.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C00142F8 (XilCoreDeviceSlot_Initialize.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00149A0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014DE4 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C00154E0 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015B94 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0015E9C (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00164C4 (XilCoreDeviceSlot_AllocateResources.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016EC0 (Controller_UcxEvtQueryUsbCapability.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018AB8 (CommonBuffer_QueueWorkItem.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002E454 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030174 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030DA4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00310D8 (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C003142C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x1C003179C (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0031860 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C0031E70 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C00328D8 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C0033110 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C00334B0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtReset @ 0x1C0034070 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C700 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003DB7C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003DD2C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003DEF0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E1D0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C003F134 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0043AF0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006DE50 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006DFF8 (Controller_SetDeviceDescription.c)
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006EE48 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006EE98 (Interrupter_PrepareInterrupter.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006F1BC (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C006F968 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C00702D4 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C0075B98 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C00779A0 (Interrupter_FilterAllMSIResources.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0078804 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C007A100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C007A220 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007A2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000A588
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A588
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A588: mov     [rsp+arg_0], rbx
 * 00000001C000A58D: mov     [rsp+arg_8], rbp
 * 00000001C000A592: mov     [rsp+arg_10], rsi
 * 00000001C000A597: push    rdi
 * 00000001C000A598: push    r14
 * 00000001C000A59A: push    r15
 * 00000001C000A59C: sub     rsp, 30h
 * 00000001C000A5A0: mov     r14d, r8d
 * 00000001C000A5A3: mov     r15, rcx
 * 00000001C000A5A6: mov     edi, r8d
 * 00000001C000A5A9: shr     rdi, 10h
 * 00000001C000A5AD: movzx   ebp, r9w
 * 00000001C000A5B1: lea     ebx, [r14-1]
 * 00000001C000A5B5: movzx   esi, dl
 * 00000001C000A5B8: mov     r10d, ebx
 * 00000001C000A5BB: and     ebx, 1Fh
 * 00000001C000A5BE: shr     r10, 5
 * 00000001C000A5C2: lea     rax, [rdi+rdi*4]
 * 00000001C000A5C6: and     r10d, 7FFh
 * 00000001C000A5CD: lea     r11, [r10+rax*4]
 * 00000001C000A5D1: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000A5D8: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000A5DD: bt      eax, ebx
 * 00000001C000A5E0: jb      loc_1C0028128
 * 00000001C000A5E6: and     [rsp+48h+var_20], 0
 * 00000001C000A5EC: mov     r8d, r14d
 * 00000001C000A5EF: mov     r9, [rsp+48h+arg_20]
 * 00000001C000A5F4: mov     edx, esi
 * 00000001C000A5F6: mov     rcx, r15
 * 00000001C000A5F9: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000A5FE: call    cs:__imp_WppAutoLogTrace
 * 00000001C000A605: nop     dword ptr [rax+rax+00h]
 * 00000001C000A60A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000A60F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000A614: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000A619: add     rsp, 30h
 * 00000001C000A61D: pop     r15
 * 00000001C000A61F: pop     r14
 * 00000001C000A621: pop     rdi
 * 00000001C000A622: retn
 * 00000001C0028128: lea     rcx, [rdi+rdi*4]
 * 00000001C002812C: add     rcx, rcx
 * 00000001C002812F: cmp     [r10+rcx*8+29h], sil
 * 00000001C0028134: jb      loc_1C000A5E6
 * 00000001C002813A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0028141: mov     r9d, ebp
 * 00000001C0028144: and     [rsp+48h+var_28], 0
 * 00000001C002814A: mov     edx, 2Bh ; '+'
 * 00000001C002814F: mov     r8, [rsp+48h+arg_20]
 * 00000001C0028154: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0028159: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002815F: nop
 * 00000001C0028160: jmp     loc_1C000A5E6
 */
