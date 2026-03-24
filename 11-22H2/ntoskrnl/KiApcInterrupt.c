/*
 * XREFs of KiApcInterrupt @ 0x140424080
 * Callers:
 *     KiApcInterruptShadow @ 0x140AF7C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140424080
 * Reason: Hex-Rays returned no pseudocode for 0x140424080
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424080: sub     rsp, 8
 * 0000000140424084: push    rbp
 * 0000000140424085: push    rsi
 * 0000000140424086: sub     rsp, 150h
 * 000000014042408D: lea     rbp, [rsp+80h]
 * 0000000140424095: mov     [rbp+0E8h+var_13D], 0
 * 0000000140424099: mov     [rbp+0E8h+var_138], rax
 * 000000014042409D: mov     [rbp+0E8h+var_130], rcx
 * 00000001404240A1: mov     [rbp+0E8h+var_128], rdx
 * 00000001404240A5: mov     [rbp+0E8h+var_120], r8
 * 00000001404240A9: mov     [rbp+0E8h+var_118], r9
 * 00000001404240AD: mov     [rbp+0E8h+var_110], r10
 * 00000001404240B1: mov     [rbp+0E8h+var_108], r11
 * 00000001404240B5: test    [rbp+0E8h+arg_0], 1
 * 00000001404240BC: jnz     short loc_1404240F8
 * 00000001404240BE: xor     edx, edx
 * 00000001404240C0: rdsspq  rdx
 * 00000001404240C5: mov     [rbp+0E8h+var_90], rdx
 * 00000001404240C9: lfence
 * 00000001404240CC: test    word ptr gs:860h, 1
 * 00000001404240D7: jnz     short loc_1404240E1
 * 00000001404240D9: lfence
 * 00000001404240DC: jmp     loc_140424368
 * 00000001404240E1: movzx   eax, word ptr gs:864h
 * 00000001404240EA: mov     ecx, 48h ; 'H'
 * 00000001404240EF: xor     edx, edx
 * 00000001404240F1: wrmsr
 * 00000001404240F3: jmp     loc_140424368
 * 00000001404240F8: test    cs:KiKvaShadow, 1
 * 00000001404240FF: jnz     short loc_140424104
 * 0000000140424101: swapgs
 * 0000000140424104: lfence
 * 0000000140424107: mov     rcx, gs:95A8h
 * 0000000140424110: test    rcx, rcx
 * 0000000140424113: jz      short loc_140424134
 * 0000000140424115: rdsspq  rdx
 * 000000014042411A: mov     r10, gs:95A0h
 * 0000000140424123: add     r10, 8
 * 0000000140424127: cmp     rdx, r10
 * 000000014042412A: jnz     short loc_140424134
 * 000000014042412C: rstorssp qword ptr [rcx]
 * 0000000140424130: saveprevssp
 * 0000000140424134: mov     r10, gs:188h
 * 000000014042413D: mov     rcx, gs:188h
 * 0000000140424146: mov     rcx, [rcx+220h]
 * 000000014042414D: mov     rcx, [rcx+9E0h]
 * 0000000140424154: mov     gs:858h, rcx
 * 000000014042415D: mov     cx, gs:850h
 * 0000000140424166: mov     gs:852h, cx
 * 000000014042416F: mov     cx, gs:860h
 * 0000000140424178: mov     gs:854h, cx
 * 0000000140424181: movzx   eax, word ptr gs:866h
 * 000000014042418A: cmp     gs:864h, ax
 * 0000000140424193: jz      short loc_1404241A7
 * 0000000140424195: mov     gs:864h, ax
 * 000000014042419E: mov     ecx, 48h ; 'H'
 * 00000001404241A3: xor     edx, edx
 * 00000001404241A5: wrmsr
 * 00000001404241A7: movzx   edx, word ptr gs:860h
 * 00000001404241B0: test    edx, 8
 * 00000001404241B6: jz      short loc_1404241CF
 * 00000001404241B8: mov     eax, 1
 * 00000001404241BD: xor     edx, edx
 * 00000001404241BF: mov     ecx, 49h ; 'I'
 * 00000001404241C4: wrmsr
 * 00000001404241C6: movzx   edx, word ptr gs:860h
 * 00000001404241CF: test    edx, 2
 * 00000001404241D5: jz      loc_140424312
 * 00000001404241DB: call    loc_1404242EE
 * 00000001404241E0: add     rsp, 8
 * 00000001404241E4: call    loc_1404242F7
 * 00000001404241E9: add     rsp, 8
 * 00000001404241ED: call    loc_1404241E0
 * 00000001404241F2: add     rsp, 8
 * 00000001404241F6: call    loc_1404241E9
 * 00000001404241FB: add     rsp, 8
 * 00000001404241FF: call    loc_1404241F2
 * 0000000140424204: add     rsp, 8
 * 0000000140424208: call    loc_1404241FB
 * 000000014042420D: add     rsp, 8
 * 0000000140424211: call    loc_140424204
 * 0000000140424216: add     rsp, 8
 * 000000014042421A: call    loc_14042420D
 * 000000014042421F: add     rsp, 8
 * 0000000140424223: call    loc_140424216
 * 0000000140424228: add     rsp, 8
 * 000000014042422C: call    loc_14042421F
 * 0000000140424231: add     rsp, 8
 * 0000000140424235: call    loc_140424228
 * 000000014042423A: add     rsp, 8
 * 000000014042423E: call    loc_140424231
 * 0000000140424243: add     rsp, 8
 * 0000000140424247: call    loc_14042423A
 * 000000014042424C: add     rsp, 8
 * 0000000140424250: call    loc_140424243
 * 0000000140424255: add     rsp, 8
 * 0000000140424259: call    loc_14042424C
 * 000000014042425E: add     rsp, 8
 * 0000000140424262: call    loc_140424255
 * 0000000140424267: add     rsp, 8
 * 000000014042426B: call    loc_14042425E
 * 0000000140424270: add     rsp, 8
 * 0000000140424274: call    loc_140424267
 * 0000000140424279: add     rsp, 8
 * 000000014042427D: call    loc_140424270
 * 0000000140424282: add     rsp, 8
 * 0000000140424286: call    loc_140424279
 * 000000014042428B: add     rsp, 8
 * 000000014042428F: call    loc_140424282
 * 0000000140424294: add     rsp, 8
 * 0000000140424298: call    loc_14042428B
 * 000000014042429D: add     rsp, 8
 * 00000001404242A1: call    loc_140424294
 * 00000001404242A6: add     rsp, 8
 * 00000001404242AA: call    loc_14042429D
 * 00000001404242AF: add     rsp, 8
 * 00000001404242B3: call    loc_1404242A6
 * 00000001404242B8: add     rsp, 8
 * 00000001404242BC: call    loc_1404242AF
 * 00000001404242C1: add     rsp, 8
 * 00000001404242C5: call    loc_1404242B8
 * 00000001404242CA: add     rsp, 8
 * 00000001404242CE: call    loc_1404242C1
 * 00000001404242D3: add     rsp, 8
 * 00000001404242D7: call    loc_1404242CA
 * 00000001404242DC: add     rsp, 8
 * 00000001404242E0: call    loc_1404242D3
 * 00000001404242E5: add     rsp, 8
 * 00000001404242E9: call    loc_1404242DC
 * 00000001404242EE: add     rsp, 8
 * 00000001404242F2: call    loc_1404242E5
 * 00000001404242F7: add     rsp, 8
 * 00000001404242FB: mov     eax, 0DADAh
 * 0000000140424300: test    byte ptr gs:862h, 8
 * 0000000140424309: jz      short loc_140424312
 * 000000014042430B: mov     al, 20h ; ' '
 * 000000014042430D: incsspq rax
 * 0000000140424312: test    edx, 200h
 * 0000000140424318: jz      short loc_14042431F
 * 000000014042431A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042431F: lfence
 * 0000000140424322: mov     byte ptr gs:856h, 0
 * 000000014042432B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140424332: jz      short loc_140424353
 * 0000000140424334: mov     ecx, 6A7h
 * 0000000140424339: rdmsr
 * 000000014042433B: cmp     edx, 0
 * 000000014042433E: jz      short loc_140424353
 * 0000000140424340: mov     ecx, edx
 * 0000000140424342: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424348: cmp     edx, ecx
 * 000000014042434A: jz      short loc_140424353
 * 000000014042434C: mov     ecx, 6A7h
 * 0000000140424351: wrmsr
 * 0000000140424353: test    byte ptr [r10+3], 3
 * 0000000140424358: mov     [rbp+0E8h+var_68], 0
 * 0000000140424361: jz      short loc_140424368
 * 0000000140424363: call    KiSaveDebugRegisterState
 * 0000000140424368: cld
 * 0000000140424369: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042436D: ldmxcsr dword ptr gs:180h
 * 0000000140424376: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042437A: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042437E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140424382: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140424386: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042438A: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042438E: xor     esi, esi
 * 0000000140424390: inc     dword ptr gs:82C0h
 * 0000000140424398: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042439F: jz      short loc_1404243AD
 * 00000001404243A1: test    [rbp+0E8h+arg_0], 1
 * 00000001404243A8: jz      short loc_1404243AD
 * 00000001404243AA: stac
 * 00000001404243AD: mov     ecx, 1
 * 00000001404243B2: cmp     cs:KiIrqlFlags, 0
 * 00000001404243B9: jz      short loc_1404243C2
 * 00000001404243BB: call    KzSetIrqlUnsafe
 * 00000001404243C0: jmp     short loc_1404243CA
 * 00000001404243C2: mov     rax, cr8
 * 00000001404243C6: mov     cr8, rcx
 * 00000001404243CA: mov     [rbp+0E8h+var_13F], al
 * 00000001404243CD: mov     rcx, rsi
 * 00000001404243D0: call    HalPerformEndOfInterrupt
 * 00000001404243D5: sti
 * 00000001404243D6: cmp     byte ptr gs:187h, 0
 * 00000001404243DF: jnz     short loc_1404243F1
 * 00000001404243E1: mov     ecx, 0
 * 00000001404243E6: xor     edx, edx
 * 00000001404243E8: lea     r8, [rbp+0E8h+var_168]
 * 00000001404243EC: call    KiDeliverApc
 * 00000001404243F1: cli
 * 00000001404243F2: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404243F6: cmp     cs:KiIrqlFlags, 0
 * 00000001404243FD: jz      short loc_140424406
 * 00000001404243FF: call    KzSetIrqlUnsafe
 * 0000000140424404: jmp     short loc_14042440A
 * 0000000140424406: mov     cr8, rcx
 * 000000014042440A: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140424411: cli
 * 0000000140424412: test    [rbp+0E8h+arg_0], 1
 * 0000000140424419: jz      loc_140424707
 * 000000014042441F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424426: jz      short loc_14042442B
 * 0000000140424428: stac
 * 000000014042442B: mov     rcx, gs:188h
 * 0000000140424434: test    byte ptr [rcx+0C2h], 3
 * 000000014042443B: jz      short loc_140424458
 * 000000014042443D: mov     ecx, 1
 * 0000000140424442: mov     cr8, rcx
 * 0000000140424446: sti
 * 0000000140424447: call    KiInitiateUserApc
 * 000000014042444C: cli
 * 000000014042444D: mov     ecx, 0
 * 0000000140424452: mov     cr8, rcx
 * 0000000140424456: jmp     short loc_14042442B
 * 0000000140424458: test    byte ptr gs:86Ch, 2
 * 0000000140424461: jz      short loc_14042446A
 * 0000000140424463: xor     ecx, ecx
 * 0000000140424465: call    KiUpdateStibpPairing
 * 000000014042446A: mov     rcx, gs:188h
 * 0000000140424473: test    dword ptr [rcx], 8000000h
 * 0000000140424479: jz      short loc_140424480
 * 000000014042447B: call    KiRestoreSetContextState
 * 0000000140424480: mov     rcx, gs:188h
 * 0000000140424489: test    dword ptr [rcx], 10000h
 * 000000014042448F: jz      short loc_1404244A5
 * 0000000140424491: test    byte ptr [rcx+2], 1
 * 0000000140424495: jz      short loc_1404244A5
 * 0000000140424497: call    KiCopyCounters
 * 000000014042449C: mov     rcx, gs:188h
 * 00000001404244A5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404244A9: cmp     [rbp+0E8h+var_68], 0
 * 00000001404244B1: jz      short loc_1404244B8
 * 00000001404244B3: call    KiRestoreDebugRegisterState
 * 00000001404244B8: mov     rcx, gs:188h
 * 00000001404244C1: bt      dword ptr [rcx+74h], 16h
 * 00000001404244C6: jnb     short loc_1404244F2
 * 00000001404244C8: xor     ecx, ecx
 * 00000001404244CA: rdsspq  rcx
 * 00000001404244CF: mov     r8, gs:95A8h
 * 00000001404244D8: add     r8, 8
 * 00000001404244DC: cmp     rcx, r8
 * 00000001404244DF: jnz     short loc_1404244F2
 * 00000001404244E1: mov     rcx, gs:95A0h
 * 00000001404244EA: rstorssp qword ptr [rcx]
 * 00000001404244EE: saveprevssp
 * 00000001404244F2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404244F6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404244FA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404244FE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140424502: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140424506: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042450A: mov     r11, [rbp+0E8h+var_108]
 * 000000014042450E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140424512: mov     r9, [rbp+0E8h+var_118]
 * 0000000140424516: mov     r8, [rbp+0E8h+var_120]
 * 000000014042451A: mov     byte ptr gs:856h, 0
 * 0000000140424523: movzx   eax, word ptr gs:86Ah
 * 000000014042452C: cmp     gs:864h, ax
 * 0000000140424535: jz      short loc_140424549
 * 0000000140424537: mov     gs:864h, ax
 * 0000000140424540: mov     ecx, 48h ; 'H'
 * 0000000140424545: xor     edx, edx
 * 0000000140424547: wrmsr
 * 0000000140424549: btr     word ptr gs:860h, 2
 * 0000000140424554: jnb     short loc_140424564
 * 0000000140424556: mov     eax, 1
 * 000000014042455B: xor     edx, edx
 * 000000014042455D: mov     ecx, 49h ; 'I'
 * 0000000140424562: wrmsr
 * 0000000140424564: btr     word ptr gs:860h, 5
 * 000000014042456F: jnb     loc_1404246AC
 * 0000000140424575: call    loc_140424688
 * 000000014042457A: add     rsp, 8
 * 000000014042457E: call    loc_140424691
 * 0000000140424583: add     rsp, 8
 * 0000000140424587: call    loc_14042457A
 * 000000014042458C: add     rsp, 8
 * 0000000140424590: call    loc_140424583
 * 0000000140424595: add     rsp, 8
 * 0000000140424599: call    loc_14042458C
 * 000000014042459E: add     rsp, 8
 * 00000001404245A2: call    loc_140424595
 * 00000001404245A7: add     rsp, 8
 * 00000001404245AB: call    loc_14042459E
 * 00000001404245B0: add     rsp, 8
 * 00000001404245B4: call    loc_1404245A7
 * 00000001404245B9: add     rsp, 8
 * 00000001404245BD: call    loc_1404245B0
 * 00000001404245C2: add     rsp, 8
 * 00000001404245C6: call    loc_1404245B9
 * 00000001404245CB: add     rsp, 8
 * 00000001404245CF: call    loc_1404245C2
 * 00000001404245D4: add     rsp, 8
 * 00000001404245D8: call    loc_1404245CB
 * 00000001404245DD: add     rsp, 8
 * 00000001404245E1: call    loc_1404245D4
 * 00000001404245E6: add     rsp, 8
 * 00000001404245EA: call    loc_1404245DD
 * 00000001404245EF: add     rsp, 8
 * 00000001404245F3: call    loc_1404245E6
 * 00000001404245F8: add     rsp, 8
 * 00000001404245FC: call    loc_1404245EF
 * 0000000140424601: add     rsp, 8
 * 0000000140424605: call    loc_1404245F8
 * 000000014042460A: add     rsp, 8
 * 000000014042460E: call    loc_140424601
 * 0000000140424613: add     rsp, 8
 * 0000000140424617: call    loc_14042460A
 * 000000014042461C: add     rsp, 8
 * 0000000140424620: call    loc_140424613
 * 0000000140424625: add     rsp, 8
 * 0000000140424629: call    loc_14042461C
 * 000000014042462E: add     rsp, 8
 * 0000000140424632: call    loc_140424625
 * 0000000140424637: add     rsp, 8
 * 000000014042463B: call    loc_14042462E
 * 0000000140424640: add     rsp, 8
 * 0000000140424644: call    loc_140424637
 * 0000000140424649: add     rsp, 8
 * 000000014042464D: call    loc_140424640
 * 0000000140424652: add     rsp, 8
 * 0000000140424656: call    loc_140424649
 * 000000014042465B: add     rsp, 8
 * 000000014042465F: call    loc_140424652
 * 0000000140424664: add     rsp, 8
 * 0000000140424668: call    loc_14042465B
 * 000000014042466D: add     rsp, 8
 * 0000000140424671: call    loc_140424664
 * 0000000140424676: add     rsp, 8
 * 000000014042467A: call    loc_14042466D
 * 000000014042467F: add     rsp, 8
 * 0000000140424683: call    loc_140424676
 * 0000000140424688: add     rsp, 8
 * 000000014042468C: call    loc_14042467F
 * 0000000140424691: add     rsp, 8
 * 0000000140424695: mov     eax, 0DADAh
 * 000000014042469A: test    byte ptr gs:862h, 8
 * 00000001404246A3: jz      short loc_1404246AC
 * 00000001404246A5: mov     al, 20h ; ' '
 * 00000001404246A7: incsspq rax
 * 00000001404246AC: test    word ptr gs:860h, 80h
 * 00000001404246B7: jz      short loc_1404246C5
 * 00000001404246B9: xor     eax, eax
 * 00000001404246BB: xor     edx, edx
 * 00000001404246BD: mov     ecx, 1
 * 00000001404246C2: div     rcx
 * 00000001404246C5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404246C9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404246CD: mov     rax, [rbp+0E8h+var_138]
 * 00000001404246D1: mov     rsp, rbp
 * 00000001404246D4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404246DB: add     rsp, 0E8h
 * 00000001404246E2: test    cs:KiKvaShadow, 1
 * 00000001404246E9: jz      short loc_1404246F0
 * 00000001404246EB: jmp     KiKernelExit
 * 00000001404246F0: test    word ptr gs:860h, 100h
 * 00000001404246FB: jz      short loc_140424702
 * 00000001404246FD: verw    [rsp+arg_18]
 * 0000000140424702: swapgs
 * 0000000140424705: iretq
 * 0000000140424707: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042470B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042470F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140424713: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140424717: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042471B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042471F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140424723: mov     r11, [rbp+0E8h+var_108]
 * 0000000140424727: mov     r10, [rbp+0E8h+var_110]
 * 000000014042472B: mov     r9, [rbp+0E8h+var_118]
 * 000000014042472F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140424733: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140424737: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042473B: mov     rax, [rbp+0E8h+var_138]
 * 000000014042473F: mov     rsp, rbp
 * 0000000140424742: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140424749: add     rsp, 0E8h
 * 0000000140424750: iretq
 */
