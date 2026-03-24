/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00142CC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000F53C (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     XilCoreUsbDevice_Create @ 0x1C001BA28 (XilCoreUsbDevice_Create.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001C9FC (XilCoreDeviceSlot_AllocateResources.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C00323C0 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0034300 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035660 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035BA0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036270 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00366C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C0036840 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C00368D0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0036A40 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0036AD0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003BA74 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C0051CA0 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C0051D00 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C0051D60 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C0051DC0 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0052DA8 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E400 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     IoControl_Create @ 0x1C006F910 (IoControl_Create.c)
 *     Register_Create @ 0x1C006FE40 (Register_Create.c)
 *     Command_Create @ 0x1C006FF64 (Command_Create.c)
 *     DeviceSlot_Create @ 0x1C0070454 (DeviceSlot_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070FD0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F2C (CommonBuffer_Create.c)
 *     DmaEnabler_Create @ 0x1C0073140 (DmaEnabler_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0078248 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C00796C0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     IntelPptFilter_Create @ 0x1C007A544 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C007A8F4 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C007ADD8 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00142CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00142CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00142CC: mov     [rsp+arg_0], rbx
 * 00000001C00142D1: mov     [rsp+arg_8], rbp
 * 00000001C00142D6: mov     [rsp+arg_10], rsi
 * 00000001C00142DB: push    rdi
 * 00000001C00142DC: push    r14
 * 00000001C00142DE: push    r15
 * 00000001C00142E0: sub     rsp, 40h
 * 00000001C00142E4: mov     r14d, r8d
 * 00000001C00142E7: mov     r15, rcx
 * 00000001C00142EA: mov     edi, r8d
 * 00000001C00142ED: shr     rdi, 10h
 * 00000001C00142F1: movzx   esi, dl
 * 00000001C00142F4: lea     ebx, [r14-1]
 * 00000001C00142F8: movzx   ebp, r9w
 * 00000001C00142FC: mov     r10d, ebx
 * 00000001C00142FF: and     ebx, 1Fh
 * 00000001C0014302: shr     r10, 5
 * 00000001C0014306: lea     rax, [rdi+rdi*4]
 * 00000001C001430A: and     r10d, 7FFh
 * 00000001C0014311: mov     edx, ebx
 * 00000001C0014313: mov     ebx, 8
 * 00000001C0014318: lea     r11, [r10+rax*4]
 * 00000001C001431C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0014323: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014328: bt      eax, edx
 * 00000001C001432B: jb      loc_1C00278CC
 * 00000001C0014331: and     [rsp+58h+var_20], 0
 * 00000001C0014337: lea     rax, [rsp+58h+arg_28]
 * 00000001C001433F: mov     r9, [rsp+58h+arg_20]
 * 00000001C0014347: mov     r8d, r14d
 * 00000001C001434A: mov     [rsp+58h+var_28], rbx
 * 00000001C001434F: mov     edx, esi
 * 00000001C0014351: mov     [rsp+58h+var_30], rax
 * 00000001C0014356: mov     rcx, r15
 * 00000001C0014359: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C001435E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0014365: nop     dword ptr [rax+rax+00h]
 * 00000001C001436A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001436F: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0014374: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0014379: add     rsp, 40h
 * 00000001C001437D: pop     r15
 * 00000001C001437F: pop     r14
 * 00000001C0014381: pop     rdi
 * 00000001C0014382: retn
 * 00000001C00278CC: lea     rcx, [rdi+rdi*4]
 * 00000001C00278D0: add     rcx, rcx
 * 00000001C00278D3: cmp     [r10+rcx*8+29h], sil
 * 00000001C00278D8: jb      loc_1C0014331
 * 00000001C00278DE: and     [rsp+58h+var_28], 0
 * 00000001C00278E4: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00278EC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00278F3: mov     r9d, ebp
 * 00000001C00278F6: mov     r8, [rsp+58h+arg_20]
 * 00000001C00278FE: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0027903: mov     [rsp+58h+var_30], rbx
 * 00000001C0027908: mov     [rsp+58h+var_38], rdx
 * 00000001C002790D: mov     edx, 2Bh ; '+'
 * 00000001C0027912: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0027918: nop
 * 00000001C0027919: jmp     loc_1C0014331
 */
