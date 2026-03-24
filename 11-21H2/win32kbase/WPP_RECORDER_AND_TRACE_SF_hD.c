/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_hD @ 0x1C003FFFC
 * Callers:
 *     xxxInternalToUnicode @ 0x1C003FB30 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01EA740 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_hD @ 0x1C003FFFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003FFFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003FFFC: mov     [rsp+arg_0], rbx
 * 00000001C0040001: mov     [rsp+arg_8], rsi
 * 00000001C0040006: push    rdi
 * 00000001C0040007: sub     rsp, 50h
 * 00000001C004000B: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C0040012: mov     dil, r8b
 * 00000001C0040015: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C004001D: test    dl, dl
 * 00000001C004001F: jnz     loc_1C01009B0
 * 00000001C0040025: test    dil, dil
 * 00000001C0040028: jz      short loc_1C0040080
 * 00000001C004002A: and     [rsp+58h+var_10], 0
 * 00000001C0040030: lea     rax, [rsp+58h+arg_48]
 * 00000001C0040038: mov     [rsp+58h+var_18], 4
 * 00000001C0040041: lea     r9, WPP_b629efd1997c37e0b825559eed89807c_Traceguids
 * 00000001C0040048: mov     [rsp+58h+var_20], rax
 * 00000001C004004D: mov     edx, 4
 * 00000001C0040052: lea     rax, [rsp+58h+arg_40]
 * 00000001C004005A: mov     [rsp+58h+var_28], 2
 * 00000001C0040063: mov     [rsp+58h+var_30], rax
 * 00000001C0040068: mov     rcx, rsi
 * 00000001C004006B: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C0040070: lea     r8d, [rdx+0Ch]
 * 00000001C0040074: call    cs:__imp_WppAutoLogTrace
 * 00000001C004007B: nop     dword ptr [rax+rax+00h]
 * 00000001C0040080: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0040085: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004008A: add     rsp, 50h
 * 00000001C004008E: pop     rdi
 * 00000001C004008F: retn
 * 00000001C01009B0: and     [rsp+58h+var_18], 0
 * 00000001C01009B6: lea     rdx, [rsp+58h+arg_48]
 * 00000001C01009BE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01009C5: lea     r8, WPP_b629efd1997c37e0b825559eed89807c_Traceguids
 * 00000001C01009CC: mov     [rsp+58h+var_20], 4
 * 00000001C01009D5: mov     r9d, ebx
 * 00000001C01009D8: mov     [rsp+58h+var_28], rdx
 * 00000001C01009DD: lea     rdx, [rsp+58h+arg_40]
 * 00000001C01009E5: mov     [rsp+58h+var_30], 2
 * 00000001C01009EE: mov     [rsp+58h+var_38], rdx
 * 00000001C01009F3: mov     edx, 2Bh ; '+'
 * 00000001C01009F8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01009FE: nop
 * 00000001C01009FF: jmp     loc_1C0040025
 */
