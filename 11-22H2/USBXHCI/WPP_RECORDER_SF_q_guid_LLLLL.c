/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0014DB0
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4E4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0014DB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014DB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014DB0: mov     rax, rsp
 * 00000001C0014DB3: mov     [rax+8], rbx
 * 00000001C0014DB7: mov     [rax+10h], rsi
 * 00000001C0014DBB: mov     [rax+18h], rdi
 * 00000001C0014DBF: mov     [rax+20h], r12
 * 00000001C0014DC3: push    rbp
 * 00000001C0014DC4: lea     rbp, [rax-1Fh]
 * 00000001C0014DC8: sub     rsp, 0A0h
 * 00000001C0014DCF: mov     rbx, [rbp+17h+arg_30]
 * 00000001C0014DD3: mov     rdi, rcx
 * 00000001C0014DD6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0014DDD: mov     esi, 4
 * 00000001C0014DE2: mov     r12d, 106h
 * 00000001C0014DE8: mov     eax, [rcx+2Ch]
 * 00000001C0014DEB: test    al, 8
 * 00000001C0014DED: jnz     loc_1C0028D3C
 * 00000001C0014DF3: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0014DFC: lea     rax, [rbp+17h+arg_58]
 * 00000001C0014E00: mov     [rsp+0A0h+var_10], rsi
 * 00000001C0014E08: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0014E0F: mov     [rsp+0A0h+var_18], rax
 * 00000001C0014E17: mov     r8d, esi
 * 00000001C0014E1A: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0014E22: lea     rax, [rbp+17h+arg_50]
 * 00000001C0014E26: mov     [rsp+0A0h+var_28], rax
 * 00000001C0014E2B: mov     edx, esi
 * 00000001C0014E2D: mov     [rsp+0A0h+var_30], rsi
 * 00000001C0014E32: lea     rax, [rbp+17h+arg_48]
 * 00000001C0014E36: mov     [rsp+0A0h+var_38], rax
 * 00000001C0014E3B: mov     rcx, rdi
 * 00000001C0014E3E: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0014E43: lea     rax, [rbp+17h+arg_40]
 * 00000001C0014E47: mov     [rsp+0A0h+var_48], rax
 * 00000001C0014E4C: lea     rax, [rbp+17h+arg_38]
 * 00000001C0014E50: mov     [rsp+0A0h+var_50], rsi
 * 00000001C0014E55: mov     [rsp+0A0h+var_58], rax
 * 00000001C0014E5A: lea     rax, [rbp+17h+arg_28]
 * 00000001C0014E5E: mov     [rsp+0A0h+var_60], 10h
 * 00000001C0014E67: mov     [rsp+0A0h+var_68], rbx
 * 00000001C0014E6C: mov     [rsp+0A0h+var_70], 8
 * 00000001C0014E75: mov     [rsp+0A0h+var_78], rax
 * 00000001C0014E7A: mov     word ptr [rsp+0A0h+var_80], r12w
 * 00000001C0014E80: call    cs:__imp_WppAutoLogTrace
 * 00000001C0014E87: nop     dword ptr [rax+rax+00h]
 * 00000001C0014E8C: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0014E94: mov     rbx, [r11+10h]
 * 00000001C0014E98: mov     rsi, [r11+18h]
 * 00000001C0014E9C: mov     rdi, [r11+20h]
 * 00000001C0014EA0: mov     r12, [r11+28h]
 * 00000001C0014EA4: mov     rsp, r11
 * 00000001C0014EA7: pop     rbp
 * 00000001C0014EA8: retn
 * 00000001C0028D3C: cmp     [rcx+29h], sil
 * 00000001C0028D40: jb      loc_1C0014DF3
 * 00000001C0028D46: and     [rsp+0A0h+var_10], 0
 * 00000001C0028D4F: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0028D53: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0028D5A: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0028D61: mov     rcx, [rcx+18h]
 * 00000001C0028D65: mov     r9d, r12d
 * 00000001C0028D68: mov     [rsp+0A0h+var_18], rsi
 * 00000001C0028D70: mov     [rsp+0A0h+var_20], rdx
 * 00000001C0028D78: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0028D7C: mov     [rsp+0A0h+var_28], rsi
 * 00000001C0028D81: mov     [rsp+0A0h+var_30], rdx
 * 00000001C0028D86: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0028D8A: mov     [rsp+0A0h+var_38], rsi
 * 00000001C0028D8F: mov     [rsp+0A0h+var_40], rdx
 * 00000001C0028D94: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0028D98: mov     [rsp+0A0h+var_48], rsi
 * 00000001C0028D9D: mov     [rsp+0A0h+var_50], rdx
 * 00000001C0028DA2: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0028DA6: mov     [rsp+0A0h+var_58], rsi
 * 00000001C0028DAB: mov     [rsp+0A0h+var_60], rdx
 * 00000001C0028DB0: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0028DB4: mov     [rsp+0A0h+var_68], 10h
 * 00000001C0028DBD: mov     [rsp+0A0h+var_70], rbx
 * 00000001C0028DC2: mov     [rsp+0A0h+var_78], 8
 * 00000001C0028DCB: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0028DD0: mov     edx, 2Bh ; '+'
 * 00000001C0028DD5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0028DDB: nop
 * 00000001C0028DDC: jmp     loc_1C0014DF3
 */
