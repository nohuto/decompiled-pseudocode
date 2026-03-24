/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0145ED8
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1C0145B90 (NtMapVisualRelativePoints.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C019CB10 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0145ED8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0145ED8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0145ED8: mov     r11, rsp
 * 00000001C0145EDB: mov     [r11+8], rbx
 * 00000001C0145EDF: mov     [r11+10h], rbp
 * 00000001C0145EE3: mov     [r11+18h], rsi
 * 00000001C0145EE7: push    rdi
 * 00000001C0145EE8: sub     rsp, 50h
 * 00000001C0145EEC: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C0145EF4: mov     rsi, r9
 * 00000001C0145EF7: mov     dil, r8b
 * 00000001C0145EFA: mov     ebp, 8
 * 00000001C0145EFF: test    dl, dl
 * 00000001C0145F01: jz      short loc_1C0145F3B
 * 00000001C0145F03: and     qword ptr [r11-18h], 0
 * 00000001C0145F08: lea     rdx, [r11+50h]
 * 00000001C0145F0C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0145F13: mov     r9d, ebx
 * 00000001C0145F16: mov     r8, [rsp+58h+arg_38]
 * 00000001C0145F1E: mov     [r11-20h], rbp
 * 00000001C0145F22: mov     [r11-28h], rdx
 * 00000001C0145F26: lea     rdx, [r11+48h]
 * 00000001C0145F2A: mov     [r11-30h], rbp
 * 00000001C0145F2E: mov     [r11-38h], rdx
 * 00000001C0145F32: lea     edx, [rbp+23h]
 * 00000001C0145F35: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0145F3B: test    dil, dil
 * 00000001C0145F3E: jz      short loc_1C0145F96
 * 00000001C0145F40: and     [rsp+58h+var_10], 0
 * 00000001C0145F46: lea     rax, [rsp+58h+arg_48]
 * 00000001C0145F4E: mov     r9, [rsp+58h+arg_38]
 * 00000001C0145F56: mov     rcx, rsi
 * 00000001C0145F59: mov     r8d, [rsp+58h+arg_28]
 * 00000001C0145F61: movzx   edx, [rsp+58h+arg_20]
 * 00000001C0145F69: mov     [rsp+58h+var_18], rbp
 * 00000001C0145F6E: mov     [rsp+58h+var_20], rax
 * 00000001C0145F73: lea     rax, [rsp+58h+arg_40]
 * 00000001C0145F7B: mov     [rsp+58h+var_28], rbp
 * 00000001C0145F80: mov     [rsp+58h+var_30], rax
 * 00000001C0145F85: mov     [rsp+58h+var_38], bx
 * 00000001C0145F8A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0145F91: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F96: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0145F9B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0145FA0: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0145FA5: add     rsp, 50h
 * 00000001C0145FA9: pop     rdi
 * 00000001C0145FAA: retn
 */
