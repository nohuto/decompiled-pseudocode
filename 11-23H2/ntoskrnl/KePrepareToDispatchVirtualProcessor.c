/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140460BE0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x140460BE0
 * Reason: Hex-Rays returned no pseudocode for 0x140460BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140460BE0: mov     rax, rsp
 * 0000000140460BE3: mov     [rax+8], rbx
 * 0000000140460BE7: mov     [rax+10h], rbp
 * 0000000140460BEB: mov     [rax+18h], rsi
 * 0000000140460BEF: push    rdi
 * 0000000140460BF0: push    r12
 * 0000000140460BF2: push    r13
 * 0000000140460BF4: push    r14
 * 0000000140460BF6: push    r15
 * 0000000140460BF8: sub     rsp, 40h
 * 0000000140460BFC: mov     rbx, gs:20h
 * 0000000140460C05: mov     r10, rdx
 * 0000000140460C08: movups  xmm0, cs:KiSpeculationFeatures
 * 0000000140460C0F: xor     edx, edx
 * 0000000140460C11: mov     r13, [rsp+68h+arg_20]
 * 0000000140460C19: movsd   xmm1, cs:qword_140D1EAF0
 * 0000000140460C21: mov     rbp, [rsp+68h+arg_28]
 * 0000000140460C29: mov     [r10], dl
 * 0000000140460C2C: mov     [r8], dl
 * 0000000140460C2F: mov     [r9], dl
 * 0000000140460C32: mov     [r13+0], dl
 * 0000000140460C36: mov     [rbp+0], rdx
 * 0000000140460C3A: movups  xmmword ptr [rax-48h], xmm0
 * 0000000140460C3E: movsd   qword ptr [rax-38h], xmm1
 * 0000000140460C43: cli
 * 0000000140460C44: lea     r11d, [rdx+4]
 * 0000000140460C48: test    cl, cl
 * 0000000140460C4A: jz      loc_140460D80
 * 0000000140460C50: mov     rax, 1000000000h
 * 0000000140460C5A: test    [rsp+68h+var_48], rax
 * 0000000140460C5F: jnz     short loc_140460C6A
 * 0000000140460C61: mov     byte ptr [r8], 1
 * 0000000140460C65: jmp     loc_140460DB7
 * 0000000140460C6A: mov     rax, [rbx+8]
 * 0000000140460C6E: mov     rcx, [rax+220h]
 * 0000000140460C75: mov     r12, [rcx+9E0h]
 * 0000000140460C7C: test    r12, r12
 * 0000000140460C7F: jnz     short loc_140460C87
 * 0000000140460C81: mov     byte ptr [r8], 1
 * 0000000140460C85: jmp     short loc_140460CC6
 * 0000000140460C87: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140460C8E: test    al, 8
 * 0000000140460C90: jnz     loc_140460D80
 * 0000000140460C96: bt      ax, r11w
 * 0000000140460C9B: setb    al
 * 0000000140460C9E: and     al, [rbx+6D6h]
 * 0000000140460CA4: test    al, 1
 * 0000000140460CA6: jnz     loc_140460D80
 * 0000000140460CAC: test    byte ptr [rsp+68h+var_48], 10h
 * 0000000140460CB1: jz      short loc_140460CC2
 * 0000000140460CB3: test    [rsp+68h+var_48], 1000h
 * 0000000140460CBC: jz      loc_140460D80
 * 0000000140460CC2: mov     byte ptr [r9], 1
 * 0000000140460CC6: mov     edi, 6E0h
 * 0000000140460CCB: mov     rsi, rbx
 * 0000000140460CCE: mov     r15, rbx
 * 0000000140460CD1: lea     r14d, [rdi-0Ah]
 * 0000000140460CD5: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140460CDC: test    al, 2
 * 0000000140460CDE: jz      short loc_140460CE9
 * 0000000140460CE0: xor     ecx, ecx
 * 0000000140460CE2: call    KiUpdateStibpPairing
 * 0000000140460CE7: jmp     short loc_140460D28
 * 0000000140460CE9: test    [rsi+rdi], r11b
 * 0000000140460CED: jz      short loc_140460D0D
 * 0000000140460CEF: mov     eax, 1
 * 0000000140460CF4: lea     ecx, [rax+48h]
 * 0000000140460CF7: wrmsr
 * 0000000140460CF9: mov     ebp, 0FFFBh
 * 0000000140460CFE: and     [rsi+rdi], bp
 * 0000000140460D02: mov     rbp, [rsp+68h+arg_28]
 * 0000000140460D0A: mov     [r10], al
 * 0000000140460D0D: test    byte ptr [rsi+rdi], 20h
 * 0000000140460D11: jz      short loc_140460D21
 * 0000000140460D13: call    KiFlushCurrentRsb
 * 0000000140460D18: mov     eax, 0FFDFh
 * 0000000140460D1D: and     [rsi+rdi], ax
 * 0000000140460D21: mov     [rbx+6D8h], r12
 * 0000000140460D28: movzx   eax, word ptr [rsi+rdi]
 * 0000000140460D2C: movzx   edx, word ptr [rbx+6D0h]
 * 0000000140460D33: movzx   ecx, word ptr [rbx+6E6h]
 * 0000000140460D3A: mov     [rbx+6D4h], ax
 * 0000000140460D41: mov     rax, 20000000000h
 * 0000000140460D4B: mov     [rbx+6D2h], dx
 * 0000000140460D52: test    [rsp+68h+var_48], rax
 * 0000000140460D57: jz      short loc_140460D62
 * 0000000140460D59: test    byte ptr [r15+r14], 1
 * 0000000140460D5E: cmovnz  cx, dx
 * 0000000140460D62: cmp     [rbx+6E4h], cx
 * 0000000140460D69: jz      short loc_140460DB7
 * 0000000140460D6B: movzx   eax, cx
 * 0000000140460D6E: mov     [rbp+0], rax
 * 0000000140460D72: mov     byte ptr [r13+0], 1
 * 0000000140460D77: mov     [rbx+6E4h], cx
 * 0000000140460D7E: jmp     short loc_140460DB7
 * 0000000140460D80: mov     ebp, 0FFFBh
 * 0000000140460D85: test    [rbx+6E0h], r11b
 * 0000000140460D8C: jz      short loc_140460DA2
 * 0000000140460D8E: mov     eax, 1
 * 0000000140460D93: lea     ecx, [rax+48h]
 * 0000000140460D96: wrmsr
 * 0000000140460D98: and     [rbx+6E0h], bp
 * 0000000140460D9F: mov     [r10], al
 * 0000000140460DA2: test    byte ptr [rbx+6E0h], 20h
 * 0000000140460DA9: jz      short loc_140460DB7
 * 0000000140460DAB: call    KiFlushCurrentRsb
 * 0000000140460DB0: and     [rbx+6E0h], bp
 * 0000000140460DB7: lea     r11, [rsp+68h+var_28]
 * 0000000140460DBC: mov     rbx, [r11+30h]
 * 0000000140460DC0: mov     rbp, [r11+38h]
 * 0000000140460DC4: mov     rsi, [r11+40h]
 * 0000000140460DC8: mov     rsp, r11
 * 0000000140460DCB: pop     r15
 * 0000000140460DCD: pop     r14
 * 0000000140460DCF: pop     r13
 * 0000000140460DD1: pop     r12
 * 0000000140460DD3: pop     rdi
 * 0000000140460DD4: retn
 */
