/*
 * XREFs of KiHvInterruptDispatch @ 0x140425FE0
 * Callers:
 *     KiHvInterrupt @ 0x140424F00 (KiHvInterrupt.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140425FE0
 * Reason: Hex-Rays returned no pseudocode for 0x140425FE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425FE0: mov     rdx, rsp
 * 0000000140425FE3: mov     rcx, gs:8B58h
 * 0000000140425FEC: lea     rax, [rcx-6000h]
 * 0000000140425FF3: cmp     rax, rsp
 * 0000000140425FF6: ja      short loc_140425FFD
 * 0000000140425FF8: cmp     rsp, rcx
 * 0000000140425FFB: jb      short loc_140426009
 * 0000000140425FFD: cmp     cs:KiBugCheckActive, 0
 * 0000000140426004: jnz     short loc_140426009
 * 0000000140426006: mov     rsp, rcx
 * 0000000140426009: sub     rsp, 20h
 * 000000014042600D: mov     [rsp+20h+var_10], rdx
 * 0000000140426012: call    KiHvInterruptSubDispatch
 * 0000000140426017: mov     rsp, [rsp+20h+var_10]
 * 000000014042601C: test    cs:HvlEnlightenments, 1000h
 * 0000000140426026: jz      short loc_140426030
 * 0000000140426028: mov     rcx, rsi
 * 000000014042602B: call    HalPerformEndOfInterrupt
 * 0000000140426030: cli
 * 0000000140426031: mov     rcx, gs:20h
 * 000000014042603A: cmp     byte ptr [rcx+20h], 1
 * 000000014042603E: ja      short loc_1404260BA
 * 0000000140426040: rdtsc
 * 0000000140426042: shl     rdx, 20h
 * 0000000140426046: or      rax, rdx
 * 0000000140426049: sub     rax, [rcx+8180h]
 * 0000000140426050: add     [rcx+8278h], rax
 * 0000000140426057: add     [rcx+8180h], rax
 * 000000014042605E: mov     r8, rax
 * 0000000140426061: mov     rax, [rcx+8]
 * 0000000140426065: test    byte ptr [rax+2], 72h
 * 0000000140426069: jz      short loc_14042607E
 * 000000014042606B: xor     edx, edx
 * 000000014042606D: call    KiBeginThreadAccountingPeriod
 * 0000000140426072: mov     rcx, gs:20h
 * 000000014042607B: inc     byte ptr [rcx+20h]
 * 000000014042607E: mov     dl, [rcx+6]
 * 0000000140426081: and     byte ptr [rcx+6], 0
 * 0000000140426085: cmp     byte ptr [rcx+7], 0
 * 0000000140426089: jnz     short loc_1404260BA
 * 000000014042608B: test    dl, dl
 * 000000014042608D: jz      short loc_1404260BA
 * 000000014042608F: cmp     byte ptr [rbp-57h], 2
 * 0000000140426093: jnb     short loc_1404260A0
 * 0000000140426095: and     byte ptr [rcx+20h], 0
 * 0000000140426099: call    KiDpcInterruptBypass
 * 000000014042609E: jmp     short loc_1404260BD
 * 00000001404260A0: mov     ecx, 2
 * 00000001404260A5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404260AC: nop     dword ptr [rax+rax+00h]
 * 00000001404260B1: mov     rcx, gs:20h
 * 00000001404260BA: dec     byte ptr [rcx+20h]
 * 00000001404260BD: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404260C1: cmp     cs:KiIrqlFlags, 0
 * 00000001404260C8: jz      short loc_1404260D1
 * 00000001404260CA: call    KzSetIrqlUnsafe
 * 00000001404260CF: jmp     short loc_1404260D5
 * 00000001404260D1: mov     cr8, rcx
 * 00000001404260D5: mov     rsi, [rbp+0D0h]
 * 00000001404260DC: cli
 * 00000001404260DD: test    byte ptr [rbp+0F0h], 1
 * 00000001404260E4: jz      loc_1404263D2
 * 00000001404260EA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404260F1: jz      short loc_1404260F6
 * 00000001404260F3: stac
 * 00000001404260F6: mov     rcx, gs:188h
 * 00000001404260FF: test    byte ptr [rcx+0C2h], 3
 * 0000000140426106: jz      short loc_140426123
 * 0000000140426108: mov     ecx, 1
 * 000000014042610D: mov     cr8, rcx
 * 0000000140426111: sti
 * 0000000140426112: call    KiInitiateUserApc
 * 0000000140426117: cli
 * 0000000140426118: mov     ecx, 0
 * 000000014042611D: mov     cr8, rcx
 * 0000000140426121: jmp     short loc_1404260F6
 * 0000000140426123: test    byte ptr gs:86Ch, 2
 * 000000014042612C: jz      short loc_140426135
 * 000000014042612E: xor     ecx, ecx
 * 0000000140426130: call    KiUpdateStibpPairing
 * 0000000140426135: mov     rcx, gs:188h
 * 000000014042613E: test    dword ptr [rcx], 8000000h
 * 0000000140426144: jz      short loc_14042614B
 * 0000000140426146: call    KiRestoreSetContextState
 * 000000014042614B: mov     rcx, gs:188h
 * 0000000140426154: test    dword ptr [rcx], 10000h
 * 000000014042615A: jz      short loc_140426170
 * 000000014042615C: test    byte ptr [rcx+2], 1
 * 0000000140426160: jz      short loc_140426170
 * 0000000140426162: call    KiCopyCounters
 * 0000000140426167: mov     rcx, gs:188h
 * 0000000140426170: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426174: cmp     word ptr [rbp+80h], 0
 * 000000014042617C: jz      short loc_140426183
 * 000000014042617E: call    KiRestoreDebugRegisterState
 * 0000000140426183: mov     rcx, gs:188h
 * 000000014042618C: bt      dword ptr [rcx+74h], 16h
 * 0000000140426191: jnb     short loc_1404261BD
 * 0000000140426193: xor     ecx, ecx
 * 0000000140426195: rdsspq  rcx
 * 000000014042619A: mov     r8, gs:95A8h
 * 00000001404261A3: add     r8, 8
 * 00000001404261A7: cmp     rcx, r8
 * 00000001404261AA: jnz     short loc_1404261BD
 * 00000001404261AC: mov     rcx, gs:95A0h
 * 00000001404261B5: rstorssp qword ptr [rcx]
 * 00000001404261B9: saveprevssp
 * 00000001404261BD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404261C1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404261C5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404261C9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404261CD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404261D1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404261D5: mov     r11, [rbp-20h]
 * 00000001404261D9: mov     r10, [rbp-28h]
 * 00000001404261DD: mov     r9, [rbp-30h]
 * 00000001404261E1: mov     r8, [rbp-38h]
 * 00000001404261E5: mov     byte ptr gs:856h, 0
 * 00000001404261EE: movzx   eax, word ptr gs:86Ah
 * 00000001404261F7: cmp     gs:864h, ax
 * 0000000140426200: jz      short loc_140426214
 * 0000000140426202: mov     gs:864h, ax
 * 000000014042620B: mov     ecx, 48h ; 'H'
 * 0000000140426210: xor     edx, edx
 * 0000000140426212: wrmsr
 * 0000000140426214: btr     word ptr gs:860h, 2
 * 000000014042621F: jnb     short loc_14042622F
 * 0000000140426221: mov     eax, 1
 * 0000000140426226: xor     edx, edx
 * 0000000140426228: mov     ecx, 49h ; 'I'
 * 000000014042622D: wrmsr
 * 000000014042622F: btr     word ptr gs:860h, 5
 * 000000014042623A: jnb     loc_140426377
 * 0000000140426240: call    loc_140426353
 * 0000000140426245: add     rsp, 8
 * 0000000140426249: call    loc_14042635C
 * 000000014042624E: add     rsp, 8
 * 0000000140426252: call    loc_140426245
 * 0000000140426257: add     rsp, 8
 * 000000014042625B: call    loc_14042624E
 * 0000000140426260: add     rsp, 8
 * 0000000140426264: call    loc_140426257
 * 0000000140426269: add     rsp, 8
 * 000000014042626D: call    loc_140426260
 * 0000000140426272: add     rsp, 8
 * 0000000140426276: call    loc_140426269
 * 000000014042627B: add     rsp, 8
 * 000000014042627F: call    loc_140426272
 * 0000000140426284: add     rsp, 8
 * 0000000140426288: call    loc_14042627B
 * 000000014042628D: add     rsp, 8
 * 0000000140426291: call    loc_140426284
 * 0000000140426296: add     rsp, 8
 * 000000014042629A: call    loc_14042628D
 * 000000014042629F: add     rsp, 8
 * 00000001404262A3: call    loc_140426296
 * 00000001404262A8: add     rsp, 8
 * 00000001404262AC: call    loc_14042629F
 * 00000001404262B1: add     rsp, 8
 * 00000001404262B5: call    loc_1404262A8
 * 00000001404262BA: add     rsp, 8
 * 00000001404262BE: call    loc_1404262B1
 * 00000001404262C3: add     rsp, 8
 * 00000001404262C7: call    loc_1404262BA
 * 00000001404262CC: add     rsp, 8
 * 00000001404262D0: call    loc_1404262C3
 * 00000001404262D5: add     rsp, 8
 * 00000001404262D9: call    loc_1404262CC
 * 00000001404262DE: add     rsp, 8
 * 00000001404262E2: call    loc_1404262D5
 * 00000001404262E7: add     rsp, 8
 * 00000001404262EB: call    loc_1404262DE
 * 00000001404262F0: add     rsp, 8
 * 00000001404262F4: call    loc_1404262E7
 * 00000001404262F9: add     rsp, 8
 * 00000001404262FD: call    loc_1404262F0
 * 0000000140426302: add     rsp, 8
 * 0000000140426306: call    loc_1404262F9
 * 000000014042630B: add     rsp, 8
 * 000000014042630F: call    loc_140426302
 * 0000000140426314: add     rsp, 8
 * 0000000140426318: call    loc_14042630B
 * 000000014042631D: add     rsp, 8
 * 0000000140426321: call    loc_140426314
 * 0000000140426326: add     rsp, 8
 * 000000014042632A: call    loc_14042631D
 * 000000014042632F: add     rsp, 8
 * 0000000140426333: call    loc_140426326
 * 0000000140426338: add     rsp, 8
 * 000000014042633C: call    loc_14042632F
 * 0000000140426341: add     rsp, 8
 * 0000000140426345: call    loc_140426338
 * 000000014042634A: add     rsp, 8
 * 000000014042634E: call    loc_140426341
 * 0000000140426353: add     rsp, 8
 * 0000000140426357: call    loc_14042634A
 * 000000014042635C: add     rsp, 8
 * 0000000140426360: mov     eax, 0DADAh
 * 0000000140426365: test    byte ptr gs:862h, 8
 * 000000014042636E: jz      short loc_140426377
 * 0000000140426370: mov     al, 20h ; ' '
 * 0000000140426372: incsspq rax
 * 0000000140426377: test    word ptr gs:860h, 80h
 * 0000000140426382: jz      short loc_140426390
 * 0000000140426384: xor     eax, eax
 * 0000000140426386: xor     edx, edx
 * 0000000140426388: mov     ecx, 1
 * 000000014042638D: div     rcx
 * 0000000140426390: mov     rdx, [rbp-40h]
 * 0000000140426394: mov     rcx, [rbp-48h]
 * 0000000140426398: mov     rax, [rbp-50h]
 * 000000014042639C: mov     rsp, rbp
 * 000000014042639F: mov     rbp, [rbp+0D8h]
 * 00000001404263A6: add     rsp, 0E8h
 * 00000001404263AD: test    cs:KiKvaShadow, 1
 * 00000001404263B4: jz      short loc_1404263BB
 * 00000001404263B6: jmp     KiKernelExit
 * 00000001404263BB: test    word ptr gs:860h, 100h
 * 00000001404263C6: jz      short loc_1404263CD
 * 00000001404263C8: verw    [rsp-1C8h+arg_1E0]
 * 00000001404263CD: swapgs
 * 00000001404263D0: iretq
 * 00000001404263D2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404263D6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404263DA: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404263DE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404263E2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404263E6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404263EA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404263EE: mov     r11, [rbp-20h]
 * 00000001404263F2: mov     r10, [rbp-28h]
 * 00000001404263F6: mov     r9, [rbp-30h]
 * 00000001404263FA: mov     r8, [rbp-38h]
 * 00000001404263FE: mov     rdx, [rbp-40h]
 * 0000000140426402: mov     rcx, [rbp-48h]
 * 0000000140426406: mov     rax, [rbp-50h]
 * 000000014042640A: mov     rsp, rbp
 * 000000014042640D: mov     rbp, [rbp+0D8h]
 * 0000000140426414: add     rsp, 0E8h
 * 000000014042641B: iretq
 */
