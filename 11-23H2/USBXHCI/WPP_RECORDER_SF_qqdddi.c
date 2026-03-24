/*
 * XREFs of WPP_RECORDER_SF_qqdddi @ 0x1C00189F8
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C000EFB0 (Interrupter_D0ExitStopped.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014B54 (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqdddi @ 0x1C00189F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00189F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00189F8: mov     rax, rsp
 * 00000001C00189FB: mov     [rax+8], rbx
 * 00000001C00189FF: mov     [rax+10h], rsi
 * 00000001C0018A03: mov     [rax+18h], rdi
 * 00000001C0018A07: mov     [rax+20h], r14
 * 00000001C0018A0B: push    rbp
 * 00000001C0018A0C: lea     rbp, [rax-27h]
 * 00000001C0018A10: sub     rsp, 90h
 * 00000001C0018A17: mov     rdi, rcx
 * 00000001C0018A1A: movzx   ebx, r9w
 * 00000001C0018A1E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0018A25: mov     esi, 4
 * 00000001C0018A2A: test    dword ptr [rcx+2Ch], 100h
 * 00000001C0018A31: lea     r14d, [rsi+4]
 * 00000001C0018A35: jnz     loc_1C002B79C
 * 00000001C0018A3B: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0018A44: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0018A48: mov     [rsp+90h+var_10], r14
 * 00000001C0018A50: lea     r9, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C0018A57: mov     [rsp+90h+var_18], rax
 * 00000001C0018A5C: mov     r8d, 9
 * 00000001C0018A62: mov     [rsp+90h+var_20], rsi
 * 00000001C0018A67: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0018A6B: mov     [rsp+90h+var_28], rax
 * 00000001C0018A70: mov     edx, esi
 * 00000001C0018A72: mov     [rsp+90h+var_30], rsi
 * 00000001C0018A77: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0018A7B: mov     [rsp+90h+var_38], rax
 * 00000001C0018A80: mov     rcx, rdi
 * 00000001C0018A83: mov     [rsp+90h+var_40], rsi
 * 00000001C0018A88: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0018A8C: mov     [rsp+90h+var_48], rax
 * 00000001C0018A91: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0018A95: mov     [rsp+90h+var_50], r14
 * 00000001C0018A9A: mov     [rsp+90h+var_58], rax
 * 00000001C0018A9F: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0018AA3: mov     [rsp+90h+var_60], r14
 * 00000001C0018AA8: mov     [rsp+90h+var_68], rax
 * 00000001C0018AAD: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0018AB2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018AB9: nop     dword ptr [rax+rax+00h]
 * 00000001C0018ABE: lea     r11, [rsp+90h+var_s0]
 * 00000001C0018AC6: mov     rbx, [r11+10h]
 * 00000001C0018ACA: mov     rsi, [r11+18h]
 * 00000001C0018ACE: mov     rdi, [r11+20h]
 * 00000001C0018AD2: mov     r14, [r11+28h]
 * 00000001C0018AD6: mov     rsp, r11
 * 00000001C0018AD9: pop     rbp
 * 00000001C0018ADA: retn
 * 00000001C002B79C: cmp     [rcx+29h], sil
 * 00000001C002B7A0: jb      loc_1C0018A3B
 * 00000001C002B7A6: and     [rsp+90h+var_10], 0
 * 00000001C002B7AF: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C002B7B3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B7BA: lea     r8, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C002B7C1: mov     rcx, [rcx+18h]
 * 00000001C002B7C5: mov     r9d, ebx
 * 00000001C002B7C8: mov     [rsp+90h+var_18], r14
 * 00000001C002B7CD: mov     [rsp+90h+var_20], rdx
 * 00000001C002B7D2: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C002B7D6: mov     [rsp+90h+var_28], rsi
 * 00000001C002B7DB: mov     [rsp+90h+var_30], rdx
 * 00000001C002B7E0: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C002B7E4: mov     [rsp+90h+var_38], rsi
 * 00000001C002B7E9: mov     [rsp+90h+var_40], rdx
 * 00000001C002B7EE: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C002B7F2: mov     [rsp+90h+var_48], rsi
 * 00000001C002B7F7: mov     [rsp+90h+var_50], rdx
 * 00000001C002B7FC: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C002B800: mov     [rsp+90h+var_58], r14
 * 00000001C002B805: mov     [rsp+90h+var_60], rdx
 * 00000001C002B80A: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C002B80E: mov     [rsp+90h+var_68], r14
 * 00000001C002B813: mov     [rsp+90h+var_70], rdx
 * 00000001C002B818: mov     edx, 2Bh ; '+'
 * 00000001C002B81D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B823: nop
 * 00000001C002B824: jmp     loc_1C0018A3B
 */
