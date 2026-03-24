/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C005EA78
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C009CE30 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C005EA78
 * Reason: Hex-Rays returned no pseudocode for 0x1C005EA78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005EA78: mov     r11, rsp
 * 00000001C005EA7B: mov     [r11+8], rbx
 * 00000001C005EA7F: push    rdi
 * 00000001C005EA80: sub     rsp, 50h
 * 00000001C005EA84: mov     rdi, rcx
 * 00000001C005EA87: movzx   ebx, r9w
 * 00000001C005EA8B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005EA92: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C005EA99: jz      short loc_1C005EAE6
 * 00000001C005EA9B: cmp     byte ptr [rcx+29h], 4
 * 00000001C005EA9F: jb      short loc_1C005EAE6
 * 00000001C005EAA1: and     qword ptr [r11-18h], 0
 * 00000001C005EAA6: lea     rdx, [r11+38h]
 * 00000001C005EAAA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005EAB1: lea     r8, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005EAB8: mov     rcx, [rcx+18h]
 * 00000001C005EABC: mov     r9d, ebx
 * 00000001C005EABF: mov     qword ptr [r11-20h], 8
 * 00000001C005EAC7: mov     [r11-28h], rdx
 * 00000001C005EACB: lea     rdx, [r11+30h]
 * 00000001C005EACF: mov     qword ptr [r11-30h], 4
 * 00000001C005EAD7: mov     [r11-38h], rdx
 * 00000001C005EADB: mov     edx, 2Bh ; '+'
 * 00000001C005EAE0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005EAE6: and     [rsp+58h+var_10], 0
 * 00000001C005EAEC: lea     rax, [rsp+58h+arg_30]
 * 00000001C005EAF4: mov     [rsp+58h+var_18], 8
 * 00000001C005EAFD: lea     r9, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005EB04: mov     [rsp+58h+var_20], rax
 * 00000001C005EB09: mov     edx, 4
 * 00000001C005EB0E: lea     rax, [rsp+58h+arg_28]
 * 00000001C005EB16: mov     [rsp+58h+var_28], 4
 * 00000001C005EB1F: mov     [rsp+58h+var_30], rax
 * 00000001C005EB24: mov     rcx, rdi
 * 00000001C005EB27: mov     [rsp+58h+var_38], bx
 * 00000001C005EB2C: lea     r8d, [rdx+10h]
 * 00000001C005EB30: call    cs:__imp_WppAutoLogTrace
 * 00000001C005EB37: nop     dword ptr [rax+rax+00h]
 * 00000001C005EB3C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005EB41: add     rsp, 50h
 * 00000001C005EB45: pop     rdi
 * 00000001C005EB46: retn
 */
