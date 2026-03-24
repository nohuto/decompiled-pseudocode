/*
 * XREFs of WPP_RECORDER_SF_ddLLi @ 0x1C00109D0
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010DA0 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddLLi @ 0x1C00109D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00109D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00109D0: mov     [rsp+arg_0], rbx
 * 00000001C00109D5: mov     [rsp+arg_8], rbp
 * 00000001C00109DA: push    rdi
 * 00000001C00109DB: sub     rsp, 80h
 * 00000001C00109E2: mov     rbx, rcx
 * 00000001C00109E5: mov     edi, 4
 * 00000001C00109EA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00109F1: lea     ebp, [rdi+4Ah]
 * 00000001C00109F4: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00109FB: jnz     loc_1C002DD76
 * 00000001C0010A01: and     [rsp+88h+var_10], 0
 * 00000001C0010A07: lea     rax, [rsp+88h+arg_48]
 * 00000001C0010A0F: mov     [rsp+88h+var_18], 8
 * 00000001C0010A18: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C0010A1F: mov     [rsp+88h+var_20], rax
 * 00000001C0010A24: mov     r8d, 0Dh
 * 00000001C0010A2A: mov     [rsp+88h+var_28], rdi
 * 00000001C0010A2F: lea     rax, [rsp+88h+arg_40]
 * 00000001C0010A37: mov     [rsp+88h+var_30], rax
 * 00000001C0010A3C: mov     edx, edi
 * 00000001C0010A3E: mov     [rsp+88h+var_38], rdi
 * 00000001C0010A43: lea     rax, [rsp+88h+arg_38]
 * 00000001C0010A4B: mov     [rsp+88h+var_40], rax
 * 00000001C0010A50: mov     rcx, rbx
 * 00000001C0010A53: mov     [rsp+88h+var_48], rdi
 * 00000001C0010A58: lea     rax, [rsp+88h+arg_30]
 * 00000001C0010A60: mov     [rsp+88h+var_50], rax
 * 00000001C0010A65: lea     rax, [rsp+88h+arg_28]
 * 00000001C0010A6D: mov     [rsp+88h+var_58], rdi
 * 00000001C0010A72: mov     [rsp+88h+var_60], rax
 * 00000001C0010A77: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C0010A7C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0010A83: nop     dword ptr [rax+rax+00h]
 * 00000001C0010A88: lea     r11, [rsp+88h+var_8]
 * 00000001C0010A90: mov     rbx, [r11+10h]
 * 00000001C0010A94: mov     rbp, [r11+18h]
 * 00000001C0010A98: mov     rsp, r11
 * 00000001C0010A9B: pop     rdi
 * 00000001C0010A9C: retn
 * 00000001C002DD76: cmp     [rcx+29h], dil
 * 00000001C002DD7A: jb      loc_1C0010A01
 * 00000001C002DD80: and     [rsp+88h+var_18], 0
 * 00000001C002DD86: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002DD8E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DD95: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C002DD9C: mov     rcx, [rcx+18h]
 * 00000001C002DDA0: mov     r9d, ebp
 * 00000001C002DDA3: mov     [rsp+88h+var_20], 8
 * 00000001C002DDAC: mov     [rsp+88h+var_28], rdx
 * 00000001C002DDB1: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002DDB9: mov     [rsp+88h+var_30], rdi
 * 00000001C002DDBE: mov     [rsp+88h+var_38], rdx
 * 00000001C002DDC3: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002DDCB: mov     [rsp+88h+var_40], rdi
 * 00000001C002DDD0: mov     [rsp+88h+var_48], rdx
 * 00000001C002DDD5: lea     rdx, [rsp+88h+arg_30]
 * 00000001C002DDDD: mov     [rsp+88h+var_50], rdi
 * 00000001C002DDE2: mov     [rsp+88h+var_58], rdx
 * 00000001C002DDE7: lea     rdx, [rsp+88h+arg_28]
 * 00000001C002DDEF: mov     [rsp+88h+var_60], rdi
 * 00000001C002DDF4: mov     [rsp+88h+var_68], rdx
 * 00000001C002DDF9: mov     edx, 2Bh ; '+'
 * 00000001C002DDFE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DE04: nop
 * 00000001C002DE05: jmp     loc_1C0010A01
 */
