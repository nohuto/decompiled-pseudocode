/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C000A1A0
 * Callers:
 *     USBCaptureBytePosition @ 0x1C00012C0 (USBCaptureBytePosition.c)
 *     USBType1RenderBytePosition @ 0x1C0001600 (USBType1RenderBytePosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0037CC0 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C000A1A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A1A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A1A0: mov     r11, rsp
 * 00000001C000A1A3: mov     [r11+8], rbx
 * 00000001C000A1A7: mov     [r11+10h], rbp
 * 00000001C000A1AB: mov     [r11+18h], rsi
 * 00000001C000A1AF: push    rdi
 * 00000001C000A1B0: sub     rsp, 50h
 * 00000001C000A1B4: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C000A1BC: mov     rsi, r9
 * 00000001C000A1BF: mov     dil, r8b
 * 00000001C000A1C2: mov     ebp, 8
 * 00000001C000A1C7: test    dl, dl
 * 00000001C000A1C9: jz      short loc_1C000A203
 * 00000001C000A1CB: and     qword ptr [r11-18h], 0
 * 00000001C000A1D0: lea     rdx, [r11+50h]
 * 00000001C000A1D4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000A1DB: mov     r9d, ebx
 * 00000001C000A1DE: mov     r8, [rsp+58h+arg_38]
 * 00000001C000A1E6: mov     [r11-20h], rbp
 * 00000001C000A1EA: mov     [r11-28h], rdx
 * 00000001C000A1EE: lea     rdx, [r11+48h]
 * 00000001C000A1F2: mov     [r11-30h], rbp
 * 00000001C000A1F6: mov     [r11-38h], rdx
 * 00000001C000A1FA: lea     edx, [rbp+23h]
 * 00000001C000A1FD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000A203: test    dil, dil
 * 00000001C000A206: jz      short loc_1C000A254
 * 00000001C000A208: and     [rsp+58h+var_10], 0
 * 00000001C000A20E: lea     rax, [rsp+58h+arg_48]
 * 00000001C000A216: mov     r9, [rsp+58h+arg_38]
 * 00000001C000A21E: xor     edx, edx
 * 00000001C000A220: mov     [rsp+58h+var_18], rbp
 * 00000001C000A225: mov     rcx, rsi
 * 00000001C000A228: mov     [rsp+58h+var_20], rax
 * 00000001C000A22D: lea     rax, [rsp+58h+arg_40]
 * 00000001C000A235: mov     [rsp+58h+var_28], rbp
 * 00000001C000A23A: mov     [rsp+58h+var_30], rax
 * 00000001C000A23F: lea     r8d, [rdx+3]
 * 00000001C000A243: mov     [rsp+58h+var_38], bx
 * 00000001C000A248: call    cs:__imp_WppAutoLogTrace
 * 00000001C000A24F: nop     dword ptr [rax+rax+00h]
 * 00000001C000A254: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000A259: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000A25E: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000A263: add     rsp, 50h
 * 00000001C000A267: pop     rdi
 * 00000001C000A268: retn
 */
