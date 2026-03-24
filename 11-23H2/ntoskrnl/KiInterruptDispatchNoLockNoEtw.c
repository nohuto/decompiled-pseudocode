/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1404214F0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420B60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1404214F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404214F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404214F0: mov     rdx, rsp
 * 00000001404214F3: mov     rcx, gs:8B58h
 * 00000001404214FC: lea     rax, [rcx-6000h]
 * 0000000140421503: cmp     rax, rsp
 * 0000000140421506: ja      short loc_14042150D
 * 0000000140421508: cmp     rsp, rcx
 * 000000014042150B: jb      short loc_140421519
 * 000000014042150D: cmp     cs:KiBugCheckActive, 0
 * 0000000140421514: jnz     short loc_140421519
 * 0000000140421516: mov     rsp, rcx
 * 0000000140421519: sub     rsp, 20h
 * 000000014042151D: mov     [rsp+20h+var_10], rdx
 * 0000000140421522: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140421527: mov     rsp, [rsp+20h+var_10]
 * 000000014042152C: mov     rcx, rsi
 * 000000014042152F: call    HalPerformEndOfInterrupt
 * 0000000140421534: mov     rcx, gs:20h
 * 000000014042153D: cmp     byte ptr [rcx+20h], 1
 * 0000000140421541: ja      short loc_1404215BD
 * 0000000140421543: rdtsc
 * 0000000140421545: shl     rdx, 20h
 * 0000000140421549: or      rax, rdx
 * 000000014042154C: sub     rax, [rcx+8180h]
 * 0000000140421553: add     [rcx+8278h], rax
 * 000000014042155A: add     [rcx+8180h], rax
 * 0000000140421561: mov     r8, rax
 * 0000000140421564: mov     rax, [rcx+8]
 * 0000000140421568: test    byte ptr [rax+2], 72h
 * 000000014042156C: jz      short loc_140421581
 * 000000014042156E: xor     edx, edx
 * 0000000140421570: call    KiBeginThreadAccountingPeriod
 * 0000000140421575: mov     rcx, gs:20h
 * 000000014042157E: inc     byte ptr [rcx+20h]
 * 0000000140421581: mov     dl, [rcx+6]
 * 0000000140421584: and     byte ptr [rcx+6], 0
 * 0000000140421588: cmp     byte ptr [rcx+7], 0
 * 000000014042158C: jnz     short loc_1404215BD
 * 000000014042158E: test    dl, dl
 * 0000000140421590: jz      short loc_1404215BD
 * 0000000140421592: cmp     byte ptr [rbp-57h], 2
 * 0000000140421596: jnb     short loc_1404215A3
 * 0000000140421598: and     byte ptr [rcx+20h], 0
 * 000000014042159C: call    KiDpcInterruptBypass
 * 00000001404215A1: jmp     short loc_1404215C0
 * 00000001404215A3: mov     ecx, 2
 * 00000001404215A8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404215AF: nop     dword ptr [rax+rax+00h]
 * 00000001404215B4: mov     rcx, gs:20h
 * 00000001404215BD: dec     byte ptr [rcx+20h]
 * 00000001404215C0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404215C4: cmp     cs:KiIrqlFlags, 0
 * 00000001404215CB: jz      short loc_1404215D4
 * 00000001404215CD: call    KzSetIrqlUnsafe
 * 00000001404215D2: jmp     short loc_1404215D8
 * 00000001404215D4: mov     cr8, rcx
 * 00000001404215D8: mov     rsi, [rbp+0D0h]
 * 00000001404215DF: test    byte ptr [rbp+0F0h], 1
 * 00000001404215E6: jz      loc_1404218D4
 * 00000001404215EC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404215F3: jz      short loc_1404215F8
 * 00000001404215F5: stac
 * 00000001404215F8: mov     rcx, gs:188h
 * 0000000140421601: test    byte ptr [rcx+0C2h], 3
 * 0000000140421608: jz      short loc_140421625
 * 000000014042160A: mov     ecx, 1
 * 000000014042160F: mov     cr8, rcx
 * 0000000140421613: sti
 * 0000000140421614: call    KiInitiateUserApc
 * 0000000140421619: cli
 * 000000014042161A: mov     ecx, 0
 * 000000014042161F: mov     cr8, rcx
 * 0000000140421623: jmp     short loc_1404215F8
 * 0000000140421625: test    byte ptr gs:86Ch, 2
 * 000000014042162E: jz      short loc_140421637
 * 0000000140421630: xor     ecx, ecx
 * 0000000140421632: call    KiUpdateStibpPairing
 * 0000000140421637: mov     rcx, gs:188h
 * 0000000140421640: test    dword ptr [rcx], 8000000h
 * 0000000140421646: jz      short loc_14042164D
 * 0000000140421648: call    KiRestoreSetContextState
 * 000000014042164D: mov     rcx, gs:188h
 * 0000000140421656: test    dword ptr [rcx], 10000h
 * 000000014042165C: jz      short loc_140421672
 * 000000014042165E: test    byte ptr [rcx+2], 1
 * 0000000140421662: jz      short loc_140421672
 * 0000000140421664: call    KiCopyCounters
 * 0000000140421669: mov     rcx, gs:188h
 * 0000000140421672: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421676: cmp     word ptr [rbp+80h], 0
 * 000000014042167E: jz      short loc_140421685
 * 0000000140421680: call    KiRestoreDebugRegisterState
 * 0000000140421685: mov     rcx, gs:188h
 * 000000014042168E: bt      dword ptr [rcx+74h], 16h
 * 0000000140421693: jnb     short loc_1404216BF
 * 0000000140421695: xor     ecx, ecx
 * 0000000140421697: rdsspq  rcx
 * 000000014042169C: mov     r8, gs:95A8h
 * 00000001404216A5: add     r8, 8
 * 00000001404216A9: cmp     rcx, r8
 * 00000001404216AC: jnz     short loc_1404216BF
 * 00000001404216AE: mov     rcx, gs:95A0h
 * 00000001404216B7: rstorssp qword ptr [rcx]
 * 00000001404216BB: saveprevssp
 * 00000001404216BF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404216C3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404216C7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404216CB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404216CF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404216D3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404216D7: mov     r11, [rbp-20h]
 * 00000001404216DB: mov     r10, [rbp-28h]
 * 00000001404216DF: mov     r9, [rbp-30h]
 * 00000001404216E3: mov     r8, [rbp-38h]
 * 00000001404216E7: mov     byte ptr gs:856h, 0
 * 00000001404216F0: movzx   eax, word ptr gs:86Ah
 * 00000001404216F9: cmp     gs:864h, ax
 * 0000000140421702: jz      short loc_140421716
 * 0000000140421704: mov     gs:864h, ax
 * 000000014042170D: mov     ecx, 48h ; 'H'
 * 0000000140421712: xor     edx, edx
 * 0000000140421714: wrmsr
 * 0000000140421716: btr     word ptr gs:860h, 2
 * 0000000140421721: jnb     short loc_140421731
 * 0000000140421723: mov     eax, 1
 * 0000000140421728: xor     edx, edx
 * 000000014042172A: mov     ecx, 49h ; 'I'
 * 000000014042172F: wrmsr
 * 0000000140421731: btr     word ptr gs:860h, 5
 * 000000014042173C: jnb     loc_140421879
 * 0000000140421742: call    loc_140421855
 * 0000000140421747: add     rsp, 8
 * 000000014042174B: call    loc_14042185E
 * 0000000140421750: add     rsp, 8
 * 0000000140421754: call    loc_140421747
 * 0000000140421759: add     rsp, 8
 * 000000014042175D: call    loc_140421750
 * 0000000140421762: add     rsp, 8
 * 0000000140421766: call    loc_140421759
 * 000000014042176B: add     rsp, 8
 * 000000014042176F: call    loc_140421762
 * 0000000140421774: add     rsp, 8
 * 0000000140421778: call    loc_14042176B
 * 000000014042177D: add     rsp, 8
 * 0000000140421781: call    loc_140421774
 * 0000000140421786: add     rsp, 8
 * 000000014042178A: call    loc_14042177D
 * 000000014042178F: add     rsp, 8
 * 0000000140421793: call    loc_140421786
 * 0000000140421798: add     rsp, 8
 * 000000014042179C: call    loc_14042178F
 * 00000001404217A1: add     rsp, 8
 * 00000001404217A5: call    loc_140421798
 * 00000001404217AA: add     rsp, 8
 * 00000001404217AE: call    loc_1404217A1
 * 00000001404217B3: add     rsp, 8
 * 00000001404217B7: call    loc_1404217AA
 * 00000001404217BC: add     rsp, 8
 * 00000001404217C0: call    loc_1404217B3
 * 00000001404217C5: add     rsp, 8
 * 00000001404217C9: call    loc_1404217BC
 * 00000001404217CE: add     rsp, 8
 * 00000001404217D2: call    loc_1404217C5
 * 00000001404217D7: add     rsp, 8
 * 00000001404217DB: call    loc_1404217CE
 * 00000001404217E0: add     rsp, 8
 * 00000001404217E4: call    loc_1404217D7
 * 00000001404217E9: add     rsp, 8
 * 00000001404217ED: call    loc_1404217E0
 * 00000001404217F2: add     rsp, 8
 * 00000001404217F6: call    loc_1404217E9
 * 00000001404217FB: add     rsp, 8
 * 00000001404217FF: call    loc_1404217F2
 * 0000000140421804: add     rsp, 8
 * 0000000140421808: call    loc_1404217FB
 * 000000014042180D: add     rsp, 8
 * 0000000140421811: call    loc_140421804
 * 0000000140421816: add     rsp, 8
 * 000000014042181A: call    loc_14042180D
 * 000000014042181F: add     rsp, 8
 * 0000000140421823: call    loc_140421816
 * 0000000140421828: add     rsp, 8
 * 000000014042182C: call    loc_14042181F
 * 0000000140421831: add     rsp, 8
 * 0000000140421835: call    loc_140421828
 * 000000014042183A: add     rsp, 8
 * 000000014042183E: call    loc_140421831
 * 0000000140421843: add     rsp, 8
 * 0000000140421847: call    loc_14042183A
 * 000000014042184C: add     rsp, 8
 * 0000000140421850: call    loc_140421843
 * 0000000140421855: add     rsp, 8
 * 0000000140421859: call    loc_14042184C
 * 000000014042185E: add     rsp, 8
 * 0000000140421862: mov     eax, 0DADAh
 * 0000000140421867: test    byte ptr gs:862h, 8
 * 0000000140421870: jz      short loc_140421879
 * 0000000140421872: mov     al, 20h ; ' '
 * 0000000140421874: incsspq rax
 * 0000000140421879: test    word ptr gs:860h, 80h
 * 0000000140421884: jz      short loc_140421892
 * 0000000140421886: xor     eax, eax
 * 0000000140421888: xor     edx, edx
 * 000000014042188A: mov     ecx, 1
 * 000000014042188F: div     rcx
 * 0000000140421892: mov     rdx, [rbp-40h]
 * 0000000140421896: mov     rcx, [rbp-48h]
 * 000000014042189A: mov     rax, [rbp-50h]
 * 000000014042189E: mov     rsp, rbp
 * 00000001404218A1: mov     rbp, [rbp+0D8h]
 * 00000001404218A8: add     rsp, 0E8h
 * 00000001404218AF: test    cs:KiKvaShadow, 1
 * 00000001404218B6: jz      short loc_1404218BD
 * 00000001404218B8: jmp     KiKernelExit
 * 00000001404218BD: test    word ptr gs:860h, 100h
 * 00000001404218C8: jz      short loc_1404218CF
 * 00000001404218CA: verw    [rsp-1C8h+arg_1E0]
 * 00000001404218CF: swapgs
 * 00000001404218D2: iretq
 * 00000001404218D4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404218D8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404218DC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404218E0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404218E4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404218E8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404218EC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404218F0: mov     r11, [rbp-20h]
 * 00000001404218F4: mov     r10, [rbp-28h]
 * 00000001404218F8: mov     r9, [rbp-30h]
 * 00000001404218FC: mov     r8, [rbp-38h]
 * 0000000140421900: mov     rdx, [rbp-40h]
 * 0000000140421904: mov     rcx, [rbp-48h]
 * 0000000140421908: mov     rax, [rbp-50h]
 * 000000014042190C: mov     rsp, rbp
 * 000000014042190F: mov     rbp, [rbp+0D8h]
 * 0000000140421916: add     rsp, 0E8h
 * 000000014042191D: iretq
 */
