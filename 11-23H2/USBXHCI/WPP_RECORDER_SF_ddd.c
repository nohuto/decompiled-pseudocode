/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C0040E70
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015630 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDd @ 0x1C0040E70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040E70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040E70: mov     r11, rsp
 * 00000001C0040E73: mov     [r11+8], rbx
 * 00000001C0040E77: mov     [r11+10h], rsi
 * 00000001C0040E7B: push    rdi
 * 00000001C0040E7C: sub     rsp, 60h
 * 00000001C0040E80: mov     rbx, rcx
 * 00000001C0040E83: mov     esi, 0CEh
 * 00000001C0040E88: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040E8F: mov     edi, 4
 * 00000001C0040E94: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0040E9B: jz      short loc_1C0040EEA
 * 00000001C0040E9D: cmp     byte ptr [rcx+29h], 3
 * 00000001C0040EA1: jb      short loc_1C0040EEA
 * 00000001C0040EA3: and     qword ptr [r11-18h], 0
 * 00000001C0040EA8: lea     rdx, [r11+40h]
 * 00000001C0040EAC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0040EB3: lea     r8, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040EBA: mov     rcx, [rcx+18h]
 * 00000001C0040EBE: mov     r9d, esi
 * 00000001C0040EC1: mov     [r11-20h], rdi
 * 00000001C0040EC5: mov     [r11-28h], rdx
 * 00000001C0040EC9: lea     rdx, [r11+38h]
 * 00000001C0040ECD: mov     [r11-30h], rdi
 * 00000001C0040ED1: mov     [r11-38h], rdx
 * 00000001C0040ED5: lea     rdx, [r11+30h]
 * 00000001C0040ED9: mov     [r11-40h], rdi
 * 00000001C0040EDD: mov     [r11-48h], rdx
 * 00000001C0040EE1: lea     edx, [rdi+27h]
 * 00000001C0040EE4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040EEA: and     [rsp+68h+var_10], 0
 * 00000001C0040EF0: lea     rax, [rsp+68h+arg_38]
 * 00000001C0040EF8: mov     [rsp+68h+var_18], rdi
 * 00000001C0040EFD: lea     r9, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040F04: mov     [rsp+68h+var_20], rax
 * 00000001C0040F09: mov     edx, 3
 * 00000001C0040F0E: mov     [rsp+68h+var_28], rdi
 * 00000001C0040F13: lea     rax, [rsp+68h+arg_30]
 * 00000001C0040F1B: mov     [rsp+68h+var_30], rax
 * 00000001C0040F20: mov     rcx, rbx
 * 00000001C0040F23: lea     rax, [rsp+68h+arg_28]
 * 00000001C0040F2B: mov     [rsp+68h+var_38], rdi
 * 00000001C0040F30: mov     [rsp+68h+var_40], rax
 * 00000001C0040F35: lea     r8d, [rdx+8]
 * 00000001C0040F39: mov     [rsp+68h+var_48], si
 * 00000001C0040F3E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040F45: nop     dword ptr [rax+rax+00h]
 * 00000001C0040F4A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0040F4F: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0040F54: add     rsp, 60h
 * 00000001C0040F58: pop     rdi
 * 00000001C0040F59: retn
 */
