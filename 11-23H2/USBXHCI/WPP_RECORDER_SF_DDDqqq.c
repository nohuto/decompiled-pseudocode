/*
 * XREFs of WPP_RECORDER_SF_DDDqqq @ 0x1C0011A28
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqq @ 0x1C0011A28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011A28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011A28: mov     rax, rsp
 * 00000001C0011A2B: mov     [rax+8], rbx
 * 00000001C0011A2F: mov     [rax+10h], rsi
 * 00000001C0011A33: mov     [rax+18h], rdi
 * 00000001C0011A37: mov     [rax+20h], r14
 * 00000001C0011A3B: push    rbp
 * 00000001C0011A3C: lea     rbp, [rax-27h]
 * 00000001C0011A40: sub     rsp, 90h
 * 00000001C0011A47: mov     edi, 4
 * 00000001C0011A4C: mov     rbx, rcx
 * 00000001C0011A4F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011A56: lea     esi, [rdi+4]
 * 00000001C0011A59: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0011A60: lea     r14d, [rdi+35h]
 * 00000001C0011A64: jnz     loc_1C0024C86
 * 00000001C0011A6A: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0011A73: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0011A77: mov     [rsp+90h+var_10], rsi
 * 00000001C0011A7F: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0011A86: mov     [rsp+90h+var_18], rax
 * 00000001C0011A8B: mov     r8d, 0Eh
 * 00000001C0011A91: mov     [rsp+90h+var_20], rsi
 * 00000001C0011A96: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0011A9A: mov     [rsp+90h+var_28], rax
 * 00000001C0011A9F: mov     edx, edi
 * 00000001C0011AA1: mov     [rsp+90h+var_30], rsi
 * 00000001C0011AA6: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0011AAA: mov     [rsp+90h+var_38], rax
 * 00000001C0011AAF: mov     rcx, rbx
 * 00000001C0011AB2: mov     [rsp+90h+var_40], rdi
 * 00000001C0011AB7: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0011ABB: mov     [rsp+90h+var_48], rax
 * 00000001C0011AC0: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0011AC4: mov     [rsp+90h+var_50], rdi
 * 00000001C0011AC9: mov     [rsp+90h+var_58], rax
 * 00000001C0011ACE: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0011AD2: mov     [rsp+90h+var_60], rdi
 * 00000001C0011AD7: mov     [rsp+90h+var_68], rax
 * 00000001C0011ADC: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0011AE2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011AE9: nop     dword ptr [rax+rax+00h]
 * 00000001C0011AEE: lea     r11, [rsp+90h+var_s0]
 * 00000001C0011AF6: mov     rbx, [r11+10h]
 * 00000001C0011AFA: mov     rsi, [r11+18h]
 * 00000001C0011AFE: mov     rdi, [r11+20h]
 * 00000001C0011B02: mov     r14, [r11+28h]
 * 00000001C0011B06: mov     rsp, r11
 * 00000001C0011B09: pop     rbp
 * 00000001C0011B0A: retn
 * 00000001C0024C86: cmp     [rcx+29h], dil
 * 00000001C0024C8A: jb      loc_1C0011A6A
 * 00000001C0024C90: and     [rsp+90h+var_10], 0
 * 00000001C0024C99: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0024C9D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024CA4: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024CAB: mov     rcx, [rcx+18h]
 * 00000001C0024CAF: mov     r9d, r14d
 * 00000001C0024CB2: mov     [rsp+90h+var_18], rsi
 * 00000001C0024CB7: mov     [rsp+90h+var_20], rdx
 * 00000001C0024CBC: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0024CC0: mov     [rsp+90h+var_28], rsi
 * 00000001C0024CC5: mov     [rsp+90h+var_30], rdx
 * 00000001C0024CCA: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0024CCE: mov     [rsp+90h+var_38], rsi
 * 00000001C0024CD3: mov     [rsp+90h+var_40], rdx
 * 00000001C0024CD8: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0024CDC: mov     [rsp+90h+var_48], rdi
 * 00000001C0024CE1: mov     [rsp+90h+var_50], rdx
 * 00000001C0024CE6: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0024CEA: mov     [rsp+90h+var_58], rdi
 * 00000001C0024CEF: mov     [rsp+90h+var_60], rdx
 * 00000001C0024CF4: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0024CF8: mov     [rsp+90h+var_68], rdi
 * 00000001C0024CFD: mov     [rsp+90h+var_70], rdx
 * 00000001C0024D02: mov     edx, 2Bh ; '+'
 * 00000001C0024D07: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024D0D: nop
 * 00000001C0024D0E: jmp     loc_1C0011A6A
 */
