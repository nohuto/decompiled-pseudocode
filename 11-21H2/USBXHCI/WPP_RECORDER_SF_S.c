/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0035F80
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0035F80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035F80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035F80: mov     rax, rsp
 * 00000001C0035F83: mov     [rax+8], rbx
 * 00000001C0035F87: mov     [rax+10h], rsi
 * 00000001C0035F8B: mov     [rax+18h], rdi
 * 00000001C0035F8F: mov     [rax+20h], r12
 * 00000001C0035F93: push    r15
 * 00000001C0035F95: sub     rsp, 40h
 * 00000001C0035F99: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0035FA0: lea     r15, aNull; "NULL"
 * 00000001C0035FA7: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0035FAC: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0035FB0: mov     rsi, rcx
 * 00000001C0035FB3: mov     r12d, 0E7h
 * 00000001C0035FB9: mov     eax, [rdx+2Ch]
 * 00000001C0035FBC: test    al, 8
 * 00000001C0035FBE: jz      short loc_1C0036023
 * 00000001C0035FC0: cmp     byte ptr [rdx+29h], 2
 * 00000001C0035FC4: jb      short loc_1C0036023
 * 00000001C0035FC6: test    rdi, rdi
 * 00000001C0035FC9: jz      short loc_1C0035FDC
 * 00000001C0035FCB: mov     rdx, rbx
 * 00000001C0035FCE: inc     rdx
 * 00000001C0035FD1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0035FD5: jnz     short loc_1C0035FCE
 * 00000001C0035FD7: inc     rdx
 * 00000001C0035FDA: jmp     short loc_1C0035FE1
 * 00000001C0035FDC: mov     edx, 5
 * 00000001C0035FE1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0035FE8: lea     r8, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0035FEF: test    rdi, rdi
 * 00000001C0035FF2: movzx   r9d, r12w
 * 00000001C0035FF6: mov     rcx, rdi
 * 00000001C0035FF9: cmovz   rcx, r15
 * 00000001C0035FFD: and     [rsp+48h+var_18], 0
 * 00000001C0036003: mov     [rsp+48h+var_20], rdx
 * 00000001C0036008: mov     edx, 2Bh ; '+'
 * 00000001C003600D: mov     [rsp+48h+var_28], rcx
 * 00000001C0036012: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036019: mov     rcx, [rcx+18h]
 * 00000001C003601D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036023: test    rdi, rdi
 * 00000001C0036026: jz      short loc_1C0036036
 * 00000001C0036028: inc     rbx
 * 00000001C003602B: cmp     byte ptr [rdi+rbx], 0
 * 00000001C003602F: jnz     short loc_1C0036028
 * 00000001C0036031: inc     rbx
 * 00000001C0036034: jmp     short loc_1C003603B
 * 00000001C0036036: mov     ebx, 5
 * 00000001C003603B: test    rdi, rdi
 * 00000001C003603E: lea     r9, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0036045: mov     edx, 2
 * 00000001C003604A: mov     rcx, rsi
 * 00000001C003604D: cmovz   rdi, r15
 * 00000001C0036051: and     [rsp+48h+var_10], 0
 * 00000001C0036057: mov     [rsp+48h+var_18], rbx
 * 00000001C003605C: mov     [rsp+48h+var_20], rdi
 * 00000001C0036061: lea     r8d, [rdx+2]
 * 00000001C0036065: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C003606B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0036072: nop     dword ptr [rax+rax+00h]
 * 00000001C0036077: mov     rbx, [rsp+48h+arg_0]
 * 00000001C003607C: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0036081: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0036086: mov     r12, [rsp+48h+arg_18]
 * 00000001C003608B: add     rsp, 40h
 * 00000001C003608F: pop     r15
 * 00000001C0036091: retn
 */
