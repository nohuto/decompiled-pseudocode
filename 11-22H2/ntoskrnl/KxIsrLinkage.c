/*
 * XREFs of KxIsrLinkage @ 0x140422330
 * Callers:
 *     KxIsrLinkageShadow @ 0x140AF8B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248410 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FED70 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140422330
 * Reason: Hex-Rays returned no pseudocode for 0x140422330
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140422330: push    rbp
 * 0000000140422331: push    rsi
 * 0000000140422332: sub     rsp, 150h
 * 0000000140422339: lea     rbp, [rsp+80h]
 * 0000000140422341: mov     [rbp+0D8h+var_12D], 0
 * 0000000140422345: mov     [rbp+0D8h+var_128], rax
 * 0000000140422349: mov     [rbp+0D8h+var_120], rcx
 * 000000014042234D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140422351: mov     [rbp+0D8h+var_110], r8
 * 0000000140422355: mov     [rbp+0D8h+var_108], r9
 * 0000000140422359: mov     [rbp+0D8h+var_100], r10
 * 000000014042235D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140422361: test    [rbp+0D8h+arg_8], 1
 * 0000000140422368: jnz     short loc_1404223A4
 * 000000014042236A: xor     edx, edx
 * 000000014042236C: rdsspq  rdx
 * 0000000140422371: mov     [rbp+0D8h+var_80], rdx
 * 0000000140422375: lfence
 * 0000000140422378: test    word ptr gs:860h, 1
 * 0000000140422383: jnz     short loc_14042238D
 * 0000000140422385: lfence
 * 0000000140422388: jmp     loc_140422614
 * 000000014042238D: movzx   eax, word ptr gs:864h
 * 0000000140422396: mov     ecx, 48h ; 'H'
 * 000000014042239B: xor     edx, edx
 * 000000014042239D: wrmsr
 * 000000014042239F: jmp     loc_140422614
 * 00000001404223A4: test    cs:KiKvaShadow, 1
 * 00000001404223AB: jnz     short loc_1404223B0
 * 00000001404223AD: swapgs
 * 00000001404223B0: lfence
 * 00000001404223B3: mov     rcx, gs:95A8h
 * 00000001404223BC: test    rcx, rcx
 * 00000001404223BF: jz      short loc_1404223E0
 * 00000001404223C1: rdsspq  rdx
 * 00000001404223C6: mov     r10, gs:95A0h
 * 00000001404223CF: add     r10, 8
 * 00000001404223D3: cmp     rdx, r10
 * 00000001404223D6: jnz     short loc_1404223E0
 * 00000001404223D8: rstorssp qword ptr [rcx]
 * 00000001404223DC: saveprevssp
 * 00000001404223E0: mov     r10, gs:188h
 * 00000001404223E9: mov     rcx, gs:188h
 * 00000001404223F2: mov     rcx, [rcx+220h]
 * 00000001404223F9: mov     rcx, [rcx+9E0h]
 * 0000000140422400: mov     gs:858h, rcx
 * 0000000140422409: mov     cx, gs:850h
 * 0000000140422412: mov     gs:852h, cx
 * 000000014042241B: mov     cx, gs:860h
 * 0000000140422424: mov     gs:854h, cx
 * 000000014042242D: movzx   eax, word ptr gs:866h
 * 0000000140422436: cmp     gs:864h, ax
 * 000000014042243F: jz      short loc_140422453
 * 0000000140422441: mov     gs:864h, ax
 * 000000014042244A: mov     ecx, 48h ; 'H'
 * 000000014042244F: xor     edx, edx
 * 0000000140422451: wrmsr
 * 0000000140422453: movzx   edx, word ptr gs:860h
 * 000000014042245C: test    edx, 8
 * 0000000140422462: jz      short loc_14042247B
 * 0000000140422464: mov     eax, 1
 * 0000000140422469: xor     edx, edx
 * 000000014042246B: mov     ecx, 49h ; 'I'
 * 0000000140422470: wrmsr
 * 0000000140422472: movzx   edx, word ptr gs:860h
 * 000000014042247B: test    edx, 2
 * 0000000140422481: jz      loc_1404225BE
 * 0000000140422487: call    loc_14042259A
 * 000000014042248C: add     rsp, 8
 * 0000000140422490: call    loc_1404225A3
 * 0000000140422495: add     rsp, 8
 * 0000000140422499: call    loc_14042248C
 * 000000014042249E: add     rsp, 8
 * 00000001404224A2: call    loc_140422495
 * 00000001404224A7: add     rsp, 8
 * 00000001404224AB: call    loc_14042249E
 * 00000001404224B0: add     rsp, 8
 * 00000001404224B4: call    loc_1404224A7
 * 00000001404224B9: add     rsp, 8
 * 00000001404224BD: call    loc_1404224B0
 * 00000001404224C2: add     rsp, 8
 * 00000001404224C6: call    loc_1404224B9
 * 00000001404224CB: add     rsp, 8
 * 00000001404224CF: call    loc_1404224C2
 * 00000001404224D4: add     rsp, 8
 * 00000001404224D8: call    loc_1404224CB
 * 00000001404224DD: add     rsp, 8
 * 00000001404224E1: call    loc_1404224D4
 * 00000001404224E6: add     rsp, 8
 * 00000001404224EA: call    loc_1404224DD
 * 00000001404224EF: add     rsp, 8
 * 00000001404224F3: call    loc_1404224E6
 * 00000001404224F8: add     rsp, 8
 * 00000001404224FC: call    loc_1404224EF
 * 0000000140422501: add     rsp, 8
 * 0000000140422505: call    loc_1404224F8
 * 000000014042250A: add     rsp, 8
 * 000000014042250E: call    loc_140422501
 * 0000000140422513: add     rsp, 8
 * 0000000140422517: call    loc_14042250A
 * 000000014042251C: add     rsp, 8
 * 0000000140422520: call    loc_140422513
 * 0000000140422525: add     rsp, 8
 * 0000000140422529: call    loc_14042251C
 * 000000014042252E: add     rsp, 8
 * 0000000140422532: call    loc_140422525
 * 0000000140422537: add     rsp, 8
 * 000000014042253B: call    loc_14042252E
 * 0000000140422540: add     rsp, 8
 * 0000000140422544: call    loc_140422537
 * 0000000140422549: add     rsp, 8
 * 000000014042254D: call    loc_140422540
 * 0000000140422552: add     rsp, 8
 * 0000000140422556: call    loc_140422549
 * 000000014042255B: add     rsp, 8
 * 000000014042255F: call    loc_140422552
 * 0000000140422564: add     rsp, 8
 * 0000000140422568: call    loc_14042255B
 * 000000014042256D: add     rsp, 8
 * 0000000140422571: call    loc_140422564
 * 0000000140422576: add     rsp, 8
 * 000000014042257A: call    loc_14042256D
 * 000000014042257F: add     rsp, 8
 * 0000000140422583: call    loc_140422576
 * 0000000140422588: add     rsp, 8
 * 000000014042258C: call    loc_14042257F
 * 0000000140422591: add     rsp, 8
 * 0000000140422595: call    loc_140422588
 * 000000014042259A: add     rsp, 8
 * 000000014042259E: call    loc_140422591
 * 00000001404225A3: add     rsp, 8
 * 00000001404225A7: mov     eax, 0DADAh
 * 00000001404225AC: test    byte ptr gs:862h, 8
 * 00000001404225B5: jz      short loc_1404225BE
 * 00000001404225B7: mov     al, 20h ; ' '
 * 00000001404225B9: incsspq rax
 * 00000001404225BE: test    edx, 200h
 * 00000001404225C4: jz      short loc_1404225CB
 * 00000001404225C6: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404225CB: lfence
 * 00000001404225CE: mov     byte ptr gs:856h, 0
 * 00000001404225D7: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404225DE: jz      short loc_1404225FF
 * 00000001404225E0: mov     ecx, 6A7h
 * 00000001404225E5: rdmsr
 * 00000001404225E7: cmp     edx, 0
 * 00000001404225EA: jz      short loc_1404225FF
 * 00000001404225EC: mov     ecx, edx
 * 00000001404225EE: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404225F4: cmp     edx, ecx
 * 00000001404225F6: jz      short loc_1404225FF
 * 00000001404225F8: mov     ecx, 6A7h
 * 00000001404225FD: wrmsr
 * 00000001404225FF: test    byte ptr [r10+3], 3
 * 0000000140422604: mov     [rbp+0D8h+var_58], 0
 * 000000014042260D: jz      short loc_140422614
 * 000000014042260F: call    KiSaveDebugRegisterState
 * 0000000140422614: cld
 * 0000000140422615: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140422619: ldmxcsr dword ptr gs:180h
 * 0000000140422622: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140422626: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042262A: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042262E: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140422632: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140422636: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042263A: cmp     byte ptr gs:82DAh, 0
 * 0000000140422643: jz      short loc_14042264A
 * 0000000140422645: call    KeWakeProcessor
 * 000000014042264A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140422651: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140422658: jnb     short loc_140422673
 * 000000014042265A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140422661: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140422668: jb      short loc_140422673
 * 000000014042266A: lea     rcx, [rbp+0D8h+var_158]
 * 000000014042266E: call    KiCheckForSListAddress
 * 0000000140422673: movzx   eax, byte ptr [rbp+0E0h]
 * 000000014042267A: mov     rsi, gs:20h
 * 0000000140422683: mov     rsi, [rsi+rax*8+3400h]
 * 000000014042268B: inc     dword ptr gs:82C0h
 * 0000000140422693: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042269A: jz      short loc_14042269F
 * 000000014042269C: clac
 * 000000014042269F: test    rsi, rsi
 * 00000001404226A2: jz      short loc_1404226AD
 * 00000001404226A4: mov     rax, [rsi+50h]
 * 00000001404226A8: jmp     _guard_dispatch_icall
 * 00000001404226AD: mov     ecx, eax
 * 00000001404226AF: shr     ecx, 4
 * 00000001404226B2: cmp     cs:KiIrqlFlags, 0
 * 00000001404226B9: jz      short loc_1404226C2
 * 00000001404226BB: call    KzSetIrqlUnsafe
 * 00000001404226C0: jmp     short loc_1404226CA
 * 00000001404226C2: mov     rax, cr8
 * 00000001404226C6: mov     cr8, rcx
 * 00000001404226CA: mov     [rbp+0D8h+var_12F], al
 * 00000001404226CD: mov     rcx, gs:20h
 * 00000001404226D6: inc     byte ptr [rcx+20h]
 * 00000001404226D9: cmp     byte ptr [rcx+20h], 1
 * 00000001404226DD: jnz     short loc_14042272F
 * 00000001404226DF: rdtsc
 * 00000001404226E1: shl     rdx, 20h
 * 00000001404226E5: or      rax, rdx
 * 00000001404226E8: mov     r8, [rcx+8]
 * 00000001404226EC: sub     rax, [rcx+8180h]
 * 00000001404226F3: add     [r8+48h], rax
 * 00000001404226F7: mov     edx, [r8+50h]
 * 00000001404226FB: add     [rcx+8180h], rax
 * 0000000140422702: add     rdx, rax
 * 0000000140422705: mov     ecx, edx
 * 0000000140422707: shr     rdx, 20h
 * 000000014042270B: jz      short loc_140422710
 * 000000014042270D: or      ecx, 0FFFFFFFFh
 * 0000000140422710: mov     [r8+50h], ecx
 * 0000000140422714: test    byte ptr [r8+2], 0BEh
 * 0000000140422719: jz      short loc_14042272F
 * 000000014042271B: mov     rdx, r8
 * 000000014042271E: mov     r8, rax
 * 0000000140422721: mov     rcx, gs:20h
 * 000000014042272A: call    KiEndThreadAccountingPeriod
 * 000000014042272F: sti
 * 0000000140422730: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 000000014042273A: jz      short loc_140422748
 * 000000014042273C: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140422743: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140422748: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 000000014042274F: jz      short loc_140422770
 * 0000000140422751: and     [rbp+0D8h+var_138], 0
 * 0000000140422756: xor     r9, r9
 * 0000000140422759: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140422761: mov     edx, 1
 * 0000000140422766: mov     ecx, 12h
 * 000000014042276B: call    KiBugCheckDispatch
 * 0000000140422770: cli
 * 0000000140422771: mov     rcx, rsi
 * 0000000140422774: call    HalPerformEndOfInterrupt
 * 0000000140422779: mov     rcx, gs:20h
 * 0000000140422782: cmp     byte ptr [rcx+20h], 1
 * 0000000140422786: ja      short loc_140422802
 * 0000000140422788: rdtsc
 * 000000014042278A: shl     rdx, 20h
 * 000000014042278E: or      rax, rdx
 * 0000000140422791: sub     rax, [rcx+8180h]
 * 0000000140422798: add     [rcx+8278h], rax
 * 000000014042279F: add     [rcx+8180h], rax
 * 00000001404227A6: mov     r8, rax
 * 00000001404227A9: mov     rax, [rcx+8]
 * 00000001404227AD: test    byte ptr [rax+2], 72h
 * 00000001404227B1: jz      short loc_1404227C6
 * 00000001404227B3: xor     edx, edx
 * 00000001404227B5: call    KiBeginThreadAccountingPeriod
 * 00000001404227BA: mov     rcx, gs:20h
 * 00000001404227C3: inc     byte ptr [rcx+20h]
 * 00000001404227C6: mov     dl, [rcx+6]
 * 00000001404227C9: and     byte ptr [rcx+6], 0
 * 00000001404227CD: cmp     byte ptr [rcx+7], 0
 * 00000001404227D1: jnz     short loc_140422802
 * 00000001404227D3: test    dl, dl
 * 00000001404227D5: jz      short loc_140422802
 * 00000001404227D7: cmp     [rbp+0D8h+var_12F], 2
 * 00000001404227DB: jnb     short loc_1404227E8
 * 00000001404227DD: and     byte ptr [rcx+20h], 0
 * 00000001404227E1: call    KiDpcInterruptBypass
 * 00000001404227E6: jmp     short loc_140422805
 * 00000001404227E8: mov     ecx, 2
 * 00000001404227ED: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404227F4: nop     dword ptr [rax+rax+00h]
 * 00000001404227F9: mov     rcx, gs:20h
 * 0000000140422802: dec     byte ptr [rcx+20h]
 * 0000000140422805: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140422809: cmp     cs:KiIrqlFlags, 0
 * 0000000140422810: jz      short loc_140422819
 * 0000000140422812: call    KzSetIrqlUnsafe
 * 0000000140422817: jmp     short loc_14042281D
 * 0000000140422819: mov     cr8, rcx
 * 000000014042281D: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140422824: cli
 * 0000000140422825: test    [rbp+0D8h+arg_8], 1
 * 000000014042282C: jz      loc_140422B1A
 * 0000000140422832: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140422839: jz      short loc_14042283E
 * 000000014042283B: stac
 * 000000014042283E: mov     rcx, gs:188h
 * 0000000140422847: test    byte ptr [rcx+0C2h], 3
 * 000000014042284E: jz      short loc_14042286B
 * 0000000140422850: mov     ecx, 1
 * 0000000140422855: mov     cr8, rcx
 * 0000000140422859: sti
 * 000000014042285A: call    KiInitiateUserApc
 * 000000014042285F: cli
 * 0000000140422860: mov     ecx, 0
 * 0000000140422865: mov     cr8, rcx
 * 0000000140422869: jmp     short loc_14042283E
 * 000000014042286B: test    byte ptr gs:86Ch, 2
 * 0000000140422874: jz      short loc_14042287D
 * 0000000140422876: xor     ecx, ecx
 * 0000000140422878: call    KiUpdateStibpPairing
 * 000000014042287D: mov     rcx, gs:188h
 * 0000000140422886: test    dword ptr [rcx], 8000000h
 * 000000014042288C: jz      short loc_140422893
 * 000000014042288E: call    KiRestoreSetContextState
 * 0000000140422893: mov     rcx, gs:188h
 * 000000014042289C: test    dword ptr [rcx], 10000h
 * 00000001404228A2: jz      short loc_1404228B8
 * 00000001404228A4: test    byte ptr [rcx+2], 1
 * 00000001404228A8: jz      short loc_1404228B8
 * 00000001404228AA: call    KiCopyCounters
 * 00000001404228AF: mov     rcx, gs:188h
 * 00000001404228B8: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404228BC: cmp     [rbp+0D8h+var_58], 0
 * 00000001404228C4: jz      short loc_1404228CB
 * 00000001404228C6: call    KiRestoreDebugRegisterState
 * 00000001404228CB: mov     rcx, gs:188h
 * 00000001404228D4: bt      dword ptr [rcx+74h], 16h
 * 00000001404228D9: jnb     short loc_140422905
 * 00000001404228DB: xor     ecx, ecx
 * 00000001404228DD: rdsspq  rcx
 * 00000001404228E2: mov     r8, gs:95A8h
 * 00000001404228EB: add     r8, 8
 * 00000001404228EF: cmp     rcx, r8
 * 00000001404228F2: jnz     short loc_140422905
 * 00000001404228F4: mov     rcx, gs:95A0h
 * 00000001404228FD: rstorssp qword ptr [rcx]
 * 0000000140422901: saveprevssp
 * 0000000140422905: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140422909: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014042290D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140422911: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140422915: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140422919: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014042291D: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140422921: mov     r10, [rbp+0D8h+var_100]
 * 0000000140422925: mov     r9, [rbp+0D8h+var_108]
 * 0000000140422929: mov     r8, [rbp+0D8h+var_110]
 * 000000014042292D: mov     byte ptr gs:856h, 0
 * 0000000140422936: movzx   eax, word ptr gs:86Ah
 * 000000014042293F: cmp     gs:864h, ax
 * 0000000140422948: jz      short loc_14042295C
 * 000000014042294A: mov     gs:864h, ax
 * 0000000140422953: mov     ecx, 48h ; 'H'
 * 0000000140422958: xor     edx, edx
 * 000000014042295A: wrmsr
 * 000000014042295C: btr     word ptr gs:860h, 2
 * 0000000140422967: jnb     short loc_140422977
 * 0000000140422969: mov     eax, 1
 * 000000014042296E: xor     edx, edx
 * 0000000140422970: mov     ecx, 49h ; 'I'
 * 0000000140422975: wrmsr
 * 0000000140422977: btr     word ptr gs:860h, 5
 * 0000000140422982: jnb     loc_140422ABF
 * 0000000140422988: call    loc_140422A9B
 * 000000014042298D: add     rsp, 8
 * 0000000140422991: call    loc_140422AA4
 * 0000000140422996: add     rsp, 8
 * 000000014042299A: call    loc_14042298D
 * 000000014042299F: add     rsp, 8
 * 00000001404229A3: call    loc_140422996
 * 00000001404229A8: add     rsp, 8
 * 00000001404229AC: call    loc_14042299F
 * 00000001404229B1: add     rsp, 8
 * 00000001404229B5: call    loc_1404229A8
 * 00000001404229BA: add     rsp, 8
 * 00000001404229BE: call    loc_1404229B1
 * 00000001404229C3: add     rsp, 8
 * 00000001404229C7: call    loc_1404229BA
 * 00000001404229CC: add     rsp, 8
 * 00000001404229D0: call    loc_1404229C3
 * 00000001404229D5: add     rsp, 8
 * 00000001404229D9: call    loc_1404229CC
 * 00000001404229DE: add     rsp, 8
 * 00000001404229E2: call    loc_1404229D5
 * 00000001404229E7: add     rsp, 8
 * 00000001404229EB: call    loc_1404229DE
 * 00000001404229F0: add     rsp, 8
 * 00000001404229F4: call    loc_1404229E7
 * 00000001404229F9: add     rsp, 8
 * 00000001404229FD: call    loc_1404229F0
 * 0000000140422A02: add     rsp, 8
 * 0000000140422A06: call    loc_1404229F9
 * 0000000140422A0B: add     rsp, 8
 * 0000000140422A0F: call    loc_140422A02
 * 0000000140422A14: add     rsp, 8
 * 0000000140422A18: call    loc_140422A0B
 * 0000000140422A1D: add     rsp, 8
 * 0000000140422A21: call    loc_140422A14
 * 0000000140422A26: add     rsp, 8
 * 0000000140422A2A: call    loc_140422A1D
 * 0000000140422A2F: add     rsp, 8
 * 0000000140422A33: call    loc_140422A26
 * 0000000140422A38: add     rsp, 8
 * 0000000140422A3C: call    loc_140422A2F
 * 0000000140422A41: add     rsp, 8
 * 0000000140422A45: call    loc_140422A38
 * 0000000140422A4A: add     rsp, 8
 * 0000000140422A4E: call    loc_140422A41
 * 0000000140422A53: add     rsp, 8
 * 0000000140422A57: call    loc_140422A4A
 * 0000000140422A5C: add     rsp, 8
 * 0000000140422A60: call    loc_140422A53
 * 0000000140422A65: add     rsp, 8
 * 0000000140422A69: call    loc_140422A5C
 * 0000000140422A6E: add     rsp, 8
 * 0000000140422A72: call    loc_140422A65
 * 0000000140422A77: add     rsp, 8
 * 0000000140422A7B: call    loc_140422A6E
 * 0000000140422A80: add     rsp, 8
 * 0000000140422A84: call    loc_140422A77
 * 0000000140422A89: add     rsp, 8
 * 0000000140422A8D: call    loc_140422A80
 * 0000000140422A92: add     rsp, 8
 * 0000000140422A96: call    loc_140422A89
 * 0000000140422A9B: add     rsp, 8
 * 0000000140422A9F: call    loc_140422A92
 * 0000000140422AA4: add     rsp, 8
 * 0000000140422AA8: mov     eax, 0DADAh
 * 0000000140422AAD: test    byte ptr gs:862h, 8
 * 0000000140422AB6: jz      short loc_140422ABF
 * 0000000140422AB8: mov     al, 20h ; ' '
 * 0000000140422ABA: incsspq rax
 * 0000000140422ABF: test    word ptr gs:860h, 80h
 * 0000000140422ACA: jz      short loc_140422AD8
 * 0000000140422ACC: xor     eax, eax
 * 0000000140422ACE: xor     edx, edx
 * 0000000140422AD0: mov     ecx, 1
 * 0000000140422AD5: div     rcx
 * 0000000140422AD8: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140422ADC: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140422AE0: mov     rax, [rbp+0D8h+var_128]
 * 0000000140422AE4: mov     rsp, rbp
 * 0000000140422AE7: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140422AEE: add     rsp, 0E8h
 * 0000000140422AF5: test    cs:KiKvaShadow, 1
 * 0000000140422AFC: jz      short loc_140422B03
 * 0000000140422AFE: jmp     KiKernelExit
 * 0000000140422B03: test    word ptr gs:860h, 100h
 * 0000000140422B0E: jz      short loc_140422B15
 * 0000000140422B10: verw    [rsp-10h+arg_20]
 * 0000000140422B15: swapgs
 * 0000000140422B18: iretq
 * 0000000140422B1A: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140422B1E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140422B22: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140422B26: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140422B2A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140422B2E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140422B32: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140422B36: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140422B3A: mov     r10, [rbp+0D8h+var_100]
 * 0000000140422B3E: mov     r9, [rbp+0D8h+var_108]
 * 0000000140422B42: mov     r8, [rbp+0D8h+var_110]
 * 0000000140422B46: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140422B4A: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140422B4E: mov     rax, [rbp+0D8h+var_128]
 * 0000000140422B52: mov     rsp, rbp
 * 0000000140422B55: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140422B5C: add     rsp, 0E8h
 * 0000000140422B63: iretq
 */
