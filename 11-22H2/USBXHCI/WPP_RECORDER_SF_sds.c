/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C0037920
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0004840 (Isoch_MapStage.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0005010 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00070A0 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Control_Transfer_Map @ 0x1C0007348 (Control_Transfer_Map.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074EC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007588 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00085DC (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0008700 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C000883C (Debug_FreAssertMsg.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008988 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B44 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     DynamicLock_Acquire @ 0x1C000A948 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A988 (DynamicLock_Release.c)
 *     XilEndpoint_Create @ 0x1C000B144 (XilEndpoint_Create.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0011E50 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C00122F0 (Bulk_MapStage.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0013A5C (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Command_Initialize @ 0x1C00143DC (Command_Initialize.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014500 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_Start @ 0x1C0014F8C (Controller_Start.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0015204 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0015740 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016CE0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016FA0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00176B0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018568 (Register_ControllerReset.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019DE4 (XilDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0019E74 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E94 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     XilCommand_Create @ 0x1C001A704 (XilCommand_Create.c)
 *     XilDeviceSlot_Create @ 0x1C001A744 (XilDeviceSlot_Create.c)
 *     XilUsbDevice_Create @ 0x1C001BB74 (XilUsbDevice_Create.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C001CA00 (XilDeviceSlot_PrepareHardware.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D48C (UsbDevice_UpdateUsbDevice.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001E694 (Controller_AllocateIrqlTrackingArray.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030170 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C00312B0 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0031448 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0031600 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0031760 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C00318C0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031A20 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031D04 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031E68 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032654 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003298C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032CE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036580 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036790 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
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
 *     XilEndpoint_GetRemoteHandle @ 0x1C00390BC (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C730 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003FBE0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003FEC0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040518 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0040E24 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C004129C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00417F0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C004192C (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047E20 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0048C9C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0048F8C (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0049184 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0049284 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C00493D0 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0049A90 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0049BF0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sds @ 0x1C0037920
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037920: mov     [rsp+arg_0], rbx
 * 00000001C0037925: mov     [rsp+arg_8], rbp
 * 00000001C003792A: mov     [rsp+arg_10], rsi
 * 00000001C003792F: push    rdi
 * 00000001C0037930: push    r13
 * 00000001C0037932: push    r15
 * 00000001C0037934: sub     rsp, 60h
 * 00000001C0037938: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003793F: lea     r13, aNull; "NULL"
 * 00000001C0037946: mov     rsi, [rsp+78h+arg_28]
 * 00000001C003794E: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0037952: mov     rdi, [rsp+78h+arg_38]
 * 00000001C003795A: mov     rbp, rcx
 * 00000001C003795D: mov     eax, [rdx+2Ch]
 * 00000001C0037960: lea     r15d, [rbx+6]
 * 00000001C0037964: lea     r10d, [rbx+0Bh]
 * 00000001C0037968: test    al, 2
 * 00000001C003796A: jz      loc_1C0037A1E
 * 00000001C0037970: cmp     byte ptr [rdx+29h], 2
 * 00000001C0037974: jb      loc_1C0037A1E
 * 00000001C003797A: test    rdi, rdi
 * 00000001C003797D: jz      short loc_1C0037991
 * 00000001C003797F: mov     r8, rbx
 * 00000001C0037982: inc     r8
 * 00000001C0037985: cmp     byte ptr [rdi+r8], 0
 * 00000001C003798A: jnz     short loc_1C0037982
 * 00000001C003798C: inc     r8
 * 00000001C003798F: jmp     short loc_1C0037994
 * 00000001C0037991: mov     r8, r15
 * 00000001C0037994: test    rdi, rdi
 * 00000001C0037997: mov     r9, rdi
 * 00000001C003799A: cmovz   r9, r13
 * 00000001C003799E: test    rsi, rsi
 * 00000001C00379A1: jz      short loc_1C00379B4
 * 00000001C00379A3: mov     rdx, rbx
 * 00000001C00379A6: inc     rdx
 * 00000001C00379A9: cmp     byte ptr [rsi+rdx], 0
 * 00000001C00379AD: jnz     short loc_1C00379A6
 * 00000001C00379AF: inc     rdx
 * 00000001C00379B2: jmp     short loc_1C00379B7
 * 00000001C00379B4: mov     rdx, r15
 * 00000001C00379B7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00379BE: test    rsi, rsi
 * 00000001C00379C1: mov     rcx, rsi
 * 00000001C00379C4: cmovz   rcx, r13
 * 00000001C00379C8: and     [rsp+78h+var_28], 0
 * 00000001C00379CE: mov     [rsp+78h+var_30], r8
 * 00000001C00379D3: lea     r8, [rsp+78h+arg_30]
 * 00000001C00379DB: mov     [rsp+78h+var_38], r9
 * 00000001C00379E0: mov     r9d, r10d
 * 00000001C00379E3: mov     [rsp+78h+var_40], 4
 * 00000001C00379EC: mov     [rsp+78h+var_48], r8
 * 00000001C00379F1: lea     r8, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C00379F8: mov     [rsp+78h+var_50], rdx
 * 00000001C00379FD: mov     edx, 2Bh ; '+'
 * 00000001C0037A02: mov     [rsp+78h+var_58], rcx
 * 00000001C0037A07: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0037A0E: mov     rcx, [rcx+18h]
 * 00000001C0037A12: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037A18: mov     r10d, 0Ah
 * 00000001C0037A1E: test    rdi, rdi
 * 00000001C0037A21: jz      short loc_1C0037A34
 * 00000001C0037A23: mov     rax, rbx
 * 00000001C0037A26: inc     rax
 * 00000001C0037A29: cmp     byte ptr [rdi+rax], 0
 * 00000001C0037A2D: jnz     short loc_1C0037A26
 * 00000001C0037A2F: inc     rax
 * 00000001C0037A32: jmp     short loc_1C0037A37
 * 00000001C0037A34: mov     rax, r15
 * 00000001C0037A37: test    rdi, rdi
 * 00000001C0037A3A: cmovz   rdi, r13
 * 00000001C0037A3E: test    rsi, rsi
 * 00000001C0037A41: jz      short loc_1C0037A51
 * 00000001C0037A43: inc     rbx
 * 00000001C0037A46: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0037A4A: jnz     short loc_1C0037A43
 * 00000001C0037A4C: inc     rbx
 * 00000001C0037A4F: jmp     short loc_1C0037A54
 * 00000001C0037A51: mov     rbx, r15
 * 00000001C0037A54: test    rsi, rsi
 * 00000001C0037A57: lea     r9, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0037A5E: mov     edx, 2
 * 00000001C0037A63: mov     rcx, rbp
 * 00000001C0037A66: cmovz   rsi, r13
 * 00000001C0037A6A: mov     r8d, edx
 * 00000001C0037A6D: and     [rsp+78h+var_20], 0
 * 00000001C0037A73: mov     [rsp+78h+var_28], rax
 * 00000001C0037A78: lea     rax, [rsp+78h+arg_30]
 * 00000001C0037A80: mov     [rsp+78h+var_30], rdi
 * 00000001C0037A85: mov     [rsp+78h+var_38], 4
 * 00000001C0037A8E: mov     [rsp+78h+var_40], rax
 * 00000001C0037A93: mov     [rsp+78h+var_48], rbx
 * 00000001C0037A98: mov     [rsp+78h+var_50], rsi
 * 00000001C0037A9D: mov     word ptr [rsp+78h+var_58], r10w
 * 00000001C0037AA3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037AAA: nop     dword ptr [rax+rax+00h]
 * 00000001C0037AAF: lea     r11, [rsp+78h+var_18]
 * 00000001C0037AB4: mov     rbx, [r11+20h]
 * 00000001C0037AB8: mov     rbp, [r11+28h]
 * 00000001C0037ABC: mov     rsi, [r11+30h]
 * 00000001C0037AC0: mov     rsp, r11
 * 00000001C0037AC3: pop     r15
 * 00000001C0037AC5: pop     r13
 * 00000001C0037AC7: pop     rdi
 * 00000001C0037AC8: retn
 */
