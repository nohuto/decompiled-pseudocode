/*
 * XREFs of KiDpcInterrupt @ 0x140427310
 * Callers:
 *     KiDpcInterruptShadow @ 0x140AF6F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140427310
 * Reason: Hex-Rays returned no pseudocode for 0x140427310
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427310: sub     rsp, 8
 * 0000000140427314: push    rbp
 * 0000000140427315: push    rsi
 * 0000000140427316: sub     rsp, 150h
 * 000000014042731D: lea     rbp, [rsp+80h]
 * 0000000140427325: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 0000000140427329: mov     [rbp+0E8h+var_13F+7], rax
 * 000000014042732D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140427331: mov     [rbp+0E8h+var_128], rdx
 * 0000000140427335: mov     [rbp+0E8h+var_120], r8
 * 0000000140427339: mov     [rbp+0E8h+var_118], r9
 * 000000014042733D: mov     [rbp+0E8h+var_110], r10
 * 0000000140427341: mov     [rbp+0E8h+var_108], r11
 * 0000000140427345: test    [rbp+0E8h+arg_0], 1
 * 000000014042734C: jnz     short loc_140427388
 * 000000014042734E: xor     edx, edx
 * 0000000140427350: rdsspq  rdx
 * 0000000140427355: mov     [rbp+0E8h+var_90], rdx
 * 0000000140427359: lfence
 * 000000014042735C: test    word ptr gs:860h, 1
 * 0000000140427367: jnz     short loc_140427371
 * 0000000140427369: lfence
 * 000000014042736C: jmp     loc_1404275F8
 * 0000000140427371: movzx   eax, word ptr gs:864h
 * 000000014042737A: mov     ecx, 48h ; 'H'
 * 000000014042737F: xor     edx, edx
 * 0000000140427381: wrmsr
 * 0000000140427383: jmp     loc_1404275F8
 * 0000000140427388: test    cs:KiKvaShadow, 1
 * 000000014042738F: jnz     short loc_140427394
 * 0000000140427391: swapgs
 * 0000000140427394: lfence
 * 0000000140427397: mov     rcx, gs:95A8h
 * 00000001404273A0: test    rcx, rcx
 * 00000001404273A3: jz      short loc_1404273C4
 * 00000001404273A5: rdsspq  rdx
 * 00000001404273AA: mov     r10, gs:95A0h
 * 00000001404273B3: add     r10, 8
 * 00000001404273B7: cmp     rdx, r10
 * 00000001404273BA: jnz     short loc_1404273C4
 * 00000001404273BC: rstorssp qword ptr [rcx]
 * 00000001404273C0: saveprevssp
 * 00000001404273C4: mov     r10, gs:188h
 * 00000001404273CD: mov     rcx, gs:188h
 * 00000001404273D6: mov     rcx, [rcx+220h]
 * 00000001404273DD: mov     rcx, [rcx+9E0h]
 * 00000001404273E4: mov     gs:858h, rcx
 * 00000001404273ED: mov     cx, gs:850h
 * 00000001404273F6: mov     gs:852h, cx
 * 00000001404273FF: mov     cx, gs:860h
 * 0000000140427408: mov     gs:854h, cx
 * 0000000140427411: movzx   eax, word ptr gs:866h
 * 000000014042741A: cmp     gs:864h, ax
 * 0000000140427423: jz      short loc_140427437
 * 0000000140427425: mov     gs:864h, ax
 * 000000014042742E: mov     ecx, 48h ; 'H'
 * 0000000140427433: xor     edx, edx
 * 0000000140427435: wrmsr
 * 0000000140427437: movzx   edx, word ptr gs:860h
 * 0000000140427440: test    edx, 8
 * 0000000140427446: jz      short loc_14042745F
 * 0000000140427448: mov     eax, 1
 * 000000014042744D: xor     edx, edx
 * 000000014042744F: mov     ecx, 49h ; 'I'
 * 0000000140427454: wrmsr
 * 0000000140427456: movzx   edx, word ptr gs:860h
 * 000000014042745F: test    edx, 2
 * 0000000140427465: jz      loc_1404275A2
 * 000000014042746B: call    loc_14042757E
 * 0000000140427470: add     rsp, 8
 * 0000000140427474: call    loc_140427587
 * 0000000140427479: add     rsp, 8
 * 000000014042747D: call    loc_140427470
 * 0000000140427482: add     rsp, 8
 * 0000000140427486: call    loc_140427479
 * 000000014042748B: add     rsp, 8
 * 000000014042748F: call    loc_140427482
 * 0000000140427494: add     rsp, 8
 * 0000000140427498: call    loc_14042748B
 * 000000014042749D: add     rsp, 8
 * 00000001404274A1: call    loc_140427494
 * 00000001404274A6: add     rsp, 8
 * 00000001404274AA: call    loc_14042749D
 * 00000001404274AF: add     rsp, 8
 * 00000001404274B3: call    loc_1404274A6
 * 00000001404274B8: add     rsp, 8
 * 00000001404274BC: call    loc_1404274AF
 * 00000001404274C1: add     rsp, 8
 * 00000001404274C5: call    loc_1404274B8
 * 00000001404274CA: add     rsp, 8
 * 00000001404274CE: call    loc_1404274C1
 * 00000001404274D3: add     rsp, 8
 * 00000001404274D7: call    loc_1404274CA
 * 00000001404274DC: add     rsp, 8
 * 00000001404274E0: call    loc_1404274D3
 * 00000001404274E5: add     rsp, 8
 * 00000001404274E9: call    loc_1404274DC
 * 00000001404274EE: add     rsp, 8
 * 00000001404274F2: call    loc_1404274E5
 * 00000001404274F7: add     rsp, 8
 * 00000001404274FB: call    loc_1404274EE
 * 0000000140427500: add     rsp, 8
 * 0000000140427504: call    loc_1404274F7
 * 0000000140427509: add     rsp, 8
 * 000000014042750D: call    loc_140427500
 * 0000000140427512: add     rsp, 8
 * 0000000140427516: call    loc_140427509
 * 000000014042751B: add     rsp, 8
 * 000000014042751F: call    loc_140427512
 * 0000000140427524: add     rsp, 8
 * 0000000140427528: call    loc_14042751B
 * 000000014042752D: add     rsp, 8
 * 0000000140427531: call    loc_140427524
 * 0000000140427536: add     rsp, 8
 * 000000014042753A: call    loc_14042752D
 * 000000014042753F: add     rsp, 8
 * 0000000140427543: call    loc_140427536
 * 0000000140427548: add     rsp, 8
 * 000000014042754C: call    loc_14042753F
 * 0000000140427551: add     rsp, 8
 * 0000000140427555: call    loc_140427548
 * 000000014042755A: add     rsp, 8
 * 000000014042755E: call    loc_140427551
 * 0000000140427563: add     rsp, 8
 * 0000000140427567: call    loc_14042755A
 * 000000014042756C: add     rsp, 8
 * 0000000140427570: call    loc_140427563
 * 0000000140427575: add     rsp, 8
 * 0000000140427579: call    loc_14042756C
 * 000000014042757E: add     rsp, 8
 * 0000000140427582: call    loc_140427575
 * 0000000140427587: add     rsp, 8
 * 000000014042758B: mov     eax, 0DADAh
 * 0000000140427590: test    byte ptr gs:862h, 8
 * 0000000140427599: jz      short loc_1404275A2
 * 000000014042759B: mov     al, 20h ; ' '
 * 000000014042759D: incsspq rax
 * 00000001404275A2: test    edx, 200h
 * 00000001404275A8: jz      short loc_1404275AF
 * 00000001404275AA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404275AF: lfence
 * 00000001404275B2: mov     byte ptr gs:856h, 0
 * 00000001404275BB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404275C2: jz      short loc_1404275E3
 * 00000001404275C4: mov     ecx, 6A7h
 * 00000001404275C9: rdmsr
 * 00000001404275CB: cmp     edx, 0
 * 00000001404275CE: jz      short loc_1404275E3
 * 00000001404275D0: mov     ecx, edx
 * 00000001404275D2: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404275D8: cmp     edx, ecx
 * 00000001404275DA: jz      short loc_1404275E3
 * 00000001404275DC: mov     ecx, 6A7h
 * 00000001404275E1: wrmsr
 * 00000001404275E3: test    byte ptr [r10+3], 3
 * 00000001404275E8: mov     [rbp+0E8h+var_68], 0
 * 00000001404275F1: jz      short loc_1404275F8
 * 00000001404275F3: call    KiSaveDebugRegisterState
 * 00000001404275F8: cld
 * 00000001404275F9: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001404275FD: ldmxcsr dword ptr gs:180h
 * 0000000140427606: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042760A: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042760E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140427612: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140427616: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042761A: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042761E: xor     esi, esi
 * 0000000140427620: inc     dword ptr gs:82C0h
 * 0000000140427628: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042762F: jz      short loc_140427634
 * 0000000140427631: clac
 * 0000000140427634: mov     ecx, 2
 * 0000000140427639: cmp     cs:KiIrqlFlags, 0
 * 0000000140427640: jz      short loc_140427649
 * 0000000140427642: call    KzSetIrqlUnsafe
 * 0000000140427647: jmp     short loc_140427651
 * 0000000140427649: mov     rax, cr8
 * 000000014042764D: mov     cr8, rcx
 * 0000000140427651: mov     byte ptr [rbp+0E8h+var_13F], al
 * 0000000140427654: mov     rcx, rsi
 * 0000000140427657: call    HalPerformEndOfInterrupt
 * 000000014042765C: sti
 * 000000014042765D: cmp     byte ptr gs:187h, 0
 * 0000000140427666: jnz     short loc_140427675
 * 0000000140427668: mov     rcx, [rbp+0E8h+var_13F]
 * 000000014042766C: lea     rdx, [rbp+0E8h+var_168]
 * 0000000140427670: call    KiDispatchInterrupt
 * 0000000140427675: cli
 * 0000000140427676: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 000000014042767A: cmp     cs:KiIrqlFlags, 0
 * 0000000140427681: jz      short loc_14042768A
 * 0000000140427683: call    KzSetIrqlUnsafe
 * 0000000140427688: jmp     short loc_14042768E
 * 000000014042768A: mov     cr8, rcx
 * 000000014042768E: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140427695: cli
 * 0000000140427696: test    [rbp+0E8h+arg_0], 1
 * 000000014042769D: jz      loc_14042798B
 * 00000001404276A3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404276AA: jz      short loc_1404276AF
 * 00000001404276AC: stac
 * 00000001404276AF: mov     rcx, gs:188h
 * 00000001404276B8: test    byte ptr [rcx+0C2h], 3
 * 00000001404276BF: jz      short loc_1404276DC
 * 00000001404276C1: mov     ecx, 1
 * 00000001404276C6: mov     cr8, rcx
 * 00000001404276CA: sti
 * 00000001404276CB: call    KiInitiateUserApc
 * 00000001404276D0: cli
 * 00000001404276D1: mov     ecx, 0
 * 00000001404276D6: mov     cr8, rcx
 * 00000001404276DA: jmp     short loc_1404276AF
 * 00000001404276DC: test    byte ptr gs:86Ch, 2
 * 00000001404276E5: jz      short loc_1404276EE
 * 00000001404276E7: xor     ecx, ecx
 * 00000001404276E9: call    KiUpdateStibpPairing
 * 00000001404276EE: mov     rcx, gs:188h
 * 00000001404276F7: test    dword ptr [rcx], 8000000h
 * 00000001404276FD: jz      short loc_140427704
 * 00000001404276FF: call    KiRestoreSetContextState
 * 0000000140427704: mov     rcx, gs:188h
 * 000000014042770D: test    dword ptr [rcx], 10000h
 * 0000000140427713: jz      short loc_140427729
 * 0000000140427715: test    byte ptr [rcx+2], 1
 * 0000000140427719: jz      short loc_140427729
 * 000000014042771B: call    KiCopyCounters
 * 0000000140427720: mov     rcx, gs:188h
 * 0000000140427729: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014042772D: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427735: jz      short loc_14042773C
 * 0000000140427737: call    KiRestoreDebugRegisterState
 * 000000014042773C: mov     rcx, gs:188h
 * 0000000140427745: bt      dword ptr [rcx+74h], 16h
 * 000000014042774A: jnb     short loc_140427776
 * 000000014042774C: xor     ecx, ecx
 * 000000014042774E: rdsspq  rcx
 * 0000000140427753: mov     r8, gs:95A8h
 * 000000014042775C: add     r8, 8
 * 0000000140427760: cmp     rcx, r8
 * 0000000140427763: jnz     short loc_140427776
 * 0000000140427765: mov     rcx, gs:95A0h
 * 000000014042776E: rstorssp qword ptr [rcx]
 * 0000000140427772: saveprevssp
 * 0000000140427776: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042777A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042777E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427782: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427786: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042778A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042778E: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427792: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427796: mov     r9, [rbp+0E8h+var_118]
 * 000000014042779A: mov     r8, [rbp+0E8h+var_120]
 * 000000014042779E: mov     byte ptr gs:856h, 0
 * 00000001404277A7: movzx   eax, word ptr gs:86Ah
 * 00000001404277B0: cmp     gs:864h, ax
 * 00000001404277B9: jz      short loc_1404277CD
 * 00000001404277BB: mov     gs:864h, ax
 * 00000001404277C4: mov     ecx, 48h ; 'H'
 * 00000001404277C9: xor     edx, edx
 * 00000001404277CB: wrmsr
 * 00000001404277CD: btr     word ptr gs:860h, 2
 * 00000001404277D8: jnb     short loc_1404277E8
 * 00000001404277DA: mov     eax, 1
 * 00000001404277DF: xor     edx, edx
 * 00000001404277E1: mov     ecx, 49h ; 'I'
 * 00000001404277E6: wrmsr
 * 00000001404277E8: btr     word ptr gs:860h, 5
 * 00000001404277F3: jnb     loc_140427930
 * 00000001404277F9: call    loc_14042790C
 * 00000001404277FE: add     rsp, 8
 * 0000000140427802: call    loc_140427915
 * 0000000140427807: add     rsp, 8
 * 000000014042780B: call    loc_1404277FE
 * 0000000140427810: add     rsp, 8
 * 0000000140427814: call    loc_140427807
 * 0000000140427819: add     rsp, 8
 * 000000014042781D: call    loc_140427810
 * 0000000140427822: add     rsp, 8
 * 0000000140427826: call    loc_140427819
 * 000000014042782B: add     rsp, 8
 * 000000014042782F: call    loc_140427822
 * 0000000140427834: add     rsp, 8
 * 0000000140427838: call    loc_14042782B
 * 000000014042783D: add     rsp, 8
 * 0000000140427841: call    loc_140427834
 * 0000000140427846: add     rsp, 8
 * 000000014042784A: call    loc_14042783D
 * 000000014042784F: add     rsp, 8
 * 0000000140427853: call    loc_140427846
 * 0000000140427858: add     rsp, 8
 * 000000014042785C: call    loc_14042784F
 * 0000000140427861: add     rsp, 8
 * 0000000140427865: call    loc_140427858
 * 000000014042786A: add     rsp, 8
 * 000000014042786E: call    loc_140427861
 * 0000000140427873: add     rsp, 8
 * 0000000140427877: call    loc_14042786A
 * 000000014042787C: add     rsp, 8
 * 0000000140427880: call    loc_140427873
 * 0000000140427885: add     rsp, 8
 * 0000000140427889: call    loc_14042787C
 * 000000014042788E: add     rsp, 8
 * 0000000140427892: call    loc_140427885
 * 0000000140427897: add     rsp, 8
 * 000000014042789B: call    loc_14042788E
 * 00000001404278A0: add     rsp, 8
 * 00000001404278A4: call    loc_140427897
 * 00000001404278A9: add     rsp, 8
 * 00000001404278AD: call    loc_1404278A0
 * 00000001404278B2: add     rsp, 8
 * 00000001404278B6: call    loc_1404278A9
 * 00000001404278BB: add     rsp, 8
 * 00000001404278BF: call    loc_1404278B2
 * 00000001404278C4: add     rsp, 8
 * 00000001404278C8: call    loc_1404278BB
 * 00000001404278CD: add     rsp, 8
 * 00000001404278D1: call    loc_1404278C4
 * 00000001404278D6: add     rsp, 8
 * 00000001404278DA: call    loc_1404278CD
 * 00000001404278DF: add     rsp, 8
 * 00000001404278E3: call    loc_1404278D6
 * 00000001404278E8: add     rsp, 8
 * 00000001404278EC: call    loc_1404278DF
 * 00000001404278F1: add     rsp, 8
 * 00000001404278F5: call    loc_1404278E8
 * 00000001404278FA: add     rsp, 8
 * 00000001404278FE: call    loc_1404278F1
 * 0000000140427903: add     rsp, 8
 * 0000000140427907: call    loc_1404278FA
 * 000000014042790C: add     rsp, 8
 * 0000000140427910: call    loc_140427903
 * 0000000140427915: add     rsp, 8
 * 0000000140427919: mov     eax, 0DADAh
 * 000000014042791E: test    byte ptr gs:862h, 8
 * 0000000140427927: jz      short loc_140427930
 * 0000000140427929: mov     al, 20h ; ' '
 * 000000014042792B: incsspq rax
 * 0000000140427930: test    word ptr gs:860h, 80h
 * 000000014042793B: jz      short loc_140427949
 * 000000014042793D: xor     eax, eax
 * 000000014042793F: xor     edx, edx
 * 0000000140427941: mov     ecx, 1
 * 0000000140427946: div     rcx
 * 0000000140427949: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042794D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427951: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140427955: mov     rsp, rbp
 * 0000000140427958: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042795F: add     rsp, 0E8h
 * 0000000140427966: test    cs:KiKvaShadow, 1
 * 000000014042796D: jz      short loc_140427974
 * 000000014042796F: jmp     KiKernelExit
 * 0000000140427974: test    word ptr gs:860h, 100h
 * 000000014042797F: jz      short loc_140427986
 * 0000000140427981: verw    [rsp+arg_18]
 * 0000000140427986: swapgs
 * 0000000140427989: iretq
 * 000000014042798B: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014042798F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427993: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427997: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042799B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042799F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404279A3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404279A7: mov     r11, [rbp+0E8h+var_108]
 * 00000001404279AB: mov     r10, [rbp+0E8h+var_110]
 * 00000001404279AF: mov     r9, [rbp+0E8h+var_118]
 * 00000001404279B3: mov     r8, [rbp+0E8h+var_120]
 * 00000001404279B7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404279BB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404279BF: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001404279C3: mov     rsp, rbp
 * 00000001404279C6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404279CD: add     rsp, 0E8h
 * 00000001404279D4: iretq
 */
