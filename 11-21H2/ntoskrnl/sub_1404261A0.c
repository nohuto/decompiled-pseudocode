/*
 * XREFs of sub_1404261A0 @ 0x1404261A0
 * Callers:
 *     sub_140AB6140 @ 0x140AB6140 (sub_140AB6140.c)
 * Callees:
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404261A0 @ 0x1404261A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404261A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404261A0: push    3
 * 00000001404261A2: push    rbp
 * 00000001404261A3: push    rsi
 * 00000001404261A4: sub     rsp, 150h
 * 00000001404261AB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404261B3: mov     byte ptr [rbp-55h], 0
 * 00000001404261B7: mov     [rbp-50h], rax
 * 00000001404261BB: mov     [rbp-48h], rcx
 * 00000001404261BF: mov     [rbp-40h], rdx
 * 00000001404261C3: mov     [rbp-38h], r8
 * 00000001404261C7: mov     [rbp-30h], r9
 * 00000001404261CB: mov     [rbp-28h], r10
 * 00000001404261CF: mov     [rbp-20h], r11
 * 00000001404261D3: test    byte ptr [rbp+0F0h], 1
 * 00000001404261DA: jnz     short loc_140426216
 * 00000001404261DC: xor     edx, edx
 * 00000001404261DE: rdsspq  rdx
 * 00000001404261E3: mov     [rbp+58h], rdx
 * 00000001404261E7: lfence
 * 00000001404261EA: test    word ptr gs:860h, 1
 * 00000001404261F5: jnz     short loc_1404261FF
 * 00000001404261F7: lfence
 * 00000001404261FA: jmp     loc_14042645E
 * 00000001404261FF: movzx   eax, word ptr gs:864h
 * 0000000140426208: mov     ecx, 48h ; 'H'
 * 000000014042620D: xor     edx, edx
 * 000000014042620F: wrmsr
 * 0000000140426211: jmp     loc_14042645E
 * 0000000140426216: test    cs:byte_140E01840, 1
 * 000000014042621D: jnz     short loc_140426222
 * 000000014042621F: swapgs
 * 0000000140426222: lfence
 * 0000000140426225: mov     rcx, gs:9828h
 * 000000014042622E: test    rcx, rcx
 * 0000000140426231: jz      short loc_140426252
 * 0000000140426233: rdsspq  rdx
 * 0000000140426238: mov     r10, gs:9820h
 * 0000000140426241: add     r10, 8
 * 0000000140426245: cmp     rdx, r10
 * 0000000140426248: jnz     short loc_140426252
 * 000000014042624A: rstorssp qword ptr [rcx]
 * 000000014042624E: saveprevssp
 * 0000000140426252: mov     r10, gs:188h
 * 000000014042625B: mov     rcx, gs:188h
 * 0000000140426264: mov     rcx, [rcx+220h]
 * 000000014042626B: mov     rcx, [rcx+9E0h]
 * 0000000140426272: mov     gs:858h, rcx
 * 000000014042627B: mov     cx, gs:850h
 * 0000000140426284: mov     gs:852h, cx
 * 000000014042628D: mov     cx, gs:860h
 * 0000000140426296: mov     gs:854h, cx
 * 000000014042629F: movzx   eax, word ptr gs:866h
 * 00000001404262A8: cmp     gs:864h, ax
 * 00000001404262B1: jz      short loc_1404262C5
 * 00000001404262B3: mov     gs:864h, ax
 * 00000001404262BC: mov     ecx, 48h ; 'H'
 * 00000001404262C1: xor     edx, edx
 * 00000001404262C3: wrmsr
 * 00000001404262C5: movzx   edx, word ptr gs:860h
 * 00000001404262CE: test    edx, 8
 * 00000001404262D4: jz      short loc_1404262ED
 * 00000001404262D6: mov     eax, 1
 * 00000001404262DB: xor     edx, edx
 * 00000001404262DD: mov     ecx, 49h ; 'I'
 * 00000001404262E2: wrmsr
 * 00000001404262E4: movzx   edx, word ptr gs:860h
 * 00000001404262ED: test    edx, 2
 * 00000001404262F3: jz      loc_140426430
 * 00000001404262F9: call    loc_14042640C
 * 00000001404262FE: add     rsp, 8
 * 0000000140426302: call    loc_140426415
 * 0000000140426307: add     rsp, 8
 * 000000014042630B: call    loc_1404262FE
 * 0000000140426310: add     rsp, 8
 * 0000000140426314: call    loc_140426307
 * 0000000140426319: add     rsp, 8
 * 000000014042631D: call    loc_140426310
 * 0000000140426322: add     rsp, 8
 * 0000000140426326: call    loc_140426319
 * 000000014042632B: add     rsp, 8
 * 000000014042632F: call    loc_140426322
 * 0000000140426334: add     rsp, 8
 * 0000000140426338: call    loc_14042632B
 * 000000014042633D: add     rsp, 8
 * 0000000140426341: call    loc_140426334
 * 0000000140426346: add     rsp, 8
 * 000000014042634A: call    loc_14042633D
 * 000000014042634F: add     rsp, 8
 * 0000000140426353: call    loc_140426346
 * 0000000140426358: add     rsp, 8
 * 000000014042635C: call    loc_14042634F
 * 0000000140426361: add     rsp, 8
 * 0000000140426365: call    loc_140426358
 * 000000014042636A: add     rsp, 8
 * 000000014042636E: call    loc_140426361
 * 0000000140426373: add     rsp, 8
 * 0000000140426377: call    loc_14042636A
 * 000000014042637C: add     rsp, 8
 * 0000000140426380: call    loc_140426373
 * 0000000140426385: add     rsp, 8
 * 0000000140426389: call    loc_14042637C
 * 000000014042638E: add     rsp, 8
 * 0000000140426392: call    loc_140426385
 * 0000000140426397: add     rsp, 8
 * 000000014042639B: call    loc_14042638E
 * 00000001404263A0: add     rsp, 8
 * 00000001404263A4: call    loc_140426397
 * 00000001404263A9: add     rsp, 8
 * 00000001404263AD: call    loc_1404263A0
 * 00000001404263B2: add     rsp, 8
 * 00000001404263B6: call    loc_1404263A9
 * 00000001404263BB: add     rsp, 8
 * 00000001404263BF: call    loc_1404263B2
 * 00000001404263C4: add     rsp, 8
 * 00000001404263C8: call    loc_1404263BB
 * 00000001404263CD: add     rsp, 8
 * 00000001404263D1: call    loc_1404263C4
 * 00000001404263D6: add     rsp, 8
 * 00000001404263DA: call    loc_1404263CD
 * 00000001404263DF: add     rsp, 8
 * 00000001404263E3: call    loc_1404263D6
 * 00000001404263E8: add     rsp, 8
 * 00000001404263EC: call    loc_1404263DF
 * 00000001404263F1: add     rsp, 8
 * 00000001404263F5: call    loc_1404263E8
 * 00000001404263FA: add     rsp, 8
 * 00000001404263FE: call    loc_1404263F1
 * 0000000140426403: add     rsp, 8
 * 0000000140426407: call    loc_1404263FA
 * 000000014042640C: add     rsp, 8
 * 0000000140426410: call    loc_140426403
 * 0000000140426415: add     rsp, 8
 * 0000000140426419: mov     eax, 0DADAh
 * 000000014042641E: test    byte ptr gs:862h, 8
 * 0000000140426427: jz      short loc_140426430
 * 0000000140426429: mov     al, 20h ; ' '
 * 000000014042642B: incsspq rax
 * 0000000140426430: test    edx, 200h
 * 0000000140426436: jz      short loc_14042643D
 * 0000000140426438: call    sub_1404357C0
 * 000000014042643D: lfence
 * 0000000140426440: mov     byte ptr gs:856h, 0
 * 0000000140426449: test    byte ptr [r10+3], 3
 * 000000014042644E: mov     word ptr [rbp+80h], 0
 * 0000000140426457: jz      short loc_14042645E
 * 0000000140426459: call    sub_14041F920
 * 000000014042645E: cld
 * 000000014042645F: stmxcsr dword ptr [rbp-54h]
 * 0000000140426463: ldmxcsr dword ptr gs:180h
 * 000000014042646C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140426470: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140426474: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140426478: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014042647C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140426480: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140426484: cmp     byte ptr gs:82DAh, 0
 * 000000014042648D: jz      short loc_140426494
 * 000000014042648F: call    sub_1403B4940
 * 0000000140426494: lea     rax, loc_140429887
 * 000000014042649B: cmp     rax, [rbp+0E8h]
 * 00000001404264A2: jnb     short loc_1404264BD
 * 00000001404264A4: lea     rax, loc_1404298A0
 * 00000001404264AB: cmp     rax, [rbp+0E8h]
 * 00000001404264B2: jb      short loc_1404264BD
 * 00000001404264B4: lea     rcx, [rbp-80h]
 * 00000001404264B8: call    sub_1402F2540
 * 00000001404264BD: xor     esi, esi
 * 00000001404264BF: inc     dword ptr gs:82C0h
 * 00000001404264C7: jmp     sub_140426C70
 */
