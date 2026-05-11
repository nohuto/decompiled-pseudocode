/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0009C90
 * Callers:
 *     DeviceRequestPowerUp @ 0x1C002A38C (DeviceRequestPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0009C90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009C90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009C90: mov     r11, rsp
 * 00000001C0009C93: mov     [r11+8], rbx
 * 00000001C0009C97: mov     [r11+10h], rbp
 * 00000001C0009C9B: mov     [r11+18h], rsi
 * 00000001C0009C9F: push    rdi
 * 00000001C0009CA0: sub     rsp, 50h
 * 00000001C0009CA4: mov     ebp, 24h ; '$'
 * 00000001C0009CA9: mov     rdi, r9
 * 00000001C0009CAC: mov     bl, r8b
 * 00000001C0009CAF: lea     esi, [rbp-1Ch]
 * 00000001C0009CB2: test    dl, dl
 * 00000001C0009CB4: jz      short loc_1C0009CED
 * 00000001C0009CB6: and     qword ptr [r11-18h], 0
 * 00000001C0009CBB: lea     rdx, [r11+50h]
 * 00000001C0009CBF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009CC6: lea     r8, WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids
 * 00000001C0009CCD: mov     [r11-20h], rsi
 * 00000001C0009CD1: mov     r9d, ebp
 * 00000001C0009CD4: mov     [r11-28h], rdx
 * 00000001C0009CD8: lea     rdx, [r11+48h]
 * 00000001C0009CDC: mov     [r11-30h], rsi
 * 00000001C0009CE0: mov     [r11-38h], rdx
 * 00000001C0009CE4: lea     edx, [rbp+7]
 * 00000001C0009CE7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009CED: test    bl, bl
 * 00000001C0009CEF: jz      short loc_1C0009D3C
 * 00000001C0009CF1: and     [rsp+58h+var_10], 0
 * 00000001C0009CF7: lea     rax, [rsp+58h+arg_48]
 * 00000001C0009CFF: mov     [rsp+58h+var_18], rsi
 * 00000001C0009D04: lea     r9, WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids
 * 00000001C0009D0B: mov     [rsp+58h+var_20], rax
 * 00000001C0009D10: xor     edx, edx
 * 00000001C0009D12: lea     rax, [rsp+58h+arg_40]
 * 00000001C0009D1A: mov     [rsp+58h+var_28], rsi
 * 00000001C0009D1F: mov     [rsp+58h+var_30], rax
 * 00000001C0009D24: mov     rcx, rdi
 * 00000001C0009D27: mov     [rsp+58h+var_38], bp
 * 00000001C0009D2C: lea     r8d, [rdx+2]
 * 00000001C0009D30: call    cs:__imp_WppAutoLogTrace
 * 00000001C0009D37: nop     dword ptr [rax+rax+00h]
 * 00000001C0009D3C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0009D41: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0009D46: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0009D4B: add     rsp, 50h
 * 00000001C0009D4F: pop     rdi
 * 00000001C0009D50: retn
 */
