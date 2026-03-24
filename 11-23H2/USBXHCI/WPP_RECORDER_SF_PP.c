/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003EAEC
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E500 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003EAEC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EAEC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EAEC: mov     r11, rsp
 * 00000001C003EAEF: mov     [r11+8], rbx
 * 00000001C003EAF3: mov     [r11+10h], rsi
 * 00000001C003EAF7: push    rdi
 * 00000001C003EAF8: sub     rsp, 50h
 * 00000001C003EAFC: mov     rbx, rcx
 * 00000001C003EAFF: mov     esi, 0Ch
 * 00000001C003EB04: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EB0B: lea     edi, [rsi-4]
 * 00000001C003EB0E: mov     eax, [rcx+2Ch]
 * 00000001C003EB11: test    al, 10h
 * 00000001C003EB13: jz      short loc_1C003EB56
 * 00000001C003EB15: cmp     byte ptr [rcx+29h], 3
 * 00000001C003EB19: jb      short loc_1C003EB56
 * 00000001C003EB1B: and     qword ptr [r11-18h], 0
 * 00000001C003EB20: lea     rdx, [r11+38h]
 * 00000001C003EB24: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003EB2B: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003EB32: mov     rcx, [rcx+18h]
 * 00000001C003EB36: mov     r9d, esi
 * 00000001C003EB39: mov     [r11-20h], rdi
 * 00000001C003EB3D: mov     [r11-28h], rdx
 * 00000001C003EB41: lea     rdx, [r11+30h]
 * 00000001C003EB45: mov     [r11-30h], rdi
 * 00000001C003EB49: mov     [r11-38h], rdx
 * 00000001C003EB4D: lea     edx, [rsi+1Fh]
 * 00000001C003EB50: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003EB56: and     [rsp+58h+var_10], 0
 * 00000001C003EB5C: lea     rax, [rsp+58h+arg_30]
 * 00000001C003EB64: mov     [rsp+58h+var_18], rdi
 * 00000001C003EB69: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003EB70: mov     [rsp+58h+var_20], rax
 * 00000001C003EB75: mov     edx, 3
 * 00000001C003EB7A: lea     rax, [rsp+58h+arg_28]
 * 00000001C003EB82: mov     [rsp+58h+var_28], rdi
 * 00000001C003EB87: mov     [rsp+58h+var_30], rax
 * 00000001C003EB8C: mov     rcx, rbx
 * 00000001C003EB8F: mov     [rsp+58h+var_38], si
 * 00000001C003EB94: lea     r8d, [rdx+2]
 * 00000001C003EB98: call    cs:__imp_WppAutoLogTrace
 * 00000001C003EB9F: nop     dword ptr [rax+rax+00h]
 * 00000001C003EBA4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003EBA9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003EBAE: add     rsp, 50h
 * 00000001C003EBB2: pop     rdi
 * 00000001C003EBB3: retn
 */
