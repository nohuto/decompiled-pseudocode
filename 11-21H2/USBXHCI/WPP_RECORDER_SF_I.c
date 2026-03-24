/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C00156C4
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000C9B4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     Interrupter_UpdateERDP @ 0x1C0014370 (Interrupter_UpdateERDP.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreUsbDevice_Create @ 0x1C0016294 (XilCoreUsbDevice_Create.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00164C4 (XilCoreDeviceSlot_AllocateResources.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C00309D0 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0032770 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034C90 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C0034E10 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034EA0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0035010 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00350A0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0039D00 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003BDEC (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C004FA40 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C004FAA0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C004FB00 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C004FB60 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050B4C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C0FC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     IoControl_Create @ 0x1C006CCFC (IoControl_Create.c)
 *     Command_Create @ 0x1C006D3CC (Command_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006DE50 (Controller_PopulateHardwareVerifierFlags.c)
 *     DmaEnabler_Create @ 0x1C006E4E0 (DmaEnabler_Create.c)
 *     CommonBuffer_Create @ 0x1C006E6D0 (CommonBuffer_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006FFE0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 *     Register_Create @ 0x1C0071450 (Register_Create.c)
 *     DeviceSlot_Create @ 0x1C0071574 (DeviceSlot_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0075F10 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0077140 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0077340 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     IntelPptFilter_Create @ 0x1C00781D4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C0078584 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C0078A68 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C00156C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00156C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00156C4: mov     [rsp+arg_0], rbx
 * 00000001C00156C9: mov     [rsp+arg_8], rbp
 * 00000001C00156CE: mov     [rsp+arg_10], rsi
 * 00000001C00156D3: push    rdi
 * 00000001C00156D4: push    r14
 * 00000001C00156D6: push    r15
 * 00000001C00156D8: sub     rsp, 40h
 * 00000001C00156DC: mov     r14d, r8d
 * 00000001C00156DF: mov     r15, rcx
 * 00000001C00156E2: mov     edi, r8d
 * 00000001C00156E5: shr     rdi, 10h
 * 00000001C00156E9: movzx   esi, dl
 * 00000001C00156EC: lea     ebx, [r14-1]
 * 00000001C00156F0: movzx   ebp, r9w
 * 00000001C00156F4: mov     r10d, ebx
 * 00000001C00156F7: and     ebx, 1Fh
 * 00000001C00156FA: shr     r10, 5
 * 00000001C00156FE: lea     rax, [rdi+rdi*4]
 * 00000001C0015702: and     r10d, 7FFh
 * 00000001C0015709: mov     edx, ebx
 * 00000001C001570B: mov     ebx, 8
 * 00000001C0015710: lea     r11, [r10+rax*4]
 * 00000001C0015714: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001571B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0015720: bt      eax, edx
 * 00000001C0015723: jb      loc_1C001E460
 * 00000001C0015729: and     [rsp+58h+var_20], 0
 * 00000001C001572F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0015737: mov     r9, [rsp+58h+arg_20]
 * 00000001C001573F: mov     r8d, r14d
 * 00000001C0015742: mov     [rsp+58h+var_28], rbx
 * 00000001C0015747: mov     edx, esi
 * 00000001C0015749: mov     [rsp+58h+var_30], rax
 * 00000001C001574E: mov     rcx, r15
 * 00000001C0015751: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0015756: call    cs:__imp_WppAutoLogTrace
 * 00000001C001575D: nop     dword ptr [rax+rax+00h]
 * 00000001C0015762: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0015767: mov     rbp, [rsp+58h+arg_8]
 * 00000001C001576C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0015771: add     rsp, 40h
 * 00000001C0015775: pop     r15
 * 00000001C0015777: pop     r14
 * 00000001C0015779: pop     rdi
 * 00000001C001577A: retn
 * 00000001C001E460: lea     rcx, [rdi+rdi*4]
 * 00000001C001E464: add     rcx, rcx
 * 00000001C001E467: cmp     [r10+rcx*8+29h], sil
 * 00000001C001E46C: jb      loc_1C0015729
 * 00000001C001E472: and     [rsp+58h+var_28], 0
 * 00000001C001E478: lea     rdx, [rsp+58h+arg_28]
 * 00000001C001E480: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001E487: mov     r9d, ebp
 * 00000001C001E48A: mov     r8, [rsp+58h+arg_20]
 * 00000001C001E492: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001E497: mov     [rsp+58h+var_30], rbx
 * 00000001C001E49C: mov     [rsp+58h+var_38], rdx
 * 00000001C001E4A1: mov     edx, 2Bh ; '+'
 * 00000001C001E4A6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001E4AC: nop
 * 00000001C001E4AD: jmp     loc_1C0015729
 */
