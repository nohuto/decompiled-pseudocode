/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E626A
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00037A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMGetLastInvertedPenTime @ 0x1C0183F40 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C019E830 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E626A
 * Reason: Hex-Rays returned no pseudocode for 0x1C00E626A
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00E626A: mov     r11, rsp
 * 00000001C00E626D: mov     [r11+8], rbx
 * 00000001C00E6271: mov     [r11+10h], rsi
 * 00000001C00E6275: push    rdi
 * 00000001C00E6276: sub     rsp, 40h
 * 00000001C00E627A: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C00E6281: mov     dil, r8b
 * 00000001C00E6284: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C00E628C: test    dl, dl
 * 00000001C00E628E: jz      short loc_1C00E62C2
 * 00000001C00E6290: and     qword ptr [r11-18h], 0
 * 00000001C00E6295: lea     rdx, [r11+48h]
 * 00000001C00E6299: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E62A0: mov     r9d, ebx
 * 00000001C00E62A3: mov     r8, [rsp+48h+arg_38]
 * 00000001C00E62AB: mov     qword ptr [r11-20h], 8
 * 00000001C00E62B3: mov     [r11-28h], rdx
 * 00000001C00E62B7: mov     edx, 2Bh ; '+'
 * 00000001C00E62BC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E62C2: test    dil, dil
 * 00000001C00E62C5: jz      short loc_1C00E630A
 * 00000001C00E62C7: and     [rsp+48h+var_10], 0
 * 00000001C00E62CD: lea     rax, [rsp+48h+arg_40]
 * 00000001C00E62D5: mov     r9, [rsp+48h+arg_38]
 * 00000001C00E62DD: mov     r8d, 1
 * 00000001C00E62E3: movzx   edx, [rsp+48h+arg_20]
 * 00000001C00E62E8: mov     rcx, rsi
 * 00000001C00E62EB: mov     [rsp+48h+var_18], 8
 * 00000001C00E62F4: mov     [rsp+48h+var_20], rax
 * 00000001C00E62F9: mov     [rsp+48h+var_28], bx
 * 00000001C00E62FE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00E6305: nop     dword ptr [rax+rax+00h]
 * 00000001C00E630A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00E630F: mov     rsi, [rsp+48h+arg_8]
 * 00000001C00E6314: add     rsp, 40h
 * 00000001C00E6318: pop     rdi
 * 00000001C00E6319: retn
 */
