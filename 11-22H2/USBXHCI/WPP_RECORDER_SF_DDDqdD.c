/*
 * XREFs of WPP_RECORDER_SF_DDDqdD @ 0x1C0011D6C
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0011B44 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqdD @ 0x1C0011D6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011D6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011D6C: mov     rax, rsp
 * 00000001C0011D6F: mov     [rax+8], rbx
 * 00000001C0011D73: mov     [rax+10h], rdi
 * 00000001C0011D77: mov     [rax+18h], r14
 * 00000001C0011D7B: push    rbp
 * 00000001C0011D7C: lea     rbp, [rax-27h]
 * 00000001C0011D80: sub     rsp, 90h
 * 00000001C0011D87: mov     rbx, rcx
 * 00000001C0011D8A: mov     edi, 4
 * 00000001C0011D8F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011D96: lea     r14d, [rdi+25h]
 * 00000001C0011D9A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0011DA1: jnz     loc_1C0024CF8
 * 00000001C0011DA7: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0011DB0: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0011DB4: mov     [rsp+90h+var_10], rdi
 * 00000001C0011DBC: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0011DC3: mov     [rsp+90h+var_18], rax
 * 00000001C0011DC8: mov     r8d, 0Eh
 * 00000001C0011DCE: mov     [rsp+90h+var_20], rdi
 * 00000001C0011DD3: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0011DD7: mov     [rsp+90h+var_28], rax
 * 00000001C0011DDC: mov     edx, edi
 * 00000001C0011DDE: mov     [rsp+90h+var_30], 8
 * 00000001C0011DE7: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0011DEB: mov     [rsp+90h+var_38], rax
 * 00000001C0011DF0: mov     rcx, rbx
 * 00000001C0011DF3: mov     [rsp+90h+var_40], rdi
 * 00000001C0011DF8: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0011DFC: mov     [rsp+90h+var_48], rax
 * 00000001C0011E01: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0011E05: mov     [rsp+90h+var_50], rdi
 * 00000001C0011E0A: mov     [rsp+90h+var_58], rax
 * 00000001C0011E0F: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0011E13: mov     [rsp+90h+var_60], rdi
 * 00000001C0011E18: mov     [rsp+90h+var_68], rax
 * 00000001C0011E1D: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0011E23: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011E2A: nop     dword ptr [rax+rax+00h]
 * 00000001C0011E2F: lea     r11, [rsp+90h+var_s0]
 * 00000001C0011E37: mov     rbx, [r11+10h]
 * 00000001C0011E3B: mov     rdi, [r11+18h]
 * 00000001C0011E3F: mov     r14, [r11+20h]
 * 00000001C0011E43: mov     rsp, r11
 * 00000001C0011E46: pop     rbp
 * 00000001C0011E47: retn
 * 00000001C0024CF8: cmp     [rcx+29h], dil
 * 00000001C0024CFC: jb      loc_1C0011DA7
 * 00000001C0024D02: and     [rsp+90h+var_10], 0
 * 00000001C0024D0B: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0024D0F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024D16: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024D1D: mov     rcx, [rcx+18h]
 * 00000001C0024D21: mov     r9d, r14d
 * 00000001C0024D24: mov     [rsp+90h+var_18], rdi
 * 00000001C0024D29: mov     [rsp+90h+var_20], rdx
 * 00000001C0024D2E: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0024D32: mov     [rsp+90h+var_28], rdi
 * 00000001C0024D37: mov     [rsp+90h+var_30], rdx
 * 00000001C0024D3C: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0024D40: mov     [rsp+90h+var_38], 8
 * 00000001C0024D49: mov     [rsp+90h+var_40], rdx
 * 00000001C0024D4E: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0024D52: mov     [rsp+90h+var_48], rdi
 * 00000001C0024D57: mov     [rsp+90h+var_50], rdx
 * 00000001C0024D5C: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0024D60: mov     [rsp+90h+var_58], rdi
 * 00000001C0024D65: mov     [rsp+90h+var_60], rdx
 * 00000001C0024D6A: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0024D6E: mov     [rsp+90h+var_68], rdi
 * 00000001C0024D73: mov     [rsp+90h+var_70], rdx
 * 00000001C0024D78: mov     edx, 2Bh ; '+'
 * 00000001C0024D7D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024D83: nop
 * 00000001C0024D84: jmp     loc_1C0011DA7
 */
