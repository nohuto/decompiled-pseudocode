/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0004370 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0004610 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x1C0004AB0 (USBType1StateChangePin.c)
 *     DeviceCreate @ 0x1C0006D80 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBType1ChangePowerState @ 0x1C000A9A0 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x1C000B0D0 (USBCaptureChangePowerState.c)
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 *     DeviceStop @ 0x1C002AA30 (DeviceStop.c)
 *     PinGoToFullPowerState @ 0x1C002C310 (PinGoToFullPowerState.c)
 *     PinGoToLowPowerState @ 0x1C002C490 (PinGoToLowPowerState.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureStartTransfers @ 0x1C0036F98 (USBCaptureStartTransfers.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 *     PinSetDataFormat @ 0x1C0038CE0 (PinSetDataFormat.c)
 *     USBType1RenderCreatePin @ 0x1C0039350 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x1C003B270 (USBCaptureCreatePin.c)
 *     PinCreate @ 0x1C003DF00 (PinCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005144
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005144: mov     [rsp+arg_0], rbx
 * 00000001C0005149: mov     [rsp+arg_8], rsi
 * 00000001C000514E: push    rdi
 * 00000001C000514F: sub     rsp, 50h
 * 00000001C0005153: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C000515B: mov     rsi, r9
 * 00000001C000515E: mov     dil, r8b
 * 00000001C0005161: test    dl, dl
 * 00000001C0005163: jnz     short loc_1C00051D3
 * 00000001C0005165: test    dil, dil
 * 00000001C0005168: jz      short loc_1C00051C2
 * 00000001C000516A: and     [rsp+58h+var_10], 0
 * 00000001C0005170: lea     rax, [rsp+58h+arg_48]
 * 00000001C0005178: mov     r9, [rsp+58h+arg_38]
 * 00000001C0005180: xor     edx, edx
 * 00000001C0005182: mov     r8d, [rsp+58h+arg_28]
 * 00000001C000518A: mov     rcx, rsi
 * 00000001C000518D: mov     [rsp+58h+var_18], 4
 * 00000001C0005196: mov     [rsp+58h+var_20], rax
 * 00000001C000519B: lea     rax, [rsp+58h+arg_40]
 * 00000001C00051A3: mov     [rsp+58h+var_28], 8
 * 00000001C00051AC: mov     [rsp+58h+var_30], rax
 * 00000001C00051B1: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C00051B6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00051BD: nop     dword ptr [rax+rax+00h]
 * 00000001C00051C2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00051C7: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00051CC: add     rsp, 50h
 * 00000001C00051D0: pop     rdi
 * 00000001C00051D1: retn
 * 00000001C00051D3: and     [rsp+58h+var_18], 0
 * 00000001C00051D9: lea     rdx, [rsp+58h+arg_48]
 * 00000001C00051E1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00051E8: mov     r9d, ebx
 * 00000001C00051EB: mov     r8, [rsp+58h+arg_38]
 * 00000001C00051F3: mov     [rsp+58h+var_20], 4
 * 00000001C00051FC: mov     [rsp+58h+var_28], rdx
 * 00000001C0005201: lea     rdx, [rsp+58h+arg_40]
 * 00000001C0005209: mov     [rsp+58h+var_30], 8
 * 00000001C0005212: mov     [rsp+58h+var_38], rdx
 * 00000001C0005217: mov     edx, 2Bh ; '+'
 * 00000001C000521C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005222: jmp     loc_1C0005165
 */
