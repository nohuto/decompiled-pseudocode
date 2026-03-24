/*
 * XREFs of WPP_RECORDER_SF_DDDqqq @ 0x1C0011A58
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011354 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqq @ 0x1C0011A58
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011A58
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011A58: mov     rax, rsp
 * 00000001C0011A5B: mov     [rax+8], rbx
 * 00000001C0011A5F: mov     [rax+10h], rsi
 * 00000001C0011A63: mov     [rax+18h], rdi
 * 00000001C0011A67: mov     [rax+20h], r14
 * 00000001C0011A6B: push    rbp
 * 00000001C0011A6C: lea     rbp, [rax-27h]
 * 00000001C0011A70: sub     rsp, 90h
 * 00000001C0011A77: mov     edi, 4
 * 00000001C0011A7C: mov     rbx, rcx
 * 00000001C0011A7F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011A86: lea     esi, [rdi+4]
 * 00000001C0011A89: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0011A90: lea     r14d, [rdi+35h]
 * 00000001C0011A94: jnz     loc_1C0024B46
 * 00000001C0011A9A: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0011AA3: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0011AA7: mov     [rsp+90h+var_10], rsi
 * 00000001C0011AAF: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0011AB6: mov     [rsp+90h+var_18], rax
 * 00000001C0011ABB: mov     r8d, 0Eh
 * 00000001C0011AC1: mov     [rsp+90h+var_20], rsi
 * 00000001C0011AC6: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0011ACA: mov     [rsp+90h+var_28], rax
 * 00000001C0011ACF: mov     edx, edi
 * 00000001C0011AD1: mov     [rsp+90h+var_30], rsi
 * 00000001C0011AD6: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0011ADA: mov     [rsp+90h+var_38], rax
 * 00000001C0011ADF: mov     rcx, rbx
 * 00000001C0011AE2: mov     [rsp+90h+var_40], rdi
 * 00000001C0011AE7: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0011AEB: mov     [rsp+90h+var_48], rax
 * 00000001C0011AF0: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0011AF4: mov     [rsp+90h+var_50], rdi
 * 00000001C0011AF9: mov     [rsp+90h+var_58], rax
 * 00000001C0011AFE: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0011B02: mov     [rsp+90h+var_60], rdi
 * 00000001C0011B07: mov     [rsp+90h+var_68], rax
 * 00000001C0011B0C: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0011B12: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011B19: nop     dword ptr [rax+rax+00h]
 * 00000001C0011B1E: lea     r11, [rsp+90h+var_s0]
 * 00000001C0011B26: mov     rbx, [r11+10h]
 * 00000001C0011B2A: mov     rsi, [r11+18h]
 * 00000001C0011B2E: mov     rdi, [r11+20h]
 * 00000001C0011B32: mov     r14, [r11+28h]
 * 00000001C0011B36: mov     rsp, r11
 * 00000001C0011B39: pop     rbp
 * 00000001C0011B3A: retn
 * 00000001C0024B46: cmp     [rcx+29h], dil
 * 00000001C0024B4A: jb      loc_1C0011A9A
 * 00000001C0024B50: and     [rsp+90h+var_10], 0
 * 00000001C0024B59: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0024B5D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024B64: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024B6B: mov     rcx, [rcx+18h]
 * 00000001C0024B6F: mov     r9d, r14d
 * 00000001C0024B72: mov     [rsp+90h+var_18], rsi
 * 00000001C0024B77: mov     [rsp+90h+var_20], rdx
 * 00000001C0024B7C: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0024B80: mov     [rsp+90h+var_28], rsi
 * 00000001C0024B85: mov     [rsp+90h+var_30], rdx
 * 00000001C0024B8A: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0024B8E: mov     [rsp+90h+var_38], rsi
 * 00000001C0024B93: mov     [rsp+90h+var_40], rdx
 * 00000001C0024B98: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0024B9C: mov     [rsp+90h+var_48], rdi
 * 00000001C0024BA1: mov     [rsp+90h+var_50], rdx
 * 00000001C0024BA6: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0024BAA: mov     [rsp+90h+var_58], rdi
 * 00000001C0024BAF: mov     [rsp+90h+var_60], rdx
 * 00000001C0024BB4: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0024BB8: mov     [rsp+90h+var_68], rdi
 * 00000001C0024BBD: mov     [rsp+90h+var_70], rdx
 * 00000001C0024BC2: mov     edx, 2Bh ; '+'
 * 00000001C0024BC7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024BCD: nop
 * 00000001C0024BCE: jmp     loc_1C0011A9A
 */
