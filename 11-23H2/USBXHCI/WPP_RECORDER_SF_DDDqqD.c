/*
 * XREFs of WPP_RECORDER_SF_DDDqqD @ 0x1C0047E08
 * Callers:
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqD @ 0x1C0047E08
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047E08
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047E08: mov     r11, rsp
 * 00000001C0047E0B: mov     [r11+8], rbx
 * 00000001C0047E0F: mov     [r11+10h], rsi
 * 00000001C0047E13: mov     [r11+18h], rdi
 * 00000001C0047E17: mov     [r11+20h], r14
 * 00000001C0047E1B: push    rbp
 * 00000001C0047E1C: lea     rbp, [r11-27h]
 * 00000001C0047E20: sub     rsp, 90h
 * 00000001C0047E27: mov     rdi, rcx
 * 00000001C0047E2A: movzx   ebx, r9w
 * 00000001C0047E2E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047E35: mov     esi, 4
 * 00000001C0047E3A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047E41: lea     r14d, [rsi+4]
 * 00000001C0047E45: jz      short loc_1C0047EB8
 * 00000001C0047E47: cmp     [rcx+29h], sil
 * 00000001C0047E4B: jb      short loc_1C0047EB8
 * 00000001C0047E4D: and     qword ptr [r11-18h], 0
 * 00000001C0047E52: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0047E56: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047E5D: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047E64: mov     rcx, [rcx+18h]
 * 00000001C0047E68: mov     r9d, ebx
 * 00000001C0047E6B: mov     [r11-20h], rsi
 * 00000001C0047E6F: mov     [r11-28h], rdx
 * 00000001C0047E73: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0047E77: mov     [r11-30h], r14
 * 00000001C0047E7B: mov     [r11-38h], rdx
 * 00000001C0047E7F: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0047E83: mov     [r11-40h], r14
 * 00000001C0047E87: mov     [r11-48h], rdx
 * 00000001C0047E8B: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0047E8F: mov     [r11-50h], rsi
 * 00000001C0047E93: mov     [r11-58h], rdx
 * 00000001C0047E97: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0047E9B: mov     [r11-60h], rsi
 * 00000001C0047E9F: mov     [r11-68h], rdx
 * 00000001C0047EA3: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0047EA7: mov     [r11-70h], rsi
 * 00000001C0047EAB: mov     [r11-78h], rdx
 * 00000001C0047EAF: lea     edx, [rsi+27h]
 * 00000001C0047EB2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047EB8: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0047EC1: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0047EC5: mov     [rsp+90h+var_10], rsi
 * 00000001C0047ECD: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047ED4: mov     [rsp+90h+var_18], rax
 * 00000001C0047ED9: mov     r8d, 0Eh
 * 00000001C0047EDF: mov     [rsp+90h+var_20], r14
 * 00000001C0047EE4: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0047EE8: mov     [rsp+90h+var_28], rax
 * 00000001C0047EED: mov     edx, esi
 * 00000001C0047EEF: mov     [rsp+90h+var_30], r14
 * 00000001C0047EF4: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0047EF8: mov     [rsp+90h+var_38], rax
 * 00000001C0047EFD: mov     rcx, rdi
 * 00000001C0047F00: mov     [rsp+90h+var_40], rsi
 * 00000001C0047F05: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0047F09: mov     [rsp+90h+var_48], rax
 * 00000001C0047F0E: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0047F12: mov     [rsp+90h+var_50], rsi
 * 00000001C0047F17: mov     [rsp+90h+var_58], rax
 * 00000001C0047F1C: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0047F20: mov     [rsp+90h+var_60], rsi
 * 00000001C0047F25: mov     [rsp+90h+var_68], rax
 * 00000001C0047F2A: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0047F2F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047F36: nop     dword ptr [rax+rax+00h]
 * 00000001C0047F3B: lea     r11, [rsp+90h+var_s0]
 * 00000001C0047F43: mov     rbx, [r11+10h]
 * 00000001C0047F47: mov     rsi, [r11+18h]
 * 00000001C0047F4B: mov     rdi, [r11+20h]
 * 00000001C0047F4F: mov     r14, [r11+28h]
 * 00000001C0047F53: mov     rsp, r11
 * 00000001C0047F56: pop     rbp
 * 00000001C0047F57: retn
 */
