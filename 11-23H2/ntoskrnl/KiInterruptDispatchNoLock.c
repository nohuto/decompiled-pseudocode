/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140421440
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420DA0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x140421440 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140421440
 * Reason: Hex-Rays returned no pseudocode for 0x140421440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421440: mov     rdx, rsp
 * 0000000140421443: mov     rcx, gs:8B58h
 * 000000014042144C: lea     rax, [rcx-6000h]
 * 0000000140421453: cmp     rax, rsp
 * 0000000140421456: ja      short loc_14042145D
 * 0000000140421458: cmp     rsp, rcx
 * 000000014042145B: jb      short loc_140421469
 * 000000014042145D: cmp     cs:KiBugCheckActive, 0
 * 0000000140421464: jnz     short loc_140421469
 * 0000000140421466: mov     rsp, rcx
 * 0000000140421469: sub     rsp, 20h
 * 000000014042146D: mov     [rsp+20h+var_10], rdx
 * 0000000140421472: call    KiInterruptSubDispatchNoLock
 * 0000000140421477: mov     rsp, [rsp+20h+var_10]
 * 000000014042147C: mov     rcx, rsi
 * 000000014042147F: call    HalPerformEndOfInterrupt
 * 0000000140421484: mov     rcx, gs:20h
 * 000000014042148D: cmp     byte ptr [rcx+20h], 1
 * 0000000140421491: ja      short loc_14042150D
 * 0000000140421493: rdtsc
 * 0000000140421495: shl     rdx, 20h
 * 0000000140421499: or      rax, rdx
 * 000000014042149C: sub     rax, [rcx+8180h]
 * 00000001404214A3: add     [rcx+8278h], rax
 * 00000001404214AA: add     [rcx+8180h], rax
 * 00000001404214B1: mov     r8, rax
 * 00000001404214B4: mov     rax, [rcx+8]
 * 00000001404214B8: test    byte ptr [rax+2], 72h
 * 00000001404214BC: jz      short loc_1404214D1
 * 00000001404214BE: xor     edx, edx
 * 00000001404214C0: call    KiBeginThreadAccountingPeriod
 * 00000001404214C5: mov     rcx, gs:20h
 * 00000001404214CE: inc     byte ptr [rcx+20h]
 * 00000001404214D1: mov     dl, [rcx+6]
 * 00000001404214D4: and     byte ptr [rcx+6], 0
 * 00000001404214D8: cmp     byte ptr [rcx+7], 0
 * 00000001404214DC: jnz     short loc_14042150D
 * 00000001404214DE: test    dl, dl
 * 00000001404214E0: jz      short loc_14042150D
 * 00000001404214E2: cmp     byte ptr [rbp-57h], 2
 * 00000001404214E6: jnb     short loc_1404214F3
 * 00000001404214E8: and     byte ptr [rcx+20h], 0
 * 00000001404214EC: call    KiDpcInterruptBypass
 * 00000001404214F1: jmp     short loc_140421510
 * 00000001404214F3: mov     ecx, 2
 * 00000001404214F8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404214FF: nop     dword ptr [rax+rax+00h]
 * 0000000140421504: mov     rcx, gs:20h
 * 000000014042150D: dec     byte ptr [rcx+20h]
 * 0000000140421510: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421514: cmp     cs:KiIrqlFlags, 0
 * 000000014042151B: jz      short loc_140421524
 * 000000014042151D: call    KzSetIrqlUnsafe
 * 0000000140421522: jmp     short loc_140421528
 * 0000000140421524: mov     cr8, rcx
 * 0000000140421528: mov     rsi, [rbp+0D0h]
 * 000000014042152F: test    byte ptr [rbp+0F0h], 1
 * 0000000140421536: jz      loc_140421824
 * 000000014042153C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421543: jz      short loc_140421548
 * 0000000140421545: stac
 * 0000000140421548: mov     rcx, gs:188h
 * 0000000140421551: test    byte ptr [rcx+0C2h], 3
 * 0000000140421558: jz      short loc_140421575
 * 000000014042155A: mov     ecx, 1
 * 000000014042155F: mov     cr8, rcx
 * 0000000140421563: sti
 * 0000000140421564: call    KiInitiateUserApc
 * 0000000140421569: cli
 * 000000014042156A: mov     ecx, 0
 * 000000014042156F: mov     cr8, rcx
 * 0000000140421573: jmp     short loc_140421548
 * 0000000140421575: test    byte ptr gs:86Ch, 2
 * 000000014042157E: jz      short loc_140421587
 * 0000000140421580: xor     ecx, ecx
 * 0000000140421582: call    KiUpdateStibpPairing
 * 0000000140421587: mov     rcx, gs:188h
 * 0000000140421590: test    dword ptr [rcx], 8000000h
 * 0000000140421596: jz      short loc_14042159D
 * 0000000140421598: call    KiRestoreSetContextState
 * 000000014042159D: mov     rcx, gs:188h
 * 00000001404215A6: test    dword ptr [rcx], 10000h
 * 00000001404215AC: jz      short loc_1404215C2
 * 00000001404215AE: test    byte ptr [rcx+2], 1
 * 00000001404215B2: jz      short loc_1404215C2
 * 00000001404215B4: call    KiCopyCounters
 * 00000001404215B9: mov     rcx, gs:188h
 * 00000001404215C2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404215C6: cmp     word ptr [rbp+80h], 0
 * 00000001404215CE: jz      short loc_1404215D5
 * 00000001404215D0: call    KiRestoreDebugRegisterState
 * 00000001404215D5: mov     rcx, gs:188h
 * 00000001404215DE: bt      dword ptr [rcx+74h], 16h
 * 00000001404215E3: jnb     short loc_14042160F
 * 00000001404215E5: xor     ecx, ecx
 * 00000001404215E7: rdsspq  rcx
 * 00000001404215EC: mov     r8, gs:95A8h
 * 00000001404215F5: add     r8, 8
 * 00000001404215F9: cmp     rcx, r8
 * 00000001404215FC: jnz     short loc_14042160F
 * 00000001404215FE: mov     rcx, gs:95A0h
 * 0000000140421607: rstorssp qword ptr [rcx]
 * 000000014042160B: saveprevssp
 * 000000014042160F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421613: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421617: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042161B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042161F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421623: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421627: mov     r11, [rbp-20h]
 * 000000014042162B: mov     r10, [rbp-28h]
 * 000000014042162F: mov     r9, [rbp-30h]
 * 0000000140421633: mov     r8, [rbp-38h]
 * 0000000140421637: mov     byte ptr gs:856h, 0
 * 0000000140421640: movzx   eax, word ptr gs:86Ah
 * 0000000140421649: cmp     gs:864h, ax
 * 0000000140421652: jz      short loc_140421666
 * 0000000140421654: mov     gs:864h, ax
 * 000000014042165D: mov     ecx, 48h ; 'H'
 * 0000000140421662: xor     edx, edx
 * 0000000140421664: wrmsr
 * 0000000140421666: btr     word ptr gs:860h, 2
 * 0000000140421671: jnb     short loc_140421681
 * 0000000140421673: mov     eax, 1
 * 0000000140421678: xor     edx, edx
 * 000000014042167A: mov     ecx, 49h ; 'I'
 * 000000014042167F: wrmsr
 * 0000000140421681: btr     word ptr gs:860h, 5
 * 000000014042168C: jnb     loc_1404217C9
 * 0000000140421692: call    loc_1404217A5
 * 0000000140421697: add     rsp, 8
 * 000000014042169B: call    loc_1404217AE
 * 00000001404216A0: add     rsp, 8
 * 00000001404216A4: call    loc_140421697
 * 00000001404216A9: add     rsp, 8
 * 00000001404216AD: call    loc_1404216A0
 * 00000001404216B2: add     rsp, 8
 * 00000001404216B6: call    loc_1404216A9
 * 00000001404216BB: add     rsp, 8
 * 00000001404216BF: call    loc_1404216B2
 * 00000001404216C4: add     rsp, 8
 * 00000001404216C8: call    loc_1404216BB
 * 00000001404216CD: add     rsp, 8
 * 00000001404216D1: call    loc_1404216C4
 * 00000001404216D6: add     rsp, 8
 * 00000001404216DA: call    loc_1404216CD
 * 00000001404216DF: add     rsp, 8
 * 00000001404216E3: call    loc_1404216D6
 * 00000001404216E8: add     rsp, 8
 * 00000001404216EC: call    loc_1404216DF
 * 00000001404216F1: add     rsp, 8
 * 00000001404216F5: call    loc_1404216E8
 * 00000001404216FA: add     rsp, 8
 * 00000001404216FE: call    loc_1404216F1
 * 0000000140421703: add     rsp, 8
 * 0000000140421707: call    loc_1404216FA
 * 000000014042170C: add     rsp, 8
 * 0000000140421710: call    loc_140421703
 * 0000000140421715: add     rsp, 8
 * 0000000140421719: call    loc_14042170C
 * 000000014042171E: add     rsp, 8
 * 0000000140421722: call    loc_140421715
 * 0000000140421727: add     rsp, 8
 * 000000014042172B: call    loc_14042171E
 * 0000000140421730: add     rsp, 8
 * 0000000140421734: call    loc_140421727
 * 0000000140421739: add     rsp, 8
 * 000000014042173D: call    loc_140421730
 * 0000000140421742: add     rsp, 8
 * 0000000140421746: call    loc_140421739
 * 000000014042174B: add     rsp, 8
 * 000000014042174F: call    loc_140421742
 * 0000000140421754: add     rsp, 8
 * 0000000140421758: call    loc_14042174B
 * 000000014042175D: add     rsp, 8
 * 0000000140421761: call    loc_140421754
 * 0000000140421766: add     rsp, 8
 * 000000014042176A: call    loc_14042175D
 * 000000014042176F: add     rsp, 8
 * 0000000140421773: call    loc_140421766
 * 0000000140421778: add     rsp, 8
 * 000000014042177C: call    loc_14042176F
 * 0000000140421781: add     rsp, 8
 * 0000000140421785: call    loc_140421778
 * 000000014042178A: add     rsp, 8
 * 000000014042178E: call    loc_140421781
 * 0000000140421793: add     rsp, 8
 * 0000000140421797: call    loc_14042178A
 * 000000014042179C: add     rsp, 8
 * 00000001404217A0: call    loc_140421793
 * 00000001404217A5: add     rsp, 8
 * 00000001404217A9: call    loc_14042179C
 * 00000001404217AE: add     rsp, 8
 * 00000001404217B2: mov     eax, 0DADAh
 * 00000001404217B7: test    byte ptr gs:862h, 8
 * 00000001404217C0: jz      short loc_1404217C9
 * 00000001404217C2: mov     al, 20h ; ' '
 * 00000001404217C4: incsspq rax
 * 00000001404217C9: test    word ptr gs:860h, 80h
 * 00000001404217D4: jz      short loc_1404217E2
 * 00000001404217D6: xor     eax, eax
 * 00000001404217D8: xor     edx, edx
 * 00000001404217DA: mov     ecx, 1
 * 00000001404217DF: div     rcx
 * 00000001404217E2: mov     rdx, [rbp-40h]
 * 00000001404217E6: mov     rcx, [rbp-48h]
 * 00000001404217EA: mov     rax, [rbp-50h]
 * 00000001404217EE: mov     rsp, rbp
 * 00000001404217F1: mov     rbp, [rbp+0D8h]
 * 00000001404217F8: add     rsp, 0E8h
 * 00000001404217FF: test    cs:KiKvaShadow, 1
 * 0000000140421806: jz      short loc_14042180D
 * 0000000140421808: jmp     KiKernelExit
 * 000000014042180D: test    word ptr gs:860h, 100h
 * 0000000140421818: jz      short loc_14042181F
 * 000000014042181A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042181F: swapgs
 * 0000000140421822: iretq
 * 0000000140421824: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421828: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042182C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421830: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421834: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421838: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042183C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421840: mov     r11, [rbp-20h]
 * 0000000140421844: mov     r10, [rbp-28h]
 * 0000000140421848: mov     r9, [rbp-30h]
 * 000000014042184C: mov     r8, [rbp-38h]
 * 0000000140421850: mov     rdx, [rbp-40h]
 * 0000000140421854: mov     rcx, [rbp-48h]
 * 0000000140421858: mov     rax, [rbp-50h]
 * 000000014042185C: mov     rsp, rbp
 * 000000014042185F: mov     rbp, [rbp+0D8h]
 * 0000000140421866: add     rsp, 0E8h
 * 000000014042186D: iretq
 */
