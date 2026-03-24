/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140460180
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x140460180
 * Reason: Hex-Rays returned no pseudocode for 0x140460180
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140460180: mov     rax, rsp
 * 0000000140460183: mov     [rax+8], rbx
 * 0000000140460187: mov     [rax+10h], rbp
 * 000000014046018B: mov     [rax+18h], rsi
 * 000000014046018F: push    rdi
 * 0000000140460190: push    r12
 * 0000000140460192: push    r13
 * 0000000140460194: push    r14
 * 0000000140460196: push    r15
 * 0000000140460198: sub     rsp, 40h
 * 000000014046019C: mov     rbx, gs:20h
 * 00000001404601A5: mov     r10, rdx
 * 00000001404601A8: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001404601AF: xor     edx, edx
 * 00000001404601B1: mov     r13, [rsp+68h+arg_20]
 * 00000001404601B9: movsd   xmm1, cs:qword_140D1EAF0
 * 00000001404601C1: mov     rbp, [rsp+68h+arg_28]
 * 00000001404601C9: mov     [r10], dl
 * 00000001404601CC: mov     [r8], dl
 * 00000001404601CF: mov     [r9], dl
 * 00000001404601D2: mov     [r13+0], dl
 * 00000001404601D6: mov     [rbp+0], rdx
 * 00000001404601DA: movups  xmmword ptr [rax-48h], xmm0
 * 00000001404601DE: movsd   qword ptr [rax-38h], xmm1
 * 00000001404601E3: cli
 * 00000001404601E4: lea     r11d, [rdx+4]
 * 00000001404601E8: test    cl, cl
 * 00000001404601EA: jz      loc_140460320
 * 00000001404601F0: mov     rax, 1000000000h
 * 00000001404601FA: test    [rsp+68h+var_48], rax
 * 00000001404601FF: jnz     short loc_14046020A
 * 0000000140460201: mov     byte ptr [r8], 1
 * 0000000140460205: jmp     loc_140460357
 * 000000014046020A: mov     rax, [rbx+8]
 * 000000014046020E: mov     rcx, [rax+220h]
 * 0000000140460215: mov     r12, [rcx+9E0h]
 * 000000014046021C: test    r12, r12
 * 000000014046021F: jnz     short loc_140460227
 * 0000000140460221: mov     byte ptr [r8], 1
 * 0000000140460225: jmp     short loc_140460266
 * 0000000140460227: movzx   eax, word ptr [rbx+6E0h]
 * 000000014046022E: test    al, 8
 * 0000000140460230: jnz     loc_140460320
 * 0000000140460236: bt      ax, r11w
 * 000000014046023B: setb    al
 * 000000014046023E: and     al, [rbx+6D6h]
 * 0000000140460244: test    al, 1
 * 0000000140460246: jnz     loc_140460320
 * 000000014046024C: test    byte ptr [rsp+68h+var_48], 10h
 * 0000000140460251: jz      short loc_140460262
 * 0000000140460253: test    [rsp+68h+var_48], 1000h
 * 000000014046025C: jz      loc_140460320
 * 0000000140460262: mov     byte ptr [r9], 1
 * 0000000140460266: mov     edi, 6E0h
 * 000000014046026B: mov     rsi, rbx
 * 000000014046026E: mov     r15, rbx
 * 0000000140460271: lea     r14d, [rdi-0Ah]
 * 0000000140460275: movzx   eax, word ptr [rbx+6ECh]
 * 000000014046027C: test    al, 2
 * 000000014046027E: jz      short loc_140460289
 * 0000000140460280: xor     ecx, ecx
 * 0000000140460282: call    KiUpdateStibpPairing
 * 0000000140460287: jmp     short loc_1404602C8
 * 0000000140460289: test    [rsi+rdi], r11b
 * 000000014046028D: jz      short loc_1404602AD
 * 000000014046028F: mov     eax, 1
 * 0000000140460294: lea     ecx, [rax+48h]
 * 0000000140460297: wrmsr
 * 0000000140460299: mov     ebp, 0FFFBh
 * 000000014046029E: and     [rsi+rdi], bp
 * 00000001404602A2: mov     rbp, [rsp+68h+arg_28]
 * 00000001404602AA: mov     [r10], al
 * 00000001404602AD: test    byte ptr [rsi+rdi], 20h
 * 00000001404602B1: jz      short loc_1404602C1
 * 00000001404602B3: call    KiFlushCurrentRsb
 * 00000001404602B8: mov     eax, 0FFDFh
 * 00000001404602BD: and     [rsi+rdi], ax
 * 00000001404602C1: mov     [rbx+6D8h], r12
 * 00000001404602C8: movzx   eax, word ptr [rsi+rdi]
 * 00000001404602CC: movzx   edx, word ptr [rbx+6D0h]
 * 00000001404602D3: movzx   ecx, word ptr [rbx+6E6h]
 * 00000001404602DA: mov     [rbx+6D4h], ax
 * 00000001404602E1: mov     rax, 20000000000h
 * 00000001404602EB: mov     [rbx+6D2h], dx
 * 00000001404602F2: test    [rsp+68h+var_48], rax
 * 00000001404602F7: jz      short loc_140460302
 * 00000001404602F9: test    byte ptr [r15+r14], 1
 * 00000001404602FE: cmovnz  cx, dx
 * 0000000140460302: cmp     [rbx+6E4h], cx
 * 0000000140460309: jz      short loc_140460357
 * 000000014046030B: movzx   eax, cx
 * 000000014046030E: mov     [rbp+0], rax
 * 0000000140460312: mov     byte ptr [r13+0], 1
 * 0000000140460317: mov     [rbx+6E4h], cx
 * 000000014046031E: jmp     short loc_140460357
 * 0000000140460320: mov     ebp, 0FFFBh
 * 0000000140460325: test    [rbx+6E0h], r11b
 * 000000014046032C: jz      short loc_140460342
 * 000000014046032E: mov     eax, 1
 * 0000000140460333: lea     ecx, [rax+48h]
 * 0000000140460336: wrmsr
 * 0000000140460338: and     [rbx+6E0h], bp
 * 000000014046033F: mov     [r10], al
 * 0000000140460342: test    byte ptr [rbx+6E0h], 20h
 * 0000000140460349: jz      short loc_140460357
 * 000000014046034B: call    KiFlushCurrentRsb
 * 0000000140460350: and     [rbx+6E0h], bp
 * 0000000140460357: lea     r11, [rsp+68h+var_28]
 * 000000014046035C: mov     rbx, [r11+30h]
 * 0000000140460360: mov     rbp, [r11+38h]
 * 0000000140460364: mov     rsi, [r11+40h]
 * 0000000140460368: mov     rsp, r11
 * 000000014046036B: pop     r15
 * 000000014046036D: pop     r14
 * 000000014046036F: pop     r13
 * 0000000140460371: pop     r12
 * 0000000140460373: pop     rdi
 * 0000000140460374: retn
 */
