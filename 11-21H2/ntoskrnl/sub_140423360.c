/*
 * XREFs of sub_140423360 @ 0x140423360
 * Callers:
 *     sub_140AB6B00 @ 0x140AB6B00 (sub_140AB6B00.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     sub_140630480 @ 0x140630480 (sub_140630480.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140423360 @ 0x140423360
 * Reason: Hex-Rays returned no pseudocode for 0x140423360
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423360: push    rbp
 * 0000000140423361: push    rsi
 * 0000000140423362: sub     rsp, 150h
 * 0000000140423369: lea     rbp, [rsp+80h]
 * 0000000140423371: mov     [rbp+0D8h+var_12D], 0
 * 0000000140423375: mov     [rbp+0D8h+var_128], rax
 * 0000000140423379: mov     [rbp+0D8h+var_120], rcx
 * 000000014042337D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140423381: mov     [rbp+0D8h+var_110], r8
 * 0000000140423385: mov     [rbp+0D8h+var_108], r9
 * 0000000140423389: mov     [rbp+0D8h+var_100], r10
 * 000000014042338D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140423391: test    [rbp+0D8h+arg_8], 1
 * 0000000140423398: jnz     short loc_1404233D4
 * 000000014042339A: xor     edx, edx
 * 000000014042339C: rdsspq  rdx
 * 00000001404233A1: mov     [rbp+0D8h+var_80], rdx
 * 00000001404233A5: lfence
 * 00000001404233A8: test    word ptr gs:860h, 1
 * 00000001404233B3: jnz     short loc_1404233BD
 * 00000001404233B5: lfence
 * 00000001404233B8: jmp     loc_14042361C
 * 00000001404233BD: movzx   eax, word ptr gs:864h
 * 00000001404233C6: mov     ecx, 48h ; 'H'
 * 00000001404233CB: xor     edx, edx
 * 00000001404233CD: wrmsr
 * 00000001404233CF: jmp     loc_14042361C
 * 00000001404233D4: test    cs:byte_140E01840, 1
 * 00000001404233DB: jnz     short loc_1404233E0
 * 00000001404233DD: swapgs
 * 00000001404233E0: lfence
 * 00000001404233E3: mov     rcx, gs:9828h
 * 00000001404233EC: test    rcx, rcx
 * 00000001404233EF: jz      short loc_140423410
 * 00000001404233F1: rdsspq  rdx
 * 00000001404233F6: mov     r10, gs:9820h
 * 00000001404233FF: add     r10, 8
 * 0000000140423403: cmp     rdx, r10
 * 0000000140423406: jnz     short loc_140423410
 * 0000000140423408: rstorssp qword ptr [rcx]
 * 000000014042340C: saveprevssp
 * 0000000140423410: mov     r10, gs:188h
 * 0000000140423419: mov     rcx, gs:188h
 * 0000000140423422: mov     rcx, [rcx+220h]
 * 0000000140423429: mov     rcx, [rcx+9E0h]
 * 0000000140423430: mov     gs:858h, rcx
 * 0000000140423439: mov     cx, gs:850h
 * 0000000140423442: mov     gs:852h, cx
 * 000000014042344B: mov     cx, gs:860h
 * 0000000140423454: mov     gs:854h, cx
 * 000000014042345D: movzx   eax, word ptr gs:866h
 * 0000000140423466: cmp     gs:864h, ax
 * 000000014042346F: jz      short loc_140423483
 * 0000000140423471: mov     gs:864h, ax
 * 000000014042347A: mov     ecx, 48h ; 'H'
 * 000000014042347F: xor     edx, edx
 * 0000000140423481: wrmsr
 * 0000000140423483: movzx   edx, word ptr gs:860h
 * 000000014042348C: test    edx, 8
 * 0000000140423492: jz      short loc_1404234AB
 * 0000000140423494: mov     eax, 1
 * 0000000140423499: xor     edx, edx
 * 000000014042349B: mov     ecx, 49h ; 'I'
 * 00000001404234A0: wrmsr
 * 00000001404234A2: movzx   edx, word ptr gs:860h
 * 00000001404234AB: test    edx, 2
 * 00000001404234B1: jz      loc_1404235EE
 * 00000001404234B7: call    loc_1404235CA
 * 00000001404234BC: add     rsp, 8
 * 00000001404234C0: call    loc_1404235D3
 * 00000001404234C5: add     rsp, 8
 * 00000001404234C9: call    loc_1404234BC
 * 00000001404234CE: add     rsp, 8
 * 00000001404234D2: call    loc_1404234C5
 * 00000001404234D7: add     rsp, 8
 * 00000001404234DB: call    loc_1404234CE
 * 00000001404234E0: add     rsp, 8
 * 00000001404234E4: call    loc_1404234D7
 * 00000001404234E9: add     rsp, 8
 * 00000001404234ED: call    loc_1404234E0
 * 00000001404234F2: add     rsp, 8
 * 00000001404234F6: call    loc_1404234E9
 * 00000001404234FB: add     rsp, 8
 * 00000001404234FF: call    loc_1404234F2
 * 0000000140423504: add     rsp, 8
 * 0000000140423508: call    loc_1404234FB
 * 000000014042350D: add     rsp, 8
 * 0000000140423511: call    loc_140423504
 * 0000000140423516: add     rsp, 8
 * 000000014042351A: call    loc_14042350D
 * 000000014042351F: add     rsp, 8
 * 0000000140423523: call    loc_140423516
 * 0000000140423528: add     rsp, 8
 * 000000014042352C: call    loc_14042351F
 * 0000000140423531: add     rsp, 8
 * 0000000140423535: call    loc_140423528
 * 000000014042353A: add     rsp, 8
 * 000000014042353E: call    loc_140423531
 * 0000000140423543: add     rsp, 8
 * 0000000140423547: call    loc_14042353A
 * 000000014042354C: add     rsp, 8
 * 0000000140423550: call    loc_140423543
 * 0000000140423555: add     rsp, 8
 * 0000000140423559: call    loc_14042354C
 * 000000014042355E: add     rsp, 8
 * 0000000140423562: call    loc_140423555
 * 0000000140423567: add     rsp, 8
 * 000000014042356B: call    loc_14042355E
 * 0000000140423570: add     rsp, 8
 * 0000000140423574: call    loc_140423567
 * 0000000140423579: add     rsp, 8
 * 000000014042357D: call    loc_140423570
 * 0000000140423582: add     rsp, 8
 * 0000000140423586: call    loc_140423579
 * 000000014042358B: add     rsp, 8
 * 000000014042358F: call    loc_140423582
 * 0000000140423594: add     rsp, 8
 * 0000000140423598: call    loc_14042358B
 * 000000014042359D: add     rsp, 8
 * 00000001404235A1: call    loc_140423594
 * 00000001404235A6: add     rsp, 8
 * 00000001404235AA: call    loc_14042359D
 * 00000001404235AF: add     rsp, 8
 * 00000001404235B3: call    loc_1404235A6
 * 00000001404235B8: add     rsp, 8
 * 00000001404235BC: call    loc_1404235AF
 * 00000001404235C1: add     rsp, 8
 * 00000001404235C5: call    loc_1404235B8
 * 00000001404235CA: add     rsp, 8
 * 00000001404235CE: call    loc_1404235C1
 * 00000001404235D3: add     rsp, 8
 * 00000001404235D7: mov     eax, 0DADAh
 * 00000001404235DC: test    byte ptr gs:862h, 8
 * 00000001404235E5: jz      short loc_1404235EE
 * 00000001404235E7: mov     al, 20h ; ' '
 * 00000001404235E9: incsspq rax
 * 00000001404235EE: test    edx, 200h
 * 00000001404235F4: jz      short loc_1404235FB
 * 00000001404235F6: call    sub_1404357C0
 * 00000001404235FB: lfence
 * 00000001404235FE: mov     byte ptr gs:856h, 0
 * 0000000140423607: test    byte ptr [r10+3], 3
 * 000000014042360C: mov     [rbp+0D8h+var_58], 0
 * 0000000140423615: jz      short loc_14042361C
 * 0000000140423617: call    sub_14041F920
 * 000000014042361C: cld
 * 000000014042361D: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140423621: ldmxcsr dword ptr gs:180h
 * 000000014042362A: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042362E: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140423632: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140423636: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042363A: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042363E: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140423642: cmp     byte ptr gs:82DAh, 0
 * 000000014042364B: jz      short loc_140423652
 * 000000014042364D: call    sub_1403B4940
 * 0000000140423652: lea     rax, loc_140429887
 * 0000000140423659: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140423660: jnb     short loc_14042367B
 * 0000000140423662: lea     rax, loc_1404298A0
 * 0000000140423669: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140423670: jb      short loc_14042367B
 * 0000000140423672: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140423676: call    sub_1402F2540
 * 000000014042367B: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140423682: mov     rsi, gs:20h
 * 000000014042368B: mov     rsi, [rsi+rax*8+3400h]
 * 0000000140423693: inc     dword ptr gs:82C0h
 * 000000014042369B: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404236A2: jz      short loc_1404236A7
 * 00000001404236A4: clac
 * 00000001404236A7: test    rsi, rsi
 * 00000001404236AA: jz      short loc_1404236B5
 * 00000001404236AC: mov     rax, [rsi+50h]
 * 00000001404236B0: jmp     sub_14042A5E0
 * 00000001404236B5: mov     ecx, eax
 * 00000001404236B7: shr     ecx, 4
 * 00000001404236BA: cmp     cs:dword_140D06B08, 0
 * 00000001404236C1: jz      short loc_1404236CA
 * 00000001404236C3: call    sub_140569E70
 * 00000001404236C8: jmp     short loc_1404236D2
 * 00000001404236CA: mov     rax, cr8
 * 00000001404236CE: mov     cr8, rcx
 * 00000001404236D2: mov     [rbp+0D8h+var_12F], al
 * 00000001404236D5: mov     rcx, gs:20h
 * 00000001404236DE: inc     byte ptr [rcx+20h]
 * 00000001404236E1: cmp     byte ptr [rcx+20h], 1
 * 00000001404236E5: jnz     short loc_140423737
 * 00000001404236E7: rdtsc
 * 00000001404236E9: shl     rdx, 20h
 * 00000001404236ED: or      rax, rdx
 * 00000001404236F0: mov     r8, [rcx+8]
 * 00000001404236F4: sub     rax, [rcx+8180h]
 * 00000001404236FB: add     [r8+48h], rax
 * 00000001404236FF: mov     edx, [r8+50h]
 * 0000000140423703: add     [rcx+8180h], rax
 * 000000014042370A: add     rdx, rax
 * 000000014042370D: mov     ecx, edx
 * 000000014042370F: shr     rdx, 20h
 * 0000000140423713: jz      short loc_140423718
 * 0000000140423715: or      ecx, 0FFFFFFFFh
 * 0000000140423718: mov     [r8+50h], ecx
 * 000000014042371C: test    byte ptr [r8+2], 0BEh
 * 0000000140423721: jz      short loc_140423737
 * 0000000140423723: mov     rdx, r8
 * 0000000140423726: mov     r8, rax
 * 0000000140423729: mov     rcx, gs:20h
 * 0000000140423732: call    sub_1402B9660
 * 0000000140423737: sti
 * 0000000140423738: test    dword ptr cs:xmmword_140D06900+4, 4000h
 * 0000000140423742: jz      short loc_140423750
 * 0000000140423744: movzx   ecx, byte ptr [rbp+0E0h]
 * 000000014042374B: call    sub_140630480
 * 0000000140423750: cmp     cs:byte_140D01514, 0
 * 0000000140423757: jz      short loc_140423778
 * 0000000140423759: and     [rbp+0D8h+var_138], 0
 * 000000014042375E: xor     r9, r9
 * 0000000140423761: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140423769: mov     edx, 1
 * 000000014042376E: mov     ecx, 12h
 * 0000000140423773: call    sub_140434DC0
 * 0000000140423778: cli
 * 0000000140423779: mov     rcx, rsi
 * 000000014042377C: call    HalPerformEndOfInterrupt
 * 0000000140423781: mov     rcx, gs:20h
 * 000000014042378A: cmp     byte ptr [rcx+20h], 1
 * 000000014042378E: ja      short loc_14042380A
 * 0000000140423790: rdtsc
 * 0000000140423792: shl     rdx, 20h
 * 0000000140423796: or      rax, rdx
 * 0000000140423799: sub     rax, [rcx+8180h]
 * 00000001404237A0: add     [rcx+8278h], rax
 * 00000001404237A7: add     [rcx+8180h], rax
 * 00000001404237AE: mov     r8, rax
 * 00000001404237B1: mov     rax, [rcx+8]
 * 00000001404237B5: test    byte ptr [rax+2], 72h
 * 00000001404237B9: jz      short loc_1404237CE
 * 00000001404237BB: xor     edx, edx
 * 00000001404237BD: call    sub_1402ECA00
 * 00000001404237C2: mov     rcx, gs:20h
 * 00000001404237CB: inc     byte ptr [rcx+20h]
 * 00000001404237CE: mov     dl, [rcx+6]
 * 00000001404237D1: and     byte ptr [rcx+6], 0
 * 00000001404237D5: cmp     byte ptr [rcx+7], 0
 * 00000001404237D9: jnz     short loc_14042380A
 * 00000001404237DB: test    dl, dl
 * 00000001404237DD: jz      short loc_14042380A
 * 00000001404237DF: cmp     [rbp+0D8h+var_12F], 2
 * 00000001404237E3: jnb     short loc_1404237F0
 * 00000001404237E5: and     byte ptr [rcx+20h], 0
 * 00000001404237E9: call    sub_1404281E0
 * 00000001404237EE: jmp     short loc_14042380D
 * 00000001404237F0: mov     ecx, 2
 * 00000001404237F5: call    cs:off_140015970
 * 00000001404237FC: nop     dword ptr [rax+rax+00h]
 * 0000000140423801: mov     rcx, gs:20h
 * 000000014042380A: dec     byte ptr [rcx+20h]
 * 000000014042380D: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140423811: cmp     cs:dword_140D06B08, 0
 * 0000000140423818: jz      short loc_140423821
 * 000000014042381A: call    sub_140569E70
 * 000000014042381F: jmp     short loc_140423825
 * 0000000140423821: mov     cr8, rcx
 * 0000000140423825: mov     rsi, [rbp+0D8h+var_8]
 * 000000014042382C: cli
 * 000000014042382D: test    [rbp+0D8h+arg_8], 1
 * 0000000140423834: jz      loc_140423B22
 * 000000014042383A: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140423841: jz      short loc_140423846
 * 0000000140423843: stac
 * 0000000140423846: mov     rcx, gs:188h
 * 000000014042384F: test    byte ptr [rcx+0C2h], 3
 * 0000000140423856: jz      short loc_140423873
 * 0000000140423858: mov     ecx, 1
 * 000000014042385D: mov     cr8, rcx
 * 0000000140423861: sti
 * 0000000140423862: call    sub_140425700
 * 0000000140423867: cli
 * 0000000140423868: mov     ecx, 0
 * 000000014042386D: mov     cr8, rcx
 * 0000000140423871: jmp     short loc_140423846
 * 0000000140423873: test    byte ptr gs:86Ch, 2
 * 000000014042387C: jz      short loc_140423885
 * 000000014042387E: xor     ecx, ecx
 * 0000000140423880: call    sub_14020D230
 * 0000000140423885: mov     rcx, gs:188h
 * 000000014042388E: test    dword ptr [rcx], 8000000h
 * 0000000140423894: jz      short loc_14042389B
 * 0000000140423896: call    sub_1404206B0
 * 000000014042389B: mov     rcx, gs:188h
 * 00000001404238A4: test    dword ptr [rcx], 10000h
 * 00000001404238AA: jz      short loc_1404238C0
 * 00000001404238AC: test    byte ptr [rcx+2], 1
 * 00000001404238B0: jz      short loc_1404238C0
 * 00000001404238B2: call    sub_140571820
 * 00000001404238B7: mov     rcx, gs:188h
 * 00000001404238C0: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404238C4: cmp     [rbp+0D8h+var_58], 0
 * 00000001404238CC: jz      short loc_1404238D3
 * 00000001404238CE: call    sub_14041F8A0
 * 00000001404238D3: mov     rcx, gs:188h
 * 00000001404238DC: bt      dword ptr [rcx+74h], 16h
 * 00000001404238E1: jnb     short loc_14042390D
 * 00000001404238E3: xor     ecx, ecx
 * 00000001404238E5: rdsspq  rcx
 * 00000001404238EA: mov     r8, gs:9828h
 * 00000001404238F3: add     r8, 8
 * 00000001404238F7: cmp     rcx, r8
 * 00000001404238FA: jnz     short loc_14042390D
 * 00000001404238FC: mov     rcx, gs:9820h
 * 0000000140423905: rstorssp qword ptr [rcx]
 * 0000000140423909: saveprevssp
 * 000000014042390D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140423911: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140423915: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140423919: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014042391D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140423921: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140423925: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140423929: mov     r10, [rbp+0D8h+var_100]
 * 000000014042392D: mov     r9, [rbp+0D8h+var_108]
 * 0000000140423931: mov     r8, [rbp+0D8h+var_110]
 * 0000000140423935: mov     byte ptr gs:856h, 0
 * 000000014042393E: movzx   eax, word ptr gs:86Ah
 * 0000000140423947: cmp     gs:864h, ax
 * 0000000140423950: jz      short loc_140423964
 * 0000000140423952: mov     gs:864h, ax
 * 000000014042395B: mov     ecx, 48h ; 'H'
 * 0000000140423960: xor     edx, edx
 * 0000000140423962: wrmsr
 * 0000000140423964: btr     word ptr gs:860h, 2
 * 000000014042396F: jnb     short loc_14042397F
 * 0000000140423971: mov     eax, 1
 * 0000000140423976: xor     edx, edx
 * 0000000140423978: mov     ecx, 49h ; 'I'
 * 000000014042397D: wrmsr
 * 000000014042397F: btr     word ptr gs:860h, 5
 * 000000014042398A: jnb     loc_140423AC7
 * 0000000140423990: call    loc_140423AA3
 * 0000000140423995: add     rsp, 8
 * 0000000140423999: call    loc_140423AAC
 * 000000014042399E: add     rsp, 8
 * 00000001404239A2: call    loc_140423995
 * 00000001404239A7: add     rsp, 8
 * 00000001404239AB: call    loc_14042399E
 * 00000001404239B0: add     rsp, 8
 * 00000001404239B4: call    loc_1404239A7
 * 00000001404239B9: add     rsp, 8
 * 00000001404239BD: call    loc_1404239B0
 * 00000001404239C2: add     rsp, 8
 * 00000001404239C6: call    loc_1404239B9
 * 00000001404239CB: add     rsp, 8
 * 00000001404239CF: call    loc_1404239C2
 * 00000001404239D4: add     rsp, 8
 * 00000001404239D8: call    loc_1404239CB
 * 00000001404239DD: add     rsp, 8
 * 00000001404239E1: call    loc_1404239D4
 * 00000001404239E6: add     rsp, 8
 * 00000001404239EA: call    loc_1404239DD
 * 00000001404239EF: add     rsp, 8
 * 00000001404239F3: call    loc_1404239E6
 * 00000001404239F8: add     rsp, 8
 * 00000001404239FC: call    loc_1404239EF
 * 0000000140423A01: add     rsp, 8
 * 0000000140423A05: call    loc_1404239F8
 * 0000000140423A0A: add     rsp, 8
 * 0000000140423A0E: call    loc_140423A01
 * 0000000140423A13: add     rsp, 8
 * 0000000140423A17: call    loc_140423A0A
 * 0000000140423A1C: add     rsp, 8
 * 0000000140423A20: call    loc_140423A13
 * 0000000140423A25: add     rsp, 8
 * 0000000140423A29: call    loc_140423A1C
 * 0000000140423A2E: add     rsp, 8
 * 0000000140423A32: call    loc_140423A25
 * 0000000140423A37: add     rsp, 8
 * 0000000140423A3B: call    loc_140423A2E
 * 0000000140423A40: add     rsp, 8
 * 0000000140423A44: call    loc_140423A37
 * 0000000140423A49: add     rsp, 8
 * 0000000140423A4D: call    loc_140423A40
 * 0000000140423A52: add     rsp, 8
 * 0000000140423A56: call    loc_140423A49
 * 0000000140423A5B: add     rsp, 8
 * 0000000140423A5F: call    loc_140423A52
 * 0000000140423A64: add     rsp, 8
 * 0000000140423A68: call    loc_140423A5B
 * 0000000140423A6D: add     rsp, 8
 * 0000000140423A71: call    loc_140423A64
 * 0000000140423A76: add     rsp, 8
 * 0000000140423A7A: call    loc_140423A6D
 * 0000000140423A7F: add     rsp, 8
 * 0000000140423A83: call    loc_140423A76
 * 0000000140423A88: add     rsp, 8
 * 0000000140423A8C: call    loc_140423A7F
 * 0000000140423A91: add     rsp, 8
 * 0000000140423A95: call    loc_140423A88
 * 0000000140423A9A: add     rsp, 8
 * 0000000140423A9E: call    loc_140423A91
 * 0000000140423AA3: add     rsp, 8
 * 0000000140423AA7: call    loc_140423A9A
 * 0000000140423AAC: add     rsp, 8
 * 0000000140423AB0: mov     eax, 0DADAh
 * 0000000140423AB5: test    byte ptr gs:862h, 8
 * 0000000140423ABE: jz      short loc_140423AC7
 * 0000000140423AC0: mov     al, 20h ; ' '
 * 0000000140423AC2: incsspq rax
 * 0000000140423AC7: test    word ptr gs:860h, 80h
 * 0000000140423AD2: jz      short loc_140423AE0
 * 0000000140423AD4: xor     eax, eax
 * 0000000140423AD6: xor     edx, edx
 * 0000000140423AD8: mov     ecx, 1
 * 0000000140423ADD: div     rcx
 * 0000000140423AE0: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140423AE4: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140423AE8: mov     rax, [rbp+0D8h+var_128]
 * 0000000140423AEC: mov     rsp, rbp
 * 0000000140423AEF: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140423AF6: add     rsp, 0E8h
 * 0000000140423AFD: test    cs:byte_140E01840, 1
 * 0000000140423B04: jz      short loc_140423B0B
 * 0000000140423B06: jmp     sub_140AB6B80
 * 0000000140423B0B: test    word ptr gs:860h, 100h
 * 0000000140423B16: jz      short loc_140423B1D
 * 0000000140423B18: verw    [rsp-10h+arg_20]
 * 0000000140423B1D: swapgs
 * 0000000140423B20: iretq
 * 0000000140423B22: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140423B26: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140423B2A: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140423B2E: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140423B32: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140423B36: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140423B3A: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140423B3E: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140423B42: mov     r10, [rbp+0D8h+var_100]
 * 0000000140423B46: mov     r9, [rbp+0D8h+var_108]
 * 0000000140423B4A: mov     r8, [rbp+0D8h+var_110]
 * 0000000140423B4E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140423B52: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140423B56: mov     rax, [rbp+0D8h+var_128]
 * 0000000140423B5A: mov     rsp, rbp
 * 0000000140423B5D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140423B64: add     rsp, 0E8h
 * 0000000140423B6B: iretq
 */
