/*
 * XREFs of sub_14042D480 @ 0x14042D480
 * Callers:
 *     sub_140AB52C0 @ 0x140AB52C0 (sub_140AB52C0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042D480 @ 0x14042D480 (sub_14042D480.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042D480 @ 0x14042D480
 * Reason: Hex-Rays returned no pseudocode for 0x14042D480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D480: sub     rsp, 8
 * 000000014042D484: push    rbp
 * 000000014042D485: sub     rsp, 158h
 * 000000014042D48C: lea     rbp, [rsp+80h]
 * 000000014042D494: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D498: mov     [rbp+0E8h+var_138], rax
 * 000000014042D49C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D4A0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D4A4: mov     [rbp+0E8h+var_120], r8
 * 000000014042D4A8: mov     [rbp+0E8h+var_118], r9
 * 000000014042D4AC: mov     [rbp+0E8h+var_110], r10
 * 000000014042D4B0: mov     [rbp+0E8h+var_108], r11
 * 000000014042D4B4: test    [rbp+0E8h+arg_0], 1
 * 000000014042D4BB: jnz     short loc_14042D4F7
 * 000000014042D4BD: xor     edx, edx
 * 000000014042D4BF: rdsspq  rdx
 * 000000014042D4C4: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D4C8: lfence
 * 000000014042D4CB: test    word ptr gs:860h, 1
 * 000000014042D4D6: jnz     short loc_14042D4E0
 * 000000014042D4D8: lfence
 * 000000014042D4DB: jmp     loc_14042D73F
 * 000000014042D4E0: movzx   eax, word ptr gs:864h
 * 000000014042D4E9: mov     ecx, 48h ; 'H'
 * 000000014042D4EE: xor     edx, edx
 * 000000014042D4F0: wrmsr
 * 000000014042D4F2: jmp     loc_14042D73F
 * 000000014042D4F7: test    cs:byte_140E01840, 1
 * 000000014042D4FE: jnz     short loc_14042D503
 * 000000014042D500: swapgs
 * 000000014042D503: lfence
 * 000000014042D506: mov     rcx, gs:9828h
 * 000000014042D50F: test    rcx, rcx
 * 000000014042D512: jz      short loc_14042D533
 * 000000014042D514: rdsspq  rdx
 * 000000014042D519: mov     r10, gs:9820h
 * 000000014042D522: add     r10, 8
 * 000000014042D526: cmp     rdx, r10
 * 000000014042D529: jnz     short loc_14042D533
 * 000000014042D52B: rstorssp qword ptr [rcx]
 * 000000014042D52F: saveprevssp
 * 000000014042D533: mov     r10, gs:188h
 * 000000014042D53C: mov     rcx, gs:188h
 * 000000014042D545: mov     rcx, [rcx+220h]
 * 000000014042D54C: mov     rcx, [rcx+9E0h]
 * 000000014042D553: mov     gs:858h, rcx
 * 000000014042D55C: mov     cx, gs:850h
 * 000000014042D565: mov     gs:852h, cx
 * 000000014042D56E: mov     cx, gs:860h
 * 000000014042D577: mov     gs:854h, cx
 * 000000014042D580: movzx   eax, word ptr gs:866h
 * 000000014042D589: cmp     gs:864h, ax
 * 000000014042D592: jz      short loc_14042D5A6
 * 000000014042D594: mov     gs:864h, ax
 * 000000014042D59D: mov     ecx, 48h ; 'H'
 * 000000014042D5A2: xor     edx, edx
 * 000000014042D5A4: wrmsr
 * 000000014042D5A6: movzx   edx, word ptr gs:860h
 * 000000014042D5AF: test    edx, 8
 * 000000014042D5B5: jz      short loc_14042D5CE
 * 000000014042D5B7: mov     eax, 1
 * 000000014042D5BC: xor     edx, edx
 * 000000014042D5BE: mov     ecx, 49h ; 'I'
 * 000000014042D5C3: wrmsr
 * 000000014042D5C5: movzx   edx, word ptr gs:860h
 * 000000014042D5CE: test    edx, 2
 * 000000014042D5D4: jz      loc_14042D711
 * 000000014042D5DA: call    loc_14042D6ED
 * 000000014042D5DF: add     rsp, 8
 * 000000014042D5E3: call    loc_14042D6F6
 * 000000014042D5E8: add     rsp, 8
 * 000000014042D5EC: call    loc_14042D5DF
 * 000000014042D5F1: add     rsp, 8
 * 000000014042D5F5: call    loc_14042D5E8
 * 000000014042D5FA: add     rsp, 8
 * 000000014042D5FE: call    loc_14042D5F1
 * 000000014042D603: add     rsp, 8
 * 000000014042D607: call    loc_14042D5FA
 * 000000014042D60C: add     rsp, 8
 * 000000014042D610: call    loc_14042D603
 * 000000014042D615: add     rsp, 8
 * 000000014042D619: call    loc_14042D60C
 * 000000014042D61E: add     rsp, 8
 * 000000014042D622: call    loc_14042D615
 * 000000014042D627: add     rsp, 8
 * 000000014042D62B: call    loc_14042D61E
 * 000000014042D630: add     rsp, 8
 * 000000014042D634: call    loc_14042D627
 * 000000014042D639: add     rsp, 8
 * 000000014042D63D: call    loc_14042D630
 * 000000014042D642: add     rsp, 8
 * 000000014042D646: call    loc_14042D639
 * 000000014042D64B: add     rsp, 8
 * 000000014042D64F: call    loc_14042D642
 * 000000014042D654: add     rsp, 8
 * 000000014042D658: call    loc_14042D64B
 * 000000014042D65D: add     rsp, 8
 * 000000014042D661: call    loc_14042D654
 * 000000014042D666: add     rsp, 8
 * 000000014042D66A: call    loc_14042D65D
 * 000000014042D66F: add     rsp, 8
 * 000000014042D673: call    loc_14042D666
 * 000000014042D678: add     rsp, 8
 * 000000014042D67C: call    loc_14042D66F
 * 000000014042D681: add     rsp, 8
 * 000000014042D685: call    loc_14042D678
 * 000000014042D68A: add     rsp, 8
 * 000000014042D68E: call    loc_14042D681
 * 000000014042D693: add     rsp, 8
 * 000000014042D697: call    loc_14042D68A
 * 000000014042D69C: add     rsp, 8
 * 000000014042D6A0: call    loc_14042D693
 * 000000014042D6A5: add     rsp, 8
 * 000000014042D6A9: call    loc_14042D69C
 * 000000014042D6AE: add     rsp, 8
 * 000000014042D6B2: call    loc_14042D6A5
 * 000000014042D6B7: add     rsp, 8
 * 000000014042D6BB: call    loc_14042D6AE
 * 000000014042D6C0: add     rsp, 8
 * 000000014042D6C4: call    loc_14042D6B7
 * 000000014042D6C9: add     rsp, 8
 * 000000014042D6CD: call    loc_14042D6C0
 * 000000014042D6D2: add     rsp, 8
 * 000000014042D6D6: call    loc_14042D6C9
 * 000000014042D6DB: add     rsp, 8
 * 000000014042D6DF: call    loc_14042D6D2
 * 000000014042D6E4: add     rsp, 8
 * 000000014042D6E8: call    loc_14042D6DB
 * 000000014042D6ED: add     rsp, 8
 * 000000014042D6F1: call    loc_14042D6E4
 * 000000014042D6F6: add     rsp, 8
 * 000000014042D6FA: mov     eax, 0DADAh
 * 000000014042D6FF: test    byte ptr gs:862h, 8
 * 000000014042D708: jz      short loc_14042D711
 * 000000014042D70A: mov     al, 20h ; ' '
 * 000000014042D70C: incsspq rax
 * 000000014042D711: test    edx, 200h
 * 000000014042D717: jz      short loc_14042D71E
 * 000000014042D719: call    sub_1404357C0
 * 000000014042D71E: lfence
 * 000000014042D721: mov     byte ptr gs:856h, 0
 * 000000014042D72A: test    byte ptr [r10+3], 3
 * 000000014042D72F: mov     [rbp+0E8h+var_68], 0
 * 000000014042D738: jz      short loc_14042D73F
 * 000000014042D73A: call    sub_14041F920
 * 000000014042D73F: cld
 * 000000014042D740: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D744: ldmxcsr dword ptr gs:180h
 * 000000014042D74D: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D751: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D755: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D759: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D75D: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D761: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D765: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042D76C: jz      short loc_14042D77A
 * 000000014042D76E: test    [rbp+0E8h+arg_0], 1
 * 000000014042D775: jz      short loc_14042D77A
 * 000000014042D777: stac
 * 000000014042D77A: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D784: jz      short loc_14042D787
 * 000000014042D786: sti
 * 000000014042D787: mov     ecx, 80000003h
 * 000000014042D78C: mov     edx, 1
 * 000000014042D791: mov     r8, [rbp+0E8h]
 * 000000014042D798: dec     r8
 * 000000014042D79B: mov     r9d, 0
 * 000000014042D7A1: call    sub_140434E40
 * 000000014042D7A6: nop
 * 000000014042D7A7: retn
 */
