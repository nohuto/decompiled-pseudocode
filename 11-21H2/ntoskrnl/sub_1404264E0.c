/*
 * XREFs of sub_1404264E0 @ 0x1404264E0
 * Callers:
 *     sub_140AB61C0 @ 0x140AB61C0 (sub_140AB61C0.c)
 * Callees:
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404264E0 @ 0x1404264E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404264E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404264E0: push    4
 * 00000001404264E2: push    rbp
 * 00000001404264E3: push    rsi
 * 00000001404264E4: sub     rsp, 150h
 * 00000001404264EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404264F3: mov     byte ptr [rbp-55h], 0
 * 00000001404264F7: mov     [rbp-50h], rax
 * 00000001404264FB: mov     [rbp-48h], rcx
 * 00000001404264FF: mov     [rbp-40h], rdx
 * 0000000140426503: mov     [rbp-38h], r8
 * 0000000140426507: mov     [rbp-30h], r9
 * 000000014042650B: mov     [rbp-28h], r10
 * 000000014042650F: mov     [rbp-20h], r11
 * 0000000140426513: test    byte ptr [rbp+0F0h], 1
 * 000000014042651A: jnz     short loc_140426556
 * 000000014042651C: xor     edx, edx
 * 000000014042651E: rdsspq  rdx
 * 0000000140426523: mov     [rbp+58h], rdx
 * 0000000140426527: lfence
 * 000000014042652A: test    word ptr gs:860h, 1
 * 0000000140426535: jnz     short loc_14042653F
 * 0000000140426537: lfence
 * 000000014042653A: jmp     loc_14042679E
 * 000000014042653F: movzx   eax, word ptr gs:864h
 * 0000000140426548: mov     ecx, 48h ; 'H'
 * 000000014042654D: xor     edx, edx
 * 000000014042654F: wrmsr
 * 0000000140426551: jmp     loc_14042679E
 * 0000000140426556: test    cs:byte_140E01840, 1
 * 000000014042655D: jnz     short loc_140426562
 * 000000014042655F: swapgs
 * 0000000140426562: lfence
 * 0000000140426565: mov     rcx, gs:9828h
 * 000000014042656E: test    rcx, rcx
 * 0000000140426571: jz      short loc_140426592
 * 0000000140426573: rdsspq  rdx
 * 0000000140426578: mov     r10, gs:9820h
 * 0000000140426581: add     r10, 8
 * 0000000140426585: cmp     rdx, r10
 * 0000000140426588: jnz     short loc_140426592
 * 000000014042658A: rstorssp qword ptr [rcx]
 * 000000014042658E: saveprevssp
 * 0000000140426592: mov     r10, gs:188h
 * 000000014042659B: mov     rcx, gs:188h
 * 00000001404265A4: mov     rcx, [rcx+220h]
 * 00000001404265AB: mov     rcx, [rcx+9E0h]
 * 00000001404265B2: mov     gs:858h, rcx
 * 00000001404265BB: mov     cx, gs:850h
 * 00000001404265C4: mov     gs:852h, cx
 * 00000001404265CD: mov     cx, gs:860h
 * 00000001404265D6: mov     gs:854h, cx
 * 00000001404265DF: movzx   eax, word ptr gs:866h
 * 00000001404265E8: cmp     gs:864h, ax
 * 00000001404265F1: jz      short loc_140426605
 * 00000001404265F3: mov     gs:864h, ax
 * 00000001404265FC: mov     ecx, 48h ; 'H'
 * 0000000140426601: xor     edx, edx
 * 0000000140426603: wrmsr
 * 0000000140426605: movzx   edx, word ptr gs:860h
 * 000000014042660E: test    edx, 8
 * 0000000140426614: jz      short loc_14042662D
 * 0000000140426616: mov     eax, 1
 * 000000014042661B: xor     edx, edx
 * 000000014042661D: mov     ecx, 49h ; 'I'
 * 0000000140426622: wrmsr
 * 0000000140426624: movzx   edx, word ptr gs:860h
 * 000000014042662D: test    edx, 2
 * 0000000140426633: jz      loc_140426770
 * 0000000140426639: call    loc_14042674C
 * 000000014042663E: add     rsp, 8
 * 0000000140426642: call    loc_140426755
 * 0000000140426647: add     rsp, 8
 * 000000014042664B: call    loc_14042663E
 * 0000000140426650: add     rsp, 8
 * 0000000140426654: call    loc_140426647
 * 0000000140426659: add     rsp, 8
 * 000000014042665D: call    loc_140426650
 * 0000000140426662: add     rsp, 8
 * 0000000140426666: call    loc_140426659
 * 000000014042666B: add     rsp, 8
 * 000000014042666F: call    loc_140426662
 * 0000000140426674: add     rsp, 8
 * 0000000140426678: call    loc_14042666B
 * 000000014042667D: add     rsp, 8
 * 0000000140426681: call    loc_140426674
 * 0000000140426686: add     rsp, 8
 * 000000014042668A: call    loc_14042667D
 * 000000014042668F: add     rsp, 8
 * 0000000140426693: call    loc_140426686
 * 0000000140426698: add     rsp, 8
 * 000000014042669C: call    loc_14042668F
 * 00000001404266A1: add     rsp, 8
 * 00000001404266A5: call    loc_140426698
 * 00000001404266AA: add     rsp, 8
 * 00000001404266AE: call    loc_1404266A1
 * 00000001404266B3: add     rsp, 8
 * 00000001404266B7: call    loc_1404266AA
 * 00000001404266BC: add     rsp, 8
 * 00000001404266C0: call    loc_1404266B3
 * 00000001404266C5: add     rsp, 8
 * 00000001404266C9: call    loc_1404266BC
 * 00000001404266CE: add     rsp, 8
 * 00000001404266D2: call    loc_1404266C5
 * 00000001404266D7: add     rsp, 8
 * 00000001404266DB: call    loc_1404266CE
 * 00000001404266E0: add     rsp, 8
 * 00000001404266E4: call    loc_1404266D7
 * 00000001404266E9: add     rsp, 8
 * 00000001404266ED: call    loc_1404266E0
 * 00000001404266F2: add     rsp, 8
 * 00000001404266F6: call    loc_1404266E9
 * 00000001404266FB: add     rsp, 8
 * 00000001404266FF: call    loc_1404266F2
 * 0000000140426704: add     rsp, 8
 * 0000000140426708: call    loc_1404266FB
 * 000000014042670D: add     rsp, 8
 * 0000000140426711: call    loc_140426704
 * 0000000140426716: add     rsp, 8
 * 000000014042671A: call    loc_14042670D
 * 000000014042671F: add     rsp, 8
 * 0000000140426723: call    loc_140426716
 * 0000000140426728: add     rsp, 8
 * 000000014042672C: call    loc_14042671F
 * 0000000140426731: add     rsp, 8
 * 0000000140426735: call    loc_140426728
 * 000000014042673A: add     rsp, 8
 * 000000014042673E: call    loc_140426731
 * 0000000140426743: add     rsp, 8
 * 0000000140426747: call    loc_14042673A
 * 000000014042674C: add     rsp, 8
 * 0000000140426750: call    loc_140426743
 * 0000000140426755: add     rsp, 8
 * 0000000140426759: mov     eax, 0DADAh
 * 000000014042675E: test    byte ptr gs:862h, 8
 * 0000000140426767: jz      short loc_140426770
 * 0000000140426769: mov     al, 20h ; ' '
 * 000000014042676B: incsspq rax
 * 0000000140426770: test    edx, 200h
 * 0000000140426776: jz      short loc_14042677D
 * 0000000140426778: call    sub_1404357C0
 * 000000014042677D: lfence
 * 0000000140426780: mov     byte ptr gs:856h, 0
 * 0000000140426789: test    byte ptr [r10+3], 3
 * 000000014042678E: mov     word ptr [rbp+80h], 0
 * 0000000140426797: jz      short loc_14042679E
 * 0000000140426799: call    sub_14041F920
 * 000000014042679E: cld
 * 000000014042679F: stmxcsr dword ptr [rbp-54h]
 * 00000001404267A3: ldmxcsr dword ptr gs:180h
 * 00000001404267AC: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404267B0: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404267B4: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404267B8: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404267BC: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404267C0: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404267C4: cmp     byte ptr gs:82DAh, 0
 * 00000001404267CD: jz      short loc_1404267D4
 * 00000001404267CF: call    sub_1403B4940
 * 00000001404267D4: lea     rax, loc_140429887
 * 00000001404267DB: cmp     rax, [rbp+0E8h]
 * 00000001404267E2: jnb     short loc_1404267FD
 * 00000001404267E4: lea     rax, loc_1404298A0
 * 00000001404267EB: cmp     rax, [rbp+0E8h]
 * 00000001404267F2: jb      short loc_1404267FD
 * 00000001404267F4: lea     rcx, [rbp-80h]
 * 00000001404267F8: call    sub_1402F2540
 * 00000001404267FD: xor     esi, esi
 * 00000001404267FF: inc     dword ptr gs:82C0h
 * 0000000140426807: jmp     sub_140426C70
 */
