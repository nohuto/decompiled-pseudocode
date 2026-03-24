/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140426430
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140425260 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1404255C0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425920 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140425C80 (KiVmbusInterrupt3.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140426430
 * Reason: Hex-Rays returned no pseudocode for 0x140426430
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426430: mov     rdx, rsp
 * 0000000140426433: mov     rcx, gs:8B58h
 * 000000014042643C: lea     rax, [rcx-6000h]
 * 0000000140426443: cmp     rax, rsp
 * 0000000140426446: ja      short loc_14042644D
 * 0000000140426448: cmp     rsp, rcx
 * 000000014042644B: jb      short loc_140426459
 * 000000014042644D: cmp     cs:KiBugCheckActive, 0
 * 0000000140426454: jnz     short loc_140426459
 * 0000000140426456: mov     rsp, rcx
 * 0000000140426459: sub     rsp, 20h
 * 000000014042645D: mov     [rsp+20h+var_10], rdx
 * 0000000140426462: call    KiVmbusInterruptSubDispatch
 * 0000000140426467: mov     rsp, [rsp+20h+var_10]
 * 000000014042646C: cli
 * 000000014042646D: mov     rcx, gs:20h
 * 0000000140426476: cmp     byte ptr [rcx+20h], 1
 * 000000014042647A: ja      short loc_1404264F6
 * 000000014042647C: rdtsc
 * 000000014042647E: shl     rdx, 20h
 * 0000000140426482: or      rax, rdx
 * 0000000140426485: sub     rax, [rcx+8180h]
 * 000000014042648C: add     [rcx+8278h], rax
 * 0000000140426493: add     [rcx+8180h], rax
 * 000000014042649A: mov     r8, rax
 * 000000014042649D: mov     rax, [rcx+8]
 * 00000001404264A1: test    byte ptr [rax+2], 72h
 * 00000001404264A5: jz      short loc_1404264BA
 * 00000001404264A7: xor     edx, edx
 * 00000001404264A9: call    KiBeginThreadAccountingPeriod
 * 00000001404264AE: mov     rcx, gs:20h
 * 00000001404264B7: inc     byte ptr [rcx+20h]
 * 00000001404264BA: mov     dl, [rcx+6]
 * 00000001404264BD: and     byte ptr [rcx+6], 0
 * 00000001404264C1: cmp     byte ptr [rcx+7], 0
 * 00000001404264C5: jnz     short loc_1404264F6
 * 00000001404264C7: test    dl, dl
 * 00000001404264C9: jz      short loc_1404264F6
 * 00000001404264CB: cmp     byte ptr [rbp-57h], 2
 * 00000001404264CF: jnb     short loc_1404264DC
 * 00000001404264D1: and     byte ptr [rcx+20h], 0
 * 00000001404264D5: call    KiDpcInterruptBypass
 * 00000001404264DA: jmp     short loc_1404264F9
 * 00000001404264DC: mov     ecx, 2
 * 00000001404264E1: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404264E8: nop     dword ptr [rax+rax+00h]
 * 00000001404264ED: mov     rcx, gs:20h
 * 00000001404264F6: dec     byte ptr [rcx+20h]
 * 00000001404264F9: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404264FD: cmp     cs:KiIrqlFlags, 0
 * 0000000140426504: jz      short loc_14042650D
 * 0000000140426506: call    KzSetIrqlUnsafe
 * 000000014042650B: jmp     short loc_140426511
 * 000000014042650D: mov     cr8, rcx
 * 0000000140426511: mov     rsi, [rbp+0D0h]
 * 0000000140426518: cli
 * 0000000140426519: test    byte ptr [rbp+0F0h], 1
 * 0000000140426520: jz      loc_14042680E
 * 0000000140426526: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042652D: jz      short loc_140426532
 * 000000014042652F: stac
 * 0000000140426532: mov     rcx, gs:188h
 * 000000014042653B: test    byte ptr [rcx+0C2h], 3
 * 0000000140426542: jz      short loc_14042655F
 * 0000000140426544: mov     ecx, 1
 * 0000000140426549: mov     cr8, rcx
 * 000000014042654D: sti
 * 000000014042654E: call    KiInitiateUserApc
 * 0000000140426553: cli
 * 0000000140426554: mov     ecx, 0
 * 0000000140426559: mov     cr8, rcx
 * 000000014042655D: jmp     short loc_140426532
 * 000000014042655F: test    byte ptr gs:86Ch, 2
 * 0000000140426568: jz      short loc_140426571
 * 000000014042656A: xor     ecx, ecx
 * 000000014042656C: call    KiUpdateStibpPairing
 * 0000000140426571: mov     rcx, gs:188h
 * 000000014042657A: test    dword ptr [rcx], 8000000h
 * 0000000140426580: jz      short loc_140426587
 * 0000000140426582: call    KiRestoreSetContextState
 * 0000000140426587: mov     rcx, gs:188h
 * 0000000140426590: test    dword ptr [rcx], 10000h
 * 0000000140426596: jz      short loc_1404265AC
 * 0000000140426598: test    byte ptr [rcx+2], 1
 * 000000014042659C: jz      short loc_1404265AC
 * 000000014042659E: call    KiCopyCounters
 * 00000001404265A3: mov     rcx, gs:188h
 * 00000001404265AC: ldmxcsr dword ptr [rbp-54h]
 * 00000001404265B0: cmp     word ptr [rbp+80h], 0
 * 00000001404265B8: jz      short loc_1404265BF
 * 00000001404265BA: call    KiRestoreDebugRegisterState
 * 00000001404265BF: mov     rcx, gs:188h
 * 00000001404265C8: bt      dword ptr [rcx+74h], 16h
 * 00000001404265CD: jnb     short loc_1404265F9
 * 00000001404265CF: xor     ecx, ecx
 * 00000001404265D1: rdsspq  rcx
 * 00000001404265D6: mov     r8, gs:95A8h
 * 00000001404265DF: add     r8, 8
 * 00000001404265E3: cmp     rcx, r8
 * 00000001404265E6: jnz     short loc_1404265F9
 * 00000001404265E8: mov     rcx, gs:95A0h
 * 00000001404265F1: rstorssp qword ptr [rcx]
 * 00000001404265F5: saveprevssp
 * 00000001404265F9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404265FD: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426601: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426605: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426609: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042660D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426611: mov     r11, [rbp-20h]
 * 0000000140426615: mov     r10, [rbp-28h]
 * 0000000140426619: mov     r9, [rbp-30h]
 * 000000014042661D: mov     r8, [rbp-38h]
 * 0000000140426621: mov     byte ptr gs:856h, 0
 * 000000014042662A: movzx   eax, word ptr gs:86Ah
 * 0000000140426633: cmp     gs:864h, ax
 * 000000014042663C: jz      short loc_140426650
 * 000000014042663E: mov     gs:864h, ax
 * 0000000140426647: mov     ecx, 48h ; 'H'
 * 000000014042664C: xor     edx, edx
 * 000000014042664E: wrmsr
 * 0000000140426650: btr     word ptr gs:860h, 2
 * 000000014042665B: jnb     short loc_14042666B
 * 000000014042665D: mov     eax, 1
 * 0000000140426662: xor     edx, edx
 * 0000000140426664: mov     ecx, 49h ; 'I'
 * 0000000140426669: wrmsr
 * 000000014042666B: btr     word ptr gs:860h, 5
 * 0000000140426676: jnb     loc_1404267B3
 * 000000014042667C: call    loc_14042678F
 * 0000000140426681: add     rsp, 8
 * 0000000140426685: call    loc_140426798
 * 000000014042668A: add     rsp, 8
 * 000000014042668E: call    loc_140426681
 * 0000000140426693: add     rsp, 8
 * 0000000140426697: call    loc_14042668A
 * 000000014042669C: add     rsp, 8
 * 00000001404266A0: call    loc_140426693
 * 00000001404266A5: add     rsp, 8
 * 00000001404266A9: call    loc_14042669C
 * 00000001404266AE: add     rsp, 8
 * 00000001404266B2: call    loc_1404266A5
 * 00000001404266B7: add     rsp, 8
 * 00000001404266BB: call    loc_1404266AE
 * 00000001404266C0: add     rsp, 8
 * 00000001404266C4: call    loc_1404266B7
 * 00000001404266C9: add     rsp, 8
 * 00000001404266CD: call    loc_1404266C0
 * 00000001404266D2: add     rsp, 8
 * 00000001404266D6: call    loc_1404266C9
 * 00000001404266DB: add     rsp, 8
 * 00000001404266DF: call    loc_1404266D2
 * 00000001404266E4: add     rsp, 8
 * 00000001404266E8: call    loc_1404266DB
 * 00000001404266ED: add     rsp, 8
 * 00000001404266F1: call    loc_1404266E4
 * 00000001404266F6: add     rsp, 8
 * 00000001404266FA: call    loc_1404266ED
 * 00000001404266FF: add     rsp, 8
 * 0000000140426703: call    loc_1404266F6
 * 0000000140426708: add     rsp, 8
 * 000000014042670C: call    loc_1404266FF
 * 0000000140426711: add     rsp, 8
 * 0000000140426715: call    loc_140426708
 * 000000014042671A: add     rsp, 8
 * 000000014042671E: call    loc_140426711
 * 0000000140426723: add     rsp, 8
 * 0000000140426727: call    loc_14042671A
 * 000000014042672C: add     rsp, 8
 * 0000000140426730: call    loc_140426723
 * 0000000140426735: add     rsp, 8
 * 0000000140426739: call    loc_14042672C
 * 000000014042673E: add     rsp, 8
 * 0000000140426742: call    loc_140426735
 * 0000000140426747: add     rsp, 8
 * 000000014042674B: call    loc_14042673E
 * 0000000140426750: add     rsp, 8
 * 0000000140426754: call    loc_140426747
 * 0000000140426759: add     rsp, 8
 * 000000014042675D: call    loc_140426750
 * 0000000140426762: add     rsp, 8
 * 0000000140426766: call    loc_140426759
 * 000000014042676B: add     rsp, 8
 * 000000014042676F: call    loc_140426762
 * 0000000140426774: add     rsp, 8
 * 0000000140426778: call    loc_14042676B
 * 000000014042677D: add     rsp, 8
 * 0000000140426781: call    loc_140426774
 * 0000000140426786: add     rsp, 8
 * 000000014042678A: call    loc_14042677D
 * 000000014042678F: add     rsp, 8
 * 0000000140426793: call    loc_140426786
 * 0000000140426798: add     rsp, 8
 * 000000014042679C: mov     eax, 0DADAh
 * 00000001404267A1: test    byte ptr gs:862h, 8
 * 00000001404267AA: jz      short loc_1404267B3
 * 00000001404267AC: mov     al, 20h ; ' '
 * 00000001404267AE: incsspq rax
 * 00000001404267B3: test    word ptr gs:860h, 80h
 * 00000001404267BE: jz      short loc_1404267CC
 * 00000001404267C0: xor     eax, eax
 * 00000001404267C2: xor     edx, edx
 * 00000001404267C4: mov     ecx, 1
 * 00000001404267C9: div     rcx
 * 00000001404267CC: mov     rdx, [rbp-40h]
 * 00000001404267D0: mov     rcx, [rbp-48h]
 * 00000001404267D4: mov     rax, [rbp-50h]
 * 00000001404267D8: mov     rsp, rbp
 * 00000001404267DB: mov     rbp, [rbp+0D8h]
 * 00000001404267E2: add     rsp, 0E8h
 * 00000001404267E9: test    cs:KiKvaShadow, 1
 * 00000001404267F0: jz      short loc_1404267F7
 * 00000001404267F2: jmp     KiKernelExit
 * 00000001404267F7: test    word ptr gs:860h, 100h
 * 0000000140426802: jz      short loc_140426809
 * 0000000140426804: verw    [rsp-1C8h+arg_1E0]
 * 0000000140426809: swapgs
 * 000000014042680C: iretq
 * 000000014042680E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426812: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426816: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042681A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042681E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426822: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426826: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042682A: mov     r11, [rbp-20h]
 * 000000014042682E: mov     r10, [rbp-28h]
 * 0000000140426832: mov     r9, [rbp-30h]
 * 0000000140426836: mov     r8, [rbp-38h]
 * 000000014042683A: mov     rdx, [rbp-40h]
 * 000000014042683E: mov     rcx, [rbp-48h]
 * 0000000140426842: mov     rax, [rbp-50h]
 * 0000000140426846: mov     rsp, rbp
 * 0000000140426849: mov     rbp, [rbp+0D8h]
 * 0000000140426850: add     rsp, 0E8h
 * 0000000140426857: iretq
 */
