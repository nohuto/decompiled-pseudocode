/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0006E60
 * Callers:
 *     MouseClassClose @ 0x1C0001B00 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001C70 (MouseClassCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0006E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006E60: mov     r11, rsp
 * 00000001C0006E63: mov     [r11+8], rbx
 * 00000001C0006E67: mov     [r11+10h], rbp
 * 00000001C0006E6B: push    rdi
 * 00000001C0006E6C: sub     rsp, 60h
 * 00000001C0006E70: mov     rdi, rcx
 * 00000001C0006E73: movzx   ebx, r9w
 * 00000001C0006E77: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006E7E: mov     ebp, 8
 * 00000001C0006E83: mov     eax, [rcx+2Ch]
 * 00000001C0006E86: test    al, 2
 * 00000001C0006E88: jz      short loc_1C0006ED7
 * 00000001C0006E8A: cmp     byte ptr [rcx+29h], 2
 * 00000001C0006E8E: jb      short loc_1C0006ED7
 * 00000001C0006E90: and     qword ptr [r11-18h], 0
 * 00000001C0006E95: lea     rdx, [r11+40h]
 * 00000001C0006E99: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006EA0: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006EA7: mov     rcx, [rcx+18h]
 * 00000001C0006EAB: mov     r9d, ebx
 * 00000001C0006EAE: mov     [r11-20h], rbp
 * 00000001C0006EB2: mov     [r11-28h], rdx
 * 00000001C0006EB6: lea     rdx, [r11+38h]
 * 00000001C0006EBA: mov     [r11-30h], rbp
 * 00000001C0006EBE: mov     [r11-38h], rdx
 * 00000001C0006EC2: lea     rdx, [r11+30h]
 * 00000001C0006EC6: mov     [r11-40h], rbp
 * 00000001C0006ECA: mov     [r11-48h], rdx
 * 00000001C0006ECE: lea     edx, [rbp+23h]
 * 00000001C0006ED1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006ED7: and     [rsp+68h+var_10], 0
 * 00000001C0006EDD: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006EE5: mov     [rsp+68h+var_18], rbp
 * 00000001C0006EEA: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006EF1: mov     [rsp+68h+var_20], rax
 * 00000001C0006EF6: mov     edx, 2
 * 00000001C0006EFB: mov     [rsp+68h+var_28], rbp
 * 00000001C0006F00: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006F08: mov     [rsp+68h+var_30], rax
 * 00000001C0006F0D: mov     r8d, edx
 * 00000001C0006F10: lea     rax, [rsp+68h+arg_28]
 * 00000001C0006F18: mov     [rsp+68h+var_38], rbp
 * 00000001C0006F1D: mov     [rsp+68h+var_40], rax
 * 00000001C0006F22: mov     rcx, rdi
 * 00000001C0006F25: mov     [rsp+68h+var_48], bx
 * 00000001C0006F2A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006F31: nop     dword ptr [rax+rax+00h]
 * 00000001C0006F36: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0006F3B: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0006F40: add     rsp, 60h
 * 00000001C0006F44: pop     rdi
 * 00000001C0006F45: retn
 */
