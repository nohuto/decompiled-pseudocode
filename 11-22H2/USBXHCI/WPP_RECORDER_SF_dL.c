/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003EB54
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E3C0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003EB54
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EB54
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EB54: mov     r11, rsp
 * 00000001C003EB57: mov     [r11+8], rbx
 * 00000001C003EB5B: mov     [r11+10h], rsi
 * 00000001C003EB5F: push    rdi
 * 00000001C003EB60: sub     rsp, 50h
 * 00000001C003EB64: mov     rbx, rcx
 * 00000001C003EB67: mov     esi, 0Eh
 * 00000001C003EB6C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EB73: lea     edi, [rsi-0Ah]
 * 00000001C003EB76: mov     eax, [rcx+2Ch]
 * 00000001C003EB79: test    al, 10h
 * 00000001C003EB7B: jz      short loc_1C003EBBE
 * 00000001C003EB7D: cmp     byte ptr [rcx+29h], 3
 * 00000001C003EB81: jb      short loc_1C003EBBE
 * 00000001C003EB83: and     qword ptr [r11-18h], 0
 * 00000001C003EB88: lea     rdx, [r11+38h]
 * 00000001C003EB8C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003EB93: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003EB9A: mov     rcx, [rcx+18h]
 * 00000001C003EB9E: mov     r9d, esi
 * 00000001C003EBA1: mov     [r11-20h], rdi
 * 00000001C003EBA5: mov     [r11-28h], rdx
 * 00000001C003EBA9: lea     rdx, [r11+30h]
 * 00000001C003EBAD: mov     [r11-30h], rdi
 * 00000001C003EBB1: mov     [r11-38h], rdx
 * 00000001C003EBB5: lea     edx, [rsi+1Dh]
 * 00000001C003EBB8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003EBBE: and     [rsp+58h+var_10], 0
 * 00000001C003EBC4: lea     rax, [rsp+58h+arg_30]
 * 00000001C003EBCC: mov     [rsp+58h+var_18], rdi
 * 00000001C003EBD1: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003EBD8: mov     [rsp+58h+var_20], rax
 * 00000001C003EBDD: mov     edx, 3
 * 00000001C003EBE2: lea     rax, [rsp+58h+arg_28]
 * 00000001C003EBEA: mov     [rsp+58h+var_28], rdi
 * 00000001C003EBEF: mov     [rsp+58h+var_30], rax
 * 00000001C003EBF4: mov     rcx, rbx
 * 00000001C003EBF7: mov     [rsp+58h+var_38], si
 * 00000001C003EBFC: lea     r8d, [rdx+2]
 * 00000001C003EC00: call    cs:__imp_WppAutoLogTrace
 * 00000001C003EC07: nop     dword ptr [rax+rax+00h]
 * 00000001C003EC0C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003EC11: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003EC16: add     rsp, 50h
 * 00000001C003EC1A: pop     rdi
 * 00000001C003EC1B: retn
 */
