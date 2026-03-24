/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C0018B54
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016EC0 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C0018B54
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018B54
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018B54: mov     [rsp+arg_0], rbx
 * 00000001C0018B59: mov     [rsp+arg_8], rdi
 * 00000001C0018B5E: push    r14
 * 00000001C0018B60: sub     rsp, 40h
 * 00000001C0018B64: mov     rbx, [rsp+48h+arg_28]
 * 00000001C0018B69: mov     rdi, rcx
 * 00000001C0018B6C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0018B73: mov     r14d, 0CCh
 * 00000001C0018B79: mov     eax, [rcx+2Ch]
 * 00000001C0018B7C: test    al, 8
 * 00000001C0018B7E: jnz     loc_1C002DB48
 * 00000001C0018B84: and     [rsp+48h+var_10], 0
 * 00000001C0018B8A: lea     r9, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0018B91: mov     edx, 4
 * 00000001C0018B96: mov     [rsp+48h+var_18], 10h
 * 00000001C0018B9F: mov     [rsp+48h+var_20], rbx
 * 00000001C0018BA4: mov     r8d, edx
 * 00000001C0018BA7: mov     rcx, rdi
 * 00000001C0018BAA: mov     word ptr [rsp+48h+var_28], r14w
 * 00000001C0018BB0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018BB7: nop     dword ptr [rax+rax+00h]
 * 00000001C0018BBC: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0018BC1: mov     rdi, [rsp+48h+arg_8]
 * 00000001C0018BC6: add     rsp, 40h
 * 00000001C0018BCA: pop     r14
 * 00000001C0018BCC: retn
 * 00000001C002DB48: cmp     byte ptr [rcx+29h], 4
 * 00000001C002DB4C: jb      loc_1C0018B84
 * 00000001C002DB52: and     [rsp+48h+var_18], 0
 * 00000001C002DB58: lea     r8, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C002DB5F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DB66: mov     edx, 2Bh ; '+'
 * 00000001C002DB6B: mov     rcx, [rcx+18h]
 * 00000001C002DB6F: mov     [rsp+48h+var_20], 10h
 * 00000001C002DB78: movzx   r9d, r14w
 * 00000001C002DB7C: mov     [rsp+48h+var_28], rbx
 * 00000001C002DB81: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DB87: nop
 * 00000001C002DB88: jmp     loc_1C0018B84
 */
