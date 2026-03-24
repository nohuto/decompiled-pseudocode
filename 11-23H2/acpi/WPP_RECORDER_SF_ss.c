/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C003662C
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C00360A0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x1C003662C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003662C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003662C: mov     rax, rsp
 * 00000001C003662F: mov     [rax+8], rbx
 * 00000001C0036633: mov     [rax+10h], rbp
 * 00000001C0036637: mov     [rax+18h], rsi
 * 00000001C003663B: mov     [rax+20h], rdi
 * 00000001C003663F: push    r12
 * 00000001C0036641: push    r13
 * 00000001C0036643: push    r15
 * 00000001C0036645: sub     rsp, 50h
 * 00000001C0036649: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0036650: lea     r12, aNull; "NULL"
 * 00000001C0036657: mov     rsi, [rsp+68h+arg_28]
 * 00000001C003665F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0036663: mov     rdi, [rsp+68h+arg_30]
 * 00000001C003666B: mov     rbp, rcx
 * 00000001C003666E: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0036675: lea     r15d, [rbx+6]
 * 00000001C0036679: lea     r13d, [rbx+0Ch]
 * 00000001C003667D: jz      loc_1C0036715
 * 00000001C0036683: cmp     byte ptr [rdx+29h], 2
 * 00000001C0036687: jb      loc_1C0036715
 * 00000001C003668D: test    rdi, rdi
 * 00000001C0036690: jz      short loc_1C00366A4
 * 00000001C0036692: mov     r8, rbx
 * 00000001C0036695: inc     r8
 * 00000001C0036698: cmp     byte ptr [rdi+r8], 0
 * 00000001C003669D: jnz     short loc_1C0036695
 * 00000001C003669F: inc     r8
 * 00000001C00366A2: jmp     short loc_1C00366A7
 * 00000001C00366A4: mov     r8, r15
 * 00000001C00366A7: test    rdi, rdi
 * 00000001C00366AA: mov     r9, rdi
 * 00000001C00366AD: cmovz   r9, r12
 * 00000001C00366B1: test    rsi, rsi
 * 00000001C00366B4: jz      short loc_1C00366C7
 * 00000001C00366B6: mov     rdx, rbx
 * 00000001C00366B9: inc     rdx
 * 00000001C00366BC: cmp     byte ptr [rsi+rdx], 0
 * 00000001C00366C0: jnz     short loc_1C00366B9
 * 00000001C00366C2: inc     rdx
 * 00000001C00366C5: jmp     short loc_1C00366CA
 * 00000001C00366C7: mov     rdx, r15
 * 00000001C00366CA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00366D1: test    rsi, rsi
 * 00000001C00366D4: mov     rcx, rsi
 * 00000001C00366D7: cmovz   rcx, r12
 * 00000001C00366DB: and     [rsp+68h+var_28], 0
 * 00000001C00366E1: mov     [rsp+68h+var_30], r8
 * 00000001C00366E6: lea     r8, WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids
 * 00000001C00366ED: mov     [rsp+68h+var_38], r9
 * 00000001C00366F2: mov     r9d, r13d
 * 00000001C00366F5: mov     [rsp+68h+var_40], rdx
 * 00000001C00366FA: mov     edx, 2Bh ; '+'
 * 00000001C00366FF: mov     [rsp+68h+var_48], rcx
 * 00000001C0036704: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003670B: mov     rcx, [rcx+18h]
 * 00000001C003670F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036715: test    rdi, rdi
 * 00000001C0036718: jz      short loc_1C003672B
 * 00000001C003671A: mov     rax, rbx
 * 00000001C003671D: inc     rax
 * 00000001C0036720: cmp     byte ptr [rdi+rax], 0
 * 00000001C0036724: jnz     short loc_1C003671D
 * 00000001C0036726: inc     rax
 * 00000001C0036729: jmp     short loc_1C003672E
 * 00000001C003672B: mov     rax, r15
 * 00000001C003672E: test    rdi, rdi
 * 00000001C0036731: cmovz   rdi, r12
 * 00000001C0036735: test    rsi, rsi
 * 00000001C0036738: jz      short loc_1C0036748
 * 00000001C003673A: inc     rbx
 * 00000001C003673D: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0036741: jnz     short loc_1C003673A
 * 00000001C0036743: inc     rbx
 * 00000001C0036746: jmp     short loc_1C003674B
 * 00000001C0036748: mov     rbx, r15
 * 00000001C003674B: test    rsi, rsi
 * 00000001C003674E: lea     r9, WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids
 * 00000001C0036755: mov     edx, 2
 * 00000001C003675A: mov     rcx, rbp
 * 00000001C003675D: cmovz   rsi, r12
 * 00000001C0036761: and     [rsp+68h+var_20], 0
 * 00000001C0036767: mov     [rsp+68h+var_28], rax
 * 00000001C003676C: mov     [rsp+68h+var_30], rdi
 * 00000001C0036771: mov     [rsp+68h+var_38], rbx
 * 00000001C0036776: lea     r8d, [rdx+13h]
 * 00000001C003677A: mov     [rsp+68h+var_40], rsi
 * 00000001C003677F: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0036785: call    cs:__imp_WppAutoLogTrace
 * 00000001C003678C: nop     dword ptr [rax+rax+00h]
 * 00000001C0036791: lea     r11, [rsp+68h+var_18]
 * 00000001C0036796: mov     rbx, [r11+20h]
 * 00000001C003679A: mov     rbp, [r11+28h]
 * 00000001C003679E: mov     rsi, [r11+30h]
 * 00000001C00367A2: mov     rdi, [r11+38h]
 * 00000001C00367A6: mov     rsp, r11
 * 00000001C00367A9: pop     r15
 * 00000001C00367AB: pop     r13
 * 00000001C00367AD: pop     r12
 * 00000001C00367AF: retn
 */
