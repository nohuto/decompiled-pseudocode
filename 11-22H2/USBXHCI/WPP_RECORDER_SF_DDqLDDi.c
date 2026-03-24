/*
 * XREFs of WPP_RECORDER_SF_DDqLDDi @ 0x1C0006EEC
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006870 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042874 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqLDDi @ 0x1C0006EEC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006EEC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006EEC: mov     rax, rsp
 * 00000001C0006EEF: mov     [rax+8], rbx
 * 00000001C0006EF3: mov     [rax+10h], rsi
 * 00000001C0006EF7: mov     [rax+18h], rdi
 * 00000001C0006EFB: mov     [rax+20h], r14
 * 00000001C0006EFF: push    rbp
 * 00000001C0006F00: lea     rbp, [rax-1Fh]
 * 00000001C0006F04: sub     rsp, 0A0h
 * 00000001C0006F0B: mov     rdi, rcx
 * 00000001C0006F0E: movzx   ebx, r9w
 * 00000001C0006F12: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006F19: mov     esi, 4
 * 00000001C0006F1E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0006F25: lea     r14d, [rsi+4]
 * 00000001C0006F29: jnz     loc_1C002372C
 * 00000001C0006F2F: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0006F38: lea     rax, [rbp+17h+arg_58]
 * 00000001C0006F3C: mov     [rsp+0A0h+var_10], r14
 * 00000001C0006F44: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0006F4B: mov     [rsp+0A0h+var_18], rax
 * 00000001C0006F53: mov     r8d, 0Eh
 * 00000001C0006F59: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0006F61: lea     rax, [rbp+17h+arg_50]
 * 00000001C0006F65: mov     [rsp+0A0h+var_28], rax
 * 00000001C0006F6A: mov     edx, esi
 * 00000001C0006F6C: mov     [rsp+0A0h+var_30], rsi
 * 00000001C0006F71: lea     rax, [rbp+17h+arg_48]
 * 00000001C0006F75: mov     [rsp+0A0h+var_38], rax
 * 00000001C0006F7A: mov     rcx, rdi
 * 00000001C0006F7D: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0006F82: lea     rax, [rbp+17h+arg_40]
 * 00000001C0006F86: mov     [rsp+0A0h+var_48], rax
 * 00000001C0006F8B: lea     rax, [rbp+17h+arg_38]
 * 00000001C0006F8F: mov     [rsp+0A0h+var_50], r14
 * 00000001C0006F94: mov     [rsp+0A0h+var_58], rax
 * 00000001C0006F99: lea     rax, [rbp+17h+arg_30]
 * 00000001C0006F9D: mov     [rsp+0A0h+var_60], rsi
 * 00000001C0006FA2: mov     [rsp+0A0h+var_68], rax
 * 00000001C0006FA7: lea     rax, [rbp+17h+arg_28]
 * 00000001C0006FAB: mov     [rsp+0A0h+var_70], rsi
 * 00000001C0006FB0: mov     [rsp+0A0h+var_78], rax
 * 00000001C0006FB5: mov     word ptr [rsp+0A0h+var_80], bx
 * 00000001C0006FBA: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006FC1: nop     dword ptr [rax+rax+00h]
 * 00000001C0006FC6: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0006FCE: mov     rbx, [r11+10h]
 * 00000001C0006FD2: mov     rsi, [r11+18h]
 * 00000001C0006FD6: mov     rdi, [r11+20h]
 * 00000001C0006FDA: mov     r14, [r11+28h]
 * 00000001C0006FDE: mov     rsp, r11
 * 00000001C0006FE1: pop     rbp
 * 00000001C0006FE2: retn
 * 00000001C002372C: cmp     [rcx+29h], sil
 * 00000001C0023730: jb      loc_1C0006F2F
 * 00000001C0023736: and     [rsp+0A0h+var_10], 0
 * 00000001C002373F: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0023743: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002374A: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0023751: mov     rcx, [rcx+18h]
 * 00000001C0023755: mov     r9d, ebx
 * 00000001C0023758: mov     [rsp+0A0h+var_18], r14
 * 00000001C0023760: mov     [rsp+0A0h+var_20], rdx
 * 00000001C0023768: lea     rdx, [rbp+17h+arg_50]
 * 00000001C002376C: mov     [rsp+0A0h+var_28], rsi
 * 00000001C0023771: mov     [rsp+0A0h+var_30], rdx
 * 00000001C0023776: lea     rdx, [rbp+17h+arg_48]
 * 00000001C002377A: mov     [rsp+0A0h+var_38], rsi
 * 00000001C002377F: mov     [rsp+0A0h+var_40], rdx
 * 00000001C0023784: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0023788: mov     [rsp+0A0h+var_48], rsi
 * 00000001C002378D: mov     [rsp+0A0h+var_50], rdx
 * 00000001C0023792: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0023796: mov     [rsp+0A0h+var_58], r14
 * 00000001C002379B: mov     [rsp+0A0h+var_60], rdx
 * 00000001C00237A0: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00237A4: mov     [rsp+0A0h+var_68], rsi
 * 00000001C00237A9: mov     [rsp+0A0h+var_70], rdx
 * 00000001C00237AE: lea     rdx, [rbp+17h+arg_28]
 * 00000001C00237B2: mov     [rsp+0A0h+var_78], rsi
 * 00000001C00237B7: mov     [rsp+0A0h+var_80], rdx
 * 00000001C00237BC: mov     edx, 2Bh ; '+'
 * 00000001C00237C1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00237C7: nop
 * 00000001C00237C8: jmp     loc_1C0006F2F
 */
