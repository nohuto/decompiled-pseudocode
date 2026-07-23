/*
 * XREFs of sub_140433540 @ 0x140433540
 * Callers:
 *     sub_140AB5E40 @ 0x140AB5E40 (sub_140AB5E40.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140433540 @ 0x140433540 (sub_140433540.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140433540 @ 0x140433540
 * Reason: Hex-Rays returned no pseudocode for 0x140433540
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433540: inc     qword ptr [rsp+0]
 * 0000000140433544: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043354A: jnz     short loc_140433551
 * 000000014043354C: and     dword ptr [rsp+4], 0
 * 0000000140433551: sub     rsp, 8
 * 0000000140433555: push    rbp
 * 0000000140433556: sub     rsp, 158h
 * 000000014043355D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140433565: mov     byte ptr [rbp-55h], 1
 * 0000000140433569: mov     [rbp-50h], rax
 * 000000014043356D: mov     [rbp-48h], rcx
 * 0000000140433571: mov     [rbp-40h], rdx
 * 0000000140433575: mov     [rbp-38h], r8
 * 0000000140433579: mov     [rbp-30h], r9
 * 000000014043357D: mov     [rbp-28h], r10
 * 0000000140433581: mov     [rbp-20h], r11
 * 0000000140433585: test    byte ptr [rbp+0F0h], 1
 * 000000014043358C: jnz     short loc_1404335C8
 * 000000014043358E: xor     edx, edx
 * 0000000140433590: rdsspq  rdx
 * 0000000140433595: mov     [rbp+58h], rdx
 * 0000000140433599: lfence
 * 000000014043359C: test    word ptr gs:860h, 1
 * 00000001404335A7: jnz     short loc_1404335B1
 * 00000001404335A9: lfence
 * 00000001404335AC: jmp     loc_140433810
 * 00000001404335B1: movzx   eax, word ptr gs:864h
 * 00000001404335BA: mov     ecx, 48h ; 'H'
 * 00000001404335BF: xor     edx, edx
 * 00000001404335C1: wrmsr
 * 00000001404335C3: jmp     loc_140433810
 * 00000001404335C8: test    cs:byte_140E01840, 1
 * 00000001404335CF: jnz     short loc_1404335D4
 * 00000001404335D1: swapgs
 * 00000001404335D4: lfence
 * 00000001404335D7: mov     rcx, gs:9828h
 * 00000001404335E0: test    rcx, rcx
 * 00000001404335E3: jz      short loc_140433604
 * 00000001404335E5: rdsspq  rdx
 * 00000001404335EA: mov     r10, gs:9820h
 * 00000001404335F3: add     r10, 8
 * 00000001404335F7: cmp     rdx, r10
 * 00000001404335FA: jnz     short loc_140433604
 * 00000001404335FC: rstorssp qword ptr [rcx]
 * 0000000140433600: saveprevssp
 * 0000000140433604: mov     r10, gs:188h
 * 000000014043360D: mov     rcx, gs:188h
 * 0000000140433616: mov     rcx, [rcx+220h]
 * 000000014043361D: mov     rcx, [rcx+9E0h]
 * 0000000140433624: mov     gs:858h, rcx
 * 000000014043362D: mov     cx, gs:850h
 * 0000000140433636: mov     gs:852h, cx
 * 000000014043363F: mov     cx, gs:860h
 * 0000000140433648: mov     gs:854h, cx
 * 0000000140433651: movzx   eax, word ptr gs:866h
 * 000000014043365A: cmp     gs:864h, ax
 * 0000000140433663: jz      short loc_140433677
 * 0000000140433665: mov     gs:864h, ax
 * 000000014043366E: mov     ecx, 48h ; 'H'
 * 0000000140433673: xor     edx, edx
 * 0000000140433675: wrmsr
 * 0000000140433677: movzx   edx, word ptr gs:860h
 * 0000000140433680: test    edx, 8
 * 0000000140433686: jz      short loc_14043369F
 * 0000000140433688: mov     eax, 1
 * 000000014043368D: xor     edx, edx
 * 000000014043368F: mov     ecx, 49h ; 'I'
 * 0000000140433694: wrmsr
 * 0000000140433696: movzx   edx, word ptr gs:860h
 * 000000014043369F: test    edx, 2
 * 00000001404336A5: jz      loc_1404337E2
 * 00000001404336AB: call    loc_1404337BE
 * 00000001404336B0: add     rsp, 8
 * 00000001404336B4: call    loc_1404337C7
 * 00000001404336B9: add     rsp, 8
 * 00000001404336BD: call    loc_1404336B0
 * 00000001404336C2: add     rsp, 8
 * 00000001404336C6: call    loc_1404336B9
 * 00000001404336CB: add     rsp, 8
 * 00000001404336CF: call    loc_1404336C2
 * 00000001404336D4: add     rsp, 8
 * 00000001404336D8: call    loc_1404336CB
 * 00000001404336DD: add     rsp, 8
 * 00000001404336E1: call    loc_1404336D4
 * 00000001404336E6: add     rsp, 8
 * 00000001404336EA: call    loc_1404336DD
 * 00000001404336EF: add     rsp, 8
 * 00000001404336F3: call    loc_1404336E6
 * 00000001404336F8: add     rsp, 8
 * 00000001404336FC: call    loc_1404336EF
 * 0000000140433701: add     rsp, 8
 * 0000000140433705: call    loc_1404336F8
 * 000000014043370A: add     rsp, 8
 * 000000014043370E: call    loc_140433701
 * 0000000140433713: add     rsp, 8
 * 0000000140433717: call    loc_14043370A
 * 000000014043371C: add     rsp, 8
 * 0000000140433720: call    loc_140433713
 * 0000000140433725: add     rsp, 8
 * 0000000140433729: call    loc_14043371C
 * 000000014043372E: add     rsp, 8
 * 0000000140433732: call    loc_140433725
 * 0000000140433737: add     rsp, 8
 * 000000014043373B: call    loc_14043372E
 * 0000000140433740: add     rsp, 8
 * 0000000140433744: call    loc_140433737
 * 0000000140433749: add     rsp, 8
 * 000000014043374D: call    loc_140433740
 * 0000000140433752: add     rsp, 8
 * 0000000140433756: call    loc_140433749
 * 000000014043375B: add     rsp, 8
 * 000000014043375F: call    loc_140433752
 * 0000000140433764: add     rsp, 8
 * 0000000140433768: call    loc_14043375B
 * 000000014043376D: add     rsp, 8
 * 0000000140433771: call    loc_140433764
 * 0000000140433776: add     rsp, 8
 * 000000014043377A: call    loc_14043376D
 * 000000014043377F: add     rsp, 8
 * 0000000140433783: call    loc_140433776
 * 0000000140433788: add     rsp, 8
 * 000000014043378C: call    loc_14043377F
 * 0000000140433791: add     rsp, 8
 * 0000000140433795: call    loc_140433788
 * 000000014043379A: add     rsp, 8
 * 000000014043379E: call    loc_140433791
 * 00000001404337A3: add     rsp, 8
 * 00000001404337A7: call    loc_14043379A
 * 00000001404337AC: add     rsp, 8
 * 00000001404337B0: call    loc_1404337A3
 * 00000001404337B5: add     rsp, 8
 * 00000001404337B9: call    loc_1404337AC
 * 00000001404337BE: add     rsp, 8
 * 00000001404337C2: call    loc_1404337B5
 * 00000001404337C7: add     rsp, 8
 * 00000001404337CB: mov     eax, 0DADAh
 * 00000001404337D0: test    byte ptr gs:862h, 8
 * 00000001404337D9: jz      short loc_1404337E2
 * 00000001404337DB: mov     al, 20h ; ' '
 * 00000001404337DD: incsspq rax
 * 00000001404337E2: test    edx, 200h
 * 00000001404337E8: jz      short loc_1404337EF
 * 00000001404337EA: call    sub_1404357C0
 * 00000001404337EF: lfence
 * 00000001404337F2: mov     byte ptr gs:856h, 0
 * 00000001404337FB: test    byte ptr [r10+3], 3
 * 0000000140433800: mov     word ptr [rbp+80h], 0
 * 0000000140433809: jz      short loc_140433810
 * 000000014043380B: call    sub_14041F920
 * 0000000140433810: cld
 * 0000000140433811: stmxcsr dword ptr [rbp-54h]
 * 0000000140433815: ldmxcsr dword ptr gs:180h
 * 000000014043381E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433822: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140433826: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014043382A: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014043382E: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433832: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433836: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014043383D: jz      short loc_14043384B
 * 000000014043383F: test    byte ptr [rbp+0F0h], 1
 * 0000000140433846: jz      short loc_14043384B
 * 0000000140433848: stac
 * 000000014043384B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140433855: jz      short loc_140433858
 * 0000000140433857: sti
 * 0000000140433858: mov     ecx, 80000003h
 * 000000014043385D: mov     edx, 1
 * 0000000140433862: mov     r9, [rbp-50h]
 * 0000000140433866: mov     r8, [rbp+0E8h]
 * 000000014043386D: call    sub_140434E40
 * 0000000140433872: nop
 * 0000000140433873: retn
 */
