/*
 * XREFs of sub_1404222A0 @ 0x1404222A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404222A0 @ 0x1404222A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404222A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404222A0: mov     rdx, rsp
 * 00000001404222A3: mov     rcx, gs:8B58h
 * 00000001404222AC: lea     rax, [rcx-6000h]
 * 00000001404222B3: cmp     rax, rsp
 * 00000001404222B6: ja      short loc_1404222BD
 * 00000001404222B8: cmp     rsp, rcx
 * 00000001404222BB: jb      short loc_1404222C9
 * 00000001404222BD: cmp     cs:dword_140C31E20, 0
 * 00000001404222C4: jnz     short loc_1404222C9
 * 00000001404222C6: mov     rsp, rcx
 * 00000001404222C9: sub     rsp, 20h
 * 00000001404222CD: mov     [rsp+20h+var_10], rdx
 * 00000001404222D2: call    sub_140421380
 * 00000001404222D7: mov     rsp, [rsp+20h+var_10]
 * 00000001404222DC: mov     rcx, gs:20h
 * 00000001404222E5: cmp     byte ptr [rcx+20h], 1
 * 00000001404222E9: ja      short loc_140422365
 * 00000001404222EB: rdtsc
 * 00000001404222ED: shl     rdx, 20h
 * 00000001404222F1: or      rax, rdx
 * 00000001404222F4: sub     rax, [rcx+8180h]
 * 00000001404222FB: add     [rcx+8278h], rax
 * 0000000140422302: add     [rcx+8180h], rax
 * 0000000140422309: mov     r8, rax
 * 000000014042230C: mov     rax, [rcx+8]
 * 0000000140422310: test    byte ptr [rax+2], 72h
 * 0000000140422314: jz      short loc_140422329
 * 0000000140422316: xor     edx, edx
 * 0000000140422318: call    sub_1402ECA00
 * 000000014042231D: mov     rcx, gs:20h
 * 0000000140422326: inc     byte ptr [rcx+20h]
 * 0000000140422329: mov     dl, [rcx+6]
 * 000000014042232C: and     byte ptr [rcx+6], 0
 * 0000000140422330: cmp     byte ptr [rcx+7], 0
 * 0000000140422334: jnz     short loc_140422365
 * 0000000140422336: test    dl, dl
 * 0000000140422338: jz      short loc_140422365
 * 000000014042233A: cmp     byte ptr [rbp-57h], 2
 * 000000014042233E: jnb     short loc_14042234B
 * 0000000140422340: and     byte ptr [rcx+20h], 0
 * 0000000140422344: call    sub_1404281E0
 * 0000000140422349: jmp     short loc_140422368
 * 000000014042234B: mov     ecx, 2
 * 0000000140422350: call    cs:off_140015970
 * 0000000140422357: nop     dword ptr [rax+rax+00h]
 * 000000014042235C: mov     rcx, gs:20h
 * 0000000140422365: dec     byte ptr [rcx+20h]
 * 0000000140422368: movzx   ecx, byte ptr [rbp-57h]
 * 000000014042236C: cmp     cs:dword_140D06B08, 0
 * 0000000140422373: jz      short loc_14042237C
 * 0000000140422375: call    sub_140569E70
 * 000000014042237A: jmp     short loc_140422380
 * 000000014042237C: mov     cr8, rcx
 * 0000000140422380: mov     rsi, [rbp+0D0h]
 * 0000000140422387: test    byte ptr [rbp+0F0h], 1
 * 000000014042238E: jz      loc_14042267C
 * 0000000140422394: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042239B: jz      short loc_1404223A0
 * 000000014042239D: stac
 * 00000001404223A0: mov     rcx, gs:188h
 * 00000001404223A9: test    byte ptr [rcx+0C2h], 3
 * 00000001404223B0: jz      short loc_1404223CD
 * 00000001404223B2: mov     ecx, 1
 * 00000001404223B7: mov     cr8, rcx
 * 00000001404223BB: sti
 * 00000001404223BC: call    sub_140425700
 * 00000001404223C1: cli
 * 00000001404223C2: mov     ecx, 0
 * 00000001404223C7: mov     cr8, rcx
 * 00000001404223CB: jmp     short loc_1404223A0
 * 00000001404223CD: test    byte ptr gs:86Ch, 2
 * 00000001404223D6: jz      short loc_1404223DF
 * 00000001404223D8: xor     ecx, ecx
 * 00000001404223DA: call    sub_14020D230
 * 00000001404223DF: mov     rcx, gs:188h
 * 00000001404223E8: test    dword ptr [rcx], 8000000h
 * 00000001404223EE: jz      short loc_1404223F5
 * 00000001404223F0: call    sub_1404206B0
 * 00000001404223F5: mov     rcx, gs:188h
 * 00000001404223FE: test    dword ptr [rcx], 10000h
 * 0000000140422404: jz      short loc_14042241A
 * 0000000140422406: test    byte ptr [rcx+2], 1
 * 000000014042240A: jz      short loc_14042241A
 * 000000014042240C: call    sub_140571820
 * 0000000140422411: mov     rcx, gs:188h
 * 000000014042241A: ldmxcsr dword ptr [rbp-54h]
 * 000000014042241E: cmp     word ptr [rbp+80h], 0
 * 0000000140422426: jz      short loc_14042242D
 * 0000000140422428: call    sub_14041F8A0
 * 000000014042242D: mov     rcx, gs:188h
 * 0000000140422436: bt      dword ptr [rcx+74h], 16h
 * 000000014042243B: jnb     short loc_140422467
 * 000000014042243D: xor     ecx, ecx
 * 000000014042243F: rdsspq  rcx
 * 0000000140422444: mov     r8, gs:9828h
 * 000000014042244D: add     r8, 8
 * 0000000140422451: cmp     rcx, r8
 * 0000000140422454: jnz     short loc_140422467
 * 0000000140422456: mov     rcx, gs:9820h
 * 000000014042245F: rstorssp qword ptr [rcx]
 * 0000000140422463: saveprevssp
 * 0000000140422467: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042246B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042246F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140422473: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140422477: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042247B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042247F: mov     r11, [rbp-20h]
 * 0000000140422483: mov     r10, [rbp-28h]
 * 0000000140422487: mov     r9, [rbp-30h]
 * 000000014042248B: mov     r8, [rbp-38h]
 * 000000014042248F: mov     byte ptr gs:856h, 0
 * 0000000140422498: movzx   eax, word ptr gs:86Ah
 * 00000001404224A1: cmp     gs:864h, ax
 * 00000001404224AA: jz      short loc_1404224BE
 * 00000001404224AC: mov     gs:864h, ax
 * 00000001404224B5: mov     ecx, 48h ; 'H'
 * 00000001404224BA: xor     edx, edx
 * 00000001404224BC: wrmsr
 * 00000001404224BE: btr     word ptr gs:860h, 2
 * 00000001404224C9: jnb     short loc_1404224D9
 * 00000001404224CB: mov     eax, 1
 * 00000001404224D0: xor     edx, edx
 * 00000001404224D2: mov     ecx, 49h ; 'I'
 * 00000001404224D7: wrmsr
 * 00000001404224D9: btr     word ptr gs:860h, 5
 * 00000001404224E4: jnb     loc_140422621
 * 00000001404224EA: call    loc_1404225FD
 * 00000001404224EF: add     rsp, 8
 * 00000001404224F3: call    loc_140422606
 * 00000001404224F8: add     rsp, 8
 * 00000001404224FC: call    loc_1404224EF
 * 0000000140422501: add     rsp, 8
 * 0000000140422505: call    loc_1404224F8
 * 000000014042250A: add     rsp, 8
 * 000000014042250E: call    loc_140422501
 * 0000000140422513: add     rsp, 8
 * 0000000140422517: call    loc_14042250A
 * 000000014042251C: add     rsp, 8
 * 0000000140422520: call    loc_140422513
 * 0000000140422525: add     rsp, 8
 * 0000000140422529: call    loc_14042251C
 * 000000014042252E: add     rsp, 8
 * 0000000140422532: call    loc_140422525
 * 0000000140422537: add     rsp, 8
 * 000000014042253B: call    loc_14042252E
 * 0000000140422540: add     rsp, 8
 * 0000000140422544: call    loc_140422537
 * 0000000140422549: add     rsp, 8
 * 000000014042254D: call    loc_140422540
 * 0000000140422552: add     rsp, 8
 * 0000000140422556: call    loc_140422549
 * 000000014042255B: add     rsp, 8
 * 000000014042255F: call    loc_140422552
 * 0000000140422564: add     rsp, 8
 * 0000000140422568: call    loc_14042255B
 * 000000014042256D: add     rsp, 8
 * 0000000140422571: call    loc_140422564
 * 0000000140422576: add     rsp, 8
 * 000000014042257A: call    loc_14042256D
 * 000000014042257F: add     rsp, 8
 * 0000000140422583: call    loc_140422576
 * 0000000140422588: add     rsp, 8
 * 000000014042258C: call    loc_14042257F
 * 0000000140422591: add     rsp, 8
 * 0000000140422595: call    loc_140422588
 * 000000014042259A: add     rsp, 8
 * 000000014042259E: call    loc_140422591
 * 00000001404225A3: add     rsp, 8
 * 00000001404225A7: call    loc_14042259A
 * 00000001404225AC: add     rsp, 8
 * 00000001404225B0: call    loc_1404225A3
 * 00000001404225B5: add     rsp, 8
 * 00000001404225B9: call    loc_1404225AC
 * 00000001404225BE: add     rsp, 8
 * 00000001404225C2: call    loc_1404225B5
 * 00000001404225C7: add     rsp, 8
 * 00000001404225CB: call    loc_1404225BE
 * 00000001404225D0: add     rsp, 8
 * 00000001404225D4: call    loc_1404225C7
 * 00000001404225D9: add     rsp, 8
 * 00000001404225DD: call    loc_1404225D0
 * 00000001404225E2: add     rsp, 8
 * 00000001404225E6: call    loc_1404225D9
 * 00000001404225EB: add     rsp, 8
 * 00000001404225EF: call    loc_1404225E2
 * 00000001404225F4: add     rsp, 8
 * 00000001404225F8: call    loc_1404225EB
 * 00000001404225FD: add     rsp, 8
 * 0000000140422601: call    loc_1404225F4
 * 0000000140422606: add     rsp, 8
 * 000000014042260A: mov     eax, 0DADAh
 * 000000014042260F: test    byte ptr gs:862h, 8
 * 0000000140422618: jz      short loc_140422621
 * 000000014042261A: mov     al, 20h ; ' '
 * 000000014042261C: incsspq rax
 * 0000000140422621: test    word ptr gs:860h, 80h
 * 000000014042262C: jz      short loc_14042263A
 * 000000014042262E: xor     eax, eax
 * 0000000140422630: xor     edx, edx
 * 0000000140422632: mov     ecx, 1
 * 0000000140422637: div     rcx
 * 000000014042263A: mov     rdx, [rbp-40h]
 * 000000014042263E: mov     rcx, [rbp-48h]
 * 0000000140422642: mov     rax, [rbp-50h]
 * 0000000140422646: mov     rsp, rbp
 * 0000000140422649: mov     rbp, [rbp+0D8h]
 * 0000000140422650: add     rsp, 0E8h
 * 0000000140422657: test    cs:byte_140E01840, 1
 * 000000014042265E: jz      short loc_140422665
 * 0000000140422660: jmp     sub_140AB6B80
 * 0000000140422665: test    word ptr gs:860h, 100h
 * 0000000140422670: jz      short loc_140422677
 * 0000000140422672: verw    [rsp-1C8h+arg_1E0]
 * 0000000140422677: swapgs
 * 000000014042267A: iretq
 * 000000014042267C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140422680: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422684: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422688: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042268C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140422690: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140422694: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140422698: mov     r11, [rbp-20h]
 * 000000014042269C: mov     r10, [rbp-28h]
 * 00000001404226A0: mov     r9, [rbp-30h]
 * 00000001404226A4: mov     r8, [rbp-38h]
 * 00000001404226A8: mov     rdx, [rbp-40h]
 * 00000001404226AC: mov     rcx, [rbp-48h]
 * 00000001404226B0: mov     rax, [rbp-50h]
 * 00000001404226B4: mov     rsp, rbp
 * 00000001404226B7: mov     rbp, [rbp+0D8h]
 * 00000001404226BE: add     rsp, 0E8h
 * 00000001404226C5: iretq
 */
