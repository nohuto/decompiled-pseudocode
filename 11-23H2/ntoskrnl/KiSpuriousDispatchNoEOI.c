/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1404220F0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248500 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1404220F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404220F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404220F0: mov     ecx, 0Fh
 * 00000001404220F5: cmp     cs:KiIrqlFlags, 0
 * 00000001404220FC: jz      short loc_140422105
 * 00000001404220FE: call    KzSetIrqlUnsafe
 * 0000000140422103: jmp     short loc_14042210D
 * 0000000140422105: mov     rax, cr8
 * 0000000140422109: mov     cr8, rcx
 * 000000014042210D: mov     [rbp-57h], al
 * 0000000140422110: mov     rcx, gs:20h
 * 0000000140422119: inc     byte ptr [rcx+20h]
 * 000000014042211C: cmp     byte ptr [rcx+20h], 1
 * 0000000140422120: jnz     short loc_140422172
 * 0000000140422122: rdtsc
 * 0000000140422124: shl     rdx, 20h
 * 0000000140422128: or      rax, rdx
 * 000000014042212B: mov     r8, [rcx+8]
 * 000000014042212F: sub     rax, [rcx+8180h]
 * 0000000140422136: add     [r8+48h], rax
 * 000000014042213A: mov     edx, [r8+50h]
 * 000000014042213E: add     [rcx+8180h], rax
 * 0000000140422145: add     rdx, rax
 * 0000000140422148: mov     ecx, edx
 * 000000014042214A: shr     rdx, 20h
 * 000000014042214E: jz      short loc_140422153
 * 0000000140422150: or      ecx, 0FFFFFFFFh
 * 0000000140422153: mov     [r8+50h], ecx
 * 0000000140422157: test    byte ptr [r8+2], 0BEh
 * 000000014042215C: jz      short loc_140422172
 * 000000014042215E: mov     rdx, r8
 * 0000000140422161: mov     r8, rax
 * 0000000140422164: mov     rcx, gs:20h
 * 000000014042216D: call    KiEndThreadAccountingPeriod
 * 0000000140422172: sti
 * 0000000140422173: inc     dword ptr [rsi+74h]
 * 0000000140422176: cli
 * 0000000140422177: mov     rcx, gs:20h
 * 0000000140422180: cmp     byte ptr [rcx+20h], 1
 * 0000000140422184: ja      short loc_140422200
 * 0000000140422186: rdtsc
 * 0000000140422188: shl     rdx, 20h
 * 000000014042218C: or      rax, rdx
 * 000000014042218F: sub     rax, [rcx+8180h]
 * 0000000140422196: add     [rcx+8278h], rax
 * 000000014042219D: add     [rcx+8180h], rax
 * 00000001404221A4: mov     r8, rax
 * 00000001404221A7: mov     rax, [rcx+8]
 * 00000001404221AB: test    byte ptr [rax+2], 72h
 * 00000001404221AF: jz      short loc_1404221C4
 * 00000001404221B1: xor     edx, edx
 * 00000001404221B3: call    KiBeginThreadAccountingPeriod
 * 00000001404221B8: mov     rcx, gs:20h
 * 00000001404221C1: inc     byte ptr [rcx+20h]
 * 00000001404221C4: mov     dl, [rcx+6]
 * 00000001404221C7: and     byte ptr [rcx+6], 0
 * 00000001404221CB: cmp     byte ptr [rcx+7], 0
 * 00000001404221CF: jnz     short loc_140422200
 * 00000001404221D1: test    dl, dl
 * 00000001404221D3: jz      short loc_140422200
 * 00000001404221D5: cmp     byte ptr [rbp-57h], 2
 * 00000001404221D9: jnb     short loc_1404221E6
 * 00000001404221DB: and     byte ptr [rcx+20h], 0
 * 00000001404221DF: call    KiDpcInterruptBypass
 * 00000001404221E4: jmp     short loc_140422203
 * 00000001404221E6: mov     ecx, 2
 * 00000001404221EB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404221F2: nop     dword ptr [rax+rax+00h]
 * 00000001404221F7: mov     rcx, gs:20h
 * 0000000140422200: dec     byte ptr [rcx+20h]
 * 0000000140422203: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140422207: cmp     cs:KiIrqlFlags, 0
 * 000000014042220E: jz      short loc_140422217
 * 0000000140422210: call    KzSetIrqlUnsafe
 * 0000000140422215: jmp     short loc_14042221B
 * 0000000140422217: mov     cr8, rcx
 * 000000014042221B: mov     rsi, [rbp+0D0h]
 * 0000000140422222: cli
 * 0000000140422223: test    byte ptr [rbp+0F0h], 1
 * 000000014042222A: jz      loc_140422518
 * 0000000140422230: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140422237: jz      short loc_14042223C
 * 0000000140422239: stac
 * 000000014042223C: mov     rcx, gs:188h
 * 0000000140422245: test    byte ptr [rcx+0C2h], 3
 * 000000014042224C: jz      short loc_140422269
 * 000000014042224E: mov     ecx, 1
 * 0000000140422253: mov     cr8, rcx
 * 0000000140422257: sti
 * 0000000140422258: call    KiInitiateUserApc
 * 000000014042225D: cli
 * 000000014042225E: mov     ecx, 0
 * 0000000140422263: mov     cr8, rcx
 * 0000000140422267: jmp     short loc_14042223C
 * 0000000140422269: test    byte ptr gs:86Ch, 2
 * 0000000140422272: jz      short loc_14042227B
 * 0000000140422274: xor     ecx, ecx
 * 0000000140422276: call    KiUpdateStibpPairing
 * 000000014042227B: mov     rcx, gs:188h
 * 0000000140422284: test    dword ptr [rcx], 8000000h
 * 000000014042228A: jz      short loc_140422291
 * 000000014042228C: call    KiRestoreSetContextState
 * 0000000140422291: mov     rcx, gs:188h
 * 000000014042229A: test    dword ptr [rcx], 10000h
 * 00000001404222A0: jz      short loc_1404222B6
 * 00000001404222A2: test    byte ptr [rcx+2], 1
 * 00000001404222A6: jz      short loc_1404222B6
 * 00000001404222A8: call    KiCopyCounters
 * 00000001404222AD: mov     rcx, gs:188h
 * 00000001404222B6: ldmxcsr dword ptr [rbp-54h]
 * 00000001404222BA: cmp     word ptr [rbp+80h], 0
 * 00000001404222C2: jz      short loc_1404222C9
 * 00000001404222C4: call    KiRestoreDebugRegisterState
 * 00000001404222C9: mov     rcx, gs:188h
 * 00000001404222D2: bt      dword ptr [rcx+74h], 16h
 * 00000001404222D7: jnb     short loc_140422303
 * 00000001404222D9: xor     ecx, ecx
 * 00000001404222DB: rdsspq  rcx
 * 00000001404222E0: mov     r8, gs:95A8h
 * 00000001404222E9: add     r8, 8
 * 00000001404222ED: cmp     rcx, r8
 * 00000001404222F0: jnz     short loc_140422303
 * 00000001404222F2: mov     rcx, gs:95A0h
 * 00000001404222FB: rstorssp qword ptr [rcx]
 * 00000001404222FF: saveprevssp
 * 0000000140422303: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422307: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042230B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042230F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140422313: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140422317: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042231B: mov     r11, [rbp-20h]
 * 000000014042231F: mov     r10, [rbp-28h]
 * 0000000140422323: mov     r9, [rbp-30h]
 * 0000000140422327: mov     r8, [rbp-38h]
 * 000000014042232B: mov     byte ptr gs:856h, 0
 * 0000000140422334: movzx   eax, word ptr gs:86Ah
 * 000000014042233D: cmp     gs:864h, ax
 * 0000000140422346: jz      short loc_14042235A
 * 0000000140422348: mov     gs:864h, ax
 * 0000000140422351: mov     ecx, 48h ; 'H'
 * 0000000140422356: xor     edx, edx
 * 0000000140422358: wrmsr
 * 000000014042235A: btr     word ptr gs:860h, 2
 * 0000000140422365: jnb     short loc_140422375
 * 0000000140422367: mov     eax, 1
 * 000000014042236C: xor     edx, edx
 * 000000014042236E: mov     ecx, 49h ; 'I'
 * 0000000140422373: wrmsr
 * 0000000140422375: btr     word ptr gs:860h, 5
 * 0000000140422380: jnb     loc_1404224BD
 * 0000000140422386: call    loc_140422499
 * 000000014042238B: add     rsp, 8
 * 000000014042238F: call    loc_1404224A2
 * 0000000140422394: add     rsp, 8
 * 0000000140422398: call    loc_14042238B
 * 000000014042239D: add     rsp, 8
 * 00000001404223A1: call    loc_140422394
 * 00000001404223A6: add     rsp, 8
 * 00000001404223AA: call    loc_14042239D
 * 00000001404223AF: add     rsp, 8
 * 00000001404223B3: call    loc_1404223A6
 * 00000001404223B8: add     rsp, 8
 * 00000001404223BC: call    loc_1404223AF
 * 00000001404223C1: add     rsp, 8
 * 00000001404223C5: call    loc_1404223B8
 * 00000001404223CA: add     rsp, 8
 * 00000001404223CE: call    loc_1404223C1
 * 00000001404223D3: add     rsp, 8
 * 00000001404223D7: call    loc_1404223CA
 * 00000001404223DC: add     rsp, 8
 * 00000001404223E0: call    loc_1404223D3
 * 00000001404223E5: add     rsp, 8
 * 00000001404223E9: call    loc_1404223DC
 * 00000001404223EE: add     rsp, 8
 * 00000001404223F2: call    loc_1404223E5
 * 00000001404223F7: add     rsp, 8
 * 00000001404223FB: call    loc_1404223EE
 * 0000000140422400: add     rsp, 8
 * 0000000140422404: call    loc_1404223F7
 * 0000000140422409: add     rsp, 8
 * 000000014042240D: call    loc_140422400
 * 0000000140422412: add     rsp, 8
 * 0000000140422416: call    loc_140422409
 * 000000014042241B: add     rsp, 8
 * 000000014042241F: call    loc_140422412
 * 0000000140422424: add     rsp, 8
 * 0000000140422428: call    loc_14042241B
 * 000000014042242D: add     rsp, 8
 * 0000000140422431: call    loc_140422424
 * 0000000140422436: add     rsp, 8
 * 000000014042243A: call    loc_14042242D
 * 000000014042243F: add     rsp, 8
 * 0000000140422443: call    loc_140422436
 * 0000000140422448: add     rsp, 8
 * 000000014042244C: call    loc_14042243F
 * 0000000140422451: add     rsp, 8
 * 0000000140422455: call    loc_140422448
 * 000000014042245A: add     rsp, 8
 * 000000014042245E: call    loc_140422451
 * 0000000140422463: add     rsp, 8
 * 0000000140422467: call    loc_14042245A
 * 000000014042246C: add     rsp, 8
 * 0000000140422470: call    loc_140422463
 * 0000000140422475: add     rsp, 8
 * 0000000140422479: call    loc_14042246C
 * 000000014042247E: add     rsp, 8
 * 0000000140422482: call    loc_140422475
 * 0000000140422487: add     rsp, 8
 * 000000014042248B: call    loc_14042247E
 * 0000000140422490: add     rsp, 8
 * 0000000140422494: call    loc_140422487
 * 0000000140422499: add     rsp, 8
 * 000000014042249D: call    loc_140422490
 * 00000001404224A2: add     rsp, 8
 * 00000001404224A6: mov     eax, 0DADAh
 * 00000001404224AB: test    byte ptr gs:862h, 8
 * 00000001404224B4: jz      short loc_1404224BD
 * 00000001404224B6: mov     al, 20h ; ' '
 * 00000001404224B8: incsspq rax
 * 00000001404224BD: test    word ptr gs:860h, 80h
 * 00000001404224C8: jz      short loc_1404224D6
 * 00000001404224CA: xor     eax, eax
 * 00000001404224CC: xor     edx, edx
 * 00000001404224CE: mov     ecx, 1
 * 00000001404224D3: div     rcx
 * 00000001404224D6: mov     rdx, [rbp-40h]
 * 00000001404224DA: mov     rcx, [rbp-48h]
 * 00000001404224DE: mov     rax, [rbp-50h]
 * 00000001404224E2: mov     rsp, rbp
 * 00000001404224E5: mov     rbp, [rbp+0D8h]
 * 00000001404224EC: add     rsp, 0E8h
 * 00000001404224F3: test    cs:KiKvaShadow, 1
 * 00000001404224FA: jz      short loc_140422501
 * 00000001404224FC: jmp     KiKernelExit
 * 0000000140422501: test    word ptr gs:860h, 100h
 * 000000014042250C: jz      short loc_140422513
 * 000000014042250E: verw    [rsp-1E8h+arg_200]
 * 0000000140422513: swapgs
 * 0000000140422516: iretq
 * 0000000140422518: ldmxcsr dword ptr [rbp-54h]
 * 000000014042251C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422520: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422524: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140422528: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042252C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140422530: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140422534: mov     r11, [rbp-20h]
 * 0000000140422538: mov     r10, [rbp-28h]
 * 000000014042253C: mov     r9, [rbp-30h]
 * 0000000140422540: mov     r8, [rbp-38h]
 * 0000000140422544: mov     rdx, [rbp-40h]
 * 0000000140422548: mov     rcx, [rbp-48h]
 * 000000014042254C: mov     rax, [rbp-50h]
 * 0000000140422550: mov     rsp, rbp
 * 0000000140422553: mov     rbp, [rbp+0D8h]
 * 000000014042255A: add     rsp, 0E8h
 * 0000000140422561: iretq
 */
