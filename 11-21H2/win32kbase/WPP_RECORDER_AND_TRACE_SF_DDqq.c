/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C003D62C
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C003D540 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C003D62C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D62C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D62C: mov     rax, rsp
 * 00000001C003D62F: mov     [rax+8], rbx
 * 00000001C003D633: mov     [rax+10h], rbp
 * 00000001C003D637: mov     [rax+18h], rsi
 * 00000001C003D63B: mov     [rax+20h], rdi
 * 00000001C003D63F: push    r14
 * 00000001C003D641: sub     rsp, 70h
 * 00000001C003D645: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C003D64C: mov     ebp, 8
 * 00000001C003D651: mov     bl, r8b
 * 00000001C003D654: lea     esi, [rbp-4]
 * 00000001C003D657: lea     r14d, [rbp+5]
 * 00000001C003D65B: test    dl, dl
 * 00000001C003D65D: jnz     loc_1C00FF758
 * 00000001C003D663: test    bl, bl
 * 00000001C003D665: jz      short loc_1C003D6D9
 * 00000001C003D667: and     [rsp+78h+var_10], 0
 * 00000001C003D66D: lea     rax, [rsp+78h+arg_58]
 * 00000001C003D675: mov     [rsp+78h+var_18], rbp
 * 00000001C003D67A: lea     r9, WPP_e42196a162103e27bc3596ad59aba599_Traceguids
 * 00000001C003D681: mov     [rsp+78h+var_20], rax
 * 00000001C003D686: mov     r8d, 12h
 * 00000001C003D68C: mov     [rsp+78h+var_28], rbp
 * 00000001C003D691: lea     rax, [rsp+78h+arg_50]
 * 00000001C003D699: mov     [rsp+78h+var_30], rax
 * 00000001C003D69E: mov     edx, esi
 * 00000001C003D6A0: mov     [rsp+78h+var_38], rsi
 * 00000001C003D6A5: lea     rax, [rsp+78h+arg_48]
 * 00000001C003D6AD: mov     [rsp+78h+var_40], rax
 * 00000001C003D6B2: mov     rcx, rdi
 * 00000001C003D6B5: lea     rax, [rsp+78h+arg_40]
 * 00000001C003D6BD: mov     [rsp+78h+var_48], rsi
 * 00000001C003D6C2: mov     [rsp+78h+var_50], rax
 * 00000001C003D6C7: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001C003D6CD: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D6D4: nop     dword ptr [rax+rax+00h]
 * 00000001C003D6D9: lea     r11, [rsp+78h+var_8]
 * 00000001C003D6DE: mov     rbx, [r11+10h]
 * 00000001C003D6E2: mov     rbp, [r11+18h]
 * 00000001C003D6E6: mov     rsi, [r11+20h]
 * 00000001C003D6EA: mov     rdi, [r11+28h]
 * 00000001C003D6EE: mov     rsp, r11
 * 00000001C003D6F1: pop     r14
 * 00000001C003D6F3: retn
 * 00000001C00FF758: and     [rsp+78h+var_18], 0
 * 00000001C00FF75E: lea     rdx, [rsp+78h+arg_58]
 * 00000001C00FF766: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FF76D: lea     r8, WPP_e42196a162103e27bc3596ad59aba599_Traceguids
 * 00000001C00FF774: mov     [rsp+78h+var_20], rbp
 * 00000001C00FF779: mov     [rsp+78h+var_28], rdx
 * 00000001C00FF77E: lea     rdx, [rsp+78h+arg_50]
 * 00000001C00FF786: mov     [rsp+78h+var_30], rbp
 * 00000001C00FF78B: mov     [rsp+78h+var_38], rdx
 * 00000001C00FF790: lea     rdx, [rsp+78h+arg_48]
 * 00000001C00FF798: mov     [rsp+78h+var_40], rsi
 * 00000001C00FF79D: mov     [rsp+78h+var_48], rdx
 * 00000001C00FF7A2: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00FF7AA: mov     [rsp+78h+var_50], rsi
 * 00000001C00FF7AF: mov     [rsp+78h+var_58], rdx
 * 00000001C00FF7B4: mov     edx, 2Bh ; '+'
 * 00000001C00FF7B9: movzx   r9d, r14w
 * 00000001C00FF7BD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FF7C3: nop
 * 00000001C00FF7C4: jmp     loc_1C003D663
 */
