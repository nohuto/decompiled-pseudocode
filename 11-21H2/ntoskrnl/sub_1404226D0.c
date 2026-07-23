/*
 * XREFs of sub_1404226D0 @ 0x1404226D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404226D0 @ 0x1404226D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404226D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404226D0: mov     ecx, 0Fh
 * 00000001404226D5: cmp     cs:dword_140D06B08, 0
 * 00000001404226DC: jz      short loc_1404226E5
 * 00000001404226DE: call    sub_140569E70
 * 00000001404226E3: jmp     short loc_1404226ED
 * 00000001404226E5: mov     rax, cr8
 * 00000001404226E9: mov     cr8, rcx
 * 00000001404226ED: mov     [rbp-57h], al
 * 00000001404226F0: mov     rcx, gs:20h
 * 00000001404226F9: inc     byte ptr [rcx+20h]
 * 00000001404226FC: cmp     byte ptr [rcx+20h], 1
 * 0000000140422700: jnz     short loc_140422752
 * 0000000140422702: rdtsc
 * 0000000140422704: shl     rdx, 20h
 * 0000000140422708: or      rax, rdx
 * 000000014042270B: mov     r8, [rcx+8]
 * 000000014042270F: sub     rax, [rcx+8180h]
 * 0000000140422716: add     [r8+48h], rax
 * 000000014042271A: mov     edx, [r8+50h]
 * 000000014042271E: add     [rcx+8180h], rax
 * 0000000140422725: add     rdx, rax
 * 0000000140422728: mov     ecx, edx
 * 000000014042272A: shr     rdx, 20h
 * 000000014042272E: jz      short loc_140422733
 * 0000000140422730: or      ecx, 0FFFFFFFFh
 * 0000000140422733: mov     [r8+50h], ecx
 * 0000000140422737: test    byte ptr [r8+2], 0BEh
 * 000000014042273C: jz      short loc_140422752
 * 000000014042273E: mov     rdx, r8
 * 0000000140422741: mov     r8, rax
 * 0000000140422744: mov     rcx, gs:20h
 * 000000014042274D: call    sub_1402B9660
 * 0000000140422752: sti
 * 0000000140422753: inc     dword ptr [rsi+74h]
 * 0000000140422756: cli
 * 0000000140422757: mov     rcx, gs:20h
 * 0000000140422760: cmp     byte ptr [rcx+20h], 1
 * 0000000140422764: ja      short loc_1404227E0
 * 0000000140422766: rdtsc
 * 0000000140422768: shl     rdx, 20h
 * 000000014042276C: or      rax, rdx
 * 000000014042276F: sub     rax, [rcx+8180h]
 * 0000000140422776: add     [rcx+8278h], rax
 * 000000014042277D: add     [rcx+8180h], rax
 * 0000000140422784: mov     r8, rax
 * 0000000140422787: mov     rax, [rcx+8]
 * 000000014042278B: test    byte ptr [rax+2], 72h
 * 000000014042278F: jz      short loc_1404227A4
 * 0000000140422791: xor     edx, edx
 * 0000000140422793: call    sub_1402ECA00
 * 0000000140422798: mov     rcx, gs:20h
 * 00000001404227A1: inc     byte ptr [rcx+20h]
 * 00000001404227A4: mov     dl, [rcx+6]
 * 00000001404227A7: and     byte ptr [rcx+6], 0
 * 00000001404227AB: cmp     byte ptr [rcx+7], 0
 * 00000001404227AF: jnz     short loc_1404227E0
 * 00000001404227B1: test    dl, dl
 * 00000001404227B3: jz      short loc_1404227E0
 * 00000001404227B5: cmp     byte ptr [rbp-57h], 2
 * 00000001404227B9: jnb     short loc_1404227C6
 * 00000001404227BB: and     byte ptr [rcx+20h], 0
 * 00000001404227BF: call    sub_1404281E0
 * 00000001404227C4: jmp     short loc_1404227E3
 * 00000001404227C6: mov     ecx, 2
 * 00000001404227CB: call    cs:off_140015970
 * 00000001404227D2: nop     dword ptr [rax+rax+00h]
 * 00000001404227D7: mov     rcx, gs:20h
 * 00000001404227E0: dec     byte ptr [rcx+20h]
 * 00000001404227E3: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404227E7: cmp     cs:dword_140D06B08, 0
 * 00000001404227EE: jz      short loc_1404227F7
 * 00000001404227F0: call    sub_140569E70
 * 00000001404227F5: jmp     short loc_1404227FB
 * 00000001404227F7: mov     cr8, rcx
 * 00000001404227FB: mov     rsi, [rbp+0D0h]
 * 0000000140422802: cli
 * 0000000140422803: test    byte ptr [rbp+0F0h], 1
 * 000000014042280A: jz      loc_140422AF8
 * 0000000140422810: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140422817: jz      short loc_14042281C
 * 0000000140422819: stac
 * 000000014042281C: mov     rcx, gs:188h
 * 0000000140422825: test    byte ptr [rcx+0C2h], 3
 * 000000014042282C: jz      short loc_140422849
 * 000000014042282E: mov     ecx, 1
 * 0000000140422833: mov     cr8, rcx
 * 0000000140422837: sti
 * 0000000140422838: call    sub_140425700
 * 000000014042283D: cli
 * 000000014042283E: mov     ecx, 0
 * 0000000140422843: mov     cr8, rcx
 * 0000000140422847: jmp     short loc_14042281C
 * 0000000140422849: test    byte ptr gs:86Ch, 2
 * 0000000140422852: jz      short loc_14042285B
 * 0000000140422854: xor     ecx, ecx
 * 0000000140422856: call    sub_14020D230
 * 000000014042285B: mov     rcx, gs:188h
 * 0000000140422864: test    dword ptr [rcx], 8000000h
 * 000000014042286A: jz      short loc_140422871
 * 000000014042286C: call    sub_1404206B0
 * 0000000140422871: mov     rcx, gs:188h
 * 000000014042287A: test    dword ptr [rcx], 10000h
 * 0000000140422880: jz      short loc_140422896
 * 0000000140422882: test    byte ptr [rcx+2], 1
 * 0000000140422886: jz      short loc_140422896
 * 0000000140422888: call    sub_140571820
 * 000000014042288D: mov     rcx, gs:188h
 * 0000000140422896: ldmxcsr dword ptr [rbp-54h]
 * 000000014042289A: cmp     word ptr [rbp+80h], 0
 * 00000001404228A2: jz      short loc_1404228A9
 * 00000001404228A4: call    sub_14041F8A0
 * 00000001404228A9: mov     rcx, gs:188h
 * 00000001404228B2: bt      dword ptr [rcx+74h], 16h
 * 00000001404228B7: jnb     short loc_1404228E3
 * 00000001404228B9: xor     ecx, ecx
 * 00000001404228BB: rdsspq  rcx
 * 00000001404228C0: mov     r8, gs:9828h
 * 00000001404228C9: add     r8, 8
 * 00000001404228CD: cmp     rcx, r8
 * 00000001404228D0: jnz     short loc_1404228E3
 * 00000001404228D2: mov     rcx, gs:9820h
 * 00000001404228DB: rstorssp qword ptr [rcx]
 * 00000001404228DF: saveprevssp
 * 00000001404228E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404228E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404228EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404228EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404228F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404228F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404228FB: mov     r11, [rbp-20h]
 * 00000001404228FF: mov     r10, [rbp-28h]
 * 0000000140422903: mov     r9, [rbp-30h]
 * 0000000140422907: mov     r8, [rbp-38h]
 * 000000014042290B: mov     byte ptr gs:856h, 0
 * 0000000140422914: movzx   eax, word ptr gs:86Ah
 * 000000014042291D: cmp     gs:864h, ax
 * 0000000140422926: jz      short loc_14042293A
 * 0000000140422928: mov     gs:864h, ax
 * 0000000140422931: mov     ecx, 48h ; 'H'
 * 0000000140422936: xor     edx, edx
 * 0000000140422938: wrmsr
 * 000000014042293A: btr     word ptr gs:860h, 2
 * 0000000140422945: jnb     short loc_140422955
 * 0000000140422947: mov     eax, 1
 * 000000014042294C: xor     edx, edx
 * 000000014042294E: mov     ecx, 49h ; 'I'
 * 0000000140422953: wrmsr
 * 0000000140422955: btr     word ptr gs:860h, 5
 * 0000000140422960: jnb     loc_140422A9D
 * 0000000140422966: call    loc_140422A79
 * 000000014042296B: add     rsp, 8
 * 000000014042296F: call    loc_140422A82
 * 0000000140422974: add     rsp, 8
 * 0000000140422978: call    loc_14042296B
 * 000000014042297D: add     rsp, 8
 * 0000000140422981: call    loc_140422974
 * 0000000140422986: add     rsp, 8
 * 000000014042298A: call    loc_14042297D
 * 000000014042298F: add     rsp, 8
 * 0000000140422993: call    loc_140422986
 * 0000000140422998: add     rsp, 8
 * 000000014042299C: call    loc_14042298F
 * 00000001404229A1: add     rsp, 8
 * 00000001404229A5: call    loc_140422998
 * 00000001404229AA: add     rsp, 8
 * 00000001404229AE: call    loc_1404229A1
 * 00000001404229B3: add     rsp, 8
 * 00000001404229B7: call    loc_1404229AA
 * 00000001404229BC: add     rsp, 8
 * 00000001404229C0: call    loc_1404229B3
 * 00000001404229C5: add     rsp, 8
 * 00000001404229C9: call    loc_1404229BC
 * 00000001404229CE: add     rsp, 8
 * 00000001404229D2: call    loc_1404229C5
 * 00000001404229D7: add     rsp, 8
 * 00000001404229DB: call    loc_1404229CE
 * 00000001404229E0: add     rsp, 8
 * 00000001404229E4: call    loc_1404229D7
 * 00000001404229E9: add     rsp, 8
 * 00000001404229ED: call    loc_1404229E0
 * 00000001404229F2: add     rsp, 8
 * 00000001404229F6: call    loc_1404229E9
 * 00000001404229FB: add     rsp, 8
 * 00000001404229FF: call    loc_1404229F2
 * 0000000140422A04: add     rsp, 8
 * 0000000140422A08: call    loc_1404229FB
 * 0000000140422A0D: add     rsp, 8
 * 0000000140422A11: call    loc_140422A04
 * 0000000140422A16: add     rsp, 8
 * 0000000140422A1A: call    loc_140422A0D
 * 0000000140422A1F: add     rsp, 8
 * 0000000140422A23: call    loc_140422A16
 * 0000000140422A28: add     rsp, 8
 * 0000000140422A2C: call    loc_140422A1F
 * 0000000140422A31: add     rsp, 8
 * 0000000140422A35: call    loc_140422A28
 * 0000000140422A3A: add     rsp, 8
 * 0000000140422A3E: call    loc_140422A31
 * 0000000140422A43: add     rsp, 8
 * 0000000140422A47: call    loc_140422A3A
 * 0000000140422A4C: add     rsp, 8
 * 0000000140422A50: call    loc_140422A43
 * 0000000140422A55: add     rsp, 8
 * 0000000140422A59: call    loc_140422A4C
 * 0000000140422A5E: add     rsp, 8
 * 0000000140422A62: call    loc_140422A55
 * 0000000140422A67: add     rsp, 8
 * 0000000140422A6B: call    loc_140422A5E
 * 0000000140422A70: add     rsp, 8
 * 0000000140422A74: call    loc_140422A67
 * 0000000140422A79: add     rsp, 8
 * 0000000140422A7D: call    loc_140422A70
 * 0000000140422A82: add     rsp, 8
 * 0000000140422A86: mov     eax, 0DADAh
 * 0000000140422A8B: test    byte ptr gs:862h, 8
 * 0000000140422A94: jz      short loc_140422A9D
 * 0000000140422A96: mov     al, 20h ; ' '
 * 0000000140422A98: incsspq rax
 * 0000000140422A9D: test    word ptr gs:860h, 80h
 * 0000000140422AA8: jz      short loc_140422AB6
 * 0000000140422AAA: xor     eax, eax
 * 0000000140422AAC: xor     edx, edx
 * 0000000140422AAE: mov     ecx, 1
 * 0000000140422AB3: div     rcx
 * 0000000140422AB6: mov     rdx, [rbp-40h]
 * 0000000140422ABA: mov     rcx, [rbp-48h]
 * 0000000140422ABE: mov     rax, [rbp-50h]
 * 0000000140422AC2: mov     rsp, rbp
 * 0000000140422AC5: mov     rbp, [rbp+0D8h]
 * 0000000140422ACC: add     rsp, 0E8h
 * 0000000140422AD3: test    cs:byte_140E01840, 1
 * 0000000140422ADA: jz      short loc_140422AE1
 * 0000000140422ADC: jmp     sub_140AB6B80
 * 0000000140422AE1: test    word ptr gs:860h, 100h
 * 0000000140422AEC: jz      short loc_140422AF3
 * 0000000140422AEE: verw    [rsp-1E8h+arg_200]
 * 0000000140422AF3: swapgs
 * 0000000140422AF6: iretq
 * 0000000140422AF8: ldmxcsr dword ptr [rbp-54h]
 * 0000000140422AFC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422B00: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422B04: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140422B08: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140422B0C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140422B10: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140422B14: mov     r11, [rbp-20h]
 * 0000000140422B18: mov     r10, [rbp-28h]
 * 0000000140422B1C: mov     r9, [rbp-30h]
 * 0000000140422B20: mov     r8, [rbp-38h]
 * 0000000140422B24: mov     rdx, [rbp-40h]
 * 0000000140422B28: mov     rcx, [rbp-48h]
 * 0000000140422B2C: mov     rax, [rbp-50h]
 * 0000000140422B30: mov     rsp, rbp
 * 0000000140422B33: mov     rbp, [rbp+0D8h]
 * 0000000140422B3A: add     rsp, 0E8h
 * 0000000140422B41: iretq
 */
