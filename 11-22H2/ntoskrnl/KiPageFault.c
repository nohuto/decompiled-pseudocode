/*
 * XREFs of KiPageFault @ 0x14042F300
 * Callers:
 *     KiPageFaultShadow @ 0x140AF7840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     PsWatchWorkingSet @ 0x140463260 (PsWatchWorkingSet.c)
 *     KdSetOwedBreakpoints @ 0x1405680D0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14042F300
 * Reason: Hex-Rays returned no pseudocode for 0x14042F300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F300: push    rbp
 * 000000014042F301: sub     rsp, 158h
 * 000000014042F308: lea     rbp, [rsp+80h]
 * 000000014042F310: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F314: mov     [rbp+0D8h+var_128], rax
 * 000000014042F318: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F31C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F320: mov     [rbp+0D8h+var_110], r8
 * 000000014042F324: mov     [rbp+0D8h+var_108], r9
 * 000000014042F328: mov     [rbp+0D8h+var_100], r10
 * 000000014042F32C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F330: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042F337: jnz     short loc_14042F373
 * 000000014042F339: xor     edx, edx
 * 000000014042F33B: rdsspq  rdx
 * 000000014042F340: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F344: lfence
 * 000000014042F347: test    word ptr gs:860h, 1
 * 000000014042F352: jnz     short loc_14042F35C
 * 000000014042F354: lfence
 * 000000014042F357: jmp     loc_14042F5FA
 * 000000014042F35C: movzx   eax, word ptr gs:864h
 * 000000014042F365: mov     ecx, 48h ; 'H'
 * 000000014042F36A: xor     edx, edx
 * 000000014042F36C: wrmsr
 * 000000014042F36E: jmp     loc_14042F5FA
 * 000000014042F373: test    cs:KiKvaShadow, 1
 * 000000014042F37A: jnz     short loc_14042F37F
 * 000000014042F37C: swapgs
 * 000000014042F37F: lfence
 * 000000014042F382: mov     rcx, gs:95A8h
 * 000000014042F38B: test    rcx, rcx
 * 000000014042F38E: jz      short loc_14042F3AF
 * 000000014042F390: rdsspq  rdx
 * 000000014042F395: mov     r10, gs:95A0h
 * 000000014042F39E: add     r10, 8
 * 000000014042F3A2: cmp     rdx, r10
 * 000000014042F3A5: jnz     short loc_14042F3AF
 * 000000014042F3A7: rstorssp qword ptr [rcx]
 * 000000014042F3AB: saveprevssp
 * 000000014042F3AF: mov     r10, gs:188h
 * 000000014042F3B8: mov     rcx, gs:188h
 * 000000014042F3C1: mov     rcx, [rcx+220h]
 * 000000014042F3C8: mov     rcx, [rcx+9E0h]
 * 000000014042F3CF: mov     gs:858h, rcx
 * 000000014042F3D8: mov     cx, gs:850h
 * 000000014042F3E1: mov     gs:852h, cx
 * 000000014042F3EA: mov     cx, gs:860h
 * 000000014042F3F3: mov     gs:854h, cx
 * 000000014042F3FC: movzx   eax, word ptr gs:866h
 * 000000014042F405: cmp     gs:864h, ax
 * 000000014042F40E: jz      short loc_14042F422
 * 000000014042F410: mov     gs:864h, ax
 * 000000014042F419: mov     ecx, 48h ; 'H'
 * 000000014042F41E: xor     edx, edx
 * 000000014042F420: wrmsr
 * 000000014042F422: movzx   edx, word ptr gs:860h
 * 000000014042F42B: test    edx, 8
 * 000000014042F431: jz      short loc_14042F44A
 * 000000014042F433: mov     eax, 1
 * 000000014042F438: xor     edx, edx
 * 000000014042F43A: mov     ecx, 49h ; 'I'
 * 000000014042F43F: wrmsr
 * 000000014042F441: movzx   edx, word ptr gs:860h
 * 000000014042F44A: test    edx, 2
 * 000000014042F450: jz      loc_14042F58D
 * 000000014042F456: call    loc_14042F569
 * 000000014042F45B: add     rsp, 8
 * 000000014042F45F: call    loc_14042F572
 * 000000014042F464: add     rsp, 8
 * 000000014042F468: call    loc_14042F45B
 * 000000014042F46D: add     rsp, 8
 * 000000014042F471: call    loc_14042F464
 * 000000014042F476: add     rsp, 8
 * 000000014042F47A: call    loc_14042F46D
 * 000000014042F47F: add     rsp, 8
 * 000000014042F483: call    loc_14042F476
 * 000000014042F488: add     rsp, 8
 * 000000014042F48C: call    loc_14042F47F
 * 000000014042F491: add     rsp, 8
 * 000000014042F495: call    loc_14042F488
 * 000000014042F49A: add     rsp, 8
 * 000000014042F49E: call    loc_14042F491
 * 000000014042F4A3: add     rsp, 8
 * 000000014042F4A7: call    loc_14042F49A
 * 000000014042F4AC: add     rsp, 8
 * 000000014042F4B0: call    loc_14042F4A3
 * 000000014042F4B5: add     rsp, 8
 * 000000014042F4B9: call    loc_14042F4AC
 * 000000014042F4BE: add     rsp, 8
 * 000000014042F4C2: call    loc_14042F4B5
 * 000000014042F4C7: add     rsp, 8
 * 000000014042F4CB: call    loc_14042F4BE
 * 000000014042F4D0: add     rsp, 8
 * 000000014042F4D4: call    loc_14042F4C7
 * 000000014042F4D9: add     rsp, 8
 * 000000014042F4DD: call    loc_14042F4D0
 * 000000014042F4E2: add     rsp, 8
 * 000000014042F4E6: call    loc_14042F4D9
 * 000000014042F4EB: add     rsp, 8
 * 000000014042F4EF: call    loc_14042F4E2
 * 000000014042F4F4: add     rsp, 8
 * 000000014042F4F8: call    loc_14042F4EB
 * 000000014042F4FD: add     rsp, 8
 * 000000014042F501: call    loc_14042F4F4
 * 000000014042F506: add     rsp, 8
 * 000000014042F50A: call    loc_14042F4FD
 * 000000014042F50F: add     rsp, 8
 * 000000014042F513: call    loc_14042F506
 * 000000014042F518: add     rsp, 8
 * 000000014042F51C: call    loc_14042F50F
 * 000000014042F521: add     rsp, 8
 * 000000014042F525: call    loc_14042F518
 * 000000014042F52A: add     rsp, 8
 * 000000014042F52E: call    loc_14042F521
 * 000000014042F533: add     rsp, 8
 * 000000014042F537: call    loc_14042F52A
 * 000000014042F53C: add     rsp, 8
 * 000000014042F540: call    loc_14042F533
 * 000000014042F545: add     rsp, 8
 * 000000014042F549: call    loc_14042F53C
 * 000000014042F54E: add     rsp, 8
 * 000000014042F552: call    loc_14042F545
 * 000000014042F557: add     rsp, 8
 * 000000014042F55B: call    loc_14042F54E
 * 000000014042F560: add     rsp, 8
 * 000000014042F564: call    loc_14042F557
 * 000000014042F569: add     rsp, 8
 * 000000014042F56D: call    loc_14042F560
 * 000000014042F572: add     rsp, 8
 * 000000014042F576: mov     eax, 0DADAh
 * 000000014042F57B: test    byte ptr gs:862h, 8
 * 000000014042F584: jz      short loc_14042F58D
 * 000000014042F586: mov     al, 20h ; ' '
 * 000000014042F588: incsspq rax
 * 000000014042F58D: test    edx, 200h
 * 000000014042F593: jz      short loc_14042F59A
 * 000000014042F595: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042F59A: lfence
 * 000000014042F59D: mov     byte ptr gs:856h, 0
 * 000000014042F5A6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042F5AD: jz      short loc_14042F5CE
 * 000000014042F5AF: mov     ecx, 6A7h
 * 000000014042F5B4: rdmsr
 * 000000014042F5B6: cmp     edx, 0
 * 000000014042F5B9: jz      short loc_14042F5CE
 * 000000014042F5BB: mov     ecx, edx
 * 000000014042F5BD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042F5C3: cmp     edx, ecx
 * 000000014042F5C5: jz      short loc_14042F5CE
 * 000000014042F5C7: mov     ecx, 6A7h
 * 000000014042F5CC: wrmsr
 * 000000014042F5CE: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014042F5D6: jnz     short loc_14042F5E5
 * 000000014042F5D8: mov     ecx, 0C0000102h
 * 000000014042F5DD: rdmsr
 * 000000014042F5DF: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014042F5E2: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014042F5E5: test    byte ptr [r10+3], 3
 * 000000014042F5EA: mov     [rbp+0D8h+var_58], 0
 * 000000014042F5F3: jz      short loc_14042F5FA
 * 000000014042F5F5: call    KiSaveDebugRegisterState
 * 000000014042F5FA: cld
 * 000000014042F5FB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042F5FF: ldmxcsr dword ptr gs:180h
 * 000000014042F608: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042F60C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042F610: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042F614: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042F618: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042F61C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042F620: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F627: jz      short loc_14042F635
 * 000000014042F629: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042F630: jz      short loc_14042F635
 * 000000014042F632: stac
 * 000000014042F635: mov     eax, [rbp+0E0h]
 * 000000014042F63B: mov     rcx, cr2
 * 000000014042F63E: test    [rbp+0D8h+arg_10], 200h
 * 000000014042F648: jz      short loc_14042F64B
 * 000000014042F64A: sti
 * 000000014042F64B: mov     [rbp+0D8h+var_88], rcx
 * 000000014042F64F: bt      [rbp+0D8h+arg_10], 9
 * 000000014042F657: jnb     loc_14042F789
 * 000000014042F65D: lea     r9, [rbp+0D8h+var_158]
 * 000000014042F661: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014042F668: and     r8b, 1
 * 000000014042F66C: mov     rdx, rcx; BugCheckParameter1
 * 000000014042F66F: mov     ecx, eax; BugCheckParameter2
 * 000000014042F671: shr     eax, 1
 * 000000014042F673: and     eax, 9
 * 000000014042F676: mov     [rbp+0D8h+var_12E], al
 * 000000014042F679: call    MmAccessFault
 * 000000014042F67E: test    eax, eax
 * 000000014042F680: jl      short loc_14042F6B8
 * 000000014042F682: cmp     cs:PsWatchEnabled, 0
 * 000000014042F689: jz      short loc_14042F69D
 * 000000014042F68B: mov     r8, [rbp+0D8h+var_88]
 * 000000014042F68F: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014042F696: mov     ecx, eax
 * 000000014042F698: call    PsWatchWorkingSet
 * 000000014042F69D: cmp     cs:KdpOweBreakpoint, 0
 * 000000014042F6A4: jz      loc_14042F78F
 * 000000014042F6AA: mov     rcx, [rbp+0D8h+var_88]
 * 000000014042F6AE: call    KdSetOwedBreakpoints
 * 000000014042F6B3: jmp     loc_14042F78F
 * 000000014042F6B8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042F6BF: jz      short loc_14042F713
 * 000000014042F6C1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014042F6C9: jnz     short loc_14042F709
 * 000000014042F6CB: mov     r9, gs:188h
 * 000000014042F6D4: test    byte ptr [r9+3], 4
 * 000000014042F6D9: jz      short loc_14042F6E4
 * 000000014042F6DB: mov     r8, [r9+640h]
 * 000000014042F6E2: jmp     short loc_14042F6ED
 * 000000014042F6E4: mov     r8, gs:30h
 * 000000014042F6ED: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014042F6F1: jz      short loc_14042F713
 * 000000014042F6F3: mov     ecx, 0C0000102h
 * 000000014042F6F8: mov     eax, r8d
 * 000000014042F6FB: shr     r8, 20h
 * 000000014042F6FF: mov     edx, r8d
 * 000000014042F702: wrmsr
 * 000000014042F704: jmp     loc_14042F78F
 * 000000014042F709: mov     rcx, [rbp+0D8h+var_88]
 * 000000014042F70D: shr     rcx, 20h
 * 000000014042F711: jnz     short loc_14042F78F
 * 000000014042F713: mov     ecx, eax
 * 000000014042F715: mov     edx, 2
 * 000000014042F71A: cmp     ecx, 0D0000006h
 * 000000014042F720: jz      short loc_14042F763
 * 000000014042F722: cmp     ecx, 0C0000005h
 * 000000014042F728: jz      short loc_14042F749
 * 000000014042F72A: cmp     ecx, 80000001h
 * 000000014042F730: jz      short loc_14042F74E
 * 000000014042F732: cmp     ecx, 0C00000FDh
 * 000000014042F738: jz      short loc_14042F74E
 * 000000014042F73A: mov     ecx, 0C0000006h
 * 000000014042F73F: mov     edx, 3
 * 000000014042F744: mov     r11d, eax
 * 000000014042F747: jmp     short loc_14042F74E
 * 000000014042F749: mov     ecx, 10000004h
 * 000000014042F74E: mov     r10, [rbp+0D8h+var_88]
 * 000000014042F752: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014042F757: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042F75E: call    KiExceptionDispatch
 * 000000014042F763: mov     rax, cr8
 * 000000014042F767: mov     r10, [rbp+0D8h+arg_0]
 * 000000014042F76E: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014042F773: and     eax, 0FFh
 * 000000014042F778: mov     r8, rax
 * 000000014042F77B: mov     rdx, [rbp+0D8h+var_88]
 * 000000014042F77F: mov     ecx, 0Ah
 * 000000014042F784: call    KiBugCheckDispatch
 * 000000014042F789: xor     eax, eax
 * 000000014042F78B: mov     al, 0FFh
 * 000000014042F78D: jmp     short loc_14042F767
 * 000000014042F78F: mov     rax, cr8
 * 000000014042F793: or      eax, eax
 * 000000014042F795: mov     [rbp+0D8h+var_138], eax
 * 000000014042F798: jnz     short loc_14042F7A3
 * 000000014042F79A: mov     ecx, 1
 * 000000014042F79F: mov     cr8, rcx
 * 000000014042F7A3: lea     rcx, [rbp+0D8h+var_158]
 * 000000014042F7A7: call    KiCheckForSListAddress
 * 000000014042F7AC: mov     ecx, [rbp+0D8h+var_138]
 * 000000014042F7AF: or      ecx, ecx
 * 000000014042F7B1: jnz     short loc_14042F7B7
 * 000000014042F7B3: mov     cr8, rcx
 * 000000014042F7B7: cli
 * 000000014042F7B8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042F7BF: jz      loc_14042FAAD
 * 000000014042F7C5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F7CC: jz      short loc_14042F7D1
 * 000000014042F7CE: stac
 * 000000014042F7D1: mov     rcx, gs:188h
 * 000000014042F7DA: test    byte ptr [rcx+0C2h], 3
 * 000000014042F7E1: jz      short loc_14042F7FE
 * 000000014042F7E3: mov     ecx, 1
 * 000000014042F7E8: mov     cr8, rcx
 * 000000014042F7EC: sti
 * 000000014042F7ED: call    KiInitiateUserApc
 * 000000014042F7F2: cli
 * 000000014042F7F3: mov     ecx, 0
 * 000000014042F7F8: mov     cr8, rcx
 * 000000014042F7FC: jmp     short loc_14042F7D1
 * 000000014042F7FE: test    byte ptr gs:86Ch, 2
 * 000000014042F807: jz      short loc_14042F810
 * 000000014042F809: xor     ecx, ecx
 * 000000014042F80B: call    KiUpdateStibpPairing
 * 000000014042F810: mov     rcx, gs:188h
 * 000000014042F819: test    dword ptr [rcx], 8000000h
 * 000000014042F81F: jz      short loc_14042F826
 * 000000014042F821: call    KiRestoreSetContextState
 * 000000014042F826: mov     rcx, gs:188h
 * 000000014042F82F: test    dword ptr [rcx], 10000h
 * 000000014042F835: jz      short loc_14042F84B
 * 000000014042F837: test    byte ptr [rcx+2], 1
 * 000000014042F83B: jz      short loc_14042F84B
 * 000000014042F83D: call    KiCopyCounters
 * 000000014042F842: mov     rcx, gs:188h
 * 000000014042F84B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014042F84F: cmp     [rbp+0D8h+var_58], 0
 * 000000014042F857: jz      short loc_14042F85E
 * 000000014042F859: call    KiRestoreDebugRegisterState
 * 000000014042F85E: mov     rcx, gs:188h
 * 000000014042F867: bt      dword ptr [rcx+74h], 16h
 * 000000014042F86C: jnb     short loc_14042F898
 * 000000014042F86E: xor     ecx, ecx
 * 000000014042F870: rdsspq  rcx
 * 000000014042F875: mov     r8, gs:95A8h
 * 000000014042F87E: add     r8, 8
 * 000000014042F882: cmp     rcx, r8
 * 000000014042F885: jnz     short loc_14042F898
 * 000000014042F887: mov     rcx, gs:95A0h
 * 000000014042F890: rstorssp qword ptr [rcx]
 * 000000014042F894: saveprevssp
 * 000000014042F898: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014042F89C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014042F8A0: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014042F8A4: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014042F8A8: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014042F8AC: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014042F8B0: mov     r11, [rbp+0D8h+var_F8]
 * 000000014042F8B4: mov     r10, [rbp+0D8h+var_100]
 * 000000014042F8B8: mov     r9, [rbp+0D8h+var_108]
 * 000000014042F8BC: mov     r8, [rbp+0D8h+var_110]
 * 000000014042F8C0: mov     byte ptr gs:856h, 0
 * 000000014042F8C9: movzx   eax, word ptr gs:86Ah
 * 000000014042F8D2: cmp     gs:864h, ax
 * 000000014042F8DB: jz      short loc_14042F8EF
 * 000000014042F8DD: mov     gs:864h, ax
 * 000000014042F8E6: mov     ecx, 48h ; 'H'
 * 000000014042F8EB: xor     edx, edx
 * 000000014042F8ED: wrmsr
 * 000000014042F8EF: btr     word ptr gs:860h, 2
 * 000000014042F8FA: jnb     short loc_14042F90A
 * 000000014042F8FC: mov     eax, 1
 * 000000014042F901: xor     edx, edx
 * 000000014042F903: mov     ecx, 49h ; 'I'
 * 000000014042F908: wrmsr
 * 000000014042F90A: btr     word ptr gs:860h, 5
 * 000000014042F915: jnb     loc_14042FA52
 * 000000014042F91B: call    loc_14042FA2E
 * 000000014042F920: add     rsp, 8
 * 000000014042F924: call    loc_14042FA37
 * 000000014042F929: add     rsp, 8
 * 000000014042F92D: call    loc_14042F920
 * 000000014042F932: add     rsp, 8
 * 000000014042F936: call    loc_14042F929
 * 000000014042F93B: add     rsp, 8
 * 000000014042F93F: call    loc_14042F932
 * 000000014042F944: add     rsp, 8
 * 000000014042F948: call    loc_14042F93B
 * 000000014042F94D: add     rsp, 8
 * 000000014042F951: call    loc_14042F944
 * 000000014042F956: add     rsp, 8
 * 000000014042F95A: call    loc_14042F94D
 * 000000014042F95F: add     rsp, 8
 * 000000014042F963: call    loc_14042F956
 * 000000014042F968: add     rsp, 8
 * 000000014042F96C: call    loc_14042F95F
 * 000000014042F971: add     rsp, 8
 * 000000014042F975: call    loc_14042F968
 * 000000014042F97A: add     rsp, 8
 * 000000014042F97E: call    loc_14042F971
 * 000000014042F983: add     rsp, 8
 * 000000014042F987: call    loc_14042F97A
 * 000000014042F98C: add     rsp, 8
 * 000000014042F990: call    loc_14042F983
 * 000000014042F995: add     rsp, 8
 * 000000014042F999: call    loc_14042F98C
 * 000000014042F99E: add     rsp, 8
 * 000000014042F9A2: call    loc_14042F995
 * 000000014042F9A7: add     rsp, 8
 * 000000014042F9AB: call    loc_14042F99E
 * 000000014042F9B0: add     rsp, 8
 * 000000014042F9B4: call    loc_14042F9A7
 * 000000014042F9B9: add     rsp, 8
 * 000000014042F9BD: call    loc_14042F9B0
 * 000000014042F9C2: add     rsp, 8
 * 000000014042F9C6: call    loc_14042F9B9
 * 000000014042F9CB: add     rsp, 8
 * 000000014042F9CF: call    loc_14042F9C2
 * 000000014042F9D4: add     rsp, 8
 * 000000014042F9D8: call    loc_14042F9CB
 * 000000014042F9DD: add     rsp, 8
 * 000000014042F9E1: call    loc_14042F9D4
 * 000000014042F9E6: add     rsp, 8
 * 000000014042F9EA: call    loc_14042F9DD
 * 000000014042F9EF: add     rsp, 8
 * 000000014042F9F3: call    loc_14042F9E6
 * 000000014042F9F8: add     rsp, 8
 * 000000014042F9FC: call    loc_14042F9EF
 * 000000014042FA01: add     rsp, 8
 * 000000014042FA05: call    loc_14042F9F8
 * 000000014042FA0A: add     rsp, 8
 * 000000014042FA0E: call    loc_14042FA01
 * 000000014042FA13: add     rsp, 8
 * 000000014042FA17: call    loc_14042FA0A
 * 000000014042FA1C: add     rsp, 8
 * 000000014042FA20: call    loc_14042FA13
 * 000000014042FA25: add     rsp, 8
 * 000000014042FA29: call    loc_14042FA1C
 * 000000014042FA2E: add     rsp, 8
 * 000000014042FA32: call    loc_14042FA25
 * 000000014042FA37: add     rsp, 8
 * 000000014042FA3B: mov     eax, 0DADAh
 * 000000014042FA40: test    byte ptr gs:862h, 8
 * 000000014042FA49: jz      short loc_14042FA52
 * 000000014042FA4B: mov     al, 20h ; ' '
 * 000000014042FA4D: incsspq rax
 * 000000014042FA52: test    word ptr gs:860h, 80h
 * 000000014042FA5D: jz      short loc_14042FA6B
 * 000000014042FA5F: xor     eax, eax
 * 000000014042FA61: xor     edx, edx
 * 000000014042FA63: mov     ecx, 1
 * 000000014042FA68: div     rcx
 * 000000014042FA6B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042FA6F: mov     rcx, [rbp+0D8h+var_120]
 * 000000014042FA73: mov     rax, [rbp+0D8h+var_128]
 * 000000014042FA77: mov     rsp, rbp
 * 000000014042FA7A: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014042FA81: add     rsp, 0E8h
 * 000000014042FA88: test    cs:KiKvaShadow, 1
 * 000000014042FA8F: jz      short loc_14042FA96
 * 000000014042FA91: jmp     KiKernelExit
 * 000000014042FA96: test    word ptr gs:860h, 100h
 * 000000014042FAA1: jz      short loc_14042FAA8
 * 000000014042FAA3: verw    [rsp-10h+arg_20]
 * 000000014042FAA8: swapgs
 * 000000014042FAAB: iretq
 * 000000014042FAAD: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014042FAB1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014042FAB5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014042FAB9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014042FABD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014042FAC1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014042FAC5: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014042FAC9: mov     r11, [rbp+0D8h+var_F8]
 * 000000014042FACD: mov     r10, [rbp+0D8h+var_100]
 * 000000014042FAD1: mov     r9, [rbp+0D8h+var_108]
 * 000000014042FAD5: mov     r8, [rbp+0D8h+var_110]
 * 000000014042FAD9: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042FADD: mov     rcx, [rbp+0D8h+var_120]
 * 000000014042FAE1: mov     rax, [rbp+0D8h+var_128]
 * 000000014042FAE5: mov     rsp, rbp
 * 000000014042FAE8: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014042FAEF: add     rsp, 0E8h
 * 000000014042FAF6: iretq
 */
