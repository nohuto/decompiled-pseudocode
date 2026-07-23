/*
 * XREFs of sub_140435300 @ 0x140435300
 * Callers:
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140432EC0 @ 0x140432EC0 (sub_140432EC0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140435300 @ 0x140435300
 * Reason: Hex-Rays returned no pseudocode for 0x140435300
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140435300: sub     rsp, 1D8h
 * 0000000140435307: lea     rax, [rsp+1D8h+var_D8]
 * 000000014043530F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140435314: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140435319: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014043531F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140435325: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014043532B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140435330: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140435335: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014043533A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014043533F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140435344: mov     [rax], rbx
 * 0000000140435347: mov     [rax+8], rdi
 * 000000014043534B: mov     [rax+10h], rsi
 * 000000014043534F: mov     [rax+18h], r12
 * 0000000140435353: mov     [rax+20h], r13
 * 0000000140435357: mov     [rax+28h], r14
 * 000000014043535B: mov     [rax+30h], r15
 * 000000014043535F: lea     rax, [rsp+1D8h+var_A0]
 * 0000000140435367: mov     [rax], ecx
 * 0000000140435369: xor     ecx, ecx
 * 000000014043536B: mov     dword ptr [rax+4], 1
 * 0000000140435372: mov     [rax+8], rcx
 * 0000000140435376: mov     [rax+10h], r8
 * 000000014043537A: mov     [rax+18h], edx
 * 000000014043537D: mov     [rax+20h], r9
 * 0000000140435381: mov     [rax+28h], r10
 * 0000000140435385: mov     [rax+30h], r11
 * 0000000140435389: mov     r9b, [rbp+0F0h]
 * 0000000140435390: and     r9b, 1
 * 0000000140435394: cmp     r9b, 0
 * 0000000140435398: jnz     short loc_1404353B2
 * 000000014043539A: mov     rdx, [rax+20h]
 * 000000014043539E: xor     r10, r10
 * 00000001404353A1: mov     r9, rax
 * 00000001404353A4: lea     r8, [rbp-80h]
 * 00000001404353A8: mov     ecx, 139h
 * 00000001404353AD: call    sub_140434DC0
 * 00000001404353B2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001404353B7: lea     r8, [rbp-80h]
 * 00000001404353BB: mov     rdx, rsp
 * 00000001404353BE: mov     rcx, rax; ULONG_PTR
 * 00000001404353C1: call    sub_140299280
 * 00000001404353C6: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001404353CE: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001404353D3: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001404353D8: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001404353DE: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001404353E4: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001404353EA: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001404353EF: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001404353F4: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001404353F9: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001404353FE: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140435403: mov     rbx, [rcx]
 * 0000000140435406: mov     rdi, [rcx+8]
 * 000000014043540A: mov     rsi, [rcx+10h]
 * 000000014043540E: mov     r12, [rcx+18h]
 * 0000000140435412: mov     r13, [rcx+20h]
 * 0000000140435416: mov     r14, [rcx+28h]
 * 000000014043541A: mov     r15, [rcx+30h]
 * 000000014043541E: cli
 * 000000014043541F: xor     ecx, ecx
 * 0000000140435421: rdsspq  rcx
 * 0000000140435426: test    rcx, rcx
 * 0000000140435429: jz      short loc_140435435
 * 000000014043542B: mov     ecx, 1
 * 0000000140435430: incsspq rcx
 * 0000000140435435: test    byte ptr [rbp+0F0h], 1
 * 000000014043543C: jz      loc_14043572A
 * 0000000140435442: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140435449: jz      short loc_14043544E
 * 000000014043544B: stac
 * 000000014043544E: mov     rcx, gs:188h
 * 0000000140435457: test    byte ptr [rcx+0C2h], 3
 * 000000014043545E: jz      short loc_14043547B
 * 0000000140435460: mov     ecx, 1
 * 0000000140435465: mov     cr8, rcx
 * 0000000140435469: sti
 * 000000014043546A: call    sub_140425700
 * 000000014043546F: cli
 * 0000000140435470: mov     ecx, 0
 * 0000000140435475: mov     cr8, rcx
 * 0000000140435479: jmp     short loc_14043544E
 * 000000014043547B: test    byte ptr gs:86Ch, 2
 * 0000000140435484: jz      short loc_14043548D
 * 0000000140435486: xor     ecx, ecx
 * 0000000140435488: call    sub_14020D230
 * 000000014043548D: mov     rcx, gs:188h
 * 0000000140435496: test    dword ptr [rcx], 8000000h
 * 000000014043549C: jz      short loc_1404354A3
 * 000000014043549E: call    sub_1404206B0
 * 00000001404354A3: mov     rcx, gs:188h
 * 00000001404354AC: test    dword ptr [rcx], 10000h
 * 00000001404354B2: jz      short loc_1404354C8
 * 00000001404354B4: test    byte ptr [rcx+2], 1
 * 00000001404354B8: jz      short loc_1404354C8
 * 00000001404354BA: call    sub_140571820
 * 00000001404354BF: mov     rcx, gs:188h
 * 00000001404354C8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404354CC: cmp     word ptr [rbp+80h], 0
 * 00000001404354D4: jz      short loc_1404354DB
 * 00000001404354D6: call    sub_14041F8A0
 * 00000001404354DB: mov     rcx, gs:188h
 * 00000001404354E4: bt      dword ptr [rcx+74h], 16h
 * 00000001404354E9: jnb     short loc_140435515
 * 00000001404354EB: xor     ecx, ecx
 * 00000001404354ED: rdsspq  rcx
 * 00000001404354F2: mov     r8, gs:9828h
 * 00000001404354FB: add     r8, 8
 * 00000001404354FF: cmp     rcx, r8
 * 0000000140435502: jnz     short loc_140435515
 * 0000000140435504: mov     rcx, gs:9820h
 * 000000014043550D: rstorssp qword ptr [rcx]
 * 0000000140435511: saveprevssp
 * 0000000140435515: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435519: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014043551D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140435521: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140435525: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435529: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014043552D: mov     r11, [rbp-20h]
 * 0000000140435531: mov     r10, [rbp-28h]
 * 0000000140435535: mov     r9, [rbp-30h]
 * 0000000140435539: mov     r8, [rbp-38h]
 * 000000014043553D: mov     byte ptr gs:856h, 0
 * 0000000140435546: movzx   eax, word ptr gs:86Ah
 * 000000014043554F: cmp     gs:864h, ax
 * 0000000140435558: jz      short loc_14043556C
 * 000000014043555A: mov     gs:864h, ax
 * 0000000140435563: mov     ecx, 48h ; 'H'
 * 0000000140435568: xor     edx, edx
 * 000000014043556A: wrmsr
 * 000000014043556C: btr     word ptr gs:860h, 2
 * 0000000140435577: jnb     short loc_140435587
 * 0000000140435579: mov     eax, 1
 * 000000014043557E: xor     edx, edx
 * 0000000140435580: mov     ecx, 49h ; 'I'
 * 0000000140435585: wrmsr
 * 0000000140435587: btr     word ptr gs:860h, 5
 * 0000000140435592: jnb     loc_1404356CF
 * 0000000140435598: call    loc_1404356AB
 * 000000014043559D: add     rsp, 8
 * 00000001404355A1: call    loc_1404356B4
 * 00000001404355A6: add     rsp, 8
 * 00000001404355AA: call    loc_14043559D
 * 00000001404355AF: add     rsp, 8
 * 00000001404355B3: call    loc_1404355A6
 * 00000001404355B8: add     rsp, 8
 * 00000001404355BC: call    loc_1404355AF
 * 00000001404355C1: add     rsp, 8
 * 00000001404355C5: call    loc_1404355B8
 * 00000001404355CA: add     rsp, 8
 * 00000001404355CE: call    loc_1404355C1
 * 00000001404355D3: add     rsp, 8
 * 00000001404355D7: call    loc_1404355CA
 * 00000001404355DC: add     rsp, 8
 * 00000001404355E0: call    loc_1404355D3
 * 00000001404355E5: add     rsp, 8
 * 00000001404355E9: call    loc_1404355DC
 * 00000001404355EE: add     rsp, 8
 * 00000001404355F2: call    loc_1404355E5
 * 00000001404355F7: add     rsp, 8
 * 00000001404355FB: call    loc_1404355EE
 * 0000000140435600: add     rsp, 8
 * 0000000140435604: call    loc_1404355F7
 * 0000000140435609: add     rsp, 8
 * 000000014043560D: call    loc_140435600
 * 0000000140435612: add     rsp, 8
 * 0000000140435616: call    loc_140435609
 * 000000014043561B: add     rsp, 8
 * 000000014043561F: call    loc_140435612
 * 0000000140435624: add     rsp, 8
 * 0000000140435628: call    loc_14043561B
 * 000000014043562D: add     rsp, 8
 * 0000000140435631: call    loc_140435624
 * 0000000140435636: add     rsp, 8
 * 000000014043563A: call    loc_14043562D
 * 000000014043563F: add     rsp, 8
 * 0000000140435643: call    loc_140435636
 * 0000000140435648: add     rsp, 8
 * 000000014043564C: call    loc_14043563F
 * 0000000140435651: add     rsp, 8
 * 0000000140435655: call    loc_140435648
 * 000000014043565A: add     rsp, 8
 * 000000014043565E: call    loc_140435651
 * 0000000140435663: add     rsp, 8
 * 0000000140435667: call    loc_14043565A
 * 000000014043566C: add     rsp, 8
 * 0000000140435670: call    loc_140435663
 * 0000000140435675: add     rsp, 8
 * 0000000140435679: call    loc_14043566C
 * 000000014043567E: add     rsp, 8
 * 0000000140435682: call    loc_140435675
 * 0000000140435687: add     rsp, 8
 * 000000014043568B: call    loc_14043567E
 * 0000000140435690: add     rsp, 8
 * 0000000140435694: call    loc_140435687
 * 0000000140435699: add     rsp, 8
 * 000000014043569D: call    loc_140435690
 * 00000001404356A2: add     rsp, 8
 * 00000001404356A6: call    loc_140435699
 * 00000001404356AB: add     rsp, 8
 * 00000001404356AF: call    loc_1404356A2
 * 00000001404356B4: add     rsp, 8
 * 00000001404356B8: mov     eax, 0DADAh
 * 00000001404356BD: test    byte ptr gs:862h, 8
 * 00000001404356C6: jz      short loc_1404356CF
 * 00000001404356C8: mov     al, 20h ; ' '
 * 00000001404356CA: incsspq rax
 * 00000001404356CF: test    word ptr gs:860h, 80h
 * 00000001404356DA: jz      short loc_1404356E8
 * 00000001404356DC: xor     eax, eax
 * 00000001404356DE: xor     edx, edx
 * 00000001404356E0: mov     ecx, 1
 * 00000001404356E5: div     rcx
 * 00000001404356E8: mov     rdx, [rbp-40h]
 * 00000001404356EC: mov     rcx, [rbp-48h]
 * 00000001404356F0: mov     rax, [rbp-50h]
 * 00000001404356F4: mov     rsp, rbp
 * 00000001404356F7: mov     rbp, [rbp+0D8h]
 * 00000001404356FE: add     rsp, 0E8h
 * 0000000140435705: test    cs:byte_140E01840, 1
 * 000000014043570C: jz      short loc_140435713
 * 000000014043570E: jmp     sub_140AB6B80
 * 0000000140435713: test    word ptr gs:860h, 100h
 * 000000014043571E: jz      short loc_140435725
 * 0000000140435720: verw    [rsp-1E8h+arg_200]
 * 0000000140435725: swapgs
 * 0000000140435728: iretq
 * 000000014043572A: ldmxcsr dword ptr [rbp-54h]
 * 000000014043572E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435732: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140435736: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014043573A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014043573E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435742: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140435746: mov     r11, [rbp-20h]
 * 000000014043574A: mov     r10, [rbp-28h]
 * 000000014043574E: mov     r9, [rbp-30h]
 * 0000000140435752: mov     r8, [rbp-38h]
 * 0000000140435756: mov     rdx, [rbp-40h]
 * 000000014043575A: mov     rcx, [rbp-48h]
 * 000000014043575E: mov     rax, [rbp-50h]
 * 0000000140435762: mov     rsp, rbp
 * 0000000140435765: mov     rbp, [rbp+0D8h]
 * 000000014043576C: add     rsp, 0E8h
 * 0000000140435773: iretq
 */
