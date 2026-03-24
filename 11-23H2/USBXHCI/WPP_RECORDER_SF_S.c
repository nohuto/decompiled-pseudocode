/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0037948
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00337B4 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0037948
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037948
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037948: mov     rax, rsp
 * 00000001C003794B: mov     [rax+8], rbx
 * 00000001C003794F: mov     [rax+10h], rsi
 * 00000001C0037953: mov     [rax+18h], rdi
 * 00000001C0037957: mov     [rax+20h], r12
 * 00000001C003795B: push    r15
 * 00000001C003795D: sub     rsp, 40h
 * 00000001C0037961: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0037968: lea     r15, aNull; "NULL"
 * 00000001C003796F: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0037974: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0037978: mov     rsi, rcx
 * 00000001C003797B: mov     r12d, 0E9h
 * 00000001C0037981: mov     eax, [rdx+2Ch]
 * 00000001C0037984: test    al, 8
 * 00000001C0037986: jz      short loc_1C00379EA
 * 00000001C0037988: cmp     byte ptr [rdx+29h], 2
 * 00000001C003798C: jb      short loc_1C00379EA
 * 00000001C003798E: test    rdi, rdi
 * 00000001C0037991: jz      short loc_1C00379A4
 * 00000001C0037993: mov     rdx, rbx
 * 00000001C0037996: inc     rdx
 * 00000001C0037999: cmp     byte ptr [rdi+rdx], 0
 * 00000001C003799D: jnz     short loc_1C0037996
 * 00000001C003799F: inc     rdx
 * 00000001C00379A2: jmp     short loc_1C00379A9
 * 00000001C00379A4: mov     edx, 5
 * 00000001C00379A9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00379B0: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00379B7: test    rdi, rdi
 * 00000001C00379BA: mov     rcx, rdi
 * 00000001C00379BD: mov     r9d, r12d
 * 00000001C00379C0: cmovz   rcx, r15
 * 00000001C00379C4: and     [rsp+48h+var_18], 0
 * 00000001C00379CA: mov     [rsp+48h+var_20], rdx
 * 00000001C00379CF: mov     edx, 2Bh ; '+'
 * 00000001C00379D4: mov     [rsp+48h+var_28], rcx
 * 00000001C00379D9: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00379E0: mov     rcx, [rcx+18h]
 * 00000001C00379E4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00379EA: test    rdi, rdi
 * 00000001C00379ED: jz      short loc_1C00379FD
 * 00000001C00379EF: inc     rbx
 * 00000001C00379F2: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00379F6: jnz     short loc_1C00379EF
 * 00000001C00379F8: inc     rbx
 * 00000001C00379FB: jmp     short loc_1C0037A02
 * 00000001C00379FD: mov     ebx, 5
 * 00000001C0037A02: test    rdi, rdi
 * 00000001C0037A05: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037A0C: mov     edx, 2
 * 00000001C0037A11: mov     rcx, rsi
 * 00000001C0037A14: cmovz   rdi, r15
 * 00000001C0037A18: and     [rsp+48h+var_10], 0
 * 00000001C0037A1E: mov     [rsp+48h+var_18], rbx
 * 00000001C0037A23: mov     [rsp+48h+var_20], rdi
 * 00000001C0037A28: lea     r8d, [rdx+2]
 * 00000001C0037A2C: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0037A32: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037A39: nop     dword ptr [rax+rax+00h]
 * 00000001C0037A3E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0037A43: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0037A48: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0037A4D: mov     r12, [rsp+48h+arg_18]
 * 00000001C0037A52: add     rsp, 40h
 * 00000001C0037A56: pop     r15
 * 00000001C0037A58: retn
 */
