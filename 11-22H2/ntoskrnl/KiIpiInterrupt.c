/*
 * XREFs of KiIpiInterrupt @ 0x140427360
 * Callers:
 *     KiIpiInterruptShadow @ 0x140AF8240 (KiIpiInterruptShadow.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140427AF0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140427360
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
 * 00000001404273BC: jmp     loc_140427648
 * 00000001404273C1: movzx   eax, word ptr gs:864h
 * 00000001404273CA: mov     ecx, 48h ; 'H'
 * 00000001404273CF: xor     edx, edx
 * 00000001404273D1: wrmsr
 * 00000001404273D3: jmp     loc_140427648
 * 00000001404273D8: test    cs:KiKvaShadow, 1
 * 00000001404273DF: jnz     short loc_1404273E4
 * 00000001404273E1: swapgs
 * 00000001404273E4: lfence
 * 00000001404273E7: mov     rcx, gs:95A8h
 * 00000001404273F0: test    rcx, rcx
 * 00000001404273F3: jz      short loc_140427414
 * 00000001404273F5: rdsspq  rdx
 * 00000001404273FA: mov     r10, gs:95A0h
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
 * 00000001404275FA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404275FF: lfence
 * 0000000140427602: mov     byte ptr gs:856h, 0
 * 000000014042760B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140427612: jz      short loc_140427633
 * 0000000140427614: mov     ecx, 6A7h
 * 0000000140427619: rdmsr
 * 000000014042761B: cmp     edx, 0
 * 000000014042761E: jz      short loc_140427633
 * 0000000140427620: mov     ecx, edx
 * 0000000140427622: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140427628: cmp     edx, ecx
 * 000000014042762A: jz      short loc_140427633
 * 000000014042762C: mov     ecx, 6A7h
 * 0000000140427631: wrmsr
 * 0000000140427633: test    byte ptr [r10+3], 3
 * 0000000140427638: mov     [rbp+0E8h+var_68], 0
 * 0000000140427641: jz      short loc_140427648
 * 0000000140427643: call    KiSaveDebugRegisterState
 * 0000000140427648: cld
 * 0000000140427649: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042764D: ldmxcsr dword ptr gs:180h
 * 0000000140427656: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042765A: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042765E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140427662: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140427666: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042766A: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042766E: cmp     byte ptr gs:82DAh, 0
 * 0000000140427677: jz      short loc_14042767E
 * 0000000140427679: call    KeWakeProcessor
 * 000000014042767E: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140427685: cmp     rax, [rbp+0E8h]
 * 000000014042768C: jnb     short loc_1404276A7
 * 000000014042768E: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140427695: cmp     rax, [rbp+0E8h]
 * 000000014042769C: jb      short loc_1404276A7
 * 000000014042769E: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404276A2: call    KiCheckForSListAddress
 * 00000001404276A7: xor     esi, esi
 * 00000001404276A9: inc     dword ptr gs:82C0h
 * 00000001404276B1: mov     rdx, rsp
 * 00000001404276B4: mov     rcx, gs:8B58h
 * 00000001404276BD: lea     rax, [rcx-6000h]
 * 00000001404276C4: cmp     rax, rsp
 * 00000001404276C7: ja      short loc_1404276CE
 * 00000001404276C9: cmp     rsp, rcx
 * 00000001404276CC: jb      short loc_1404276DA
 * 00000001404276CE: cmp     cs:KiBugCheckActive, 0
 * 00000001404276D5: jnz     short loc_1404276DA
 * 00000001404276D7: mov     rsp, rcx
 * 00000001404276DA: sub     rsp, 20h
 * 00000001404276DE: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001404276E3: call    KiIpiInterruptSubDispatch
 * 00000001404276E8: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001404276ED: mov     rcx, rsi
 * 00000001404276F0: call    HalPerformEndOfInterrupt
 * 00000001404276F5: mov     rcx, gs:20h
 * 00000001404276FE: cmp     byte ptr [rcx+20h], 1
 * 0000000140427702: ja      short loc_14042777E
 * 0000000140427704: rdtsc
 * 0000000140427706: shl     rdx, 20h
 * 000000014042770A: or      rax, rdx
 * 000000014042770D: sub     rax, [rcx+8180h]
 * 0000000140427714: add     [rcx+8278h], rax
 * 000000014042771B: add     [rcx+8180h], rax
 * 0000000140427722: mov     r8, rax
 * 0000000140427725: mov     rax, [rcx+8]
 * 0000000140427729: test    byte ptr [rax+2], 72h
 * 000000014042772D: jz      short loc_140427742
 * 000000014042772F: xor     edx, edx
 * 0000000140427731: call    KiBeginThreadAccountingPeriod
 * 0000000140427736: mov     rcx, gs:20h
 * 000000014042773F: inc     byte ptr [rcx+20h]
 * 0000000140427742: mov     dl, [rcx+6]
 * 0000000140427745: and     byte ptr [rcx+6], 0
 * 0000000140427749: cmp     byte ptr [rcx+7], 0
 * 000000014042774D: jnz     short loc_14042777E
 * 000000014042774F: test    dl, dl
 * 0000000140427751: jz      short loc_14042777E
 * 0000000140427753: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140427757: jnb     short loc_140427764
 * 0000000140427759: and     byte ptr [rcx+20h], 0
 * 000000014042775D: call    KiDpcInterruptBypass
 * 0000000140427762: jmp     short loc_140427781
 * 0000000140427764: mov     ecx, 2
 * 0000000140427769: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140427770: nop     dword ptr [rax+rax+00h]
 * 0000000140427775: mov     rcx, gs:20h
 * 000000014042777E: dec     byte ptr [rcx+20h]
 * 0000000140427781: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140427785: cmp     cs:KiIrqlFlags, 0
 * 000000014042778C: jz      short loc_140427795
 * 000000014042778E: call    KzSetIrqlUnsafe
 * 0000000140427793: jmp     short loc_140427799
 * 0000000140427795: mov     cr8, rcx
 * 0000000140427799: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404277A0: test    [rbp+0E8h+arg_0], 1
 * 00000001404277A7: jz      loc_140427A95
 * 00000001404277AD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404277B4: jz      short loc_1404277B9
 * 00000001404277B6: stac
 * 00000001404277B9: mov     rcx, gs:188h
 * 00000001404277C2: test    byte ptr [rcx+0C2h], 3
 * 00000001404277C9: jz      short loc_1404277E6
 * 00000001404277CB: mov     ecx, 1
 * 00000001404277D0: mov     cr8, rcx
 * 00000001404277D4: sti
 * 00000001404277D5: call    KiInitiateUserApc
 * 00000001404277DA: cli
 * 00000001404277DB: mov     ecx, 0
 * 00000001404277E0: mov     cr8, rcx
 * 00000001404277E4: jmp     short loc_1404277B9
 * 00000001404277E6: test    byte ptr gs:86Ch, 2
 * 00000001404277EF: jz      short loc_1404277F8
 * 00000001404277F1: xor     ecx, ecx
 * 00000001404277F3: call    KiUpdateStibpPairing
 * 00000001404277F8: mov     rcx, gs:188h
 * 0000000140427801: test    dword ptr [rcx], 8000000h
 * 0000000140427807: jz      short loc_14042780E
 * 0000000140427809: call    KiRestoreSetContextState
 * 000000014042780E: mov     rcx, gs:188h
 * 0000000140427817: test    dword ptr [rcx], 10000h
 * 000000014042781D: jz      short loc_140427833
 * 000000014042781F: test    byte ptr [rcx+2], 1
 * 0000000140427823: jz      short loc_140427833
 * 0000000140427825: call    KiCopyCounters
 * 000000014042782A: mov     rcx, gs:188h
 * 0000000140427833: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427837: cmp     [rbp+0E8h+var_68], 0
 * 000000014042783F: jz      short loc_140427846
 * 0000000140427841: call    KiRestoreDebugRegisterState
 * 0000000140427846: mov     rcx, gs:188h
 * 000000014042784F: bt      dword ptr [rcx+74h], 16h
 * 0000000140427854: jnb     short loc_140427880
 * 0000000140427856: xor     ecx, ecx
 * 0000000140427858: rdsspq  rcx
 * 000000014042785D: mov     r8, gs:95A8h
 * 0000000140427866: add     r8, 8
 * 000000014042786A: cmp     rcx, r8
 * 000000014042786D: jnz     short loc_140427880
 * 000000014042786F: mov     rcx, gs:95A0h
 * 0000000140427878: rstorssp qword ptr [rcx]
 * 000000014042787C: saveprevssp
 * 0000000140427880: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427884: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427888: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042788C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427890: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427894: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427898: mov     r11, [rbp+0E8h+var_108]
 * 000000014042789C: mov     r10, [rbp+0E8h+var_110]
 * 00000001404278A0: mov     r9, [rbp+0E8h+var_118]
 * 00000001404278A4: mov     r8, [rbp+0E8h+var_120]
 * 00000001404278A8: mov     byte ptr gs:856h, 0
 * 00000001404278B1: movzx   eax, word ptr gs:86Ah
 * 00000001404278BA: cmp     gs:864h, ax
 * 00000001404278C3: jz      short loc_1404278D7
 * 00000001404278C5: mov     gs:864h, ax
 * 00000001404278CE: mov     ecx, 48h ; 'H'
 * 00000001404278D3: xor     edx, edx
 * 00000001404278D5: wrmsr
 * 00000001404278D7: btr     word ptr gs:860h, 2
 * 00000001404278E2: jnb     short loc_1404278F2
 * 00000001404278E4: mov     eax, 1
 * 00000001404278E9: xor     edx, edx
 * 00000001404278EB: mov     ecx, 49h ; 'I'
 * 00000001404278F0: wrmsr
 * 00000001404278F2: btr     word ptr gs:860h, 5
 * 00000001404278FD: jnb     loc_140427A3A
 * 0000000140427903: call    loc_140427A16
 * 0000000140427908: add     rsp, 8
 * 000000014042790C: call    loc_140427A1F
 * 0000000140427911: add     rsp, 8
 * 0000000140427915: call    loc_140427908
 * 000000014042791A: add     rsp, 8
 * 000000014042791E: call    loc_140427911
 * 0000000140427923: add     rsp, 8
 * 0000000140427927: call    loc_14042791A
 * 000000014042792C: add     rsp, 8
 * 0000000140427930: call    loc_140427923
 * 0000000140427935: add     rsp, 8
 * 0000000140427939: call    loc_14042792C
 * 000000014042793E: add     rsp, 8
 * 0000000140427942: call    loc_140427935
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
 * 0000000140427A23: mov     eax, 0DADAh
 * 0000000140427A28: test    byte ptr gs:862h, 8
 * 0000000140427A31: jz      short loc_140427A3A
 * 0000000140427A33: mov     al, 20h ; ' '
 * 0000000140427A35: incsspq rax
 * 0000000140427A3A: test    word ptr gs:860h, 80h
 * 0000000140427A45: jz      short loc_140427A53
 * 0000000140427A47: xor     eax, eax
 * 0000000140427A49: xor     edx, edx
 * 0000000140427A4B: mov     ecx, 1
 * 0000000140427A50: div     rcx
 * 0000000140427A53: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427A57: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427A5B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140427A5F: mov     rsp, rbp
 * 0000000140427A62: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427A69: add     rsp, 0E8h
 * 0000000140427A70: test    cs:KiKvaShadow, 1
 * 0000000140427A77: jz      short loc_140427A7E
 * 0000000140427A79: jmp     KiKernelExit
 * 0000000140427A7E: test    word ptr gs:860h, 100h
 * 0000000140427A89: jz      short loc_140427A90
 * 0000000140427A8B: verw    [rsp+arg_18]
 * 0000000140427A90: swapgs
 * 0000000140427A93: iretq
 * 0000000140427A95: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427A99: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427A9D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427AA1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427AA5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427AA9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427AAD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427AB1: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427AB5: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427AB9: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427ABD: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427AC1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427AC5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427AC9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140427ACD: mov     rsp, rbp
 * 0000000140427AD0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427AD7: add     rsp, 0E8h
 * 0000000140427ADE: iretq
 */
