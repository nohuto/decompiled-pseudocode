/*
 * XREFs of WPP_RECORDER_SF_DDDqdD @ 0x1C0011D3C
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0011B14 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqdD @ 0x1C0011D3C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011D3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011D3C: mov     rax, rsp
 * 00000001C0011D3F: mov     [rax+8], rbx
 * 00000001C0011D43: mov     [rax+10h], rdi
 * 00000001C0011D47: mov     [rax+18h], r14
 * 00000001C0011D4B: push    rbp
 * 00000001C0011D4C: lea     rbp, [rax-27h]
 * 00000001C0011D50: sub     rsp, 90h
 * 00000001C0011D57: mov     rbx, rcx
 * 00000001C0011D5A: mov     edi, 4
 * 00000001C0011D5F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011D66: lea     r14d, [rdi+25h]
 * 00000001C0011D6A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0011D71: jnz     loc_1C0024E38
 * 00000001C0011D77: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0011D80: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0011D84: mov     [rsp+90h+var_10], rdi
 * 00000001C0011D8C: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0011D93: mov     [rsp+90h+var_18], rax
 * 00000001C0011D98: mov     r8d, 0Eh
 * 00000001C0011D9E: mov     [rsp+90h+var_20], rdi
 * 00000001C0011DA3: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0011DA7: mov     [rsp+90h+var_28], rax
 * 00000001C0011DAC: mov     edx, edi
 * 00000001C0011DAE: mov     [rsp+90h+var_30], 8
 * 00000001C0011DB7: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0011DBB: mov     [rsp+90h+var_38], rax
 * 00000001C0011DC0: mov     rcx, rbx
 * 00000001C0011DC3: mov     [rsp+90h+var_40], rdi
 * 00000001C0011DC8: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0011DCC: mov     [rsp+90h+var_48], rax
 * 00000001C0011DD1: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0011DD5: mov     [rsp+90h+var_50], rdi
 * 00000001C0011DDA: mov     [rsp+90h+var_58], rax
 * 00000001C0011DDF: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0011DE3: mov     [rsp+90h+var_60], rdi
 * 00000001C0011DE8: mov     [rsp+90h+var_68], rax
 * 00000001C0011DED: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0011DF3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011DFA: nop     dword ptr [rax+rax+00h]
 * 00000001C0011DFF: lea     r11, [rsp+90h+var_s0]
 * 00000001C0011E07: mov     rbx, [r11+10h]
 * 00000001C0011E0B: mov     rdi, [r11+18h]
 * 00000001C0011E0F: mov     r14, [r11+20h]
 * 00000001C0011E13: mov     rsp, r11
 * 00000001C0011E16: pop     rbp
 * 00000001C0011E17: retn
 * 00000001C0024E38: cmp     [rcx+29h], dil
 * 00000001C0024E3C: jb      loc_1C0011D77
 * 00000001C0024E42: and     [rsp+90h+var_10], 0
 * 00000001C0024E4B: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0024E4F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024E56: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024E5D: mov     rcx, [rcx+18h]
 * 00000001C0024E61: mov     r9d, r14d
 * 00000001C0024E64: mov     [rsp+90h+var_18], rdi
 * 00000001C0024E69: mov     [rsp+90h+var_20], rdx
 * 00000001C0024E6E: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0024E72: mov     [rsp+90h+var_28], rdi
 * 00000001C0024E77: mov     [rsp+90h+var_30], rdx
 * 00000001C0024E7C: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0024E80: mov     [rsp+90h+var_38], 8
 * 00000001C0024E89: mov     [rsp+90h+var_40], rdx
 * 00000001C0024E8E: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0024E92: mov     [rsp+90h+var_48], rdi
 * 00000001C0024E97: mov     [rsp+90h+var_50], rdx
 * 00000001C0024E9C: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0024EA0: mov     [rsp+90h+var_58], rdi
 * 00000001C0024EA5: mov     [rsp+90h+var_60], rdx
 * 00000001C0024EAA: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0024EAE: mov     [rsp+90h+var_68], rdi
 * 00000001C0024EB3: mov     [rsp+90h+var_70], rdx
 * 00000001C0024EB8: mov     edx, 2Bh ; '+'
 * 00000001C0024EBD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024EC3: nop
 * 00000001C0024EC4: jmp     loc_1C0011D77
 */
