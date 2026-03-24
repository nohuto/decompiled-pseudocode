/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C001431C
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0005010 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000F56C (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x1C00195B0 (UsbDevice_EnableCompletion.c)
 *     XilCoreUsbDevice_Create @ 0x1C001BA78 (XilCoreUsbDevice_Create.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C390 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001CA4C (XilCoreDeviceSlot_AllocateResources.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0032280 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C00341C0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035520 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036130 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036580 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C0036700 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036790 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0036900 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0036990 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003B934 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C0051B60 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C0051BC0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C0051C20 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C0051C80 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0052C68 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E440 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     IoControl_Create @ 0x1C006F950 (IoControl_Create.c)
 *     Register_Create @ 0x1C006FE80 (Register_Create.c)
 *     Command_Create @ 0x1C006FFA4 (Command_Create.c)
 *     DeviceSlot_Create @ 0x1C0070494 (DeviceSlot_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0071010 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071BC8 (Register_ParseCapabilityRegister.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A70 (Controller_WdfEvtDevicePrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F6C (CommonBuffer_Create.c)
 *     DmaEnabler_Create @ 0x1C0073180 (DmaEnabler_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0078288 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C00794C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0079700 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     IntelPptFilter_Create @ 0x1C007A584 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C007A934 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C007AE18 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C001431C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001431C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001431C: mov     [rsp+arg_0], rbx
 * 00000001C0014321: mov     [rsp+arg_8], rbp
 * 00000001C0014326: mov     [rsp+arg_10], rsi
 * 00000001C001432B: push    rdi
 * 00000001C001432C: push    r14
 * 00000001C001432E: push    r15
 * 00000001C0014330: sub     rsp, 40h
 * 00000001C0014334: mov     r14d, r8d
 * 00000001C0014337: mov     r15, rcx
 * 00000001C001433A: mov     edi, r8d
 * 00000001C001433D: shr     rdi, 10h
 * 00000001C0014341: movzx   esi, dl
 * 00000001C0014344: lea     ebx, [r14-1]
 * 00000001C0014348: movzx   ebp, r9w
 * 00000001C001434C: mov     r10d, ebx
 * 00000001C001434F: and     ebx, 1Fh
 * 00000001C0014352: shr     r10, 5
 * 00000001C0014356: lea     rax, [rdi+rdi*4]
 * 00000001C001435A: and     r10d, 7FFh
 * 00000001C0014361: mov     edx, ebx
 * 00000001C0014363: mov     ebx, 8
 * 00000001C0014368: lea     r11, [r10+rax*4]
 * 00000001C001436C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0014373: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014378: bt      eax, edx
 * 00000001C001437B: jb      loc_1C002778C
 * 00000001C0014381: and     [rsp+58h+var_20], 0
 * 00000001C0014387: lea     rax, [rsp+58h+arg_28]
 * 00000001C001438F: mov     r9, [rsp+58h+arg_20]
 * 00000001C0014397: mov     r8d, r14d
 * 00000001C001439A: mov     [rsp+58h+var_28], rbx
 * 00000001C001439F: mov     edx, esi
 * 00000001C00143A1: mov     [rsp+58h+var_30], rax
 * 00000001C00143A6: mov     rcx, r15
 * 00000001C00143A9: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00143AE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00143B5: nop     dword ptr [rax+rax+00h]
 * 00000001C00143BA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00143BF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00143C4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00143C9: add     rsp, 40h
 * 00000001C00143CD: pop     r15
 * 00000001C00143CF: pop     r14
 * 00000001C00143D1: pop     rdi
 * 00000001C00143D2: retn
 * 00000001C002778C: lea     rcx, [rdi+rdi*4]
 * 00000001C0027790: add     rcx, rcx
 * 00000001C0027793: cmp     [r10+rcx*8+29h], sil
 * 00000001C0027798: jb      loc_1C0014381
 * 00000001C002779E: and     [rsp+58h+var_28], 0
 * 00000001C00277A4: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00277AC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00277B3: mov     r9d, ebp
 * 00000001C00277B6: mov     r8, [rsp+58h+arg_20]
 * 00000001C00277BE: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00277C3: mov     [rsp+58h+var_30], rbx
 * 00000001C00277C8: mov     [rsp+58h+var_38], rdx
 * 00000001C00277CD: mov     edx, 2Bh ; '+'
 * 00000001C00277D2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00277D8: nop
 * 00000001C00277D9: jmp     loc_1C0014381
 */
