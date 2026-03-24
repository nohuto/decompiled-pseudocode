/*
 * XREFs of WPP_RECORDER_SF_qLLdd @ 0x1C000ACCC
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2E4 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLdd @ 0x1C000ACCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ACCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ACCC: mov     [rsp+arg_0], rbx
 * 00000001C000ACD1: mov     [rsp+arg_8], rbp
 * 00000001C000ACD6: push    rdi
 * 00000001C000ACD7: sub     rsp, 80h
 * 00000001C000ACDE: mov     rbx, rcx
 * 00000001C000ACE1: mov     edi, 4
 * 00000001C000ACE6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000ACED: lea     ebp, [rdi+2Bh]
 * 00000001C000ACF0: mov     eax, [rcx+2Ch]
 * 00000001C000ACF3: test    al, 40h
 * 00000001C000ACF5: jnz     loc_1C002C45E
 * 00000001C000ACFB: and     [rsp+88h+var_10], 0
 * 00000001C000AD01: lea     rax, [rsp+88h+arg_48]
 * 00000001C000AD09: mov     [rsp+88h+var_18], rdi
 * 00000001C000AD0E: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C000AD15: mov     [rsp+88h+var_20], rax
 * 00000001C000AD1A: mov     r8d, 7
 * 00000001C000AD20: mov     [rsp+88h+var_28], rdi
 * 00000001C000AD25: lea     rax, [rsp+88h+arg_40]
 * 00000001C000AD2D: mov     [rsp+88h+var_30], rax
 * 00000001C000AD32: mov     edx, edi
 * 00000001C000AD34: mov     [rsp+88h+var_38], rdi
 * 00000001C000AD39: lea     rax, [rsp+88h+arg_38]
 * 00000001C000AD41: mov     [rsp+88h+var_40], rax
 * 00000001C000AD46: mov     rcx, rbx
 * 00000001C000AD49: mov     [rsp+88h+var_48], rdi
 * 00000001C000AD4E: lea     rax, [rsp+88h+arg_30]
 * 00000001C000AD56: mov     [rsp+88h+var_50], rax
 * 00000001C000AD5B: lea     rax, [rsp+88h+arg_28]
 * 00000001C000AD63: mov     [rsp+88h+var_58], 8
 * 00000001C000AD6C: mov     [rsp+88h+var_60], rax
 * 00000001C000AD71: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000AD76: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AD7D: nop     dword ptr [rax+rax+00h]
 * 00000001C000AD82: lea     r11, [rsp+88h+var_8]
 * 00000001C000AD8A: mov     rbx, [r11+10h]
 * 00000001C000AD8E: mov     rbp, [r11+18h]
 * 00000001C000AD92: mov     rsp, r11
 * 00000001C000AD95: pop     rdi
 * 00000001C000AD96: retn
 * 00000001C002C45E: cmp     [rcx+29h], dil
 * 00000001C002C462: jb      loc_1C000ACFB
 * 00000001C002C468: and     [rsp+88h+var_18], 0
 * 00000001C002C46E: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002C476: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C47D: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C002C484: mov     rcx, [rcx+18h]
 * 00000001C002C488: mov     r9d, ebp
 * 00000001C002C48B: mov     [rsp+88h+var_20], rdi
 * 00000001C002C490: mov     [rsp+88h+var_28], rdx
 * 00000001C002C495: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002C49D: mov     [rsp+88h+var_30], rdi
 * 00000001C002C4A2: mov     [rsp+88h+var_38], rdx
 * 00000001C002C4A7: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002C4AF: mov     [rsp+88h+var_40], rdi
 * 00000001C002C4B4: mov     [rsp+88h+var_48], rdx
 * 00000001C002C4B9: lea     rdx, [rsp+88h+arg_30]
 * 00000001C002C4C1: mov     [rsp+88h+var_50], rdi
 * 00000001C002C4C6: mov     [rsp+88h+var_58], rdx
 * 00000001C002C4CB: lea     rdx, [rsp+88h+arg_28]
 * 00000001C002C4D3: mov     [rsp+88h+var_60], 8
 * 00000001C002C4DC: mov     [rsp+88h+var_68], rdx
 * 00000001C002C4E1: mov     edx, 2Bh ; '+'
 * 00000001C002C4E6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C4EC: nop
 * 00000001C002C4ED: jmp     loc_1C000ACFB
 */
