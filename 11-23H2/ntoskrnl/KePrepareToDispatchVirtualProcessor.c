/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x1404607E0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x1404607E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404607E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404607E0: mov     rax, rsp
 * 00000001404607E3: mov     [rax+8], rbx
 * 00000001404607E7: mov     [rax+10h], rbp
 * 00000001404607EB: mov     [rax+18h], rsi
 * 00000001404607EF: push    rdi
 * 00000001404607F0: push    r12
 * 00000001404607F2: push    r13
 * 00000001404607F4: push    r14
 * 00000001404607F6: push    r15
 * 00000001404607F8: sub     rsp, 40h
 * 00000001404607FC: mov     rbx, gs:20h
 * 0000000140460805: mov     r10, rdx
 * 0000000140460808: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014046080F: xor     edx, edx
 * 0000000140460811: mov     r13, [rsp+68h+arg_20]
 * 0000000140460819: movsd   xmm1, cs:qword_140D1EAF0
 * 0000000140460821: mov     rbp, [rsp+68h+arg_28]
 * 0000000140460829: mov     [r10], dl
 * 000000014046082C: mov     [r8], dl
 * 000000014046082F: mov     [r9], dl
 * 0000000140460832: mov     [r13+0], dl
 * 0000000140460836: mov     [rbp+0], rdx
 * 000000014046083A: movups  xmmword ptr [rax-48h], xmm0
 * 000000014046083E: movsd   qword ptr [rax-38h], xmm1
 * 0000000140460843: cli
 * 0000000140460844: lea     r11d, [rdx+4]
 * 0000000140460848: test    cl, cl
 * 000000014046084A: jz      loc_140460980
 * 0000000140460850: mov     rax, 1000000000h
 * 000000014046085A: test    [rsp+68h+var_48], rax
 * 000000014046085F: jnz     short loc_14046086A
 * 0000000140460861: mov     byte ptr [r8], 1
 * 0000000140460865: jmp     loc_1404609B7
 * 000000014046086A: mov     rax, [rbx+8]
 * 000000014046086E: mov     rcx, [rax+220h]
 * 0000000140460875: mov     r12, [rcx+9E0h]
 * 000000014046087C: test    r12, r12
 * 000000014046087F: jnz     short loc_140460887
 * 0000000140460881: mov     byte ptr [r8], 1
 * 0000000140460885: jmp     short loc_1404608C6
 * 0000000140460887: movzx   eax, word ptr [rbx+6E0h]
 * 000000014046088E: test    al, 8
 * 0000000140460890: jnz     loc_140460980
 * 0000000140460896: bt      ax, r11w
 * 000000014046089B: setb    al
 * 000000014046089E: and     al, [rbx+6D6h]
 * 00000001404608A4: test    al, 1
 * 00000001404608A6: jnz     loc_140460980
 * 00000001404608AC: test    byte ptr [rsp+68h+var_48], 10h
 * 00000001404608B1: jz      short loc_1404608C2
 * 00000001404608B3: test    [rsp+68h+var_48], 1000h
 * 00000001404608BC: jz      loc_140460980
 * 00000001404608C2: mov     byte ptr [r9], 1
 * 00000001404608C6: mov     edi, 6E0h
 * 00000001404608CB: mov     rsi, rbx
 * 00000001404608CE: mov     r15, rbx
 * 00000001404608D1: lea     r14d, [rdi-0Ah]
 * 00000001404608D5: movzx   eax, word ptr [rbx+6ECh]
 * 00000001404608DC: test    al, 2
 * 00000001404608DE: jz      short loc_1404608E9
 * 00000001404608E0: xor     ecx, ecx
 * 00000001404608E2: call    KiUpdateStibpPairing
 * 00000001404608E7: jmp     short loc_140460928
 * 00000001404608E9: test    [rsi+rdi], r11b
 * 00000001404608ED: jz      short loc_14046090D
 * 00000001404608EF: mov     eax, 1
 * 00000001404608F4: lea     ecx, [rax+48h]
 * 00000001404608F7: wrmsr
 * 00000001404608F9: mov     ebp, 0FFFBh
 * 00000001404608FE: and     [rsi+rdi], bp
 * 0000000140460902: mov     rbp, [rsp+68h+arg_28]
 * 000000014046090A: mov     [r10], al
 * 000000014046090D: test    byte ptr [rsi+rdi], 20h
 * 0000000140460911: jz      short loc_140460921
 * 0000000140460913: call    KiFlushCurrentRsb
 * 0000000140460918: mov     eax, 0FFDFh
 * 000000014046091D: and     [rsi+rdi], ax
 * 0000000140460921: mov     [rbx+6D8h], r12
 * 0000000140460928: movzx   eax, word ptr [rsi+rdi]
 * 000000014046092C: movzx   edx, word ptr [rbx+6D0h]
 * 0000000140460933: movzx   ecx, word ptr [rbx+6E6h]
 * 000000014046093A: mov     [rbx+6D4h], ax
 * 0000000140460941: mov     rax, 20000000000h
 * 000000014046094B: mov     [rbx+6D2h], dx
 * 0000000140460952: test    [rsp+68h+var_48], rax
 * 0000000140460957: jz      short loc_140460962
 * 0000000140460959: test    byte ptr [r15+r14], 1
 * 000000014046095E: cmovnz  cx, dx
 * 0000000140460962: cmp     [rbx+6E4h], cx
 * 0000000140460969: jz      short loc_1404609B7
 * 000000014046096B: movzx   eax, cx
 * 000000014046096E: mov     [rbp+0], rax
 * 0000000140460972: mov     byte ptr [r13+0], 1
 * 0000000140460977: mov     [rbx+6E4h], cx
 * 000000014046097E: jmp     short loc_1404609B7
 * 0000000140460980: mov     ebp, 0FFFBh
 * 0000000140460985: test    [rbx+6E0h], r11b
 * 000000014046098C: jz      short loc_1404609A2
 * 000000014046098E: mov     eax, 1
 * 0000000140460993: lea     ecx, [rax+48h]
 * 0000000140460996: wrmsr
 * 0000000140460998: and     [rbx+6E0h], bp
 * 000000014046099F: mov     [r10], al
 * 00000001404609A2: test    byte ptr [rbx+6E0h], 20h
 * 00000001404609A9: jz      short loc_1404609B7
 * 00000001404609AB: call    KiFlushCurrentRsb
 * 00000001404609B0: and     [rbx+6E0h], bp
 * 00000001404609B7: lea     r11, [rsp+68h+var_28]
 * 00000001404609BC: mov     rbx, [r11+30h]
 * 00000001404609C0: mov     rbp, [r11+38h]
 * 00000001404609C4: mov     rsi, [r11+40h]
 * 00000001404609C8: mov     rsp, r11
 * 00000001404609CB: pop     r15
 * 00000001404609CD: pop     r14
 * 00000001404609CF: pop     r13
 * 00000001404609D1: pop     r12
 * 00000001404609D3: pop     rdi
 * 00000001404609D4: retn
 */
