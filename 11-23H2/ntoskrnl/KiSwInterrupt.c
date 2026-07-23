/*
 * XREFs of KiSwInterrupt @ 0x140426EB0
 * Callers:
 *     KiSwInterruptShadow @ 0x140AF6CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248500 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSwInterruptDispatch @ 0x1403E47B0 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140426EB0
 * Reason: Hex-Rays returned no pseudocode for 0x140426EB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426EB0: sub     rsp, 8
 * 0000000140426EB4: push    rbp
 * 0000000140426EB5: push    rsi
 * 0000000140426EB6: sub     rsp, 150h
 * 0000000140426EBD: lea     rbp, [rsp+80h]
 * 0000000140426EC5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140426EC9: mov     [rbp+0E8h+var_138], rax
 * 0000000140426ECD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140426ED1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140426ED5: mov     [rbp+0E8h+var_120], r8
 * 0000000140426ED9: mov     [rbp+0E8h+var_118], r9
 * 0000000140426EDD: mov     [rbp+0E8h+var_110], r10
 * 0000000140426EE1: mov     [rbp+0E8h+var_108], r11
 * 0000000140426EE5: test    [rbp+0E8h+arg_0], 1
 * 0000000140426EEC: jnz     short loc_140426F28
 * 0000000140426EEE: xor     edx, edx
 * 0000000140426EF0: rdsspq  rdx
 * 0000000140426EF5: mov     [rbp+0E8h+var_90], rdx
 * 0000000140426EF9: lfence
 * 0000000140426EFC: test    word ptr gs:860h, 1
 * 0000000140426F07: jnz     short loc_140426F11
 * 0000000140426F09: lfence
 * 0000000140426F0C: jmp     loc_140427198
 * 0000000140426F11: movzx   eax, word ptr gs:864h
 * 0000000140426F1A: mov     ecx, 48h ; 'H'
 * 0000000140426F1F: xor     edx, edx
 * 0000000140426F21: wrmsr
 * 0000000140426F23: jmp     loc_140427198
 * 0000000140426F28: test    cs:KiKvaShadow, 1
 * 0000000140426F2F: jnz     short loc_140426F34
 * 0000000140426F31: swapgs
 * 0000000140426F34: lfence
 * 0000000140426F37: mov     rcx, gs:95A8h
 * 0000000140426F40: test    rcx, rcx
 * 0000000140426F43: jz      short loc_140426F64
 * 0000000140426F45: rdsspq  rdx
 * 0000000140426F4A: mov     r10, gs:95A0h
 * 0000000140426F53: add     r10, 8
 * 0000000140426F57: cmp     rdx, r10
 * 0000000140426F5A: jnz     short loc_140426F64
 * 0000000140426F5C: rstorssp qword ptr [rcx]
 * 0000000140426F60: saveprevssp
 * 0000000140426F64: mov     r10, gs:188h
 * 0000000140426F6D: mov     rcx, gs:188h
 * 0000000140426F76: mov     rcx, [rcx+220h]
 * 0000000140426F7D: mov     rcx, [rcx+9E0h]
 * 0000000140426F84: mov     gs:858h, rcx
 * 0000000140426F8D: mov     cx, gs:850h
 * 0000000140426F96: mov     gs:852h, cx
 * 0000000140426F9F: mov     cx, gs:860h
 * 0000000140426FA8: mov     gs:854h, cx
 * 0000000140426FB1: movzx   eax, word ptr gs:866h
 * 0000000140426FBA: cmp     gs:864h, ax
 * 0000000140426FC3: jz      short loc_140426FD7
 * 0000000140426FC5: mov     gs:864h, ax
 * 0000000140426FCE: mov     ecx, 48h ; 'H'
 * 0000000140426FD3: xor     edx, edx
 * 0000000140426FD5: wrmsr
 * 0000000140426FD7: movzx   edx, word ptr gs:860h
 * 0000000140426FE0: test    edx, 8
 * 0000000140426FE6: jz      short loc_140426FFF
 * 0000000140426FE8: mov     eax, 1
 * 0000000140426FED: xor     edx, edx
 * 0000000140426FEF: mov     ecx, 49h ; 'I'
 * 0000000140426FF4: wrmsr
 * 0000000140426FF6: movzx   edx, word ptr gs:860h
 * 0000000140426FFF: test    edx, 2
 * 0000000140427005: jz      loc_140427142
 * 000000014042700B: call    loc_14042711E
 * 0000000140427010: add     rsp, 8
 * 0000000140427014: call    loc_140427127
 * 0000000140427019: add     rsp, 8
 * 000000014042701D: call    loc_140427010
 * 0000000140427022: add     rsp, 8
 * 0000000140427026: call    loc_140427019
 * 000000014042702B: add     rsp, 8
 * 000000014042702F: call    loc_140427022
 * 0000000140427034: add     rsp, 8
 * 0000000140427038: call    loc_14042702B
 * 000000014042703D: add     rsp, 8
 * 0000000140427041: call    loc_140427034
 * 0000000140427046: add     rsp, 8
 * 000000014042704A: call    loc_14042703D
 * 000000014042704F: add     rsp, 8
 * 0000000140427053: call    loc_140427046
 * 0000000140427058: add     rsp, 8
 * 000000014042705C: call    loc_14042704F
 * 0000000140427061: add     rsp, 8
 * 0000000140427065: call    loc_140427058
 * 000000014042706A: add     rsp, 8
 * 000000014042706E: call    loc_140427061
 * 0000000140427073: add     rsp, 8
 * 0000000140427077: call    loc_14042706A
 * 000000014042707C: add     rsp, 8
 * 0000000140427080: call    loc_140427073
 * 0000000140427085: add     rsp, 8
 * 0000000140427089: call    loc_14042707C
 * 000000014042708E: add     rsp, 8
 * 0000000140427092: call    loc_140427085
 * 0000000140427097: add     rsp, 8
 * 000000014042709B: call    loc_14042708E
 * 00000001404270A0: add     rsp, 8
 * 00000001404270A4: call    loc_140427097
 * 00000001404270A9: add     rsp, 8
 * 00000001404270AD: call    loc_1404270A0
 * 00000001404270B2: add     rsp, 8
 * 00000001404270B6: call    loc_1404270A9
 * 00000001404270BB: add     rsp, 8
 * 00000001404270BF: call    loc_1404270B2
 * 00000001404270C4: add     rsp, 8
 * 00000001404270C8: call    loc_1404270BB
 * 00000001404270CD: add     rsp, 8
 * 00000001404270D1: call    loc_1404270C4
 * 00000001404270D6: add     rsp, 8
 * 00000001404270DA: call    loc_1404270CD
 * 00000001404270DF: add     rsp, 8
 * 00000001404270E3: call    loc_1404270D6
 * 00000001404270E8: add     rsp, 8
 * 00000001404270EC: call    loc_1404270DF
 * 00000001404270F1: add     rsp, 8
 * 00000001404270F5: call    loc_1404270E8
 * 00000001404270FA: add     rsp, 8
 * 00000001404270FE: call    loc_1404270F1
 * 0000000140427103: add     rsp, 8
 * 0000000140427107: call    loc_1404270FA
 * 000000014042710C: add     rsp, 8
 * 0000000140427110: call    loc_140427103
 * 0000000140427115: add     rsp, 8
 * 0000000140427119: call    loc_14042710C
 * 000000014042711E: add     rsp, 8
 * 0000000140427122: call    loc_140427115
 * 0000000140427127: add     rsp, 8
 * 000000014042712B: mov     eax, 0DADAh
 * 0000000140427130: test    byte ptr gs:862h, 8
 * 0000000140427139: jz      short loc_140427142
 * 000000014042713B: mov     al, 20h ; ' '
 * 000000014042713D: incsspq rax
 * 0000000140427142: test    edx, 200h
 * 0000000140427148: jz      short loc_14042714F
 * 000000014042714A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042714F: lfence
 * 0000000140427152: mov     byte ptr gs:856h, 0
 * 000000014042715B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140427162: jz      short loc_140427183
 * 0000000140427164: mov     ecx, 6A7h
 * 0000000140427169: rdmsr
 * 000000014042716B: cmp     edx, 0
 * 000000014042716E: jz      short loc_140427183
 * 0000000140427170: mov     ecx, edx
 * 0000000140427172: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140427178: cmp     edx, ecx
 * 000000014042717A: jz      short loc_140427183
 * 000000014042717C: mov     ecx, 6A7h
 * 0000000140427181: wrmsr
 * 0000000140427183: test    byte ptr [r10+3], 3
 * 0000000140427188: mov     [rbp+0E8h+var_68], 0
 * 0000000140427191: jz      short loc_140427198
 * 0000000140427193: call    KiSaveDebugRegisterState
 * 0000000140427198: cld
 * 0000000140427199: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042719D: ldmxcsr dword ptr gs:180h
 * 00000001404271A6: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404271AA: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404271AE: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404271B2: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404271B6: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404271BA: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404271BE: cmp     byte ptr gs:82DAh, 0
 * 00000001404271C7: jz      short loc_1404271CE
 * 00000001404271C9: call    KeWakeProcessor
 * 00000001404271CE: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404271D5: cmp     rax, [rbp+0E8h]
 * 00000001404271DC: jnb     short loc_1404271F7
 * 00000001404271DE: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404271E5: cmp     rax, [rbp+0E8h]
 * 00000001404271EC: jb      short loc_1404271F7
 * 00000001404271EE: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404271F2: call    KiCheckForSListAddress
 * 00000001404271F7: xor     esi, esi
 * 00000001404271F9: inc     dword ptr gs:82C0h
 * 0000000140427201: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140427208: jz      short loc_14042720D
 * 000000014042720A: clac
 * 000000014042720D: mov     ecx, 2
 * 0000000140427212: cmp     cs:KiIrqlFlags, 0
 * 0000000140427219: jz      short loc_140427222
 * 000000014042721B: call    KzSetIrqlUnsafe
 * 0000000140427220: jmp     short loc_14042722A
 * 0000000140427222: mov     rax, cr8
 * 0000000140427226: mov     cr8, rcx
 * 000000014042722A: mov     [rbp+0E8h+var_13F], al
 * 000000014042722D: mov     rcx, gs:20h
 * 0000000140427236: inc     byte ptr [rcx+20h]
 * 0000000140427239: cmp     byte ptr [rcx+20h], 1
 * 000000014042723D: jnz     short loc_14042728F
 * 000000014042723F: rdtsc
 * 0000000140427241: shl     rdx, 20h
 * 0000000140427245: or      rax, rdx
 * 0000000140427248: mov     r8, [rcx+8]
 * 000000014042724C: sub     rax, [rcx+8180h]
 * 0000000140427253: add     [r8+48h], rax
 * 0000000140427257: mov     edx, [r8+50h]
 * 000000014042725B: add     [rcx+8180h], rax
 * 0000000140427262: add     rdx, rax
 * 0000000140427265: mov     ecx, edx
 * 0000000140427267: shr     rdx, 20h
 * 000000014042726B: jz      short loc_140427270
 * 000000014042726D: or      ecx, 0FFFFFFFFh
 * 0000000140427270: mov     [r8+50h], ecx
 * 0000000140427274: test    byte ptr [r8+2], 0BEh
 * 0000000140427279: jz      short loc_14042728F
 * 000000014042727B: mov     rdx, r8
 * 000000014042727E: mov     r8, rax
 * 0000000140427281: mov     rcx, gs:20h
 * 000000014042728A: call    KiEndThreadAccountingPeriod
 * 000000014042728F: sti
 * 0000000140427290: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140427294: call    KiSwInterruptDispatch
 * 0000000140427299: cli
 * 000000014042729A: mov     rcx, rsi
 * 000000014042729D: call    HalPerformEndOfInterrupt
 * 00000001404272A2: mov     rcx, gs:20h
 * 00000001404272AB: cmp     byte ptr [rcx+20h], 1
 * 00000001404272AF: ja      short loc_14042732B
 * 00000001404272B1: rdtsc
 * 00000001404272B3: shl     rdx, 20h
 * 00000001404272B7: or      rax, rdx
 * 00000001404272BA: sub     rax, [rcx+8180h]
 * 00000001404272C1: add     [rcx+8278h], rax
 * 00000001404272C8: add     [rcx+8180h], rax
 * 00000001404272CF: mov     r8, rax
 * 00000001404272D2: mov     rax, [rcx+8]
 * 00000001404272D6: test    byte ptr [rax+2], 72h
 * 00000001404272DA: jz      short loc_1404272EF
 * 00000001404272DC: xor     edx, edx
 * 00000001404272DE: call    KiBeginThreadAccountingPeriod
 * 00000001404272E3: mov     rcx, gs:20h
 * 00000001404272EC: inc     byte ptr [rcx+20h]
 * 00000001404272EF: mov     dl, [rcx+6]
 * 00000001404272F2: and     byte ptr [rcx+6], 0
 * 00000001404272F6: cmp     byte ptr [rcx+7], 0
 * 00000001404272FA: jnz     short loc_14042732B
 * 00000001404272FC: test    dl, dl
 * 00000001404272FE: jz      short loc_14042732B
 * 0000000140427300: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140427304: jnb     short loc_140427311
 * 0000000140427306: and     byte ptr [rcx+20h], 0
 * 000000014042730A: call    KiDpcInterruptBypass
 * 000000014042730F: jmp     short loc_14042732E
 * 0000000140427311: mov     ecx, 2
 * 0000000140427316: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042731D: nop     dword ptr [rax+rax+00h]
 * 0000000140427322: mov     rcx, gs:20h
 * 000000014042732B: dec     byte ptr [rcx+20h]
 * 000000014042732E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140427332: cmp     cs:KiIrqlFlags, 0
 * 0000000140427339: jz      short loc_140427342
 * 000000014042733B: call    KzSetIrqlUnsafe
 * 0000000140427340: jmp     short loc_140427346
 * 0000000140427342: mov     cr8, rcx
 * 0000000140427346: mov     rsi, [rbp+0E8h+var_18]
 * 000000014042734D: cli
 * 000000014042734E: test    [rbp+0E8h+arg_0], 1
 * 0000000140427355: jz      loc_140427643
 * 000000014042735B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140427362: jz      short loc_140427367
 * 0000000140427364: stac
 * 0000000140427367: mov     rcx, gs:188h
 * 0000000140427370: test    byte ptr [rcx+0C2h], 3
 * 0000000140427377: jz      short loc_140427394
 * 0000000140427379: mov     ecx, 1
 * 000000014042737E: mov     cr8, rcx
 * 0000000140427382: sti
 * 0000000140427383: call    KiInitiateUserApc
 * 0000000140427388: cli
 * 0000000140427389: mov     ecx, 0
 * 000000014042738E: mov     cr8, rcx
 * 0000000140427392: jmp     short loc_140427367
 * 0000000140427394: test    byte ptr gs:86Ch, 2
 * 000000014042739D: jz      short loc_1404273A6
 * 000000014042739F: xor     ecx, ecx
 * 00000001404273A1: call    KiUpdateStibpPairing
 * 00000001404273A6: mov     rcx, gs:188h
 * 00000001404273AF: test    dword ptr [rcx], 8000000h
 * 00000001404273B5: jz      short loc_1404273BC
 * 00000001404273B7: call    KiRestoreSetContextState
 * 00000001404273BC: mov     rcx, gs:188h
 * 00000001404273C5: test    dword ptr [rcx], 10000h
 * 00000001404273CB: jz      short loc_1404273E1
 * 00000001404273CD: test    byte ptr [rcx+2], 1
 * 00000001404273D1: jz      short loc_1404273E1
 * 00000001404273D3: call    KiCopyCounters
 * 00000001404273D8: mov     rcx, gs:188h
 * 00000001404273E1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404273E5: cmp     [rbp+0E8h+var_68], 0
 * 00000001404273ED: jz      short loc_1404273F4
 * 00000001404273EF: call    KiRestoreDebugRegisterState
 * 00000001404273F4: mov     rcx, gs:188h
 * 00000001404273FD: bt      dword ptr [rcx+74h], 16h
 * 0000000140427402: jnb     short loc_14042742E
 * 0000000140427404: xor     ecx, ecx
 * 0000000140427406: rdsspq  rcx
 * 000000014042740B: mov     r8, gs:95A8h
 * 0000000140427414: add     r8, 8
 * 0000000140427418: cmp     rcx, r8
 * 000000014042741B: jnz     short loc_14042742E
 * 000000014042741D: mov     rcx, gs:95A0h
 * 0000000140427426: rstorssp qword ptr [rcx]
 * 000000014042742A: saveprevssp
 * 000000014042742E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427432: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427436: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042743A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042743E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427442: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427446: mov     r11, [rbp+0E8h+var_108]
 * 000000014042744A: mov     r10, [rbp+0E8h+var_110]
 * 000000014042744E: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427452: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427456: mov     byte ptr gs:856h, 0
 * 000000014042745F: movzx   eax, word ptr gs:86Ah
 * 0000000140427468: cmp     gs:864h, ax
 * 0000000140427471: jz      short loc_140427485
 * 0000000140427473: mov     gs:864h, ax
 * 000000014042747C: mov     ecx, 48h ; 'H'
 * 0000000140427481: xor     edx, edx
 * 0000000140427483: wrmsr
 * 0000000140427485: btr     word ptr gs:860h, 2
 * 0000000140427490: jnb     short loc_1404274A0
 * 0000000140427492: mov     eax, 1
 * 0000000140427497: xor     edx, edx
 * 0000000140427499: mov     ecx, 49h ; 'I'
 * 000000014042749E: wrmsr
 * 00000001404274A0: btr     word ptr gs:860h, 5
 * 00000001404274AB: jnb     loc_1404275E8
 * 00000001404274B1: call    loc_1404275C4
 * 00000001404274B6: add     rsp, 8
 * 00000001404274BA: call    loc_1404275CD
 * 00000001404274BF: add     rsp, 8
 * 00000001404274C3: call    loc_1404274B6
 * 00000001404274C8: add     rsp, 8
 * 00000001404274CC: call    loc_1404274BF
 * 00000001404274D1: add     rsp, 8
 * 00000001404274D5: call    loc_1404274C8
 * 00000001404274DA: add     rsp, 8
 * 00000001404274DE: call    loc_1404274D1
 * 00000001404274E3: add     rsp, 8
 * 00000001404274E7: call    loc_1404274DA
 * 00000001404274EC: add     rsp, 8
 * 00000001404274F0: call    loc_1404274E3
 * 00000001404274F5: add     rsp, 8
 * 00000001404274F9: call    loc_1404274EC
 * 00000001404274FE: add     rsp, 8
 * 0000000140427502: call    loc_1404274F5
 * 0000000140427507: add     rsp, 8
 * 000000014042750B: call    loc_1404274FE
 * 0000000140427510: add     rsp, 8
 * 0000000140427514: call    loc_140427507
 * 0000000140427519: add     rsp, 8
 * 000000014042751D: call    loc_140427510
 * 0000000140427522: add     rsp, 8
 * 0000000140427526: call    loc_140427519
 * 000000014042752B: add     rsp, 8
 * 000000014042752F: call    loc_140427522
 * 0000000140427534: add     rsp, 8
 * 0000000140427538: call    loc_14042752B
 * 000000014042753D: add     rsp, 8
 * 0000000140427541: call    loc_140427534
 * 0000000140427546: add     rsp, 8
 * 000000014042754A: call    loc_14042753D
 * 000000014042754F: add     rsp, 8
 * 0000000140427553: call    loc_140427546
 * 0000000140427558: add     rsp, 8
 * 000000014042755C: call    loc_14042754F
 * 0000000140427561: add     rsp, 8
 * 0000000140427565: call    loc_140427558
 * 000000014042756A: add     rsp, 8
 * 000000014042756E: call    loc_140427561
 * 0000000140427573: add     rsp, 8
 * 0000000140427577: call    loc_14042756A
 * 000000014042757C: add     rsp, 8
 * 0000000140427580: call    loc_140427573
 * 0000000140427585: add     rsp, 8
 * 0000000140427589: call    loc_14042757C
 * 000000014042758E: add     rsp, 8
 * 0000000140427592: call    loc_140427585
 * 0000000140427597: add     rsp, 8
 * 000000014042759B: call    loc_14042758E
 * 00000001404275A0: add     rsp, 8
 * 00000001404275A4: call    loc_140427597
 * 00000001404275A9: add     rsp, 8
 * 00000001404275AD: call    loc_1404275A0
 * 00000001404275B2: add     rsp, 8
 * 00000001404275B6: call    loc_1404275A9
 * 00000001404275BB: add     rsp, 8
 * 00000001404275BF: call    loc_1404275B2
 * 00000001404275C4: add     rsp, 8
 * 00000001404275C8: call    loc_1404275BB
 * 00000001404275CD: add     rsp, 8
 * 00000001404275D1: mov     eax, 0DADAh
 * 00000001404275D6: test    byte ptr gs:862h, 8
 * 00000001404275DF: jz      short loc_1404275E8
 * 00000001404275E1: mov     al, 20h ; ' '
 * 00000001404275E3: incsspq rax
 * 00000001404275E8: test    word ptr gs:860h, 80h
 * 00000001404275F3: jz      short loc_140427601
 * 00000001404275F5: xor     eax, eax
 * 00000001404275F7: xor     edx, edx
 * 00000001404275F9: mov     ecx, 1
 * 00000001404275FE: div     rcx
 * 0000000140427601: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427605: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427609: mov     rax, [rbp+0E8h+var_138]
 * 000000014042760D: mov     rsp, rbp
 * 0000000140427610: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427617: add     rsp, 0E8h
 * 000000014042761E: test    cs:KiKvaShadow, 1
 * 0000000140427625: jz      short loc_14042762C
 * 0000000140427627: jmp     KiKernelExit
 * 000000014042762C: test    word ptr gs:860h, 100h
 * 0000000140427637: jz      short loc_14042763E
 * 0000000140427639: verw    [rsp+arg_18]
 * 000000014042763E: swapgs
 * 0000000140427641: iretq
 * 0000000140427643: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427647: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042764B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042764F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427653: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427657: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042765B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042765F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427663: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427667: mov     r9, [rbp+0E8h+var_118]
 * 000000014042766B: mov     r8, [rbp+0E8h+var_120]
 * 000000014042766F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427673: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427677: mov     rax, [rbp+0E8h+var_138]
 * 000000014042767B: mov     rsp, rbp
 * 000000014042767E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427685: add     rsp, 0E8h
 * 000000014042768C: iretq
 */
