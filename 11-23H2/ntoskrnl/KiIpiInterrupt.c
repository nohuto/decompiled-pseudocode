/*
 * XREFs of KiIpiInterrupt @ 0x140427DB0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140AF7240 (KiIpiInterruptShadow.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140428540 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140427DB0
 * Reason: Hex-Rays returned no pseudocode for 0x140427DB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427DB0: sub     rsp, 8
 * 0000000140427DB4: push    rbp
 * 0000000140427DB5: push    rsi
 * 0000000140427DB6: sub     rsp, 150h
 * 0000000140427DBD: lea     rbp, [rsp+80h]
 * 0000000140427DC5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140427DC9: mov     [rbp+0E8h+var_138], rax
 * 0000000140427DCD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140427DD1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140427DD5: mov     [rbp+0E8h+var_120], r8
 * 0000000140427DD9: mov     [rbp+0E8h+var_118], r9
 * 0000000140427DDD: mov     [rbp+0E8h+var_110], r10
 * 0000000140427DE1: mov     [rbp+0E8h+var_108], r11
 * 0000000140427DE5: test    [rbp+0E8h+arg_0], 1
 * 0000000140427DEC: jnz     short loc_140427E28
 * 0000000140427DEE: xor     edx, edx
 * 0000000140427DF0: rdsspq  rdx
 * 0000000140427DF5: mov     [rbp+0E8h+var_90], rdx
 * 0000000140427DF9: lfence
 * 0000000140427DFC: test    word ptr gs:860h, 1
 * 0000000140427E07: jnz     short loc_140427E11
 * 0000000140427E09: lfence
 * 0000000140427E0C: jmp     loc_140428098
 * 0000000140427E11: movzx   eax, word ptr gs:864h
 * 0000000140427E1A: mov     ecx, 48h ; 'H'
 * 0000000140427E1F: xor     edx, edx
 * 0000000140427E21: wrmsr
 * 0000000140427E23: jmp     loc_140428098
 * 0000000140427E28: test    cs:KiKvaShadow, 1
 * 0000000140427E2F: jnz     short loc_140427E34
 * 0000000140427E31: swapgs
 * 0000000140427E34: lfence
 * 0000000140427E37: mov     rcx, gs:95A8h
 * 0000000140427E40: test    rcx, rcx
 * 0000000140427E43: jz      short loc_140427E64
 * 0000000140427E45: rdsspq  rdx
 * 0000000140427E4A: mov     r10, gs:95A0h
 * 0000000140427E53: add     r10, 8
 * 0000000140427E57: cmp     rdx, r10
 * 0000000140427E5A: jnz     short loc_140427E64
 * 0000000140427E5C: rstorssp qword ptr [rcx]
 * 0000000140427E60: saveprevssp
 * 0000000140427E64: mov     r10, gs:188h
 * 0000000140427E6D: mov     rcx, gs:188h
 * 0000000140427E76: mov     rcx, [rcx+220h]
 * 0000000140427E7D: mov     rcx, [rcx+9E0h]
 * 0000000140427E84: mov     gs:858h, rcx
 * 0000000140427E8D: mov     cx, gs:850h
 * 0000000140427E96: mov     gs:852h, cx
 * 0000000140427E9F: mov     cx, gs:860h
 * 0000000140427EA8: mov     gs:854h, cx
 * 0000000140427EB1: movzx   eax, word ptr gs:866h
 * 0000000140427EBA: cmp     gs:864h, ax
 * 0000000140427EC3: jz      short loc_140427ED7
 * 0000000140427EC5: mov     gs:864h, ax
 * 0000000140427ECE: mov     ecx, 48h ; 'H'
 * 0000000140427ED3: xor     edx, edx
 * 0000000140427ED5: wrmsr
 * 0000000140427ED7: movzx   edx, word ptr gs:860h
 * 0000000140427EE0: test    edx, 8
 * 0000000140427EE6: jz      short loc_140427EFF
 * 0000000140427EE8: mov     eax, 1
 * 0000000140427EED: xor     edx, edx
 * 0000000140427EEF: mov     ecx, 49h ; 'I'
 * 0000000140427EF4: wrmsr
 * 0000000140427EF6: movzx   edx, word ptr gs:860h
 * 0000000140427EFF: test    edx, 2
 * 0000000140427F05: jz      loc_140428042
 * 0000000140427F0B: call    loc_14042801E
 * 0000000140427F10: add     rsp, 8
 * 0000000140427F14: call    loc_140428027
 * 0000000140427F19: add     rsp, 8
 * 0000000140427F1D: call    loc_140427F10
 * 0000000140427F22: add     rsp, 8
 * 0000000140427F26: call    loc_140427F19
 * 0000000140427F2B: add     rsp, 8
 * 0000000140427F2F: call    loc_140427F22
 * 0000000140427F34: add     rsp, 8
 * 0000000140427F38: call    loc_140427F2B
 * 0000000140427F3D: add     rsp, 8
 * 0000000140427F41: call    loc_140427F34
 * 0000000140427F46: add     rsp, 8
 * 0000000140427F4A: call    loc_140427F3D
 * 0000000140427F4F: add     rsp, 8
 * 0000000140427F53: call    loc_140427F46
 * 0000000140427F58: add     rsp, 8
 * 0000000140427F5C: call    loc_140427F4F
 * 0000000140427F61: add     rsp, 8
 * 0000000140427F65: call    loc_140427F58
 * 0000000140427F6A: add     rsp, 8
 * 0000000140427F6E: call    loc_140427F61
 * 0000000140427F73: add     rsp, 8
 * 0000000140427F77: call    loc_140427F6A
 * 0000000140427F7C: add     rsp, 8
 * 0000000140427F80: call    loc_140427F73
 * 0000000140427F85: add     rsp, 8
 * 0000000140427F89: call    loc_140427F7C
 * 0000000140427F8E: add     rsp, 8
 * 0000000140427F92: call    loc_140427F85
 * 0000000140427F97: add     rsp, 8
 * 0000000140427F9B: call    loc_140427F8E
 * 0000000140427FA0: add     rsp, 8
 * 0000000140427FA4: call    loc_140427F97
 * 0000000140427FA9: add     rsp, 8
 * 0000000140427FAD: call    loc_140427FA0
 * 0000000140427FB2: add     rsp, 8
 * 0000000140427FB6: call    loc_140427FA9
 * 0000000140427FBB: add     rsp, 8
 * 0000000140427FBF: call    loc_140427FB2
 * 0000000140427FC4: add     rsp, 8
 * 0000000140427FC8: call    loc_140427FBB
 * 0000000140427FCD: add     rsp, 8
 * 0000000140427FD1: call    loc_140427FC4
 * 0000000140427FD6: add     rsp, 8
 * 0000000140427FDA: call    loc_140427FCD
 * 0000000140427FDF: add     rsp, 8
 * 0000000140427FE3: call    loc_140427FD6
 * 0000000140427FE8: add     rsp, 8
 * 0000000140427FEC: call    loc_140427FDF
 * 0000000140427FF1: add     rsp, 8
 * 0000000140427FF5: call    loc_140427FE8
 * 0000000140427FFA: add     rsp, 8
 * 0000000140427FFE: call    loc_140427FF1
 * 0000000140428003: add     rsp, 8
 * 0000000140428007: call    loc_140427FFA
 * 000000014042800C: add     rsp, 8
 * 0000000140428010: call    loc_140428003
 * 0000000140428015: add     rsp, 8
 * 0000000140428019: call    loc_14042800C
 * 000000014042801E: add     rsp, 8
 * 0000000140428022: call    loc_140428015
 * 0000000140428027: add     rsp, 8
 * 000000014042802B: mov     eax, 0DADAh
 * 0000000140428030: test    byte ptr gs:862h, 8
 * 0000000140428039: jz      short loc_140428042
 * 000000014042803B: mov     al, 20h ; ' '
 * 000000014042803D: incsspq rax
 * 0000000140428042: test    edx, 200h
 * 0000000140428048: jz      short loc_14042804F
 * 000000014042804A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042804F: lfence
 * 0000000140428052: mov     byte ptr gs:856h, 0
 * 000000014042805B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140428062: jz      short loc_140428083
 * 0000000140428064: mov     ecx, 6A7h
 * 0000000140428069: rdmsr
 * 000000014042806B: cmp     edx, 0
 * 000000014042806E: jz      short loc_140428083
 * 0000000140428070: mov     ecx, edx
 * 0000000140428072: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140428078: cmp     edx, ecx
 * 000000014042807A: jz      short loc_140428083
 * 000000014042807C: mov     ecx, 6A7h
 * 0000000140428081: wrmsr
 * 0000000140428083: test    byte ptr [r10+3], 3
 * 0000000140428088: mov     [rbp+0E8h+var_68], 0
 * 0000000140428091: jz      short loc_140428098
 * 0000000140428093: call    KiSaveDebugRegisterState
 * 0000000140428098: cld
 * 0000000140428099: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042809D: ldmxcsr dword ptr gs:180h
 * 00000001404280A6: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404280AA: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404280AE: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404280B2: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404280B6: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404280BA: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404280BE: cmp     byte ptr gs:82DAh, 0
 * 00000001404280C7: jz      short loc_1404280CE
 * 00000001404280C9: call    KeWakeProcessor
 * 00000001404280CE: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404280D5: cmp     rax, [rbp+0E8h]
 * 00000001404280DC: jnb     short loc_1404280F7
 * 00000001404280DE: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404280E5: cmp     rax, [rbp+0E8h]
 * 00000001404280EC: jb      short loc_1404280F7
 * 00000001404280EE: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404280F2: call    KiCheckForSListAddress
 * 00000001404280F7: xor     esi, esi
 * 00000001404280F9: inc     dword ptr gs:82C0h
 * 0000000140428101: mov     rdx, rsp
 * 0000000140428104: mov     rcx, gs:8B58h
 * 000000014042810D: lea     rax, [rcx-6000h]
 * 0000000140428114: cmp     rax, rsp
 * 0000000140428117: ja      short loc_14042811E
 * 0000000140428119: cmp     rsp, rcx
 * 000000014042811C: jb      short loc_14042812A
 * 000000014042811E: cmp     cs:KiBugCheckActive, 0
 * 0000000140428125: jnz     short loc_14042812A
 * 0000000140428127: mov     rsp, rcx
 * 000000014042812A: sub     rsp, 20h
 * 000000014042812E: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140428133: call    KiIpiInterruptSubDispatch
 * 0000000140428138: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 000000014042813D: mov     rcx, rsi
 * 0000000140428140: call    HalPerformEndOfInterrupt
 * 0000000140428145: mov     rcx, gs:20h
 * 000000014042814E: cmp     byte ptr [rcx+20h], 1
 * 0000000140428152: ja      short loc_1404281CE
 * 0000000140428154: rdtsc
 * 0000000140428156: shl     rdx, 20h
 * 000000014042815A: or      rax, rdx
 * 000000014042815D: sub     rax, [rcx+8180h]
 * 0000000140428164: add     [rcx+8278h], rax
 * 000000014042816B: add     [rcx+8180h], rax
 * 0000000140428172: mov     r8, rax
 * 0000000140428175: mov     rax, [rcx+8]
 * 0000000140428179: test    byte ptr [rax+2], 72h
 * 000000014042817D: jz      short loc_140428192
 * 000000014042817F: xor     edx, edx
 * 0000000140428181: call    KiBeginThreadAccountingPeriod
 * 0000000140428186: mov     rcx, gs:20h
 * 000000014042818F: inc     byte ptr [rcx+20h]
 * 0000000140428192: mov     dl, [rcx+6]
 * 0000000140428195: and     byte ptr [rcx+6], 0
 * 0000000140428199: cmp     byte ptr [rcx+7], 0
 * 000000014042819D: jnz     short loc_1404281CE
 * 000000014042819F: test    dl, dl
 * 00000001404281A1: jz      short loc_1404281CE
 * 00000001404281A3: cmp     [rbp+0E8h+var_13F], 2
 * 00000001404281A7: jnb     short loc_1404281B4
 * 00000001404281A9: and     byte ptr [rcx+20h], 0
 * 00000001404281AD: call    KiDpcInterruptBypass
 * 00000001404281B2: jmp     short loc_1404281D1
 * 00000001404281B4: mov     ecx, 2
 * 00000001404281B9: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404281C0: nop     dword ptr [rax+rax+00h]
 * 00000001404281C5: mov     rcx, gs:20h
 * 00000001404281CE: dec     byte ptr [rcx+20h]
 * 00000001404281D1: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404281D5: cmp     cs:KiIrqlFlags, 0
 * 00000001404281DC: jz      short loc_1404281E5
 * 00000001404281DE: call    KzSetIrqlUnsafe
 * 00000001404281E3: jmp     short loc_1404281E9
 * 00000001404281E5: mov     cr8, rcx
 * 00000001404281E9: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404281F0: test    [rbp+0E8h+arg_0], 1
 * 00000001404281F7: jz      loc_1404284E5
 * 00000001404281FD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140428204: jz      short loc_140428209
 * 0000000140428206: stac
 * 0000000140428209: mov     rcx, gs:188h
 * 0000000140428212: test    byte ptr [rcx+0C2h], 3
 * 0000000140428219: jz      short loc_140428236
 * 000000014042821B: mov     ecx, 1
 * 0000000140428220: mov     cr8, rcx
 * 0000000140428224: sti
 * 0000000140428225: call    KiInitiateUserApc
 * 000000014042822A: cli
 * 000000014042822B: mov     ecx, 0
 * 0000000140428230: mov     cr8, rcx
 * 0000000140428234: jmp     short loc_140428209
 * 0000000140428236: test    byte ptr gs:86Ch, 2
 * 000000014042823F: jz      short loc_140428248
 * 0000000140428241: xor     ecx, ecx
 * 0000000140428243: call    KiUpdateStibpPairing
 * 0000000140428248: mov     rcx, gs:188h
 * 0000000140428251: test    dword ptr [rcx], 8000000h
 * 0000000140428257: jz      short loc_14042825E
 * 0000000140428259: call    KiRestoreSetContextState
 * 000000014042825E: mov     rcx, gs:188h
 * 0000000140428267: test    dword ptr [rcx], 10000h
 * 000000014042826D: jz      short loc_140428283
 * 000000014042826F: test    byte ptr [rcx+2], 1
 * 0000000140428273: jz      short loc_140428283
 * 0000000140428275: call    KiCopyCounters
 * 000000014042827A: mov     rcx, gs:188h
 * 0000000140428283: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140428287: cmp     [rbp+0E8h+var_68], 0
 * 000000014042828F: jz      short loc_140428296
 * 0000000140428291: call    KiRestoreDebugRegisterState
 * 0000000140428296: mov     rcx, gs:188h
 * 000000014042829F: bt      dword ptr [rcx+74h], 16h
 * 00000001404282A4: jnb     short loc_1404282D0
 * 00000001404282A6: xor     ecx, ecx
 * 00000001404282A8: rdsspq  rcx
 * 00000001404282AD: mov     r8, gs:95A8h
 * 00000001404282B6: add     r8, 8
 * 00000001404282BA: cmp     rcx, r8
 * 00000001404282BD: jnz     short loc_1404282D0
 * 00000001404282BF: mov     rcx, gs:95A0h
 * 00000001404282C8: rstorssp qword ptr [rcx]
 * 00000001404282CC: saveprevssp
 * 00000001404282D0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404282D4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404282D8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404282DC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404282E0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404282E4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404282E8: mov     r11, [rbp+0E8h+var_108]
 * 00000001404282EC: mov     r10, [rbp+0E8h+var_110]
 * 00000001404282F0: mov     r9, [rbp+0E8h+var_118]
 * 00000001404282F4: mov     r8, [rbp+0E8h+var_120]
 * 00000001404282F8: mov     byte ptr gs:856h, 0
 * 0000000140428301: movzx   eax, word ptr gs:86Ah
 * 000000014042830A: cmp     gs:864h, ax
 * 0000000140428313: jz      short loc_140428327
 * 0000000140428315: mov     gs:864h, ax
 * 000000014042831E: mov     ecx, 48h ; 'H'
 * 0000000140428323: xor     edx, edx
 * 0000000140428325: wrmsr
 * 0000000140428327: btr     word ptr gs:860h, 2
 * 0000000140428332: jnb     short loc_140428342
 * 0000000140428334: mov     eax, 1
 * 0000000140428339: xor     edx, edx
 * 000000014042833B: mov     ecx, 49h ; 'I'
 * 0000000140428340: wrmsr
 * 0000000140428342: btr     word ptr gs:860h, 5
 * 000000014042834D: jnb     loc_14042848A
 * 0000000140428353: call    loc_140428466
 * 0000000140428358: add     rsp, 8
 * 000000014042835C: call    loc_14042846F
 * 0000000140428361: add     rsp, 8
 * 0000000140428365: call    loc_140428358
 * 000000014042836A: add     rsp, 8
 * 000000014042836E: call    loc_140428361
 * 0000000140428373: add     rsp, 8
 * 0000000140428377: call    loc_14042836A
 * 000000014042837C: add     rsp, 8
 * 0000000140428380: call    loc_140428373
 * 0000000140428385: add     rsp, 8
 * 0000000140428389: call    loc_14042837C
 * 000000014042838E: add     rsp, 8
 * 0000000140428392: call    loc_140428385
 * 0000000140428397: add     rsp, 8
 * 000000014042839B: call    loc_14042838E
 * 00000001404283A0: add     rsp, 8
 * 00000001404283A4: call    loc_140428397
 * 00000001404283A9: add     rsp, 8
 * 00000001404283AD: call    loc_1404283A0
 * 00000001404283B2: add     rsp, 8
 * 00000001404283B6: call    loc_1404283A9
 * 00000001404283BB: add     rsp, 8
 * 00000001404283BF: call    loc_1404283B2
 * 00000001404283C4: add     rsp, 8
 * 00000001404283C8: call    loc_1404283BB
 * 00000001404283CD: add     rsp, 8
 * 00000001404283D1: call    loc_1404283C4
 * 00000001404283D6: add     rsp, 8
 * 00000001404283DA: call    loc_1404283CD
 * 00000001404283DF: add     rsp, 8
 * 00000001404283E3: call    loc_1404283D6
 * 00000001404283E8: add     rsp, 8
 * 00000001404283EC: call    loc_1404283DF
 * 00000001404283F1: add     rsp, 8
 * 00000001404283F5: call    loc_1404283E8
 * 00000001404283FA: add     rsp, 8
 * 00000001404283FE: call    loc_1404283F1
 * 0000000140428403: add     rsp, 8
 * 0000000140428407: call    loc_1404283FA
 * 000000014042840C: add     rsp, 8
 * 0000000140428410: call    loc_140428403
 * 0000000140428415: add     rsp, 8
 * 0000000140428419: call    loc_14042840C
 * 000000014042841E: add     rsp, 8
 * 0000000140428422: call    loc_140428415
 * 0000000140428427: add     rsp, 8
 * 000000014042842B: call    loc_14042841E
 * 0000000140428430: add     rsp, 8
 * 0000000140428434: call    loc_140428427
 * 0000000140428439: add     rsp, 8
 * 000000014042843D: call    loc_140428430
 * 0000000140428442: add     rsp, 8
 * 0000000140428446: call    loc_140428439
 * 000000014042844B: add     rsp, 8
 * 000000014042844F: call    loc_140428442
 * 0000000140428454: add     rsp, 8
 * 0000000140428458: call    loc_14042844B
 * 000000014042845D: add     rsp, 8
 * 0000000140428461: call    loc_140428454
 * 0000000140428466: add     rsp, 8
 * 000000014042846A: call    loc_14042845D
 * 000000014042846F: add     rsp, 8
 * 0000000140428473: mov     eax, 0DADAh
 * 0000000140428478: test    byte ptr gs:862h, 8
 * 0000000140428481: jz      short loc_14042848A
 * 0000000140428483: mov     al, 20h ; ' '
 * 0000000140428485: incsspq rax
 * 000000014042848A: test    word ptr gs:860h, 80h
 * 0000000140428495: jz      short loc_1404284A3
 * 0000000140428497: xor     eax, eax
 * 0000000140428499: xor     edx, edx
 * 000000014042849B: mov     ecx, 1
 * 00000001404284A0: div     rcx
 * 00000001404284A3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404284A7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404284AB: mov     rax, [rbp+0E8h+var_138]
 * 00000001404284AF: mov     rsp, rbp
 * 00000001404284B2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404284B9: add     rsp, 0E8h
 * 00000001404284C0: test    cs:KiKvaShadow, 1
 * 00000001404284C7: jz      short loc_1404284CE
 * 00000001404284C9: jmp     KiKernelExit
 * 00000001404284CE: test    word ptr gs:860h, 100h
 * 00000001404284D9: jz      short loc_1404284E0
 * 00000001404284DB: verw    [rsp+arg_18]
 * 00000001404284E0: swapgs
 * 00000001404284E3: iretq
 * 00000001404284E5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404284E9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404284ED: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404284F1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404284F5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404284F9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404284FD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140428501: mov     r11, [rbp+0E8h+var_108]
 * 0000000140428505: mov     r10, [rbp+0E8h+var_110]
 * 0000000140428509: mov     r9, [rbp+0E8h+var_118]
 * 000000014042850D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140428511: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140428515: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140428519: mov     rax, [rbp+0E8h+var_138]
 * 000000014042851D: mov     rsp, rbp
 * 0000000140428520: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140428527: add     rsp, 0E8h
 * 000000014042852E: iretq
 */
