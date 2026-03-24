/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0014D60
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4A4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0014D60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014D60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014D60: mov     rax, rsp
 * 00000001C0014D63: mov     [rax+8], rbx
 * 00000001C0014D67: mov     [rax+10h], rsi
 * 00000001C0014D6B: mov     [rax+18h], rdi
 * 00000001C0014D6F: mov     [rax+20h], r12
 * 00000001C0014D73: push    rbp
 * 00000001C0014D74: lea     rbp, [rax-1Fh]
 * 00000001C0014D78: sub     rsp, 0A0h
 * 00000001C0014D7F: mov     rbx, [rbp+17h+arg_30]
 * 00000001C0014D83: mov     rdi, rcx
 * 00000001C0014D86: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0014D8D: mov     esi, 4
 * 00000001C0014D92: mov     r12d, 106h
 * 00000001C0014D98: mov     eax, [rcx+2Ch]
 * 00000001C0014D9B: test    al, 8
 * 00000001C0014D9D: jnz     loc_1C0028E7C
 * 00000001C0014DA3: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0014DAC: lea     rax, [rbp+17h+arg_58]
 * 00000001C0014DB0: mov     [rsp+0A0h+var_10], rsi
 * 00000001C0014DB8: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0014DBF: mov     [rsp+0A0h+var_18], rax
 * 00000001C0014DC7: mov     r8d, esi
 * 00000001C0014DCA: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0014DD2: lea     rax, [rbp+17h+arg_50]
 * 00000001C0014DD6: mov     [rsp+0A0h+var_28], rax
 * 00000001C0014DDB: mov     edx, esi
 * 00000001C0014DDD: mov     [rsp+0A0h+var_30], rsi
 * 00000001C0014DE2: lea     rax, [rbp+17h+arg_48]
 * 00000001C0014DE6: mov     [rsp+0A0h+var_38], rax
 * 00000001C0014DEB: mov     rcx, rdi
 * 00000001C0014DEE: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0014DF3: lea     rax, [rbp+17h+arg_40]
 * 00000001C0014DF7: mov     [rsp+0A0h+var_48], rax
 * 00000001C0014DFC: lea     rax, [rbp+17h+arg_38]
 * 00000001C0014E00: mov     [rsp+0A0h+var_50], rsi
 * 00000001C0014E05: mov     [rsp+0A0h+var_58], rax
 * 00000001C0014E0A: lea     rax, [rbp+17h+arg_28]
 * 00000001C0014E0E: mov     [rsp+0A0h+var_60], 10h
 * 00000001C0014E17: mov     [rsp+0A0h+var_68], rbx
 * 00000001C0014E1C: mov     [rsp+0A0h+var_70], 8
 * 00000001C0014E25: mov     [rsp+0A0h+var_78], rax
 * 00000001C0014E2A: mov     word ptr [rsp+0A0h+var_80], r12w
 * 00000001C0014E30: call    cs:__imp_WppAutoLogTrace
 * 00000001C0014E37: nop     dword ptr [rax+rax+00h]
 * 00000001C0014E3C: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0014E44: mov     rbx, [r11+10h]
 * 00000001C0014E48: mov     rsi, [r11+18h]
 * 00000001C0014E4C: mov     rdi, [r11+20h]
 * 00000001C0014E50: mov     r12, [r11+28h]
 * 00000001C0014E54: mov     rsp, r11
 * 00000001C0014E57: pop     rbp
 * 00000001C0014E58: retn
 * 00000001C0028E7C: cmp     [rcx+29h], sil
 * 00000001C0028E80: jb      loc_1C0014DA3
 * 00000001C0028E86: and     [rsp+0A0h+var_10], 0
 * 00000001C0028E8F: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0028E93: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0028E9A: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0028EA1: mov     rcx, [rcx+18h]
 * 00000001C0028EA5: mov     r9d, r12d
 * 00000001C0028EA8: mov     [rsp+0A0h+var_18], rsi
 * 00000001C0028EB0: mov     [rsp+0A0h+var_20], rdx
 * 00000001C0028EB8: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0028EBC: mov     [rsp+0A0h+var_28], rsi
 * 00000001C0028EC1: mov     [rsp+0A0h+var_30], rdx
 * 00000001C0028EC6: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0028ECA: mov     [rsp+0A0h+var_38], rsi
 * 00000001C0028ECF: mov     [rsp+0A0h+var_40], rdx
 * 00000001C0028ED4: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0028ED8: mov     [rsp+0A0h+var_48], rsi
 * 00000001C0028EDD: mov     [rsp+0A0h+var_50], rdx
 * 00000001C0028EE2: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0028EE6: mov     [rsp+0A0h+var_58], rsi
 * 00000001C0028EEB: mov     [rsp+0A0h+var_60], rdx
 * 00000001C0028EF0: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0028EF4: mov     [rsp+0A0h+var_68], 10h
 * 00000001C0028EFD: mov     [rsp+0A0h+var_70], rbx
 * 00000001C0028F02: mov     [rsp+0A0h+var_78], 8
 * 00000001C0028F0B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0028F10: mov     edx, 2Bh ; '+'
 * 00000001C0028F15: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0028F1B: nop
 * 00000001C0028F1C: jmp     loc_1C0014DA3
 */
