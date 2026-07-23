/*
 * XREFs of sub_140AB71C0 @ 0x140AB71C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140AB71C0 @ 0x140AB71C0 (sub_140AB71C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB71C0 @ 0x140AB71C0
 * Reason: Hex-Rays returned no pseudocode for 0x140AB71C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB71C0: swapgs
 * 0000000140AB71C3: mov     gs:0A010h, rsp
 * 0000000140AB71CC: mov     rsp, gs:0A000h
 * 0000000140AB71D5: bt      dword ptr gs:0A018h, 1
 * 0000000140AB71DF: jb      short loc_140AB71E4
 * 0000000140AB71E1: mov     cr3, rsp
 * 0000000140AB71E4: mov     rsp, gs:0A008h
 * 0000000140AB71ED: push    2Bh ; '+'
 * 0000000140AB71EF: push    qword ptr gs:0A010h
 * 0000000140AB71F7: push    r11
 * 0000000140AB71F9: push    33h ; '3'
 * 0000000140AB71FB: push    rcx
 * 0000000140AB71FC: mov     rcx, r10
 * 0000000140AB71FF: sub     rsp, 8
 * 0000000140AB7203: push    rbp
 * 0000000140AB7204: sub     rsp, 158h
 * 0000000140AB720B: lea     rbp, [rsp+190h+var_110]
 * 0000000140AB7213: mov     [rbp+0C0h], rbx
 * 0000000140AB721A: mov     [rbp+0C8h], rdi
 * 0000000140AB7221: mov     [rbp+0D0h], rsi
 * 0000000140AB7228: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140AB722F: jz      short loc_140AB723D
 * 0000000140AB7231: test    byte ptr [rbp+0F0h], 1
 * 0000000140AB7238: jz      short loc_140AB723D
 * 0000000140AB723A: stac
 * 0000000140AB723D: mov     [rbp-50h], rax
 * 0000000140AB7241: mov     [rbp-48h], rcx
 * 0000000140AB7245: mov     [rbp-40h], rdx
 * 0000000140AB7249: mov     rcx, gs:188h
 * 0000000140AB7252: mov     rcx, [rcx+220h]
 * 0000000140AB7259: mov     rcx, [rcx+9E0h]
 * 0000000140AB7260: mov     gs:858h, rcx
 * 0000000140AB7269: mov     cx, gs:850h
 * 0000000140AB7272: mov     gs:852h, cx
 * 0000000140AB727B: mov     cx, gs:860h
 * 0000000140AB7284: mov     gs:854h, cx
 * 0000000140AB728D: movzx   eax, word ptr gs:866h
 * 0000000140AB7296: cmp     gs:864h, ax
 * 0000000140AB729F: jz      short loc_140AB72B3
 * 0000000140AB72A1: mov     gs:864h, ax
 * 0000000140AB72AA: mov     ecx, 48h ; 'H'
 * 0000000140AB72AF: xor     edx, edx
 * 0000000140AB72B1: wrmsr
 * 0000000140AB72B3: movzx   edx, word ptr gs:860h
 * 0000000140AB72BC: test    edx, 8
 * 0000000140AB72C2: jz      short loc_140AB72DB
 * 0000000140AB72C4: mov     eax, 1
 * 0000000140AB72C9: xor     edx, edx
 * 0000000140AB72CB: mov     ecx, 49h ; 'I'
 * 0000000140AB72D0: wrmsr
 * 0000000140AB72D2: movzx   edx, word ptr gs:860h
 * 0000000140AB72DB: test    edx, 2
 * 0000000140AB72E1: jz      loc_140AB741E
 * 0000000140AB72E7: call    loc_140AB73FA
 * 0000000140AB72EC: add     rsp, 8
 * 0000000140AB72F0: call    loc_140AB7403
 * 0000000140AB72F5: add     rsp, 8
 * 0000000140AB72F9: call    loc_140AB72EC
 * 0000000140AB72FE: add     rsp, 8
 * 0000000140AB7302: call    loc_140AB72F5
 * 0000000140AB7307: add     rsp, 8
 * 0000000140AB730B: call    loc_140AB72FE
 * 0000000140AB7310: add     rsp, 8
 * 0000000140AB7314: call    loc_140AB7307
 * 0000000140AB7319: add     rsp, 8
 * 0000000140AB731D: call    loc_140AB7310
 * 0000000140AB7322: add     rsp, 8
 * 0000000140AB7326: call    loc_140AB7319
 * 0000000140AB732B: add     rsp, 8
 * 0000000140AB732F: call    loc_140AB7322
 * 0000000140AB7334: add     rsp, 8
 * 0000000140AB7338: call    loc_140AB732B
 * 0000000140AB733D: add     rsp, 8
 * 0000000140AB7341: call    loc_140AB7334
 * 0000000140AB7346: add     rsp, 8
 * 0000000140AB734A: call    loc_140AB733D
 * 0000000140AB734F: add     rsp, 8
 * 0000000140AB7353: call    loc_140AB7346
 * 0000000140AB7358: add     rsp, 8
 * 0000000140AB735C: call    loc_140AB734F
 * 0000000140AB7361: add     rsp, 8
 * 0000000140AB7365: call    loc_140AB7358
 * 0000000140AB736A: add     rsp, 8
 * 0000000140AB736E: call    loc_140AB7361
 * 0000000140AB7373: add     rsp, 8
 * 0000000140AB7377: call    loc_140AB736A
 * 0000000140AB737C: add     rsp, 8
 * 0000000140AB7380: call    loc_140AB7373
 * 0000000140AB7385: add     rsp, 8
 * 0000000140AB7389: call    loc_140AB737C
 * 0000000140AB738E: add     rsp, 8
 * 0000000140AB7392: call    loc_140AB7385
 * 0000000140AB7397: add     rsp, 8
 * 0000000140AB739B: call    loc_140AB738E
 * 0000000140AB73A0: add     rsp, 8
 * 0000000140AB73A4: call    loc_140AB7397
 * 0000000140AB73A9: add     rsp, 8
 * 0000000140AB73AD: call    loc_140AB73A0
 * 0000000140AB73B2: add     rsp, 8
 * 0000000140AB73B6: call    loc_140AB73A9
 * 0000000140AB73BB: add     rsp, 8
 * 0000000140AB73BF: call    loc_140AB73B2
 * 0000000140AB73C4: add     rsp, 8
 * 0000000140AB73C8: call    loc_140AB73BB
 * 0000000140AB73CD: add     rsp, 8
 * 0000000140AB73D1: call    loc_140AB73C4
 * 0000000140AB73D6: add     rsp, 8
 * 0000000140AB73DA: call    loc_140AB73CD
 * 0000000140AB73DF: add     rsp, 8
 * 0000000140AB73E3: call    loc_140AB73D6
 * 0000000140AB73E8: add     rsp, 8
 * 0000000140AB73EC: call    loc_140AB73DF
 * 0000000140AB73F1: add     rsp, 8
 * 0000000140AB73F5: call    loc_140AB73E8
 * 0000000140AB73FA: add     rsp, 8
 * 0000000140AB73FE: call    loc_140AB73F1
 * 0000000140AB7403: add     rsp, 8
 * 0000000140AB7407: mov     eax, 0DADAh
 * 0000000140AB740C: test    byte ptr gs:862h, 8
 * 0000000140AB7415: jz      short loc_140AB741E
 * 0000000140AB7417: mov     al, 20h ; ' '
 * 0000000140AB7419: incsspq rax
 * 0000000140AB741E: test    edx, 200h
 * 0000000140AB7424: jz      short loc_140AB742B
 * 0000000140AB7426: call    sub_1404357C0
 * 0000000140AB742B: lfence
 * 0000000140AB742E: mov     byte ptr gs:856h, 0
 * 0000000140AB7437: jmp     loc_140434279
 * 0000000140AB743C: retn
 */
