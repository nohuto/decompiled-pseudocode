/*
 * XREFs of KiSwInterrupt @ 0x140426460
 * Callers:
 *     KiSwInterruptShadow @ 0x140AF7CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248410 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiSwInterruptDispatch @ 0x1403E3F70 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140426460
 * Reason: Hex-Rays returned no pseudocode for 0x140426460
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426460: sub     rsp, 8
 * 0000000140426464: push    rbp
 * 0000000140426465: push    rsi
 * 0000000140426466: sub     rsp, 150h
 * 000000014042646D: lea     rbp, [rsp+80h]
 * 0000000140426475: mov     [rbp+0E8h+var_13D], 0
 * 0000000140426479: mov     [rbp+0E8h+var_138], rax
 * 000000014042647D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140426481: mov     [rbp+0E8h+var_128], rdx
 * 0000000140426485: mov     [rbp+0E8h+var_120], r8
 * 0000000140426489: mov     [rbp+0E8h+var_118], r9
 * 000000014042648D: mov     [rbp+0E8h+var_110], r10
 * 0000000140426491: mov     [rbp+0E8h+var_108], r11
 * 0000000140426495: test    [rbp+0E8h+arg_0], 1
 * 000000014042649C: jnz     short loc_1404264D8
 * 000000014042649E: xor     edx, edx
 * 00000001404264A0: rdsspq  rdx
 * 00000001404264A5: mov     [rbp+0E8h+var_90], rdx
 * 00000001404264A9: lfence
 * 00000001404264AC: test    word ptr gs:860h, 1
 * 00000001404264B7: jnz     short loc_1404264C1
 * 00000001404264B9: lfence
 * 00000001404264BC: jmp     loc_140426748
 * 00000001404264C1: movzx   eax, word ptr gs:864h
 * 00000001404264CA: mov     ecx, 48h ; 'H'
 * 00000001404264CF: xor     edx, edx
 * 00000001404264D1: wrmsr
 * 00000001404264D3: jmp     loc_140426748
 * 00000001404264D8: test    cs:KiKvaShadow, 1
 * 00000001404264DF: jnz     short loc_1404264E4
 * 00000001404264E1: swapgs
 * 00000001404264E4: lfence
 * 00000001404264E7: mov     rcx, gs:95A8h
 * 00000001404264F0: test    rcx, rcx
 * 00000001404264F3: jz      short loc_140426514
 * 00000001404264F5: rdsspq  rdx
 * 00000001404264FA: mov     r10, gs:95A0h
 * 0000000140426503: add     r10, 8
 * 0000000140426507: cmp     rdx, r10
 * 000000014042650A: jnz     short loc_140426514
 * 000000014042650C: rstorssp qword ptr [rcx]
 * 0000000140426510: saveprevssp
 * 0000000140426514: mov     r10, gs:188h
 * 000000014042651D: mov     rcx, gs:188h
 * 0000000140426526: mov     rcx, [rcx+220h]
 * 000000014042652D: mov     rcx, [rcx+9E0h]
 * 0000000140426534: mov     gs:858h, rcx
 * 000000014042653D: mov     cx, gs:850h
 * 0000000140426546: mov     gs:852h, cx
 * 000000014042654F: mov     cx, gs:860h
 * 0000000140426558: mov     gs:854h, cx
 * 0000000140426561: movzx   eax, word ptr gs:866h
 * 000000014042656A: cmp     gs:864h, ax
 * 0000000140426573: jz      short loc_140426587
 * 0000000140426575: mov     gs:864h, ax
 * 000000014042657E: mov     ecx, 48h ; 'H'
 * 0000000140426583: xor     edx, edx
 * 0000000140426585: wrmsr
 * 0000000140426587: movzx   edx, word ptr gs:860h
 * 0000000140426590: test    edx, 8
 * 0000000140426596: jz      short loc_1404265AF
 * 0000000140426598: mov     eax, 1
 * 000000014042659D: xor     edx, edx
 * 000000014042659F: mov     ecx, 49h ; 'I'
 * 00000001404265A4: wrmsr
 * 00000001404265A6: movzx   edx, word ptr gs:860h
 * 00000001404265AF: test    edx, 2
 * 00000001404265B5: jz      loc_1404266F2
 * 00000001404265BB: call    loc_1404266CE
 * 00000001404265C0: add     rsp, 8
 * 00000001404265C4: call    loc_1404266D7
 * 00000001404265C9: add     rsp, 8
 * 00000001404265CD: call    loc_1404265C0
 * 00000001404265D2: add     rsp, 8
 * 00000001404265D6: call    loc_1404265C9
 * 00000001404265DB: add     rsp, 8
 * 00000001404265DF: call    loc_1404265D2
 * 00000001404265E4: add     rsp, 8
 * 00000001404265E8: call    loc_1404265DB
 * 00000001404265ED: add     rsp, 8
 * 00000001404265F1: call    loc_1404265E4
 * 00000001404265F6: add     rsp, 8
 * 00000001404265FA: call    loc_1404265ED
 * 00000001404265FF: add     rsp, 8
 * 0000000140426603: call    loc_1404265F6
 * 0000000140426608: add     rsp, 8
 * 000000014042660C: call    loc_1404265FF
 * 0000000140426611: add     rsp, 8
 * 0000000140426615: call    loc_140426608
 * 000000014042661A: add     rsp, 8
 * 000000014042661E: call    loc_140426611
 * 0000000140426623: add     rsp, 8
 * 0000000140426627: call    loc_14042661A
 * 000000014042662C: add     rsp, 8
 * 0000000140426630: call    loc_140426623
 * 0000000140426635: add     rsp, 8
 * 0000000140426639: call    loc_14042662C
 * 000000014042663E: add     rsp, 8
 * 0000000140426642: call    loc_140426635
 * 0000000140426647: add     rsp, 8
 * 000000014042664B: call    loc_14042663E
 * 0000000140426650: add     rsp, 8
 * 0000000140426654: call    loc_140426647
 * 0000000140426659: add     rsp, 8
 * 000000014042665D: call    loc_140426650
 * 0000000140426662: add     rsp, 8
 * 0000000140426666: call    loc_140426659
 * 000000014042666B: add     rsp, 8
 * 000000014042666F: call    loc_140426662
 * 0000000140426674: add     rsp, 8
 * 0000000140426678: call    loc_14042666B
 * 000000014042667D: add     rsp, 8
 * 0000000140426681: call    loc_140426674
 * 0000000140426686: add     rsp, 8
 * 000000014042668A: call    loc_14042667D
 * 000000014042668F: add     rsp, 8
 * 0000000140426693: call    loc_140426686
 * 0000000140426698: add     rsp, 8
 * 000000014042669C: call    loc_14042668F
 * 00000001404266A1: add     rsp, 8
 * 00000001404266A5: call    loc_140426698
 * 00000001404266AA: add     rsp, 8
 * 00000001404266AE: call    loc_1404266A1
 * 00000001404266B3: add     rsp, 8
 * 00000001404266B7: call    loc_1404266AA
 * 00000001404266BC: add     rsp, 8
 * 00000001404266C0: call    loc_1404266B3
 * 00000001404266C5: add     rsp, 8
 * 00000001404266C9: call    loc_1404266BC
 * 00000001404266CE: add     rsp, 8
 * 00000001404266D2: call    loc_1404266C5
 * 00000001404266D7: add     rsp, 8
 * 00000001404266DB: mov     eax, 0DADAh
 * 00000001404266E0: test    byte ptr gs:862h, 8
 * 00000001404266E9: jz      short loc_1404266F2
 * 00000001404266EB: mov     al, 20h ; ' '
 * 00000001404266ED: incsspq rax
 * 00000001404266F2: test    edx, 200h
 * 00000001404266F8: jz      short loc_1404266FF
 * 00000001404266FA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404266FF: lfence
 * 0000000140426702: mov     byte ptr gs:856h, 0
 * 000000014042670B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140426712: jz      short loc_140426733
 * 0000000140426714: mov     ecx, 6A7h
 * 0000000140426719: rdmsr
 * 000000014042671B: cmp     edx, 0
 * 000000014042671E: jz      short loc_140426733
 * 0000000140426720: mov     ecx, edx
 * 0000000140426722: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140426728: cmp     edx, ecx
 * 000000014042672A: jz      short loc_140426733
 * 000000014042672C: mov     ecx, 6A7h
 * 0000000140426731: wrmsr
 * 0000000140426733: test    byte ptr [r10+3], 3
 * 0000000140426738: mov     [rbp+0E8h+var_68], 0
 * 0000000140426741: jz      short loc_140426748
 * 0000000140426743: call    KiSaveDebugRegisterState
 * 0000000140426748: cld
 * 0000000140426749: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042674D: ldmxcsr dword ptr gs:180h
 * 0000000140426756: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042675A: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042675E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140426762: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140426766: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042676A: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042676E: cmp     byte ptr gs:82DAh, 0
 * 0000000140426777: jz      short loc_14042677E
 * 0000000140426779: call    KeWakeProcessor
 * 000000014042677E: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140426785: cmp     rax, [rbp+0E8h]
 * 000000014042678C: jnb     short loc_1404267A7
 * 000000014042678E: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140426795: cmp     rax, [rbp+0E8h]
 * 000000014042679C: jb      short loc_1404267A7
 * 000000014042679E: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404267A2: call    KiCheckForSListAddress
 * 00000001404267A7: xor     esi, esi
 * 00000001404267A9: inc     dword ptr gs:82C0h
 * 00000001404267B1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404267B8: jz      short loc_1404267BD
 * 00000001404267BA: clac
 * 00000001404267BD: mov     ecx, 2
 * 00000001404267C2: cmp     cs:KiIrqlFlags, 0
 * 00000001404267C9: jz      short loc_1404267D2
 * 00000001404267CB: call    KzSetIrqlUnsafe
 * 00000001404267D0: jmp     short loc_1404267DA
 * 00000001404267D2: mov     rax, cr8
 * 00000001404267D6: mov     cr8, rcx
 * 00000001404267DA: mov     [rbp+0E8h+var_13F], al
 * 00000001404267DD: mov     rcx, gs:20h
 * 00000001404267E6: inc     byte ptr [rcx+20h]
 * 00000001404267E9: cmp     byte ptr [rcx+20h], 1
 * 00000001404267ED: jnz     short loc_14042683F
 * 00000001404267EF: rdtsc
 * 00000001404267F1: shl     rdx, 20h
 * 00000001404267F5: or      rax, rdx
 * 00000001404267F8: mov     r8, [rcx+8]
 * 00000001404267FC: sub     rax, [rcx+8180h]
 * 0000000140426803: add     [r8+48h], rax
 * 0000000140426807: mov     edx, [r8+50h]
 * 000000014042680B: add     [rcx+8180h], rax
 * 0000000140426812: add     rdx, rax
 * 0000000140426815: mov     ecx, edx
 * 0000000140426817: shr     rdx, 20h
 * 000000014042681B: jz      short loc_140426820
 * 000000014042681D: or      ecx, 0FFFFFFFFh
 * 0000000140426820: mov     [r8+50h], ecx
 * 0000000140426824: test    byte ptr [r8+2], 0BEh
 * 0000000140426829: jz      short loc_14042683F
 * 000000014042682B: mov     rdx, r8
 * 000000014042682E: mov     r8, rax
 * 0000000140426831: mov     rcx, gs:20h
 * 000000014042683A: call    KiEndThreadAccountingPeriod
 * 000000014042683F: sti
 * 0000000140426840: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140426844: call    KiSwInterruptDispatch
 * 0000000140426849: cli
 * 000000014042684A: mov     rcx, rsi
 * 000000014042684D: call    HalPerformEndOfInterrupt
 * 0000000140426852: mov     rcx, gs:20h
 * 000000014042685B: cmp     byte ptr [rcx+20h], 1
 * 000000014042685F: ja      short loc_1404268DB
 * 0000000140426861: rdtsc
 * 0000000140426863: shl     rdx, 20h
 * 0000000140426867: or      rax, rdx
 * 000000014042686A: sub     rax, [rcx+8180h]
 * 0000000140426871: add     [rcx+8278h], rax
 * 0000000140426878: add     [rcx+8180h], rax
 * 000000014042687F: mov     r8, rax
 * 0000000140426882: mov     rax, [rcx+8]
 * 0000000140426886: test    byte ptr [rax+2], 72h
 * 000000014042688A: jz      short loc_14042689F
 * 000000014042688C: xor     edx, edx
 * 000000014042688E: call    KiBeginThreadAccountingPeriod
 * 0000000140426893: mov     rcx, gs:20h
 * 000000014042689C: inc     byte ptr [rcx+20h]
 * 000000014042689F: mov     dl, [rcx+6]
 * 00000001404268A2: and     byte ptr [rcx+6], 0
 * 00000001404268A6: cmp     byte ptr [rcx+7], 0
 * 00000001404268AA: jnz     short loc_1404268DB
 * 00000001404268AC: test    dl, dl
 * 00000001404268AE: jz      short loc_1404268DB
 * 00000001404268B0: cmp     [rbp+0E8h+var_13F], 2
 * 00000001404268B4: jnb     short loc_1404268C1
 * 00000001404268B6: and     byte ptr [rcx+20h], 0
 * 00000001404268BA: call    KiDpcInterruptBypass
 * 00000001404268BF: jmp     short loc_1404268DE
 * 00000001404268C1: mov     ecx, 2
 * 00000001404268C6: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404268CD: nop     dword ptr [rax+rax+00h]
 * 00000001404268D2: mov     rcx, gs:20h
 * 00000001404268DB: dec     byte ptr [rcx+20h]
 * 00000001404268DE: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404268E2: cmp     cs:KiIrqlFlags, 0
 * 00000001404268E9: jz      short loc_1404268F2
 * 00000001404268EB: call    KzSetIrqlUnsafe
 * 00000001404268F0: jmp     short loc_1404268F6
 * 00000001404268F2: mov     cr8, rcx
 * 00000001404268F6: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404268FD: cli
 * 00000001404268FE: test    [rbp+0E8h+arg_0], 1
 * 0000000140426905: jz      loc_140426BF3
 * 000000014042690B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426912: jz      short loc_140426917
 * 0000000140426914: stac
 * 0000000140426917: mov     rcx, gs:188h
 * 0000000140426920: test    byte ptr [rcx+0C2h], 3
 * 0000000140426927: jz      short loc_140426944
 * 0000000140426929: mov     ecx, 1
 * 000000014042692E: mov     cr8, rcx
 * 0000000140426932: sti
 * 0000000140426933: call    KiInitiateUserApc
 * 0000000140426938: cli
 * 0000000140426939: mov     ecx, 0
 * 000000014042693E: mov     cr8, rcx
 * 0000000140426942: jmp     short loc_140426917
 * 0000000140426944: test    byte ptr gs:86Ch, 2
 * 000000014042694D: jz      short loc_140426956
 * 000000014042694F: xor     ecx, ecx
 * 0000000140426951: call    KiUpdateStibpPairing
 * 0000000140426956: mov     rcx, gs:188h
 * 000000014042695F: test    dword ptr [rcx], 8000000h
 * 0000000140426965: jz      short loc_14042696C
 * 0000000140426967: call    KiRestoreSetContextState
 * 000000014042696C: mov     rcx, gs:188h
 * 0000000140426975: test    dword ptr [rcx], 10000h
 * 000000014042697B: jz      short loc_140426991
 * 000000014042697D: test    byte ptr [rcx+2], 1
 * 0000000140426981: jz      short loc_140426991
 * 0000000140426983: call    KiCopyCounters
 * 0000000140426988: mov     rcx, gs:188h
 * 0000000140426991: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140426995: cmp     [rbp+0E8h+var_68], 0
 * 000000014042699D: jz      short loc_1404269A4
 * 000000014042699F: call    KiRestoreDebugRegisterState
 * 00000001404269A4: mov     rcx, gs:188h
 * 00000001404269AD: bt      dword ptr [rcx+74h], 16h
 * 00000001404269B2: jnb     short loc_1404269DE
 * 00000001404269B4: xor     ecx, ecx
 * 00000001404269B6: rdsspq  rcx
 * 00000001404269BB: mov     r8, gs:95A8h
 * 00000001404269C4: add     r8, 8
 * 00000001404269C8: cmp     rcx, r8
 * 00000001404269CB: jnz     short loc_1404269DE
 * 00000001404269CD: mov     rcx, gs:95A0h
 * 00000001404269D6: rstorssp qword ptr [rcx]
 * 00000001404269DA: saveprevssp
 * 00000001404269DE: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404269E2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404269E6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404269EA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404269EE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404269F2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404269F6: mov     r11, [rbp+0E8h+var_108]
 * 00000001404269FA: mov     r10, [rbp+0E8h+var_110]
 * 00000001404269FE: mov     r9, [rbp+0E8h+var_118]
 * 0000000140426A02: mov     r8, [rbp+0E8h+var_120]
 * 0000000140426A06: mov     byte ptr gs:856h, 0
 * 0000000140426A0F: movzx   eax, word ptr gs:86Ah
 * 0000000140426A18: cmp     gs:864h, ax
 * 0000000140426A21: jz      short loc_140426A35
 * 0000000140426A23: mov     gs:864h, ax
 * 0000000140426A2C: mov     ecx, 48h ; 'H'
 * 0000000140426A31: xor     edx, edx
 * 0000000140426A33: wrmsr
 * 0000000140426A35: btr     word ptr gs:860h, 2
 * 0000000140426A40: jnb     short loc_140426A50
 * 0000000140426A42: mov     eax, 1
 * 0000000140426A47: xor     edx, edx
 * 0000000140426A49: mov     ecx, 49h ; 'I'
 * 0000000140426A4E: wrmsr
 * 0000000140426A50: btr     word ptr gs:860h, 5
 * 0000000140426A5B: jnb     loc_140426B98
 * 0000000140426A61: call    loc_140426B74
 * 0000000140426A66: add     rsp, 8
 * 0000000140426A6A: call    loc_140426B7D
 * 0000000140426A6F: add     rsp, 8
 * 0000000140426A73: call    loc_140426A66
 * 0000000140426A78: add     rsp, 8
 * 0000000140426A7C: call    loc_140426A6F
 * 0000000140426A81: add     rsp, 8
 * 0000000140426A85: call    loc_140426A78
 * 0000000140426A8A: add     rsp, 8
 * 0000000140426A8E: call    loc_140426A81
 * 0000000140426A93: add     rsp, 8
 * 0000000140426A97: call    loc_140426A8A
 * 0000000140426A9C: add     rsp, 8
 * 0000000140426AA0: call    loc_140426A93
 * 0000000140426AA5: add     rsp, 8
 * 0000000140426AA9: call    loc_140426A9C
 * 0000000140426AAE: add     rsp, 8
 * 0000000140426AB2: call    loc_140426AA5
 * 0000000140426AB7: add     rsp, 8
 * 0000000140426ABB: call    loc_140426AAE
 * 0000000140426AC0: add     rsp, 8
 * 0000000140426AC4: call    loc_140426AB7
 * 0000000140426AC9: add     rsp, 8
 * 0000000140426ACD: call    loc_140426AC0
 * 0000000140426AD2: add     rsp, 8
 * 0000000140426AD6: call    loc_140426AC9
 * 0000000140426ADB: add     rsp, 8
 * 0000000140426ADF: call    loc_140426AD2
 * 0000000140426AE4: add     rsp, 8
 * 0000000140426AE8: call    loc_140426ADB
 * 0000000140426AED: add     rsp, 8
 * 0000000140426AF1: call    loc_140426AE4
 * 0000000140426AF6: add     rsp, 8
 * 0000000140426AFA: call    loc_140426AED
 * 0000000140426AFF: add     rsp, 8
 * 0000000140426B03: call    loc_140426AF6
 * 0000000140426B08: add     rsp, 8
 * 0000000140426B0C: call    loc_140426AFF
 * 0000000140426B11: add     rsp, 8
 * 0000000140426B15: call    loc_140426B08
 * 0000000140426B1A: add     rsp, 8
 * 0000000140426B1E: call    loc_140426B11
 * 0000000140426B23: add     rsp, 8
 * 0000000140426B27: call    loc_140426B1A
 * 0000000140426B2C: add     rsp, 8
 * 0000000140426B30: call    loc_140426B23
 * 0000000140426B35: add     rsp, 8
 * 0000000140426B39: call    loc_140426B2C
 * 0000000140426B3E: add     rsp, 8
 * 0000000140426B42: call    loc_140426B35
 * 0000000140426B47: add     rsp, 8
 * 0000000140426B4B: call    loc_140426B3E
 * 0000000140426B50: add     rsp, 8
 * 0000000140426B54: call    loc_140426B47
 * 0000000140426B59: add     rsp, 8
 * 0000000140426B5D: call    loc_140426B50
 * 0000000140426B62: add     rsp, 8
 * 0000000140426B66: call    loc_140426B59
 * 0000000140426B6B: add     rsp, 8
 * 0000000140426B6F: call    loc_140426B62
 * 0000000140426B74: add     rsp, 8
 * 0000000140426B78: call    loc_140426B6B
 * 0000000140426B7D: add     rsp, 8
 * 0000000140426B81: mov     eax, 0DADAh
 * 0000000140426B86: test    byte ptr gs:862h, 8
 * 0000000140426B8F: jz      short loc_140426B98
 * 0000000140426B91: mov     al, 20h ; ' '
 * 0000000140426B93: incsspq rax
 * 0000000140426B98: test    word ptr gs:860h, 80h
 * 0000000140426BA3: jz      short loc_140426BB1
 * 0000000140426BA5: xor     eax, eax
 * 0000000140426BA7: xor     edx, edx
 * 0000000140426BA9: mov     ecx, 1
 * 0000000140426BAE: div     rcx
 * 0000000140426BB1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140426BB5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140426BB9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140426BBD: mov     rsp, rbp
 * 0000000140426BC0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140426BC7: add     rsp, 0E8h
 * 0000000140426BCE: test    cs:KiKvaShadow, 1
 * 0000000140426BD5: jz      short loc_140426BDC
 * 0000000140426BD7: jmp     KiKernelExit
 * 0000000140426BDC: test    word ptr gs:860h, 100h
 * 0000000140426BE7: jz      short loc_140426BEE
 * 0000000140426BE9: verw    [rsp+arg_18]
 * 0000000140426BEE: swapgs
 * 0000000140426BF1: iretq
 * 0000000140426BF3: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140426BF7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140426BFB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140426BFF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140426C03: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140426C07: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140426C0B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140426C0F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140426C13: mov     r10, [rbp+0E8h+var_110]
 * 0000000140426C17: mov     r9, [rbp+0E8h+var_118]
 * 0000000140426C1B: mov     r8, [rbp+0E8h+var_120]
 * 0000000140426C1F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140426C23: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140426C27: mov     rax, [rbp+0E8h+var_138]
 * 0000000140426C2B: mov     rsp, rbp
 * 0000000140426C2E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140426C35: add     rsp, 0E8h
 * 0000000140426C3C: iretq
 */
