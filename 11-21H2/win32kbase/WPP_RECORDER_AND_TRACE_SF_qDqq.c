/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1C0151BC8
 * Callers:
 *     EtwTraceUIPIHookError @ 0x1C014F100 (EtwTraceUIPIHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1C0151BC8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0151BC8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0151BC8: mov     r11, rsp
 * 00000001C0151BCB: mov     [r11+8], rbx
 * 00000001C0151BCF: mov     [r11+10h], rsi
 * 00000001C0151BD3: mov     [r11+18h], rdi
 * 00000001C0151BD7: push    r14
 * 00000001C0151BD9: sub     rsp, 70h
 * 00000001C0151BDD: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C0151BE4: mov     esi, 8
 * 00000001C0151BE9: mov     bl, r8b
 * 00000001C0151BEC: lea     r14d, [rsi+3]
 * 00000001C0151BF0: test    dl, dl
 * 00000001C0151BF2: jz      short loc_1C0151C48
 * 00000001C0151BF4: and     qword ptr [r11-18h], 0
 * 00000001C0151BF9: lea     rdx, [r11+60h]
 * 00000001C0151BFD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0151C04: lea     r8, WPP_e42196a162103e27bc3596ad59aba599_Traceguids
 * 00000001C0151C0B: mov     [r11-20h], rsi
 * 00000001C0151C0F: mov     [r11-28h], rdx
 * 00000001C0151C13: lea     rdx, [r11+58h]
 * 00000001C0151C17: mov     [r11-30h], rsi
 * 00000001C0151C1B: mov     [r11-38h], rdx
 * 00000001C0151C1F: lea     rdx, [r11+50h]
 * 00000001C0151C23: mov     qword ptr [r11-40h], 4
 * 00000001C0151C2B: mov     [r11-48h], rdx
 * 00000001C0151C2F: lea     rdx, [r11+48h]
 * 00000001C0151C33: mov     [r11-50h], rsi
 * 00000001C0151C37: mov     [r11-58h], rdx
 * 00000001C0151C3B: lea     edx, [rsi+23h]
 * 00000001C0151C3E: movzx   r9d, r14w
 * 00000001C0151C42: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0151C48: test    bl, bl
 * 00000001C0151C4A: jz      short loc_1C0151CC3
 * 00000001C0151C4C: and     [rsp+78h+var_10], 0
 * 00000001C0151C52: lea     rax, [rsp+78h+arg_58]
 * 00000001C0151C5A: mov     [rsp+78h+var_18], rsi
 * 00000001C0151C5F: lea     r9, WPP_e42196a162103e27bc3596ad59aba599_Traceguids
 * 00000001C0151C66: mov     [rsp+78h+var_20], rax
 * 00000001C0151C6B: mov     edx, 4
 * 00000001C0151C70: mov     [rsp+78h+var_28], rsi
 * 00000001C0151C75: lea     rax, [rsp+78h+arg_50]
 * 00000001C0151C7D: mov     [rsp+78h+var_30], rax
 * 00000001C0151C82: mov     rcx, rdi
 * 00000001C0151C85: mov     [rsp+78h+var_38], 4
 * 00000001C0151C8E: lea     rax, [rsp+78h+arg_48]
 * 00000001C0151C96: mov     [rsp+78h+var_40], rax
 * 00000001C0151C9B: lea     r8d, [rdx+0Eh]
 * 00000001C0151C9F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0151CA7: mov     [rsp+78h+var_48], rsi
 * 00000001C0151CAC: mov     [rsp+78h+var_50], rax
 * 00000001C0151CB1: mov     [rsp+78h+var_58], r14w
 * 00000001C0151CB7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0151CBE: nop     dword ptr [rax+rax+00h]
 * 00000001C0151CC3: lea     r11, [rsp+78h+var_8]
 * 00000001C0151CC8: mov     rbx, [r11+10h]
 * 00000001C0151CCC: mov     rsi, [r11+18h]
 * 00000001C0151CD0: mov     rdi, [r11+20h]
 * 00000001C0151CD4: mov     rsp, r11
 * 00000001C0151CD7: pop     r14
 * 00000001C0151CD9: retn
 */
