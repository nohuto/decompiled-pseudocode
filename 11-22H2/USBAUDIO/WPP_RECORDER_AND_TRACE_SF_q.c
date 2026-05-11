/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84
 * Callers:
 *     USBCaptureProcessPin @ 0x1C00032E0 (USBCaptureProcessPin.c)
 *     DeviceCreate @ 0x1C0006D80 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceRemove @ 0x1C0009780 (DeviceRemove.c)
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 *     DeviceStop @ 0x1C002AA30 (DeviceStop.c)
 *     USBType1RenderClosePin @ 0x1C0036BD0 (USBType1RenderClosePin.c)
 *     USBType1SurpriseRemove @ 0x1C0036D00 (USBType1SurpriseRemove.c)
 *     USBCaptureClosePin @ 0x1C0036DA0 (USBCaptureClosePin.c)
 *     PinProcess @ 0x1C0037DE0 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x1C0039350 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x1C003B270 (USBCaptureCreatePin.c)
 *     PinClose @ 0x1C003BDA0 (PinClose.c)
 *     DeviceSurpriseRemoval @ 0x1C003C780 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1C003DF00 (PinCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009A84
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009A84: mov     r11, rsp
 * 00000001C0009A87: mov     [r11+8], rbx
 * 00000001C0009A8B: mov     [r11+10h], rsi
 * 00000001C0009A8F: push    rdi
 * 00000001C0009A90: sub     rsp, 40h
 * 00000001C0009A94: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C0009A9C: mov     rsi, r9
 * 00000001C0009A9F: mov     dil, r8b
 * 00000001C0009AA2: test    dl, dl
 * 00000001C0009AA4: jz      short loc_1C0009AD8
 * 00000001C0009AA6: and     qword ptr [r11-18h], 0
 * 00000001C0009AAB: lea     rdx, [r11+48h]
 * 00000001C0009AAF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009AB6: mov     r9d, ebx
 * 00000001C0009AB9: mov     r8, [rsp+48h+arg_38]
 * 00000001C0009AC1: mov     qword ptr [r11-20h], 8
 * 00000001C0009AC9: mov     [r11-28h], rdx
 * 00000001C0009ACD: mov     edx, 2Bh ; '+'
 * 00000001C0009AD2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009AD8: test    dil, dil
 * 00000001C0009ADB: jz      short loc_1C0009B1C
 * 00000001C0009ADD: and     [rsp+48h+var_10], 0
 * 00000001C0009AE3: lea     rax, [rsp+48h+arg_40]
 * 00000001C0009AEB: mov     r9, [rsp+48h+arg_38]
 * 00000001C0009AF3: xor     edx, edx
 * 00000001C0009AF5: mov     r8d, [rsp+48h+arg_28]
 * 00000001C0009AFA: mov     rcx, rsi
 * 00000001C0009AFD: mov     [rsp+48h+var_18], 8
 * 00000001C0009B06: mov     [rsp+48h+var_20], rax
 * 00000001C0009B0B: mov     [rsp+48h+var_28], bx
 * 00000001C0009B10: call    cs:__imp_WppAutoLogTrace
 * 00000001C0009B17: nop     dword ptr [rax+rax+00h]
 * 00000001C0009B1C: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0009B21: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0009B26: add     rsp, 40h
 * 00000001C0009B2A: pop     rdi
 * 00000001C0009B2B: retn
 */
