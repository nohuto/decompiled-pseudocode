/*
 * XREFs of sub_140428220 @ 0x140428220
 * Callers:
 *     sub_140AB6240 @ 0x140AB6240 (sub_140AB6240.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_140428980 @ 0x140428980 (sub_140428980.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140428220 @ 0x140428220
 * Reason: Hex-Rays returned no pseudocode for 0x140428220
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140428220: sub     rsp, 8
 * 0000000140428224: push    rbp
 * 0000000140428225: push    rsi
 * 0000000140428226: sub     rsp, 150h
 * 000000014042822D: lea     rbp, [rsp+80h]
 * 0000000140428235: mov     [rbp+0E8h+var_13D], 0
 * 0000000140428239: mov     [rbp+0E8h+var_138], rax
 * 000000014042823D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140428241: mov     [rbp+0E8h+var_128], rdx
 * 0000000140428245: mov     [rbp+0E8h+var_120], r8
 * 0000000140428249: mov     [rbp+0E8h+var_118], r9
 * 000000014042824D: mov     [rbp+0E8h+var_110], r10
 * 0000000140428251: mov     [rbp+0E8h+var_108], r11
 * 0000000140428255: test    [rbp+0E8h+arg_0], 1
 * 000000014042825C: jnz     short loc_140428298
 * 000000014042825E: xor     edx, edx
 * 0000000140428260: rdsspq  rdx
 * 0000000140428265: mov     [rbp+0E8h+var_90], rdx
 * 0000000140428269: lfence
 * 000000014042826C: test    word ptr gs:860h, 1
 * 0000000140428277: jnz     short loc_140428281
 * 0000000140428279: lfence
 * 000000014042827C: jmp     loc_1404284E0
 * 0000000140428281: movzx   eax, word ptr gs:864h
 * 000000014042828A: mov     ecx, 48h ; 'H'
 * 000000014042828F: xor     edx, edx
 * 0000000140428291: wrmsr
 * 0000000140428293: jmp     loc_1404284E0
 * 0000000140428298: test    cs:byte_140E01840, 1
 * 000000014042829F: jnz     short loc_1404282A4
 * 00000001404282A1: swapgs
 * 00000001404282A4: lfence
 * 00000001404282A7: mov     rcx, gs:9828h
 * 00000001404282B0: test    rcx, rcx
 * 00000001404282B3: jz      short loc_1404282D4
 * 00000001404282B5: rdsspq  rdx
 * 00000001404282BA: mov     r10, gs:9820h
 * 00000001404282C3: add     r10, 8
 * 00000001404282C7: cmp     rdx, r10
 * 00000001404282CA: jnz     short loc_1404282D4
 * 00000001404282CC: rstorssp qword ptr [rcx]
 * 00000001404282D0: saveprevssp
 * 00000001404282D4: mov     r10, gs:188h
 * 00000001404282DD: mov     rcx, gs:188h
 * 00000001404282E6: mov     rcx, [rcx+220h]
 * 00000001404282ED: mov     rcx, [rcx+9E0h]
 * 00000001404282F4: mov     gs:858h, rcx
 * 00000001404282FD: mov     cx, gs:850h
 * 0000000140428306: mov     gs:852h, cx
 * 000000014042830F: mov     cx, gs:860h
 * 0000000140428318: mov     gs:854h, cx
 * 0000000140428321: movzx   eax, word ptr gs:866h
 * 000000014042832A: cmp     gs:864h, ax
 * 0000000140428333: jz      short loc_140428347
 * 0000000140428335: mov     gs:864h, ax
 * 000000014042833E: mov     ecx, 48h ; 'H'
 * 0000000140428343: xor     edx, edx
 * 0000000140428345: wrmsr
 * 0000000140428347: movzx   edx, word ptr gs:860h
 * 0000000140428350: test    edx, 8
 * 0000000140428356: jz      short loc_14042836F
 * 0000000140428358: mov     eax, 1
 * 000000014042835D: xor     edx, edx
 * 000000014042835F: mov     ecx, 49h ; 'I'
 * 0000000140428364: wrmsr
 * 0000000140428366: movzx   edx, word ptr gs:860h
 * 000000014042836F: test    edx, 2
 * 0000000140428375: jz      loc_1404284B2
 * 000000014042837B: call    loc_14042848E
 * 0000000140428380: add     rsp, 8
 * 0000000140428384: call    loc_140428497
 * 0000000140428389: add     rsp, 8
 * 000000014042838D: call    loc_140428380
 * 0000000140428392: add     rsp, 8
 * 0000000140428396: call    loc_140428389
 * 000000014042839B: add     rsp, 8
 * 000000014042839F: call    loc_140428392
 * 00000001404283A4: add     rsp, 8
 * 00000001404283A8: call    loc_14042839B
 * 00000001404283AD: add     rsp, 8
 * 00000001404283B1: call    loc_1404283A4
 * 00000001404283B6: add     rsp, 8
 * 00000001404283BA: call    loc_1404283AD
 * 00000001404283BF: add     rsp, 8
 * 00000001404283C3: call    loc_1404283B6
 * 00000001404283C8: add     rsp, 8
 * 00000001404283CC: call    loc_1404283BF
 * 00000001404283D1: add     rsp, 8
 * 00000001404283D5: call    loc_1404283C8
 * 00000001404283DA: add     rsp, 8
 * 00000001404283DE: call    loc_1404283D1
 * 00000001404283E3: add     rsp, 8
 * 00000001404283E7: call    loc_1404283DA
 * 00000001404283EC: add     rsp, 8
 * 00000001404283F0: call    loc_1404283E3
 * 00000001404283F5: add     rsp, 8
 * 00000001404283F9: call    loc_1404283EC
 * 00000001404283FE: add     rsp, 8
 * 0000000140428402: call    loc_1404283F5
 * 0000000140428407: add     rsp, 8
 * 000000014042840B: call    loc_1404283FE
 * 0000000140428410: add     rsp, 8
 * 0000000140428414: call    loc_140428407
 * 0000000140428419: add     rsp, 8
 * 000000014042841D: call    loc_140428410
 * 0000000140428422: add     rsp, 8
 * 0000000140428426: call    loc_140428419
 * 000000014042842B: add     rsp, 8
 * 000000014042842F: call    loc_140428422
 * 0000000140428434: add     rsp, 8
 * 0000000140428438: call    loc_14042842B
 * 000000014042843D: add     rsp, 8
 * 0000000140428441: call    loc_140428434
 * 0000000140428446: add     rsp, 8
 * 000000014042844A: call    loc_14042843D
 * 000000014042844F: add     rsp, 8
 * 0000000140428453: call    loc_140428446
 * 0000000140428458: add     rsp, 8
 * 000000014042845C: call    loc_14042844F
 * 0000000140428461: add     rsp, 8
 * 0000000140428465: call    loc_140428458
 * 000000014042846A: add     rsp, 8
 * 000000014042846E: call    loc_140428461
 * 0000000140428473: add     rsp, 8
 * 0000000140428477: call    loc_14042846A
 * 000000014042847C: add     rsp, 8
 * 0000000140428480: call    loc_140428473
 * 0000000140428485: add     rsp, 8
 * 0000000140428489: call    loc_14042847C
 * 000000014042848E: add     rsp, 8
 * 0000000140428492: call    loc_140428485
 * 0000000140428497: add     rsp, 8
 * 000000014042849B: mov     eax, 0DADAh
 * 00000001404284A0: test    byte ptr gs:862h, 8
 * 00000001404284A9: jz      short loc_1404284B2
 * 00000001404284AB: mov     al, 20h ; ' '
 * 00000001404284AD: incsspq rax
 * 00000001404284B2: test    edx, 200h
 * 00000001404284B8: jz      short loc_1404284BF
 * 00000001404284BA: call    sub_1404357C0
 * 00000001404284BF: lfence
 * 00000001404284C2: mov     byte ptr gs:856h, 0
 * 00000001404284CB: test    byte ptr [r10+3], 3
 * 00000001404284D0: mov     [rbp+0E8h+var_68], 0
 * 00000001404284D9: jz      short loc_1404284E0
 * 00000001404284DB: call    sub_14041F920
 * 00000001404284E0: cld
 * 00000001404284E1: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404284E5: ldmxcsr dword ptr gs:180h
 * 00000001404284EE: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404284F2: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404284F6: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404284FA: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404284FE: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140428502: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140428506: cmp     byte ptr gs:82DAh, 0
 * 000000014042850F: jz      short loc_140428516
 * 0000000140428511: call    sub_1403B4940
 * 0000000140428516: lea     rax, loc_140429887
 * 000000014042851D: cmp     rax, [rbp+0E8h]
 * 0000000140428524: jnb     short loc_14042853F
 * 0000000140428526: lea     rax, loc_1404298A0
 * 000000014042852D: cmp     rax, [rbp+0E8h]
 * 0000000140428534: jb      short loc_14042853F
 * 0000000140428536: lea     rcx, [rbp+0E8h+var_168]
 * 000000014042853A: call    sub_1402F2540
 * 000000014042853F: xor     esi, esi
 * 0000000140428541: inc     dword ptr gs:82C0h
 * 0000000140428549: mov     rdx, rsp
 * 000000014042854C: mov     rcx, gs:8B58h
 * 0000000140428555: lea     rax, [rcx-6000h]
 * 000000014042855C: cmp     rax, rsp
 * 000000014042855F: ja      short loc_140428566
 * 0000000140428561: cmp     rsp, rcx
 * 0000000140428564: jb      short loc_140428572
 * 0000000140428566: cmp     cs:dword_140C31E20, 0
 * 000000014042856D: jnz     short loc_140428572
 * 000000014042856F: mov     rsp, rcx
 * 0000000140428572: sub     rsp, 20h
 * 0000000140428576: mov     qword ptr [rsp+108h+var_F8], rdx
 * 000000014042857B: call    sub_140428980
 * 0000000140428580: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140428585: mov     rcx, rsi
 * 0000000140428588: call    HalPerformEndOfInterrupt
 * 000000014042858D: mov     rcx, gs:20h
 * 0000000140428596: cmp     byte ptr [rcx+20h], 1
 * 000000014042859A: ja      short loc_140428616
 * 000000014042859C: rdtsc
 * 000000014042859E: shl     rdx, 20h
 * 00000001404285A2: or      rax, rdx
 * 00000001404285A5: sub     rax, [rcx+8180h]
 * 00000001404285AC: add     [rcx+8278h], rax
 * 00000001404285B3: add     [rcx+8180h], rax
 * 00000001404285BA: mov     r8, rax
 * 00000001404285BD: mov     rax, [rcx+8]
 * 00000001404285C1: test    byte ptr [rax+2], 72h
 * 00000001404285C5: jz      short loc_1404285DA
 * 00000001404285C7: xor     edx, edx
 * 00000001404285C9: call    sub_1402ECA00
 * 00000001404285CE: mov     rcx, gs:20h
 * 00000001404285D7: inc     byte ptr [rcx+20h]
 * 00000001404285DA: mov     dl, [rcx+6]
 * 00000001404285DD: and     byte ptr [rcx+6], 0
 * 00000001404285E1: cmp     byte ptr [rcx+7], 0
 * 00000001404285E5: jnz     short loc_140428616
 * 00000001404285E7: test    dl, dl
 * 00000001404285E9: jz      short loc_140428616
 * 00000001404285EB: cmp     [rbp+0E8h+var_13F], 2
 * 00000001404285EF: jnb     short loc_1404285FC
 * 00000001404285F1: and     byte ptr [rcx+20h], 0
 * 00000001404285F5: call    sub_1404281E0
 * 00000001404285FA: jmp     short loc_140428619
 * 00000001404285FC: mov     ecx, 2
 * 0000000140428601: call    cs:off_140015970
 * 0000000140428608: nop     dword ptr [rax+rax+00h]
 * 000000014042860D: mov     rcx, gs:20h
 * 0000000140428616: dec     byte ptr [rcx+20h]
 * 0000000140428619: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014042861D: cmp     cs:dword_140D06B08, 0
 * 0000000140428624: jz      short loc_14042862D
 * 0000000140428626: call    sub_140569E70
 * 000000014042862B: jmp     short loc_140428631
 * 000000014042862D: mov     cr8, rcx
 * 0000000140428631: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140428638: test    [rbp+0E8h+arg_0], 1
 * 000000014042863F: jz      loc_14042892D
 * 0000000140428645: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042864C: jz      short loc_140428651
 * 000000014042864E: stac
 * 0000000140428651: mov     rcx, gs:188h
 * 000000014042865A: test    byte ptr [rcx+0C2h], 3
 * 0000000140428661: jz      short loc_14042867E
 * 0000000140428663: mov     ecx, 1
 * 0000000140428668: mov     cr8, rcx
 * 000000014042866C: sti
 * 000000014042866D: call    sub_140425700
 * 0000000140428672: cli
 * 0000000140428673: mov     ecx, 0
 * 0000000140428678: mov     cr8, rcx
 * 000000014042867C: jmp     short loc_140428651
 * 000000014042867E: test    byte ptr gs:86Ch, 2
 * 0000000140428687: jz      short loc_140428690
 * 0000000140428689: xor     ecx, ecx
 * 000000014042868B: call    sub_14020D230
 * 0000000140428690: mov     rcx, gs:188h
 * 0000000140428699: test    dword ptr [rcx], 8000000h
 * 000000014042869F: jz      short loc_1404286A6
 * 00000001404286A1: call    sub_1404206B0
 * 00000001404286A6: mov     rcx, gs:188h
 * 00000001404286AF: test    dword ptr [rcx], 10000h
 * 00000001404286B5: jz      short loc_1404286CB
 * 00000001404286B7: test    byte ptr [rcx+2], 1
 * 00000001404286BB: jz      short loc_1404286CB
 * 00000001404286BD: call    sub_140571820
 * 00000001404286C2: mov     rcx, gs:188h
 * 00000001404286CB: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404286CF: cmp     [rbp+0E8h+var_68], 0
 * 00000001404286D7: jz      short loc_1404286DE
 * 00000001404286D9: call    sub_14041F8A0
 * 00000001404286DE: mov     rcx, gs:188h
 * 00000001404286E7: bt      dword ptr [rcx+74h], 16h
 * 00000001404286EC: jnb     short loc_140428718
 * 00000001404286EE: xor     ecx, ecx
 * 00000001404286F0: rdsspq  rcx
 * 00000001404286F5: mov     r8, gs:9828h
 * 00000001404286FE: add     r8, 8
 * 0000000140428702: cmp     rcx, r8
 * 0000000140428705: jnz     short loc_140428718
 * 0000000140428707: mov     rcx, gs:9820h
 * 0000000140428710: rstorssp qword ptr [rcx]
 * 0000000140428714: saveprevssp
 * 0000000140428718: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042871C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140428720: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140428724: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140428728: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042872C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140428730: mov     r11, [rbp+0E8h+var_108]
 * 0000000140428734: mov     r10, [rbp+0E8h+var_110]
 * 0000000140428738: mov     r9, [rbp+0E8h+var_118]
 * 000000014042873C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140428740: mov     byte ptr gs:856h, 0
 * 0000000140428749: movzx   eax, word ptr gs:86Ah
 * 0000000140428752: cmp     gs:864h, ax
 * 000000014042875B: jz      short loc_14042876F
 * 000000014042875D: mov     gs:864h, ax
 * 0000000140428766: mov     ecx, 48h ; 'H'
 * 000000014042876B: xor     edx, edx
 * 000000014042876D: wrmsr
 * 000000014042876F: btr     word ptr gs:860h, 2
 * 000000014042877A: jnb     short loc_14042878A
 * 000000014042877C: mov     eax, 1
 * 0000000140428781: xor     edx, edx
 * 0000000140428783: mov     ecx, 49h ; 'I'
 * 0000000140428788: wrmsr
 * 000000014042878A: btr     word ptr gs:860h, 5
 * 0000000140428795: jnb     loc_1404288D2
 * 000000014042879B: call    loc_1404288AE
 * 00000001404287A0: add     rsp, 8
 * 00000001404287A4: call    loc_1404288B7
 * 00000001404287A9: add     rsp, 8
 * 00000001404287AD: call    loc_1404287A0
 * 00000001404287B2: add     rsp, 8
 * 00000001404287B6: call    loc_1404287A9
 * 00000001404287BB: add     rsp, 8
 * 00000001404287BF: call    loc_1404287B2
 * 00000001404287C4: add     rsp, 8
 * 00000001404287C8: call    loc_1404287BB
 * 00000001404287CD: add     rsp, 8
 * 00000001404287D1: call    loc_1404287C4
 * 00000001404287D6: add     rsp, 8
 * 00000001404287DA: call    loc_1404287CD
 * 00000001404287DF: add     rsp, 8
 * 00000001404287E3: call    loc_1404287D6
 * 00000001404287E8: add     rsp, 8
 * 00000001404287EC: call    loc_1404287DF
 * 00000001404287F1: add     rsp, 8
 * 00000001404287F5: call    loc_1404287E8
 * 00000001404287FA: add     rsp, 8
 * 00000001404287FE: call    loc_1404287F1
 * 0000000140428803: add     rsp, 8
 * 0000000140428807: call    loc_1404287FA
 * 000000014042880C: add     rsp, 8
 * 0000000140428810: call    loc_140428803
 * 0000000140428815: add     rsp, 8
 * 0000000140428819: call    loc_14042880C
 * 000000014042881E: add     rsp, 8
 * 0000000140428822: call    loc_140428815
 * 0000000140428827: add     rsp, 8
 * 000000014042882B: call    loc_14042881E
 * 0000000140428830: add     rsp, 8
 * 0000000140428834: call    loc_140428827
 * 0000000140428839: add     rsp, 8
 * 000000014042883D: call    loc_140428830
 * 0000000140428842: add     rsp, 8
 * 0000000140428846: call    loc_140428839
 * 000000014042884B: add     rsp, 8
 * 000000014042884F: call    loc_140428842
 * 0000000140428854: add     rsp, 8
 * 0000000140428858: call    loc_14042884B
 * 000000014042885D: add     rsp, 8
 * 0000000140428861: call    loc_140428854
 * 0000000140428866: add     rsp, 8
 * 000000014042886A: call    loc_14042885D
 * 000000014042886F: add     rsp, 8
 * 0000000140428873: call    loc_140428866
 * 0000000140428878: add     rsp, 8
 * 000000014042887C: call    loc_14042886F
 * 0000000140428881: add     rsp, 8
 * 0000000140428885: call    loc_140428878
 * 000000014042888A: add     rsp, 8
 * 000000014042888E: call    loc_140428881
 * 0000000140428893: add     rsp, 8
 * 0000000140428897: call    loc_14042888A
 * 000000014042889C: add     rsp, 8
 * 00000001404288A0: call    loc_140428893
 * 00000001404288A5: add     rsp, 8
 * 00000001404288A9: call    loc_14042889C
 * 00000001404288AE: add     rsp, 8
 * 00000001404288B2: call    loc_1404288A5
 * 00000001404288B7: add     rsp, 8
 * 00000001404288BB: mov     eax, 0DADAh
 * 00000001404288C0: test    byte ptr gs:862h, 8
 * 00000001404288C9: jz      short loc_1404288D2
 * 00000001404288CB: mov     al, 20h ; ' '
 * 00000001404288CD: incsspq rax
 * 00000001404288D2: test    word ptr gs:860h, 80h
 * 00000001404288DD: jz      short loc_1404288EB
 * 00000001404288DF: xor     eax, eax
 * 00000001404288E1: xor     edx, edx
 * 00000001404288E3: mov     ecx, 1
 * 00000001404288E8: div     rcx
 * 00000001404288EB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404288EF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404288F3: mov     rax, [rbp+0E8h+var_138]
 * 00000001404288F7: mov     rsp, rbp
 * 00000001404288FA: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140428901: add     rsp, 0E8h
 * 0000000140428908: test    cs:byte_140E01840, 1
 * 000000014042890F: jz      short loc_140428916
 * 0000000140428911: jmp     sub_140AB6B80
 * 0000000140428916: test    word ptr gs:860h, 100h
 * 0000000140428921: jz      short loc_140428928
 * 0000000140428923: verw    [rsp+arg_18]
 * 0000000140428928: swapgs
 * 000000014042892B: iretq
 * 000000014042892D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140428931: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140428935: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140428939: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042893D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140428941: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140428945: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140428949: mov     r11, [rbp+0E8h+var_108]
 * 000000014042894D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140428951: mov     r9, [rbp+0E8h+var_118]
 * 0000000140428955: mov     r8, [rbp+0E8h+var_120]
 * 0000000140428959: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042895D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140428961: mov     rax, [rbp+0E8h+var_138]
 * 0000000140428965: mov     rsp, rbp
 * 0000000140428968: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042896F: add     rsp, 0E8h
 * 0000000140428976: iretq
 */
