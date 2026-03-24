/*
 * XREFs of WPP_RECORDER_SF_DDqLDDi @ 0x1C0006EBC
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00429B4 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqLDDi @ 0x1C0006EBC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006EBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006EBC: mov     rax, rsp
 * 00000001C0006EBF: mov     [rax+8], rbx
 * 00000001C0006EC3: mov     [rax+10h], rsi
 * 00000001C0006EC7: mov     [rax+18h], rdi
 * 00000001C0006ECB: mov     [rax+20h], r14
 * 00000001C0006ECF: push    rbp
 * 00000001C0006ED0: lea     rbp, [rax-1Fh]
 * 00000001C0006ED4: sub     rsp, 0A0h
 * 00000001C0006EDB: mov     rdi, rcx
 * 00000001C0006EDE: movzx   ebx, r9w
 * 00000001C0006EE2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006EE9: mov     esi, 4
 * 00000001C0006EEE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0006EF5: lea     r14d, [rsi+4]
 * 00000001C0006EF9: jnz     loc_1C002386C
 * 00000001C0006EFF: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0006F08: lea     rax, [rbp+17h+arg_58]
 * 00000001C0006F0C: mov     [rsp+0A0h+var_10], r14
 * 00000001C0006F14: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0006F1B: mov     [rsp+0A0h+var_18], rax
 * 00000001C0006F23: mov     r8d, 0Eh
 * 00000001C0006F29: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0006F31: lea     rax, [rbp+17h+arg_50]
 * 00000001C0006F35: mov     [rsp+0A0h+var_28], rax
 * 00000001C0006F3A: mov     edx, esi
 * 00000001C0006F3C: mov     [rsp+0A0h+var_30], rsi
 * 00000001C0006F41: lea     rax, [rbp+17h+arg_48]
 * 00000001C0006F45: mov     [rsp+0A0h+var_38], rax
 * 00000001C0006F4A: mov     rcx, rdi
 * 00000001C0006F4D: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0006F52: lea     rax, [rbp+17h+arg_40]
 * 00000001C0006F56: mov     [rsp+0A0h+var_48], rax
 * 00000001C0006F5B: lea     rax, [rbp+17h+arg_38]
 * 00000001C0006F5F: mov     [rsp+0A0h+var_50], r14
 * 00000001C0006F64: mov     [rsp+0A0h+var_58], rax
 * 00000001C0006F69: lea     rax, [rbp+17h+arg_30]
 * 00000001C0006F6D: mov     [rsp+0A0h+var_60], rsi
 * 00000001C0006F72: mov     [rsp+0A0h+var_68], rax
 * 00000001C0006F77: lea     rax, [rbp+17h+arg_28]
 * 00000001C0006F7B: mov     [rsp+0A0h+var_70], rsi
 * 00000001C0006F80: mov     [rsp+0A0h+var_78], rax
 * 00000001C0006F85: mov     word ptr [rsp+0A0h+var_80], bx
 * 00000001C0006F8A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006F91: nop     dword ptr [rax+rax+00h]
 * 00000001C0006F96: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0006F9E: mov     rbx, [r11+10h]
 * 00000001C0006FA2: mov     rsi, [r11+18h]
 * 00000001C0006FA6: mov     rdi, [r11+20h]
 * 00000001C0006FAA: mov     r14, [r11+28h]
 * 00000001C0006FAE: mov     rsp, r11
 * 00000001C0006FB1: pop     rbp
 * 00000001C0006FB2: retn
 * 00000001C002386C: cmp     [rcx+29h], sil
 * 00000001C0023870: jb      loc_1C0006EFF
 * 00000001C0023876: and     [rsp+0A0h+var_10], 0
 * 00000001C002387F: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0023883: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002388A: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0023891: mov     rcx, [rcx+18h]
 * 00000001C0023895: mov     r9d, ebx
 * 00000001C0023898: mov     [rsp+0A0h+var_18], r14
 * 00000001C00238A0: mov     [rsp+0A0h+var_20], rdx
 * 00000001C00238A8: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00238AC: mov     [rsp+0A0h+var_28], rsi
 * 00000001C00238B1: mov     [rsp+0A0h+var_30], rdx
 * 00000001C00238B6: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00238BA: mov     [rsp+0A0h+var_38], rsi
 * 00000001C00238BF: mov     [rsp+0A0h+var_40], rdx
 * 00000001C00238C4: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00238C8: mov     [rsp+0A0h+var_48], rsi
 * 00000001C00238CD: mov     [rsp+0A0h+var_50], rdx
 * 00000001C00238D2: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00238D6: mov     [rsp+0A0h+var_58], r14
 * 00000001C00238DB: mov     [rsp+0A0h+var_60], rdx
 * 00000001C00238E0: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00238E4: mov     [rsp+0A0h+var_68], rsi
 * 00000001C00238E9: mov     [rsp+0A0h+var_70], rdx
 * 00000001C00238EE: lea     rdx, [rbp+17h+arg_28]
 * 00000001C00238F2: mov     [rsp+0A0h+var_78], rsi
 * 00000001C00238F7: mov     [rsp+0A0h+var_80], rdx
 * 00000001C00238FC: mov     edx, 2Bh ; '+'
 * 00000001C0023901: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023907: nop
 * 00000001C0023908: jmp     loc_1C0006EFF
 */
