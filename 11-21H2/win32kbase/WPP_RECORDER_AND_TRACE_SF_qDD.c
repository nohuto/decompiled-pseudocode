/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1C018651C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1C018651C
 * Reason: Hex-Rays returned no pseudocode for 0x1C018651C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C018651C: mov     r11, rsp
 * 00000001C018651F: mov     [r11+8], rbx
 * 00000001C0186523: mov     [r11+10h], rsi
 * 00000001C0186527: mov     [r11+18h], rdi
 * 00000001C018652B: push    r14
 * 00000001C018652D: sub     rsp, 60h
 * 00000001C0186531: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0186538: mov     esi, 4
 * 00000001C018653D: mov     bl, r8b
 * 00000001C0186540: lea     r14d, [rsi+0Ah]
 * 00000001C0186544: test    dl, dl
 * 00000001C0186546: jz      short loc_1C0186590
 * 00000001C0186548: and     qword ptr [r11-18h], 0
 * 00000001C018654D: lea     rdx, [r11+58h]
 * 00000001C0186551: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0186558: lea     r8, WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids
 * 00000001C018655F: mov     [r11-20h], rsi
 * 00000001C0186563: mov     [r11-28h], rdx
 * 00000001C0186567: lea     rdx, [r11+50h]
 * 00000001C018656B: mov     [r11-30h], rsi
 * 00000001C018656F: mov     [r11-38h], rdx
 * 00000001C0186573: lea     rdx, [r11+48h]
 * 00000001C0186577: mov     qword ptr [r11-40h], 8
 * 00000001C018657F: mov     [r11-48h], rdx
 * 00000001C0186583: lea     edx, [rsi+27h]
 * 00000001C0186586: movzx   r9d, r14w
 * 00000001C018658A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0186590: test    bl, bl
 * 00000001C0186592: jz      short loc_1C01865F9
 * 00000001C0186594: and     [rsp+68h+var_10], 0
 * 00000001C018659A: lea     rax, [rsp+68h+arg_50]
 * 00000001C01865A2: mov     [rsp+68h+var_18], rsi
 * 00000001C01865A7: lea     r9, WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids
 * 00000001C01865AE: mov     [rsp+68h+var_20], rax
 * 00000001C01865B3: mov     edx, 2
 * 00000001C01865B8: mov     [rsp+68h+var_28], rsi
 * 00000001C01865BD: lea     rax, [rsp+68h+arg_48]
 * 00000001C01865C5: mov     [rsp+68h+var_30], rax
 * 00000001C01865CA: mov     rcx, rdi
 * 00000001C01865CD: lea     rax, [rsp+68h+arg_40]
 * 00000001C01865D5: mov     [rsp+68h+var_38], 8
 * 00000001C01865DE: mov     [rsp+68h+var_40], rax
 * 00000001C01865E3: lea     r8d, [rdx-1]
 * 00000001C01865E7: mov     [rsp+68h+var_48], r14w
 * 00000001C01865ED: call    cs:__imp_WppAutoLogTrace
 * 00000001C01865F4: nop     dword ptr [rax+rax+00h]
 * 00000001C01865F9: lea     r11, [rsp+68h+var_8]
 * 00000001C01865FE: mov     rbx, [r11+10h]
 * 00000001C0186602: mov     rsi, [r11+18h]
 * 00000001C0186606: mov     rdi, [r11+20h]
 * 00000001C018660A: mov     rsp, r11
 * 00000001C018660D: pop     r14
 * 00000001C018660F: retn
 */
