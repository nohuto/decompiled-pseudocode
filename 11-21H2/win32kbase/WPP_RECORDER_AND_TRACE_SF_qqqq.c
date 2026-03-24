/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00BADD8
 * Callers:
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00BADD8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00BADD8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00BADD8: mov     [rsp+arg_0], rbx
 * 00000001C00BADDD: mov     [rsp+arg_8], rbp
 * 00000001C00BADE2: mov     [rsp+arg_10], rsi
 * 00000001C00BADE7: push    rdi
 * 00000001C00BADE8: sub     rsp, 70h
 * 00000001C00BADEC: movzx   edi, [rsp+78h+arg_30]
 * 00000001C00BADF4: mov     rsi, r9
 * 00000001C00BADF7: mov     bl, r8b
 * 00000001C00BADFA: mov     ebp, 8
 * 00000001C00BADFF: test    dl, dl
 * 00000001C00BAE01: jnz     loc_1C0139458
 * 00000001C00BAE07: test    bl, bl
 * 00000001C00BAE09: jz      short loc_1C00BAE83
 * 00000001C00BAE0B: and     [rsp+78h+var_10], 0
 * 00000001C00BAE11: lea     rax, [rsp+78h+arg_58]
 * 00000001C00BAE19: mov     r9, [rsp+78h+arg_38]
 * 00000001C00BAE21: mov     r8d, 1
 * 00000001C00BAE27: movzx   edx, [rsp+78h+arg_20]
 * 00000001C00BAE2F: mov     rcx, rsi
 * 00000001C00BAE32: mov     [rsp+78h+var_18], rbp
 * 00000001C00BAE37: mov     [rsp+78h+var_20], rax
 * 00000001C00BAE3C: lea     rax, [rsp+78h+arg_50]
 * 00000001C00BAE44: mov     [rsp+78h+var_28], rbp
 * 00000001C00BAE49: mov     [rsp+78h+var_30], rax
 * 00000001C00BAE4E: lea     rax, [rsp+78h+arg_48]
 * 00000001C00BAE56: mov     [rsp+78h+var_38], rbp
 * 00000001C00BAE5B: mov     [rsp+78h+var_40], rax
 * 00000001C00BAE60: lea     rax, [rsp+78h+arg_40]
 * 00000001C00BAE68: mov     [rsp+78h+var_48], rbp
 * 00000001C00BAE6D: mov     [rsp+78h+var_50], rax
 * 00000001C00BAE72: mov     word ptr [rsp+78h+var_58], di
 * 00000001C00BAE77: call    cs:__imp_WppAutoLogTrace
 * 00000001C00BAE7E: nop     dword ptr [rax+rax+00h]
 * 00000001C00BAE83: lea     r11, [rsp+78h+var_8]
 * 00000001C00BAE88: mov     rbx, [r11+10h]
 * 00000001C00BAE8C: mov     rbp, [r11+18h]
 * 00000001C00BAE90: mov     rsi, [r11+20h]
 * 00000001C00BAE94: mov     rsp, r11
 * 00000001C00BAE97: pop     rdi
 * 00000001C00BAE98: retn
 * 00000001C0139458: and     [rsp+78h+var_18], 0
 * 00000001C013945E: lea     rdx, [rsp+78h+arg_58]
 * 00000001C0139466: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013946D: mov     r9d, edi
 * 00000001C0139470: mov     r8, [rsp+78h+arg_38]
 * 00000001C0139478: mov     [rsp+78h+var_20], rbp
 * 00000001C013947D: mov     [rsp+78h+var_28], rdx
 * 00000001C0139482: lea     rdx, [rsp+78h+arg_50]
 * 00000001C013948A: mov     [rsp+78h+var_30], rbp
 * 00000001C013948F: mov     [rsp+78h+var_38], rdx
 * 00000001C0139494: lea     rdx, [rsp+78h+arg_48]
 * 00000001C013949C: mov     [rsp+78h+var_40], rbp
 * 00000001C01394A1: mov     [rsp+78h+var_48], rdx
 * 00000001C01394A6: lea     rdx, [rsp+78h+arg_40]
 * 00000001C01394AE: mov     [rsp+78h+var_50], rbp
 * 00000001C01394B3: mov     [rsp+78h+var_58], rdx
 * 00000001C01394B8: mov     edx, 2Bh ; '+'
 * 00000001C01394BD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01394C3: nop
 * 00000001C01394C4: jmp     loc_1C00BAE07
 */
