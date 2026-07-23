/*
 * XREFs of KiHvInterruptDispatch @ 0x140426370
 * Callers:
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140426370 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140426BF0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140426370
 * Reason: Hex-Rays returned no pseudocode for 0x140426370
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426370: mov     rdx, rsp
 * 0000000140426373: mov     rcx, gs:8B58h
 * 000000014042637C: lea     rax, [rcx-6000h]
 * 0000000140426383: cmp     rax, rsp
 * 0000000140426386: ja      short loc_14042638D
 * 0000000140426388: cmp     rsp, rcx
 * 000000014042638B: jb      short loc_140426399
 * 000000014042638D: cmp     cs:KiBugCheckActive, 0
 * 0000000140426394: jnz     short loc_140426399
 * 0000000140426396: mov     rsp, rcx
 * 0000000140426399: sub     rsp, 20h
 * 000000014042639D: mov     [rsp+20h+var_10], rdx
 * 00000001404263A2: call    KiHvInterruptSubDispatch
 * 00000001404263A7: mov     rsp, [rsp+20h+var_10]
 * 00000001404263AC: test    cs:HvlEnlightenments, 1000h
 * 00000001404263B6: jz      short loc_1404263C0
 * 00000001404263B8: mov     rcx, rsi
 * 00000001404263BB: call    HalPerformEndOfInterrupt
 * 00000001404263C0: cli
 * 00000001404263C1: mov     rcx, gs:20h
 * 00000001404263CA: cmp     byte ptr [rcx+20h], 1
 * 00000001404263CE: ja      short loc_14042644A
 * 00000001404263D0: rdtsc
 * 00000001404263D2: shl     rdx, 20h
 * 00000001404263D6: or      rax, rdx
 * 00000001404263D9: sub     rax, [rcx+8180h]
 * 00000001404263E0: add     [rcx+8278h], rax
 * 00000001404263E7: add     [rcx+8180h], rax
 * 00000001404263EE: mov     r8, rax
 * 00000001404263F1: mov     rax, [rcx+8]
 * 00000001404263F5: test    byte ptr [rax+2], 72h
 * 00000001404263F9: jz      short loc_14042640E
 * 00000001404263FB: xor     edx, edx
 * 00000001404263FD: call    KiBeginThreadAccountingPeriod
 * 0000000140426402: mov     rcx, gs:20h
 * 000000014042640B: inc     byte ptr [rcx+20h]
 * 000000014042640E: mov     dl, [rcx+6]
 * 0000000140426411: and     byte ptr [rcx+6], 0
 * 0000000140426415: cmp     byte ptr [rcx+7], 0
 * 0000000140426419: jnz     short loc_14042644A
 * 000000014042641B: test    dl, dl
 * 000000014042641D: jz      short loc_14042644A
 * 000000014042641F: cmp     byte ptr [rbp-57h], 2
 * 0000000140426423: jnb     short loc_140426430
 * 0000000140426425: and     byte ptr [rcx+20h], 0
 * 0000000140426429: call    KiDpcInterruptBypass
 * 000000014042642E: jmp     short loc_14042644D
 * 0000000140426430: mov     ecx, 2
 * 0000000140426435: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042643C: nop     dword ptr [rax+rax+00h]
 * 0000000140426441: mov     rcx, gs:20h
 * 000000014042644A: dec     byte ptr [rcx+20h]
 * 000000014042644D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140426451: cmp     cs:KiIrqlFlags, 0
 * 0000000140426458: jz      short loc_140426461
 * 000000014042645A: call    KzSetIrqlUnsafe
 * 000000014042645F: jmp     short loc_140426465
 * 0000000140426461: mov     cr8, rcx
 * 0000000140426465: mov     rsi, [rbp+0D0h]
 * 000000014042646C: cli
 * 000000014042646D: test    byte ptr [rbp+0F0h], 1
 * 0000000140426474: jz      loc_140426762
 * 000000014042647A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426481: jz      short loc_140426486
 * 0000000140426483: stac
 * 0000000140426486: mov     rcx, gs:188h
 * 000000014042648F: test    byte ptr [rcx+0C2h], 3
 * 0000000140426496: jz      short loc_1404264B3
 * 0000000140426498: mov     ecx, 1
 * 000000014042649D: mov     cr8, rcx
 * 00000001404264A1: sti
 * 00000001404264A2: call    KiInitiateUserApc
 * 00000001404264A7: cli
 * 00000001404264A8: mov     ecx, 0
 * 00000001404264AD: mov     cr8, rcx
 * 00000001404264B1: jmp     short loc_140426486
 * 00000001404264B3: test    byte ptr gs:86Ch, 2
 * 00000001404264BC: jz      short loc_1404264C5
 * 00000001404264BE: xor     ecx, ecx
 * 00000001404264C0: call    KiUpdateStibpPairing
 * 00000001404264C5: mov     rcx, gs:188h
 * 00000001404264CE: test    dword ptr [rcx], 8000000h
 * 00000001404264D4: jz      short loc_1404264DB
 * 00000001404264D6: call    KiRestoreSetContextState
 * 00000001404264DB: mov     rcx, gs:188h
 * 00000001404264E4: test    dword ptr [rcx], 10000h
 * 00000001404264EA: jz      short loc_140426500
 * 00000001404264EC: test    byte ptr [rcx+2], 1
 * 00000001404264F0: jz      short loc_140426500
 * 00000001404264F2: call    KiCopyCounters
 * 00000001404264F7: mov     rcx, gs:188h
 * 0000000140426500: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426504: cmp     word ptr [rbp+80h], 0
 * 000000014042650C: jz      short loc_140426513
 * 000000014042650E: call    KiRestoreDebugRegisterState
 * 0000000140426513: mov     rcx, gs:188h
 * 000000014042651C: bt      dword ptr [rcx+74h], 16h
 * 0000000140426521: jnb     short loc_14042654D
 * 0000000140426523: xor     ecx, ecx
 * 0000000140426525: rdsspq  rcx
 * 000000014042652A: mov     r8, gs:95A8h
 * 0000000140426533: add     r8, 8
 * 0000000140426537: cmp     rcx, r8
 * 000000014042653A: jnz     short loc_14042654D
 * 000000014042653C: mov     rcx, gs:95A0h
 * 0000000140426545: rstorssp qword ptr [rcx]
 * 0000000140426549: saveprevssp
 * 000000014042654D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426551: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426555: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426559: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042655D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426561: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426565: mov     r11, [rbp-20h]
 * 0000000140426569: mov     r10, [rbp-28h]
 * 000000014042656D: mov     r9, [rbp-30h]
 * 0000000140426571: mov     r8, [rbp-38h]
 * 0000000140426575: mov     byte ptr gs:856h, 0
 * 000000014042657E: movzx   eax, word ptr gs:86Ah
 * 0000000140426587: cmp     gs:864h, ax
 * 0000000140426590: jz      short loc_1404265A4
 * 0000000140426592: mov     gs:864h, ax
 * 000000014042659B: mov     ecx, 48h ; 'H'
 * 00000001404265A0: xor     edx, edx
 * 00000001404265A2: wrmsr
 * 00000001404265A4: btr     word ptr gs:860h, 2
 * 00000001404265AF: jnb     short loc_1404265BF
 * 00000001404265B1: mov     eax, 1
 * 00000001404265B6: xor     edx, edx
 * 00000001404265B8: mov     ecx, 49h ; 'I'
 * 00000001404265BD: wrmsr
 * 00000001404265BF: btr     word ptr gs:860h, 5
 * 00000001404265CA: jnb     loc_140426707
 * 00000001404265D0: call    loc_1404266E3
 * 00000001404265D5: add     rsp, 8
 * 00000001404265D9: call    loc_1404266EC
 * 00000001404265DE: add     rsp, 8
 * 00000001404265E2: call    loc_1404265D5
 * 00000001404265E7: add     rsp, 8
 * 00000001404265EB: call    loc_1404265DE
 * 00000001404265F0: add     rsp, 8
 * 00000001404265F4: call    loc_1404265E7
 * 00000001404265F9: add     rsp, 8
 * 00000001404265FD: call    loc_1404265F0
 * 0000000140426602: add     rsp, 8
 * 0000000140426606: call    loc_1404265F9
 * 000000014042660B: add     rsp, 8
 * 000000014042660F: call    loc_140426602
 * 0000000140426614: add     rsp, 8
 * 0000000140426618: call    loc_14042660B
 * 000000014042661D: add     rsp, 8
 * 0000000140426621: call    loc_140426614
 * 0000000140426626: add     rsp, 8
 * 000000014042662A: call    loc_14042661D
 * 000000014042662F: add     rsp, 8
 * 0000000140426633: call    loc_140426626
 * 0000000140426638: add     rsp, 8
 * 000000014042663C: call    loc_14042662F
 * 0000000140426641: add     rsp, 8
 * 0000000140426645: call    loc_140426638
 * 000000014042664A: add     rsp, 8
 * 000000014042664E: call    loc_140426641
 * 0000000140426653: add     rsp, 8
 * 0000000140426657: call    loc_14042664A
 * 000000014042665C: add     rsp, 8
 * 0000000140426660: call    loc_140426653
 * 0000000140426665: add     rsp, 8
 * 0000000140426669: call    loc_14042665C
 * 000000014042666E: add     rsp, 8
 * 0000000140426672: call    loc_140426665
 * 0000000140426677: add     rsp, 8
 * 000000014042667B: call    loc_14042666E
 * 0000000140426680: add     rsp, 8
 * 0000000140426684: call    loc_140426677
 * 0000000140426689: add     rsp, 8
 * 000000014042668D: call    loc_140426680
 * 0000000140426692: add     rsp, 8
 * 0000000140426696: call    loc_140426689
 * 000000014042669B: add     rsp, 8
 * 000000014042669F: call    loc_140426692
 * 00000001404266A4: add     rsp, 8
 * 00000001404266A8: call    loc_14042669B
 * 00000001404266AD: add     rsp, 8
 * 00000001404266B1: call    loc_1404266A4
 * 00000001404266B6: add     rsp, 8
 * 00000001404266BA: call    loc_1404266AD
 * 00000001404266BF: add     rsp, 8
 * 00000001404266C3: call    loc_1404266B6
 * 00000001404266C8: add     rsp, 8
 * 00000001404266CC: call    loc_1404266BF
 * 00000001404266D1: add     rsp, 8
 * 00000001404266D5: call    loc_1404266C8
 * 00000001404266DA: add     rsp, 8
 * 00000001404266DE: call    loc_1404266D1
 * 00000001404266E3: add     rsp, 8
 * 00000001404266E7: call    loc_1404266DA
 * 00000001404266EC: add     rsp, 8
 * 00000001404266F0: mov     eax, 0DADAh
 * 00000001404266F5: test    byte ptr gs:862h, 8
 * 00000001404266FE: jz      short loc_140426707
 * 0000000140426700: mov     al, 20h ; ' '
 * 0000000140426702: incsspq rax
 * 0000000140426707: test    word ptr gs:860h, 80h
 * 0000000140426712: jz      short loc_140426720
 * 0000000140426714: xor     eax, eax
 * 0000000140426716: xor     edx, edx
 * 0000000140426718: mov     ecx, 1
 * 000000014042671D: div     rcx
 * 0000000140426720: mov     rdx, [rbp-40h]
 * 0000000140426724: mov     rcx, [rbp-48h]
 * 0000000140426728: mov     rax, [rbp-50h]
 * 000000014042672C: mov     rsp, rbp
 * 000000014042672F: mov     rbp, [rbp+0D8h]
 * 0000000140426736: add     rsp, 0E8h
 * 000000014042673D: test    cs:KiKvaShadow, 1
 * 0000000140426744: jz      short loc_14042674B
 * 0000000140426746: jmp     KiKernelExit
 * 000000014042674B: test    word ptr gs:860h, 100h
 * 0000000140426756: jz      short loc_14042675D
 * 0000000140426758: verw    [rsp-1C8h+arg_1E0]
 * 000000014042675D: swapgs
 * 0000000140426760: iretq
 * 0000000140426762: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426766: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042676A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042676E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426772: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426776: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042677A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042677E: mov     r11, [rbp-20h]
 * 0000000140426782: mov     r10, [rbp-28h]
 * 0000000140426786: mov     r9, [rbp-30h]
 * 000000014042678A: mov     r8, [rbp-38h]
 * 000000014042678E: mov     rdx, [rbp-40h]
 * 0000000140426792: mov     rcx, [rbp-48h]
 * 0000000140426796: mov     rax, [rbp-50h]
 * 000000014042679A: mov     rsp, rbp
 * 000000014042679D: mov     rbp, [rbp+0D8h]
 * 00000001404267A4: add     rsp, 0E8h
 * 00000001404267AB: iretq
 */
