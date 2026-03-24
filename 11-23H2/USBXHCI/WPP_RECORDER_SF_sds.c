/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C0037A60
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0004810 (Isoch_MapStage.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0007070 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Control_Transfer_Map @ 0x1C0007318 (Control_Transfer_Map.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00085AC (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00086D0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C000880C (Debug_FreAssertMsg.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     XilEndpoint_Create @ 0x1C000B114 (XilEndpoint_Create.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0011E20 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0013A0C (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Command_Initialize @ 0x1C001438C (Command_Initialize.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00151B4 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019D94 (XilDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0019E24 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     XilCommand_Create @ 0x1C001A6B4 (XilCommand_Create.c)
 *     XilDeviceSlot_Create @ 0x1C001A6F4 (XilDeviceSlot_Create.c)
 *     XilUsbDevice_Create @ 0x1C001BB24 (XilUsbDevice_Create.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C001C9B0 (XilDeviceSlot_PrepareHardware.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001E644 (Controller_AllocateIrqlTrackingArray.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00302B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C00313F0 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0031588 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0031740 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C00318A0 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0031A00 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031B60 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031E44 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031FA8 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032794 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0032ACC (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032E20 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00366C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C00368D0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
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
 *     XilEndpoint_GetRemoteHandle @ 0x1C00391FC (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C870 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003FD20 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0040000 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040658 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F64 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C00413DC (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0041930 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0041A6C (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047F60 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0048DDC (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C00490CC (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C00492C4 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C00493C4 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C0049510 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0049BD0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0049D30 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sds @ 0x1C0037A60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037A60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037A60: mov     [rsp+arg_0], rbx
 * 00000001C0037A65: mov     [rsp+arg_8], rbp
 * 00000001C0037A6A: mov     [rsp+arg_10], rsi
 * 00000001C0037A6F: push    rdi
 * 00000001C0037A70: push    r13
 * 00000001C0037A72: push    r15
 * 00000001C0037A74: sub     rsp, 60h
 * 00000001C0037A78: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0037A7F: lea     r13, aNull; "NULL"
 * 00000001C0037A86: mov     rsi, [rsp+78h+arg_28]
 * 00000001C0037A8E: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0037A92: mov     rdi, [rsp+78h+arg_38]
 * 00000001C0037A9A: mov     rbp, rcx
 * 00000001C0037A9D: mov     eax, [rdx+2Ch]
 * 00000001C0037AA0: lea     r15d, [rbx+6]
 * 00000001C0037AA4: lea     r10d, [rbx+0Bh]
 * 00000001C0037AA8: test    al, 2
 * 00000001C0037AAA: jz      loc_1C0037B5E
 * 00000001C0037AB0: cmp     byte ptr [rdx+29h], 2
 * 00000001C0037AB4: jb      loc_1C0037B5E
 * 00000001C0037ABA: test    rdi, rdi
 * 00000001C0037ABD: jz      short loc_1C0037AD1
 * 00000001C0037ABF: mov     r8, rbx
 * 00000001C0037AC2: inc     r8
 * 00000001C0037AC5: cmp     byte ptr [rdi+r8], 0
 * 00000001C0037ACA: jnz     short loc_1C0037AC2
 * 00000001C0037ACC: inc     r8
 * 00000001C0037ACF: jmp     short loc_1C0037AD4
 * 00000001C0037AD1: mov     r8, r15
 * 00000001C0037AD4: test    rdi, rdi
 * 00000001C0037AD7: mov     r9, rdi
 * 00000001C0037ADA: cmovz   r9, r13
 * 00000001C0037ADE: test    rsi, rsi
 * 00000001C0037AE1: jz      short loc_1C0037AF4
 * 00000001C0037AE3: mov     rdx, rbx
 * 00000001C0037AE6: inc     rdx
 * 00000001C0037AE9: cmp     byte ptr [rsi+rdx], 0
 * 00000001C0037AED: jnz     short loc_1C0037AE6
 * 00000001C0037AEF: inc     rdx
 * 00000001C0037AF2: jmp     short loc_1C0037AF7
 * 00000001C0037AF4: mov     rdx, r15
 * 00000001C0037AF7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037AFE: test    rsi, rsi
 * 00000001C0037B01: mov     rcx, rsi
 * 00000001C0037B04: cmovz   rcx, r13
 * 00000001C0037B08: and     [rsp+78h+var_28], 0
 * 00000001C0037B0E: mov     [rsp+78h+var_30], r8
 * 00000001C0037B13: lea     r8, [rsp+78h+arg_30]
 * 00000001C0037B1B: mov     [rsp+78h+var_38], r9
 * 00000001C0037B20: mov     r9d, r10d
 * 00000001C0037B23: mov     [rsp+78h+var_40], 4
 * 00000001C0037B2C: mov     [rsp+78h+var_48], r8
 * 00000001C0037B31: lea     r8, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0037B38: mov     [rsp+78h+var_50], rdx
 * 00000001C0037B3D: mov     edx, 2Bh ; '+'
 * 00000001C0037B42: mov     [rsp+78h+var_58], rcx
 * 00000001C0037B47: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0037B4E: mov     rcx, [rcx+18h]
 * 00000001C0037B52: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037B58: mov     r10d, 0Ah
 * 00000001C0037B5E: test    rdi, rdi
 * 00000001C0037B61: jz      short loc_1C0037B74
 * 00000001C0037B63: mov     rax, rbx
 * 00000001C0037B66: inc     rax
 * 00000001C0037B69: cmp     byte ptr [rdi+rax], 0
 * 00000001C0037B6D: jnz     short loc_1C0037B66
 * 00000001C0037B6F: inc     rax
 * 00000001C0037B72: jmp     short loc_1C0037B77
 * 00000001C0037B74: mov     rax, r15
 * 00000001C0037B77: test    rdi, rdi
 * 00000001C0037B7A: cmovz   rdi, r13
 * 00000001C0037B7E: test    rsi, rsi
 * 00000001C0037B81: jz      short loc_1C0037B91
 * 00000001C0037B83: inc     rbx
 * 00000001C0037B86: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0037B8A: jnz     short loc_1C0037B83
 * 00000001C0037B8C: inc     rbx
 * 00000001C0037B8F: jmp     short loc_1C0037B94
 * 00000001C0037B91: mov     rbx, r15
 * 00000001C0037B94: test    rsi, rsi
 * 00000001C0037B97: lea     r9, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0037B9E: mov     edx, 2
 * 00000001C0037BA3: mov     rcx, rbp
 * 00000001C0037BA6: cmovz   rsi, r13
 * 00000001C0037BAA: mov     r8d, edx
 * 00000001C0037BAD: and     [rsp+78h+var_20], 0
 * 00000001C0037BB3: mov     [rsp+78h+var_28], rax
 * 00000001C0037BB8: lea     rax, [rsp+78h+arg_30]
 * 00000001C0037BC0: mov     [rsp+78h+var_30], rdi
 * 00000001C0037BC5: mov     [rsp+78h+var_38], 4
 * 00000001C0037BCE: mov     [rsp+78h+var_40], rax
 * 00000001C0037BD3: mov     [rsp+78h+var_48], rbx
 * 00000001C0037BD8: mov     [rsp+78h+var_50], rsi
 * 00000001C0037BDD: mov     word ptr [rsp+78h+var_58], r10w
 * 00000001C0037BE3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037BEA: nop     dword ptr [rax+rax+00h]
 * 00000001C0037BEF: lea     r11, [rsp+78h+var_18]
 * 00000001C0037BF4: mov     rbx, [r11+20h]
 * 00000001C0037BF8: mov     rbp, [r11+28h]
 * 00000001C0037BFC: mov     rsi, [r11+30h]
 * 00000001C0037C00: mov     rsp, r11
 * 00000001C0037C03: pop     r15
 * 00000001C0037C05: pop     r13
 * 00000001C0037C07: pop     rdi
 * 00000001C0037C08: retn
 */
