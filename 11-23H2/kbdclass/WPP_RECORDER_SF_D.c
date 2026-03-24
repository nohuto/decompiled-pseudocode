/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0002E40
 * Callers:
 *     KeyboardAddDevice @ 0x1C000D940 (KeyboardAddDevice.c)
 *     KbdDeterminePortsServiced @ 0x1C000E370 (KbdDeterminePortsServiced.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C0011560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0002E40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002E40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002E40: mov     [rsp+arg_0], rbx
 * 00000001C0002E45: mov     [rsp+arg_8], rsi
 * 00000001C0002E4A: push    rdi
 * 00000001C0002E4B: sub     rsp, 40h
 * 00000001C0002E4F: mov     rsi, rcx
 * 00000001C0002E52: movzx   edi, r9w
 * 00000001C0002E56: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002E5D: movzx   ebx, dl
 * 00000001C0002E60: mov     eax, [rcx+2Ch]
 * 00000001C0002E63: test    al, 1
 * 00000001C0002E65: jnz     loc_1C00045A2
 * 00000001C0002E6B: mov     [rsp+48h+var_10], 0
 * 00000001C0002E74: lea     rax, [rsp+48h+arg_28]
 * 00000001C0002E79: mov     [rsp+48h+var_18], 4
 * 00000001C0002E82: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0002E89: mov     [rsp+48h+var_20], rax
 * 00000001C0002E8E: mov     r8d, 1
 * 00000001C0002E94: mov     edx, ebx
 * 00000001C0002E96: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0002E9B: mov     rcx, rsi
 * 00000001C0002E9E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002EA5: nop     dword ptr [rax+rax+00h]
 * 00000001C0002EAA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0002EAF: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0002EB4: add     rsp, 40h
 * 00000001C0002EB8: pop     rdi
 * 00000001C0002EB9: retn
 * 00000001C00045A2: cmp     [rcx+29h], bl
 * 00000001C00045A5: jb      loc_1C0002E6B
 * 00000001C00045AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00045B2: lea     rdx, [rsp+48h+arg_28]
 * 00000001C00045B7: mov     rcx, [rcx+18h]
 * 00000001C00045BB: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00045C2: mov     [rsp+48h+var_18], 0
 * 00000001C00045CB: mov     r9d, edi
 * 00000001C00045CE: mov     [rsp+48h+var_20], 4
 * 00000001C00045D7: mov     [rsp+48h+var_28], rdx
 * 00000001C00045DC: mov     edx, 2Bh ; '+'
 * 00000001C00045E1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00045E7: nop
 * 00000001C00045E8: jmp     loc_1C0002E6B
 */
