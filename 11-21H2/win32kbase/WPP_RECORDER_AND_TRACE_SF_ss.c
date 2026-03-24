/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01B3088
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C01B2B84 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01B3088
 * Reason: Hex-Rays returned no pseudocode for 0x1C01B3088
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01B3088: mov     rax, rsp
 * 00000001C01B308B: mov     [rax+8], rbx
 * 00000001C01B308F: mov     [rax+10h], rbp
 * 00000001C01B3093: mov     [rax+18h], rsi
 * 00000001C01B3097: mov     [rax+20h], rdi
 * 00000001C01B309B: push    r12
 * 00000001C01B309D: push    r13
 * 00000001C01B309F: push    r14
 * 00000001C01B30A1: sub     rsp, 50h
 * 00000001C01B30A5: mov     r14, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01B30AC: lea     r13, aNull; "NULL"
 * 00000001C01B30B3: mov     rdi, [rsp+68h+arg_48]
 * 00000001C01B30BB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C01B30BF: mov     rsi, [rsp+68h+arg_40]
 * 00000001C01B30C7: mov     bpl, r8b
 * 00000001C01B30CA: mov     r11, rcx
 * 00000001C01B30CD: lea     r12d, [rbx+6]
 * 00000001C01B30D1: lea     r9d, [rbx+26h]
 * 00000001C01B30D5: test    dl, dl
 * 00000001C01B30D7: jz      loc_1C01B3162
 * 00000001C01B30DD: mov     r10, cs:pfnWppTraceMessage
 * 00000001C01B30E4: test    rdi, rdi
 * 00000001C01B30E7: jz      short loc_1C01B30FA
 * 00000001C01B30E9: mov     rdx, rbx
 * 00000001C01B30EC: inc     rdx
 * 00000001C01B30EF: cmp     byte ptr [rdi+rdx], 0
 * 00000001C01B30F3: jnz     short loc_1C01B30EC
 * 00000001C01B30F5: inc     rdx
 * 00000001C01B30F8: jmp     short loc_1C01B30FD
 * 00000001C01B30FA: mov     rdx, r12
 * 00000001C01B30FD: test    rdi, rdi
 * 00000001C01B3100: mov     r8, rdi
 * 00000001C01B3103: cmovz   r8, r13
 * 00000001C01B3107: test    rsi, rsi
 * 00000001C01B310A: jz      short loc_1C01B311D
 * 00000001C01B310C: mov     rax, rbx
 * 00000001C01B310F: inc     rax
 * 00000001C01B3112: cmp     byte ptr [rsi+rax], 0
 * 00000001C01B3116: jnz     short loc_1C01B310F
 * 00000001C01B3118: inc     rax
 * 00000001C01B311B: jmp     short loc_1C01B3120
 * 00000001C01B311D: mov     rax, r12
 * 00000001C01B3120: test    rsi, rsi
 * 00000001C01B3123: mov     rcx, rsi
 * 00000001C01B3126: cmovz   rcx, r13
 * 00000001C01B312A: and     [rsp+68h+var_28], 0
 * 00000001C01B3130: mov     [rsp+68h+var_30], rdx
 * 00000001C01B3135: mov     edx, 2Bh ; '+'
 * 00000001C01B313A: mov     [rsp+68h+var_38], r8
 * 00000001C01B313F: lea     r8, WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids
 * 00000001C01B3146: mov     [rsp+68h+var_40], rax
 * 00000001C01B314B: mov     rax, r10
 * 00000001C01B314E: mov     [rsp+68h+var_48], rcx
 * 00000001C01B3153: mov     rcx, r11
 * 00000001C01B3156: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01B315C: mov     r9d, 25h ; '%'
 * 00000001C01B3162: test    bpl, bpl
 * 00000001C01B3165: jz      short loc_1C01B31E3
 * 00000001C01B3167: test    rdi, rdi
 * 00000001C01B316A: jz      short loc_1C01B317D
 * 00000001C01B316C: mov     rax, rbx
 * 00000001C01B316F: inc     rax
 * 00000001C01B3172: cmp     byte ptr [rdi+rax], 0
 * 00000001C01B3176: jnz     short loc_1C01B316F
 * 00000001C01B3178: inc     rax
 * 00000001C01B317B: jmp     short loc_1C01B3180
 * 00000001C01B317D: mov     rax, r12
 * 00000001C01B3180: test    rdi, rdi
 * 00000001C01B3183: cmovz   rdi, r13
 * 00000001C01B3187: test    rsi, rsi
 * 00000001C01B318A: jz      short loc_1C01B319A
 * 00000001C01B318C: inc     rbx
 * 00000001C01B318F: cmp     byte ptr [rsi+rbx], 0
 * 00000001C01B3193: jnz     short loc_1C01B318C
 * 00000001C01B3195: inc     rbx
 * 00000001C01B3198: jmp     short loc_1C01B319D
 * 00000001C01B319A: mov     rbx, r12
 * 00000001C01B319D: test    rsi, rsi
 * 00000001C01B31A0: mov     edx, 3
 * 00000001C01B31A5: mov     rcx, r14
 * 00000001C01B31A8: cmovz   rsi, r13
 * 00000001C01B31AC: and     [rsp+68h+var_20], 0
 * 00000001C01B31B2: mov     [rsp+68h+var_28], rax
 * 00000001C01B31B7: mov     [rsp+68h+var_30], rdi
 * 00000001C01B31BC: lea     r8d, [rdx+14h]
 * 00000001C01B31C0: mov     [rsp+68h+var_38], rbx
 * 00000001C01B31C5: mov     [rsp+68h+var_40], rsi
 * 00000001C01B31CA: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C01B31D0: lea     r9, WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids
 * 00000001C01B31D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C01B31DE: nop     dword ptr [rax+rax+00h]
 * 00000001C01B31E3: lea     r11, [rsp+68h+var_18]
 * 00000001C01B31E8: mov     rbx, [r11+20h]
 * 00000001C01B31EC: mov     rbp, [r11+28h]
 * 00000001C01B31F0: mov     rsi, [r11+30h]
 * 00000001C01B31F4: mov     rdi, [r11+38h]
 * 00000001C01B31F8: mov     rsp, r11
 * 00000001C01B31FB: pop     r14
 * 00000001C01B31FD: pop     r13
 * 00000001C01B31FF: pop     r12
 * 00000001C01B3201: retn
 */
