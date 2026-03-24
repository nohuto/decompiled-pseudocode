/*
 * XREFs of WPP_RECORDER_SF_qqdddi @ 0x1C0018A48
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C000EFE0 (Interrupter_D0ExitStopped.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014BA4 (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqdddi @ 0x1C0018A48
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018A48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018A48: mov     rax, rsp
 * 00000001C0018A4B: mov     [rax+8], rbx
 * 00000001C0018A4F: mov     [rax+10h], rsi
 * 00000001C0018A53: mov     [rax+18h], rdi
 * 00000001C0018A57: mov     [rax+20h], r14
 * 00000001C0018A5B: push    rbp
 * 00000001C0018A5C: lea     rbp, [rax-27h]
 * 00000001C0018A60: sub     rsp, 90h
 * 00000001C0018A67: mov     rdi, rcx
 * 00000001C0018A6A: movzx   ebx, r9w
 * 00000001C0018A6E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0018A75: mov     esi, 4
 * 00000001C0018A7A: test    dword ptr [rcx+2Ch], 100h
 * 00000001C0018A81: lea     r14d, [rsi+4]
 * 00000001C0018A85: jnz     loc_1C002B65C
 * 00000001C0018A8B: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0018A94: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0018A98: mov     [rsp+90h+var_10], r14
 * 00000001C0018AA0: lea     r9, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C0018AA7: mov     [rsp+90h+var_18], rax
 * 00000001C0018AAC: mov     r8d, 9
 * 00000001C0018AB2: mov     [rsp+90h+var_20], rsi
 * 00000001C0018AB7: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0018ABB: mov     [rsp+90h+var_28], rax
 * 00000001C0018AC0: mov     edx, esi
 * 00000001C0018AC2: mov     [rsp+90h+var_30], rsi
 * 00000001C0018AC7: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0018ACB: mov     [rsp+90h+var_38], rax
 * 00000001C0018AD0: mov     rcx, rdi
 * 00000001C0018AD3: mov     [rsp+90h+var_40], rsi
 * 00000001C0018AD8: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0018ADC: mov     [rsp+90h+var_48], rax
 * 00000001C0018AE1: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0018AE5: mov     [rsp+90h+var_50], r14
 * 00000001C0018AEA: mov     [rsp+90h+var_58], rax
 * 00000001C0018AEF: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0018AF3: mov     [rsp+90h+var_60], r14
 * 00000001C0018AF8: mov     [rsp+90h+var_68], rax
 * 00000001C0018AFD: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0018B02: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018B09: nop     dword ptr [rax+rax+00h]
 * 00000001C0018B0E: lea     r11, [rsp+90h+var_s0]
 * 00000001C0018B16: mov     rbx, [r11+10h]
 * 00000001C0018B1A: mov     rsi, [r11+18h]
 * 00000001C0018B1E: mov     rdi, [r11+20h]
 * 00000001C0018B22: mov     r14, [r11+28h]
 * 00000001C0018B26: mov     rsp, r11
 * 00000001C0018B29: pop     rbp
 * 00000001C0018B2A: retn
 * 00000001C002B65C: cmp     [rcx+29h], sil
 * 00000001C002B660: jb      loc_1C0018A8B
 * 00000001C002B666: and     [rsp+90h+var_10], 0
 * 00000001C002B66F: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C002B673: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B67A: lea     r8, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C002B681: mov     rcx, [rcx+18h]
 * 00000001C002B685: mov     r9d, ebx
 * 00000001C002B688: mov     [rsp+90h+var_18], r14
 * 00000001C002B68D: mov     [rsp+90h+var_20], rdx
 * 00000001C002B692: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C002B696: mov     [rsp+90h+var_28], rsi
 * 00000001C002B69B: mov     [rsp+90h+var_30], rdx
 * 00000001C002B6A0: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C002B6A4: mov     [rsp+90h+var_38], rsi
 * 00000001C002B6A9: mov     [rsp+90h+var_40], rdx
 * 00000001C002B6AE: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C002B6B2: mov     [rsp+90h+var_48], rsi
 * 00000001C002B6B7: mov     [rsp+90h+var_50], rdx
 * 00000001C002B6BC: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C002B6C0: mov     [rsp+90h+var_58], r14
 * 00000001C002B6C5: mov     [rsp+90h+var_60], rdx
 * 00000001C002B6CA: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C002B6CE: mov     [rsp+90h+var_68], r14
 * 00000001C002B6D3: mov     [rsp+90h+var_70], rdx
 * 00000001C002B6D8: mov     edx, 2Bh ; '+'
 * 00000001C002B6DD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B6E3: nop
 * 00000001C002B6E4: jmp     loc_1C0018A8B
 */
