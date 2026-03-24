/*
 * XREFs of WPP_RECORDER_SF_qLLdd @ 0x1C000AC9C
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLdd @ 0x1C000AC9C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AC9C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AC9C: mov     [rsp+arg_0], rbx
 * 00000001C000ACA1: mov     [rsp+arg_8], rbp
 * 00000001C000ACA6: push    rdi
 * 00000001C000ACA7: sub     rsp, 80h
 * 00000001C000ACAE: mov     rbx, rcx
 * 00000001C000ACB1: mov     edi, 4
 * 00000001C000ACB6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000ACBD: lea     ebp, [rdi+2Bh]
 * 00000001C000ACC0: mov     eax, [rcx+2Ch]
 * 00000001C000ACC3: test    al, 40h
 * 00000001C000ACC5: jnz     loc_1C002C59E
 * 00000001C000ACCB: and     [rsp+88h+var_10], 0
 * 00000001C000ACD1: lea     rax, [rsp+88h+arg_48]
 * 00000001C000ACD9: mov     [rsp+88h+var_18], rdi
 * 00000001C000ACDE: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C000ACE5: mov     [rsp+88h+var_20], rax
 * 00000001C000ACEA: mov     r8d, 7
 * 00000001C000ACF0: mov     [rsp+88h+var_28], rdi
 * 00000001C000ACF5: lea     rax, [rsp+88h+arg_40]
 * 00000001C000ACFD: mov     [rsp+88h+var_30], rax
 * 00000001C000AD02: mov     edx, edi
 * 00000001C000AD04: mov     [rsp+88h+var_38], rdi
 * 00000001C000AD09: lea     rax, [rsp+88h+arg_38]
 * 00000001C000AD11: mov     [rsp+88h+var_40], rax
 * 00000001C000AD16: mov     rcx, rbx
 * 00000001C000AD19: mov     [rsp+88h+var_48], rdi
 * 00000001C000AD1E: lea     rax, [rsp+88h+arg_30]
 * 00000001C000AD26: mov     [rsp+88h+var_50], rax
 * 00000001C000AD2B: lea     rax, [rsp+88h+arg_28]
 * 00000001C000AD33: mov     [rsp+88h+var_58], 8
 * 00000001C000AD3C: mov     [rsp+88h+var_60], rax
 * 00000001C000AD41: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000AD46: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AD4D: nop     dword ptr [rax+rax+00h]
 * 00000001C000AD52: lea     r11, [rsp+88h+var_8]
 * 00000001C000AD5A: mov     rbx, [r11+10h]
 * 00000001C000AD5E: mov     rbp, [r11+18h]
 * 00000001C000AD62: mov     rsp, r11
 * 00000001C000AD65: pop     rdi
 * 00000001C000AD66: retn
 * 00000001C002C59E: cmp     [rcx+29h], dil
 * 00000001C002C5A2: jb      loc_1C000ACCB
 * 00000001C002C5A8: and     [rsp+88h+var_18], 0
 * 00000001C002C5AE: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002C5B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C5BD: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C002C5C4: mov     rcx, [rcx+18h]
 * 00000001C002C5C8: mov     r9d, ebp
 * 00000001C002C5CB: mov     [rsp+88h+var_20], rdi
 * 00000001C002C5D0: mov     [rsp+88h+var_28], rdx
 * 00000001C002C5D5: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002C5DD: mov     [rsp+88h+var_30], rdi
 * 00000001C002C5E2: mov     [rsp+88h+var_38], rdx
 * 00000001C002C5E7: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002C5EF: mov     [rsp+88h+var_40], rdi
 * 00000001C002C5F4: mov     [rsp+88h+var_48], rdx
 * 00000001C002C5F9: lea     rdx, [rsp+88h+arg_30]
 * 00000001C002C601: mov     [rsp+88h+var_50], rdi
 * 00000001C002C606: mov     [rsp+88h+var_58], rdx
 * 00000001C002C60B: lea     rdx, [rsp+88h+arg_28]
 * 00000001C002C613: mov     [rsp+88h+var_60], 8
 * 00000001C002C61C: mov     [rsp+88h+var_68], rdx
 * 00000001C002C621: mov     edx, 2Bh ; '+'
 * 00000001C002C626: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C62C: nop
 * 00000001C002C62D: jmp     loc_1C000ACCB
 */
