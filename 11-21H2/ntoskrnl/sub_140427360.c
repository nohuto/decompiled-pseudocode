/*
 * XREFs of sub_140427360 @ 0x140427360
 * Callers:
 *     sub_140AB5CC0 @ 0x140AB5CC0 (sub_140AB5CC0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_1403EBF10 @ 0x1403EBF10 (sub_1403EBF10.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140427360 @ 0x140427360
 * Reason: Hex-Rays returned no pseudocode for 0x140427360
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427360: sub     rsp, 8
 * 0000000140427364: push    rbp
 * 0000000140427365: push    rsi
 * 0000000140427366: sub     rsp, 150h
 * 000000014042736D: lea     rbp, [rsp+80h]
 * 0000000140427375: mov     [rbp+0E8h+var_13D], 0
 * 0000000140427379: mov     [rbp+0E8h+var_138], rax
 * 000000014042737D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140427381: mov     [rbp+0E8h+var_128], rdx
 * 0000000140427385: mov     [rbp+0E8h+var_120], r8
 * 0000000140427389: mov     [rbp+0E8h+var_118], r9
 * 000000014042738D: mov     [rbp+0E8h+var_110], r10
 * 0000000140427391: mov     [rbp+0E8h+var_108], r11
 * 0000000140427395: test    [rbp+0E8h+arg_0], 1
 * 000000014042739C: jnz     short loc_1404273D8
 * 000000014042739E: xor     edx, edx
 * 00000001404273A0: rdsspq  rdx
 * 00000001404273A5: mov     [rbp+0E8h+var_90], rdx
 * 00000001404273A9: lfence
 * 00000001404273AC: test    word ptr gs:860h, 1
 * 00000001404273B7: jnz     short loc_1404273C1
 * 00000001404273B9: lfence
 * 00000001404273BC: jmp     loc_140427620
 * 00000001404273C1: movzx   eax, word ptr gs:864h
 * 00000001404273CA: mov     ecx, 48h ; 'H'
 * 00000001404273CF: xor     edx, edx
 * 00000001404273D1: wrmsr
 * 00000001404273D3: jmp     loc_140427620
 * 00000001404273D8: test    cs:byte_140E01840, 1
 * 00000001404273DF: jnz     short loc_1404273E4
 * 00000001404273E1: swapgs
 * 00000001404273E4: lfence
 * 00000001404273E7: mov     rcx, gs:9828h
 * 00000001404273F0: test    rcx, rcx
 * 00000001404273F3: jz      short loc_140427414
 * 00000001404273F5: rdsspq  rdx
 * 00000001404273FA: mov     r10, gs:9820h
 * 0000000140427403: add     r10, 8
 * 0000000140427407: cmp     rdx, r10
 * 000000014042740A: jnz     short loc_140427414
 * 000000014042740C: rstorssp qword ptr [rcx]
 * 0000000140427410: saveprevssp
 * 0000000140427414: mov     r10, gs:188h
 * 000000014042741D: mov     rcx, gs:188h
 * 0000000140427426: mov     rcx, [rcx+220h]
 * 000000014042742D: mov     rcx, [rcx+9E0h]
 * 0000000140427434: mov     gs:858h, rcx
 * 000000014042743D: mov     cx, gs:850h
 * 0000000140427446: mov     gs:852h, cx
 * 000000014042744F: mov     cx, gs:860h
 * 0000000140427458: mov     gs:854h, cx
 * 0000000140427461: movzx   eax, word ptr gs:866h
 * 000000014042746A: cmp     gs:864h, ax
 * 0000000140427473: jz      short loc_140427487
 * 0000000140427475: mov     gs:864h, ax
 * 000000014042747E: mov     ecx, 48h ; 'H'
 * 0000000140427483: xor     edx, edx
 * 0000000140427485: wrmsr
 * 0000000140427487: movzx   edx, word ptr gs:860h
 * 0000000140427490: test    edx, 8
 * 0000000140427496: jz      short loc_1404274AF
 * 0000000140427498: mov     eax, 1
 * 000000014042749D: xor     edx, edx
 * 000000014042749F: mov     ecx, 49h ; 'I'
 * 00000001404274A4: wrmsr
 * 00000001404274A6: movzx   edx, word ptr gs:860h
 * 00000001404274AF: test    edx, 2
 * 00000001404274B5: jz      loc_1404275F2
 * 00000001404274BB: call    loc_1404275CE
 * 00000001404274C0: add     rsp, 8
 * 00000001404274C4: call    loc_1404275D7
 * 00000001404274C9: add     rsp, 8
 * 00000001404274CD: call    loc_1404274C0
 * 00000001404274D2: add     rsp, 8
 * 00000001404274D6: call    loc_1404274C9
 * 00000001404274DB: add     rsp, 8
 * 00000001404274DF: call    loc_1404274D2
 * 00000001404274E4: add     rsp, 8
 * 00000001404274E8: call    loc_1404274DB
 * 00000001404274ED: add     rsp, 8
 * 00000001404274F1: call    loc_1404274E4
 * 00000001404274F6: add     rsp, 8
 * 00000001404274FA: call    loc_1404274ED
 * 00000001404274FF: add     rsp, 8
 * 0000000140427503: call    loc_1404274F6
 * 0000000140427508: add     rsp, 8
 * 000000014042750C: call    loc_1404274FF
 * 0000000140427511: add     rsp, 8
 * 0000000140427515: call    loc_140427508
 * 000000014042751A: add     rsp, 8
 * 000000014042751E: call    loc_140427511
 * 0000000140427523: add     rsp, 8
 * 0000000140427527: call    loc_14042751A
 * 000000014042752C: add     rsp, 8
 * 0000000140427530: call    loc_140427523
 * 0000000140427535: add     rsp, 8
 * 0000000140427539: call    loc_14042752C
 * 000000014042753E: add     rsp, 8
 * 0000000140427542: call    loc_140427535
 * 0000000140427547: add     rsp, 8
 * 000000014042754B: call    loc_14042753E
 * 0000000140427550: add     rsp, 8
 * 0000000140427554: call    loc_140427547
 * 0000000140427559: add     rsp, 8
 * 000000014042755D: call    loc_140427550
 * 0000000140427562: add     rsp, 8
 * 0000000140427566: call    loc_140427559
 * 000000014042756B: add     rsp, 8
 * 000000014042756F: call    loc_140427562
 * 0000000140427574: add     rsp, 8
 * 0000000140427578: call    loc_14042756B
 * 000000014042757D: add     rsp, 8
 * 0000000140427581: call    loc_140427574
 * 0000000140427586: add     rsp, 8
 * 000000014042758A: call    loc_14042757D
 * 000000014042758F: add     rsp, 8
 * 0000000140427593: call    loc_140427586
 * 0000000140427598: add     rsp, 8
 * 000000014042759C: call    loc_14042758F
 * 00000001404275A1: add     rsp, 8
 * 00000001404275A5: call    loc_140427598
 * 00000001404275AA: add     rsp, 8
 * 00000001404275AE: call    loc_1404275A1
 * 00000001404275B3: add     rsp, 8
 * 00000001404275B7: call    loc_1404275AA
 * 00000001404275BC: add     rsp, 8
 * 00000001404275C0: call    loc_1404275B3
 * 00000001404275C5: add     rsp, 8
 * 00000001404275C9: call    loc_1404275BC
 * 00000001404275CE: add     rsp, 8
 * 00000001404275D2: call    loc_1404275C5
 * 00000001404275D7: add     rsp, 8
 * 00000001404275DB: mov     eax, 0DADAh
 * 00000001404275E0: test    byte ptr gs:862h, 8
 * 00000001404275E9: jz      short loc_1404275F2
 * 00000001404275EB: mov     al, 20h ; ' '
 * 00000001404275ED: incsspq rax
 * 00000001404275F2: test    edx, 200h
 * 00000001404275F8: jz      short loc_1404275FF
 * 00000001404275FA: call    sub_1404357C0
 * 00000001404275FF: lfence
 * 0000000140427602: mov     byte ptr gs:856h, 0
 * 000000014042760B: test    byte ptr [r10+3], 3
 * 0000000140427610: mov     [rbp+0E8h+var_68], 0
 * 0000000140427619: jz      short loc_140427620
 * 000000014042761B: call    sub_14041F920
 * 0000000140427620: cld
 * 0000000140427621: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140427625: ldmxcsr dword ptr gs:180h
 * 000000014042762E: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140427632: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140427636: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042763A: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042763E: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140427642: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140427646: cmp     byte ptr gs:82DAh, 0
 * 000000014042764F: jz      short loc_140427656
 * 0000000140427651: call    sub_1403B4940
 * 0000000140427656: lea     rax, loc_140429887
 * 000000014042765D: cmp     rax, [rbp+0E8h]
 * 0000000140427664: jnb     short loc_14042767F
 * 0000000140427666: lea     rax, loc_1404298A0
 * 000000014042766D: cmp     rax, [rbp+0E8h]
 * 0000000140427674: jb      short loc_14042767F
 * 0000000140427676: lea     rcx, [rbp+0E8h+var_168]
 * 000000014042767A: call    sub_1402F2540
 * 000000014042767F: xor     esi, esi
 * 0000000140427681: inc     dword ptr gs:82C0h
 * 0000000140427689: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140427690: jz      short loc_140427695
 * 0000000140427692: clac
 * 0000000140427695: mov     ecx, 2
 * 000000014042769A: cmp     cs:dword_140D06B08, 0
 * 00000001404276A1: jz      short loc_1404276AA
 * 00000001404276A3: call    sub_140569E70
 * 00000001404276A8: jmp     short loc_1404276B2
 * 00000001404276AA: mov     rax, cr8
 * 00000001404276AE: mov     cr8, rcx
 * 00000001404276B2: mov     [rbp+0E8h+var_13F], al
 * 00000001404276B5: mov     rcx, gs:20h
 * 00000001404276BE: inc     byte ptr [rcx+20h]
 * 00000001404276C1: cmp     byte ptr [rcx+20h], 1
 * 00000001404276C5: jnz     short loc_140427717
 * 00000001404276C7: rdtsc
 * 00000001404276C9: shl     rdx, 20h
 * 00000001404276CD: or      rax, rdx
 * 00000001404276D0: mov     r8, [rcx+8]
 * 00000001404276D4: sub     rax, [rcx+8180h]
 * 00000001404276DB: add     [r8+48h], rax
 * 00000001404276DF: mov     edx, [r8+50h]
 * 00000001404276E3: add     [rcx+8180h], rax
 * 00000001404276EA: add     rdx, rax
 * 00000001404276ED: mov     ecx, edx
 * 00000001404276EF: shr     rdx, 20h
 * 00000001404276F3: jz      short loc_1404276F8
 * 00000001404276F5: or      ecx, 0FFFFFFFFh
 * 00000001404276F8: mov     [r8+50h], ecx
 * 00000001404276FC: test    byte ptr [r8+2], 0BEh
 * 0000000140427701: jz      short loc_140427717
 * 0000000140427703: mov     rdx, r8
 * 0000000140427706: mov     r8, rax
 * 0000000140427709: mov     rcx, gs:20h
 * 0000000140427712: call    sub_1402B9660
 * 0000000140427717: sti
 * 0000000140427718: lea     rcx, [rbp+0E8h+var_168]
 * 000000014042771C: call    sub_1403EBF10
 * 0000000140427721: cli
 * 0000000140427722: mov     rcx, rsi
 * 0000000140427725: call    HalPerformEndOfInterrupt
 * 000000014042772A: mov     rcx, gs:20h
 * 0000000140427733: cmp     byte ptr [rcx+20h], 1
 * 0000000140427737: ja      short loc_1404277B3
 * 0000000140427739: rdtsc
 * 000000014042773B: shl     rdx, 20h
 * 000000014042773F: or      rax, rdx
 * 0000000140427742: sub     rax, [rcx+8180h]
 * 0000000140427749: add     [rcx+8278h], rax
 * 0000000140427750: add     [rcx+8180h], rax
 * 0000000140427757: mov     r8, rax
 * 000000014042775A: mov     rax, [rcx+8]
 * 000000014042775E: test    byte ptr [rax+2], 72h
 * 0000000140427762: jz      short loc_140427777
 * 0000000140427764: xor     edx, edx
 * 0000000140427766: call    sub_1402ECA00
 * 000000014042776B: mov     rcx, gs:20h
 * 0000000140427774: inc     byte ptr [rcx+20h]
 * 0000000140427777: mov     dl, [rcx+6]
 * 000000014042777A: and     byte ptr [rcx+6], 0
 * 000000014042777E: cmp     byte ptr [rcx+7], 0
 * 0000000140427782: jnz     short loc_1404277B3
 * 0000000140427784: test    dl, dl
 * 0000000140427786: jz      short loc_1404277B3
 * 0000000140427788: cmp     [rbp+0E8h+var_13F], 2
 * 000000014042778C: jnb     short loc_140427799
 * 000000014042778E: and     byte ptr [rcx+20h], 0
 * 0000000140427792: call    sub_1404281E0
 * 0000000140427797: jmp     short loc_1404277B6
 * 0000000140427799: mov     ecx, 2
 * 000000014042779E: call    cs:off_140015970
 * 00000001404277A5: nop     dword ptr [rax+rax+00h]
 * 00000001404277AA: mov     rcx, gs:20h
 * 00000001404277B3: dec     byte ptr [rcx+20h]
 * 00000001404277B6: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404277BA: cmp     cs:dword_140D06B08, 0
 * 00000001404277C1: jz      short loc_1404277CA
 * 00000001404277C3: call    sub_140569E70
 * 00000001404277C8: jmp     short loc_1404277CE
 * 00000001404277CA: mov     cr8, rcx
 * 00000001404277CE: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404277D5: cli
 * 00000001404277D6: test    [rbp+0E8h+arg_0], 1
 * 00000001404277DD: jz      loc_140427ACB
 * 00000001404277E3: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404277EA: jz      short loc_1404277EF
 * 00000001404277EC: stac
 * 00000001404277EF: mov     rcx, gs:188h
 * 00000001404277F8: test    byte ptr [rcx+0C2h], 3
 * 00000001404277FF: jz      short loc_14042781C
 * 0000000140427801: mov     ecx, 1
 * 0000000140427806: mov     cr8, rcx
 * 000000014042780A: sti
 * 000000014042780B: call    sub_140425700
 * 0000000140427810: cli
 * 0000000140427811: mov     ecx, 0
 * 0000000140427816: mov     cr8, rcx
 * 000000014042781A: jmp     short loc_1404277EF
 * 000000014042781C: test    byte ptr gs:86Ch, 2
 * 0000000140427825: jz      short loc_14042782E
 * 0000000140427827: xor     ecx, ecx
 * 0000000140427829: call    sub_14020D230
 * 000000014042782E: mov     rcx, gs:188h
 * 0000000140427837: test    dword ptr [rcx], 8000000h
 * 000000014042783D: jz      short loc_140427844
 * 000000014042783F: call    sub_1404206B0
 * 0000000140427844: mov     rcx, gs:188h
 * 000000014042784D: test    dword ptr [rcx], 10000h
 * 0000000140427853: jz      short loc_140427869
 * 0000000140427855: test    byte ptr [rcx+2], 1
 * 0000000140427859: jz      short loc_140427869
 * 000000014042785B: call    sub_140571820
 * 0000000140427860: mov     rcx, gs:188h
 * 0000000140427869: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042786D: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427875: jz      short loc_14042787C
 * 0000000140427877: call    sub_14041F8A0
 * 000000014042787C: mov     rcx, gs:188h
 * 0000000140427885: bt      dword ptr [rcx+74h], 16h
 * 000000014042788A: jnb     short loc_1404278B6
 * 000000014042788C: xor     ecx, ecx
 * 000000014042788E: rdsspq  rcx
 * 0000000140427893: mov     r8, gs:9828h
 * 000000014042789C: add     r8, 8
 * 00000001404278A0: cmp     rcx, r8
 * 00000001404278A3: jnz     short loc_1404278B6
 * 00000001404278A5: mov     rcx, gs:9820h
 * 00000001404278AE: rstorssp qword ptr [rcx]
 * 00000001404278B2: saveprevssp
 * 00000001404278B6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404278BA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404278BE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404278C2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404278C6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404278CA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404278CE: mov     r11, [rbp+0E8h+var_108]
 * 00000001404278D2: mov     r10, [rbp+0E8h+var_110]
 * 00000001404278D6: mov     r9, [rbp+0E8h+var_118]
 * 00000001404278DA: mov     r8, [rbp+0E8h+var_120]
 * 00000001404278DE: mov     byte ptr gs:856h, 0
 * 00000001404278E7: movzx   eax, word ptr gs:86Ah
 * 00000001404278F0: cmp     gs:864h, ax
 * 00000001404278F9: jz      short loc_14042790D
 * 00000001404278FB: mov     gs:864h, ax
 * 0000000140427904: mov     ecx, 48h ; 'H'
 * 0000000140427909: xor     edx, edx
 * 000000014042790B: wrmsr
 * 000000014042790D: btr     word ptr gs:860h, 2
 * 0000000140427918: jnb     short loc_140427928
 * 000000014042791A: mov     eax, 1
 * 000000014042791F: xor     edx, edx
 * 0000000140427921: mov     ecx, 49h ; 'I'
 * 0000000140427926: wrmsr
 * 0000000140427928: btr     word ptr gs:860h, 5
 * 0000000140427933: jnb     loc_140427A70
 * 0000000140427939: call    loc_140427A4C
 * 000000014042793E: add     rsp, 8
 * 0000000140427942: call    loc_140427A55
 * 0000000140427947: add     rsp, 8
 * 000000014042794B: call    loc_14042793E
 * 0000000140427950: add     rsp, 8
 * 0000000140427954: call    loc_140427947
 * 0000000140427959: add     rsp, 8
 * 000000014042795D: call    loc_140427950
 * 0000000140427962: add     rsp, 8
 * 0000000140427966: call    loc_140427959
 * 000000014042796B: add     rsp, 8
 * 000000014042796F: call    loc_140427962
 * 0000000140427974: add     rsp, 8
 * 0000000140427978: call    loc_14042796B
 * 000000014042797D: add     rsp, 8
 * 0000000140427981: call    loc_140427974
 * 0000000140427986: add     rsp, 8
 * 000000014042798A: call    loc_14042797D
 * 000000014042798F: add     rsp, 8
 * 0000000140427993: call    loc_140427986
 * 0000000140427998: add     rsp, 8
 * 000000014042799C: call    loc_14042798F
 * 00000001404279A1: add     rsp, 8
 * 00000001404279A5: call    loc_140427998
 * 00000001404279AA: add     rsp, 8
 * 00000001404279AE: call    loc_1404279A1
 * 00000001404279B3: add     rsp, 8
 * 00000001404279B7: call    loc_1404279AA
 * 00000001404279BC: add     rsp, 8
 * 00000001404279C0: call    loc_1404279B3
 * 00000001404279C5: add     rsp, 8
 * 00000001404279C9: call    loc_1404279BC
 * 00000001404279CE: add     rsp, 8
 * 00000001404279D2: call    loc_1404279C5
 * 00000001404279D7: add     rsp, 8
 * 00000001404279DB: call    loc_1404279CE
 * 00000001404279E0: add     rsp, 8
 * 00000001404279E4: call    loc_1404279D7
 * 00000001404279E9: add     rsp, 8
 * 00000001404279ED: call    loc_1404279E0
 * 00000001404279F2: add     rsp, 8
 * 00000001404279F6: call    loc_1404279E9
 * 00000001404279FB: add     rsp, 8
 * 00000001404279FF: call    loc_1404279F2
 * 0000000140427A04: add     rsp, 8
 * 0000000140427A08: call    loc_1404279FB
 * 0000000140427A0D: add     rsp, 8
 * 0000000140427A11: call    loc_140427A04
 * 0000000140427A16: add     rsp, 8
 * 0000000140427A1A: call    loc_140427A0D
 * 0000000140427A1F: add     rsp, 8
 * 0000000140427A23: call    loc_140427A16
 * 0000000140427A28: add     rsp, 8
 * 0000000140427A2C: call    loc_140427A1F
 * 0000000140427A31: add     rsp, 8
 * 0000000140427A35: call    loc_140427A28
 * 0000000140427A3A: add     rsp, 8
 * 0000000140427A3E: call    loc_140427A31
 * 0000000140427A43: add     rsp, 8
 * 0000000140427A47: call    loc_140427A3A
 * 0000000140427A4C: add     rsp, 8
 * 0000000140427A50: call    loc_140427A43
 * 0000000140427A55: add     rsp, 8
 * 0000000140427A59: mov     eax, 0DADAh
 * 0000000140427A5E: test    byte ptr gs:862h, 8
 * 0000000140427A67: jz      short loc_140427A70
 * 0000000140427A69: mov     al, 20h ; ' '
 * 0000000140427A6B: incsspq rax
 * 0000000140427A70: test    word ptr gs:860h, 80h
 * 0000000140427A7B: jz      short loc_140427A89
 * 0000000140427A7D: xor     eax, eax
 * 0000000140427A7F: xor     edx, edx
 * 0000000140427A81: mov     ecx, 1
 * 0000000140427A86: div     rcx
 * 0000000140427A89: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427A8D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427A91: mov     rax, [rbp+0E8h+var_138]
 * 0000000140427A95: mov     rsp, rbp
 * 0000000140427A98: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427A9F: add     rsp, 0E8h
 * 0000000140427AA6: test    cs:byte_140E01840, 1
 * 0000000140427AAD: jz      short loc_140427AB4
 * 0000000140427AAF: jmp     sub_140AB6B80
 * 0000000140427AB4: test    word ptr gs:860h, 100h
 * 0000000140427ABF: jz      short loc_140427AC6
 * 0000000140427AC1: verw    [rsp+arg_18]
 * 0000000140427AC6: swapgs
 * 0000000140427AC9: iretq
 * 0000000140427ACB: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427ACF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427AD3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427AD7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427ADB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427ADF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427AE3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427AE7: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427AEB: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427AEF: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427AF3: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427AF7: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427AFB: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427AFF: mov     rax, [rbp+0E8h+var_138]
 * 0000000140427B03: mov     rsp, rbp
 * 0000000140427B06: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427B0D: add     rsp, 0E8h
 * 0000000140427B14: iretq
 */
