/*
 * XREFs of sub_1404257E0 @ 0x1404257E0
 * Callers:
 *     sub_140AB5FC0 @ 0x140AB5FC0 (sub_140AB5FC0.c)
 * Callees:
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404257E0 @ 0x1404257E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404257E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404257E0: push    0
 * 00000001404257E2: push    rbp
 * 00000001404257E3: push    rsi
 * 00000001404257E4: sub     rsp, 150h
 * 00000001404257EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404257F3: mov     byte ptr [rbp-55h], 0
 * 00000001404257F7: mov     [rbp-50h], rax
 * 00000001404257FB: mov     [rbp-48h], rcx
 * 00000001404257FF: mov     [rbp-40h], rdx
 * 0000000140425803: mov     [rbp-38h], r8
 * 0000000140425807: mov     [rbp-30h], r9
 * 000000014042580B: mov     [rbp-28h], r10
 * 000000014042580F: mov     [rbp-20h], r11
 * 0000000140425813: test    byte ptr [rbp+0F0h], 1
 * 000000014042581A: jnz     short loc_140425856
 * 000000014042581C: xor     edx, edx
 * 000000014042581E: rdsspq  rdx
 * 0000000140425823: mov     [rbp+58h], rdx
 * 0000000140425827: lfence
 * 000000014042582A: test    word ptr gs:860h, 1
 * 0000000140425835: jnz     short loc_14042583F
 * 0000000140425837: lfence
 * 000000014042583A: jmp     loc_140425A9E
 * 000000014042583F: movzx   eax, word ptr gs:864h
 * 0000000140425848: mov     ecx, 48h ; 'H'
 * 000000014042584D: xor     edx, edx
 * 000000014042584F: wrmsr
 * 0000000140425851: jmp     loc_140425A9E
 * 0000000140425856: test    cs:byte_140E01840, 1
 * 000000014042585D: jnz     short loc_140425862
 * 000000014042585F: swapgs
 * 0000000140425862: lfence
 * 0000000140425865: mov     rcx, gs:9828h
 * 000000014042586E: test    rcx, rcx
 * 0000000140425871: jz      short loc_140425892
 * 0000000140425873: rdsspq  rdx
 * 0000000140425878: mov     r10, gs:9820h
 * 0000000140425881: add     r10, 8
 * 0000000140425885: cmp     rdx, r10
 * 0000000140425888: jnz     short loc_140425892
 * 000000014042588A: rstorssp qword ptr [rcx]
 * 000000014042588E: saveprevssp
 * 0000000140425892: mov     r10, gs:188h
 * 000000014042589B: mov     rcx, gs:188h
 * 00000001404258A4: mov     rcx, [rcx+220h]
 * 00000001404258AB: mov     rcx, [rcx+9E0h]
 * 00000001404258B2: mov     gs:858h, rcx
 * 00000001404258BB: mov     cx, gs:850h
 * 00000001404258C4: mov     gs:852h, cx
 * 00000001404258CD: mov     cx, gs:860h
 * 00000001404258D6: mov     gs:854h, cx
 * 00000001404258DF: movzx   eax, word ptr gs:866h
 * 00000001404258E8: cmp     gs:864h, ax
 * 00000001404258F1: jz      short loc_140425905
 * 00000001404258F3: mov     gs:864h, ax
 * 00000001404258FC: mov     ecx, 48h ; 'H'
 * 0000000140425901: xor     edx, edx
 * 0000000140425903: wrmsr
 * 0000000140425905: movzx   edx, word ptr gs:860h
 * 000000014042590E: test    edx, 8
 * 0000000140425914: jz      short loc_14042592D
 * 0000000140425916: mov     eax, 1
 * 000000014042591B: xor     edx, edx
 * 000000014042591D: mov     ecx, 49h ; 'I'
 * 0000000140425922: wrmsr
 * 0000000140425924: movzx   edx, word ptr gs:860h
 * 000000014042592D: test    edx, 2
 * 0000000140425933: jz      loc_140425A70
 * 0000000140425939: call    loc_140425A4C
 * 000000014042593E: add     rsp, 8
 * 0000000140425942: call    loc_140425A55
 * 0000000140425947: add     rsp, 8
 * 000000014042594B: call    loc_14042593E
 * 0000000140425950: add     rsp, 8
 * 0000000140425954: call    loc_140425947
 * 0000000140425959: add     rsp, 8
 * 000000014042595D: call    loc_140425950
 * 0000000140425962: add     rsp, 8
 * 0000000140425966: call    loc_140425959
 * 000000014042596B: add     rsp, 8
 * 000000014042596F: call    loc_140425962
 * 0000000140425974: add     rsp, 8
 * 0000000140425978: call    loc_14042596B
 * 000000014042597D: add     rsp, 8
 * 0000000140425981: call    loc_140425974
 * 0000000140425986: add     rsp, 8
 * 000000014042598A: call    loc_14042597D
 * 000000014042598F: add     rsp, 8
 * 0000000140425993: call    loc_140425986
 * 0000000140425998: add     rsp, 8
 * 000000014042599C: call    loc_14042598F
 * 00000001404259A1: add     rsp, 8
 * 00000001404259A5: call    loc_140425998
 * 00000001404259AA: add     rsp, 8
 * 00000001404259AE: call    loc_1404259A1
 * 00000001404259B3: add     rsp, 8
 * 00000001404259B7: call    loc_1404259AA
 * 00000001404259BC: add     rsp, 8
 * 00000001404259C0: call    loc_1404259B3
 * 00000001404259C5: add     rsp, 8
 * 00000001404259C9: call    loc_1404259BC
 * 00000001404259CE: add     rsp, 8
 * 00000001404259D2: call    loc_1404259C5
 * 00000001404259D7: add     rsp, 8
 * 00000001404259DB: call    loc_1404259CE
 * 00000001404259E0: add     rsp, 8
 * 00000001404259E4: call    loc_1404259D7
 * 00000001404259E9: add     rsp, 8
 * 00000001404259ED: call    loc_1404259E0
 * 00000001404259F2: add     rsp, 8
 * 00000001404259F6: call    loc_1404259E9
 * 00000001404259FB: add     rsp, 8
 * 00000001404259FF: call    loc_1404259F2
 * 0000000140425A04: add     rsp, 8
 * 0000000140425A08: call    loc_1404259FB
 * 0000000140425A0D: add     rsp, 8
 * 0000000140425A11: call    loc_140425A04
 * 0000000140425A16: add     rsp, 8
 * 0000000140425A1A: call    loc_140425A0D
 * 0000000140425A1F: add     rsp, 8
 * 0000000140425A23: call    loc_140425A16
 * 0000000140425A28: add     rsp, 8
 * 0000000140425A2C: call    loc_140425A1F
 * 0000000140425A31: add     rsp, 8
 * 0000000140425A35: call    loc_140425A28
 * 0000000140425A3A: add     rsp, 8
 * 0000000140425A3E: call    loc_140425A31
 * 0000000140425A43: add     rsp, 8
 * 0000000140425A47: call    loc_140425A3A
 * 0000000140425A4C: add     rsp, 8
 * 0000000140425A50: call    loc_140425A43
 * 0000000140425A55: add     rsp, 8
 * 0000000140425A59: mov     eax, 0DADAh
 * 0000000140425A5E: test    byte ptr gs:862h, 8
 * 0000000140425A67: jz      short loc_140425A70
 * 0000000140425A69: mov     al, 20h ; ' '
 * 0000000140425A6B: incsspq rax
 * 0000000140425A70: test    edx, 200h
 * 0000000140425A76: jz      short loc_140425A7D
 * 0000000140425A78: call    sub_1404357C0
 * 0000000140425A7D: lfence
 * 0000000140425A80: mov     byte ptr gs:856h, 0
 * 0000000140425A89: test    byte ptr [r10+3], 3
 * 0000000140425A8E: mov     word ptr [rbp+80h], 0
 * 0000000140425A97: jz      short loc_140425A9E
 * 0000000140425A99: call    sub_14041F920
 * 0000000140425A9E: cld
 * 0000000140425A9F: stmxcsr dword ptr [rbp-54h]
 * 0000000140425AA3: ldmxcsr dword ptr gs:180h
 * 0000000140425AAC: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425AB0: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425AB4: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425AB8: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425ABC: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425AC0: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425AC4: cmp     byte ptr gs:82DAh, 0
 * 0000000140425ACD: jz      short loc_140425AD4
 * 0000000140425ACF: call    sub_1403B4940
 * 0000000140425AD4: lea     rax, loc_140429887
 * 0000000140425ADB: cmp     rax, [rbp+0E8h]
 * 0000000140425AE2: jnb     short loc_140425AFD
 * 0000000140425AE4: lea     rax, loc_1404298A0
 * 0000000140425AEB: cmp     rax, [rbp+0E8h]
 * 0000000140425AF2: jb      short loc_140425AFD
 * 0000000140425AF4: lea     rcx, [rbp-80h]
 * 0000000140425AF8: call    sub_1402F2540
 * 0000000140425AFD: xor     esi, esi
 * 0000000140425AFF: inc     dword ptr gs:82C0h
 * 0000000140425B07: jmp     sub_140426820
 */
