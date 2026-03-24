/*
 * XREFs of KiInterruptDispatch @ 0x140420C70
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1404208C0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x140420C70
 * Reason: Hex-Rays returned no pseudocode for 0x140420C70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140420C70: mov     rdx, rsp
 * 0000000140420C73: mov     rcx, gs:8B58h
 * 0000000140420C7C: lea     rax, [rcx-6000h]
 * 0000000140420C83: cmp     rax, rsp
 * 0000000140420C86: ja      short loc_140420C8D
 * 0000000140420C88: cmp     rsp, rcx
 * 0000000140420C8B: jb      short loc_140420C99
 * 0000000140420C8D: cmp     cs:KiBugCheckActive, 0
 * 0000000140420C94: jnz     short loc_140420C99
 * 0000000140420C96: mov     rsp, rcx
 * 0000000140420C99: sub     rsp, 20h
 * 0000000140420C9D: mov     [rsp+20h+var_10], rdx
 * 0000000140420CA2: call    KiInterruptSubDispatch
 * 0000000140420CA7: mov     rsp, [rsp+20h+var_10]
 * 0000000140420CAC: mov     rcx, rsi
 * 0000000140420CAF: call    HalPerformEndOfInterrupt
 * 0000000140420CB4: mov     rcx, gs:20h
 * 0000000140420CBD: cmp     byte ptr [rcx+20h], 1
 * 0000000140420CC1: ja      short loc_140420D3D
 * 0000000140420CC3: rdtsc
 * 0000000140420CC5: shl     rdx, 20h
 * 0000000140420CC9: or      rax, rdx
 * 0000000140420CCC: sub     rax, [rcx+8180h]
 * 0000000140420CD3: add     [rcx+8278h], rax
 * 0000000140420CDA: add     [rcx+8180h], rax
 * 0000000140420CE1: mov     r8, rax
 * 0000000140420CE4: mov     rax, [rcx+8]
 * 0000000140420CE8: test    byte ptr [rax+2], 72h
 * 0000000140420CEC: jz      short loc_140420D01
 * 0000000140420CEE: xor     edx, edx
 * 0000000140420CF0: call    KiBeginThreadAccountingPeriod
 * 0000000140420CF5: mov     rcx, gs:20h
 * 0000000140420CFE: inc     byte ptr [rcx+20h]
 * 0000000140420D01: mov     dl, [rcx+6]
 * 0000000140420D04: and     byte ptr [rcx+6], 0
 * 0000000140420D08: cmp     byte ptr [rcx+7], 0
 * 0000000140420D0C: jnz     short loc_140420D3D
 * 0000000140420D0E: test    dl, dl
 * 0000000140420D10: jz      short loc_140420D3D
 * 0000000140420D12: cmp     byte ptr [rbp-57h], 2
 * 0000000140420D16: jnb     short loc_140420D23
 * 0000000140420D18: and     byte ptr [rcx+20h], 0
 * 0000000140420D1C: call    KiDpcInterruptBypass
 * 0000000140420D21: jmp     short loc_140420D40
 * 0000000140420D23: mov     ecx, 2
 * 0000000140420D28: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140420D2F: nop     dword ptr [rax+rax+00h]
 * 0000000140420D34: mov     rcx, gs:20h
 * 0000000140420D3D: dec     byte ptr [rcx+20h]
 * 0000000140420D40: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420D44: cmp     cs:KiIrqlFlags, 0
 * 0000000140420D4B: jz      short loc_140420D54
 * 0000000140420D4D: call    KzSetIrqlUnsafe
 * 0000000140420D52: jmp     short loc_140420D58
 * 0000000140420D54: mov     cr8, rcx
 * 0000000140420D58: mov     rsi, [rbp+0D0h]
 * 0000000140420D5F: test    byte ptr [rbp+0F0h], 1
 * 0000000140420D66: jz      loc_140421054
 * 0000000140420D6C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140420D73: jz      short loc_140420D78
 * 0000000140420D75: stac
 * 0000000140420D78: mov     rcx, gs:188h
 * 0000000140420D81: test    byte ptr [rcx+0C2h], 3
 * 0000000140420D88: jz      short loc_140420DA5
 * 0000000140420D8A: mov     ecx, 1
 * 0000000140420D8F: mov     cr8, rcx
 * 0000000140420D93: sti
 * 0000000140420D94: call    KiInitiateUserApc
 * 0000000140420D99: cli
 * 0000000140420D9A: mov     ecx, 0
 * 0000000140420D9F: mov     cr8, rcx
 * 0000000140420DA3: jmp     short loc_140420D78
 * 0000000140420DA5: test    byte ptr gs:86Ch, 2
 * 0000000140420DAE: jz      short loc_140420DB7
 * 0000000140420DB0: xor     ecx, ecx
 * 0000000140420DB2: call    KiUpdateStibpPairing
 * 0000000140420DB7: mov     rcx, gs:188h
 * 0000000140420DC0: test    dword ptr [rcx], 8000000h
 * 0000000140420DC6: jz      short loc_140420DCD
 * 0000000140420DC8: call    KiRestoreSetContextState
 * 0000000140420DCD: mov     rcx, gs:188h
 * 0000000140420DD6: test    dword ptr [rcx], 10000h
 * 0000000140420DDC: jz      short loc_140420DF2
 * 0000000140420DDE: test    byte ptr [rcx+2], 1
 * 0000000140420DE2: jz      short loc_140420DF2
 * 0000000140420DE4: call    KiCopyCounters
 * 0000000140420DE9: mov     rcx, gs:188h
 * 0000000140420DF2: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420DF6: cmp     word ptr [rbp+80h], 0
 * 0000000140420DFE: jz      short loc_140420E05
 * 0000000140420E00: call    KiRestoreDebugRegisterState
 * 0000000140420E05: mov     rcx, gs:188h
 * 0000000140420E0E: bt      dword ptr [rcx+74h], 16h
 * 0000000140420E13: jnb     short loc_140420E3F
 * 0000000140420E15: xor     ecx, ecx
 * 0000000140420E17: rdsspq  rcx
 * 0000000140420E1C: mov     r8, gs:95A8h
 * 0000000140420E25: add     r8, 8
 * 0000000140420E29: cmp     rcx, r8
 * 0000000140420E2C: jnz     short loc_140420E3F
 * 0000000140420E2E: mov     rcx, gs:95A0h
 * 0000000140420E37: rstorssp qword ptr [rcx]
 * 0000000140420E3B: saveprevssp
 * 0000000140420E3F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420E43: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420E47: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420E4B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420E4F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420E53: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420E57: mov     r11, [rbp-20h]
 * 0000000140420E5B: mov     r10, [rbp-28h]
 * 0000000140420E5F: mov     r9, [rbp-30h]
 * 0000000140420E63: mov     r8, [rbp-38h]
 * 0000000140420E67: mov     byte ptr gs:856h, 0
 * 0000000140420E70: movzx   eax, word ptr gs:86Ah
 * 0000000140420E79: cmp     gs:864h, ax
 * 0000000140420E82: jz      short loc_140420E96
 * 0000000140420E84: mov     gs:864h, ax
 * 0000000140420E8D: mov     ecx, 48h ; 'H'
 * 0000000140420E92: xor     edx, edx
 * 0000000140420E94: wrmsr
 * 0000000140420E96: btr     word ptr gs:860h, 2
 * 0000000140420EA1: jnb     short loc_140420EB1
 * 0000000140420EA3: mov     eax, 1
 * 0000000140420EA8: xor     edx, edx
 * 0000000140420EAA: mov     ecx, 49h ; 'I'
 * 0000000140420EAF: wrmsr
 * 0000000140420EB1: btr     word ptr gs:860h, 5
 * 0000000140420EBC: jnb     loc_140420FF9
 * 0000000140420EC2: call    loc_140420FD5
 * 0000000140420EC7: add     rsp, 8
 * 0000000140420ECB: call    loc_140420FDE
 * 0000000140420ED0: add     rsp, 8
 * 0000000140420ED4: call    loc_140420EC7
 * 0000000140420ED9: add     rsp, 8
 * 0000000140420EDD: call    loc_140420ED0
 * 0000000140420EE2: add     rsp, 8
 * 0000000140420EE6: call    loc_140420ED9
 * 0000000140420EEB: add     rsp, 8
 * 0000000140420EEF: call    loc_140420EE2
 * 0000000140420EF4: add     rsp, 8
 * 0000000140420EF8: call    loc_140420EEB
 * 0000000140420EFD: add     rsp, 8
 * 0000000140420F01: call    loc_140420EF4
 * 0000000140420F06: add     rsp, 8
 * 0000000140420F0A: call    loc_140420EFD
 * 0000000140420F0F: add     rsp, 8
 * 0000000140420F13: call    loc_140420F06
 * 0000000140420F18: add     rsp, 8
 * 0000000140420F1C: call    loc_140420F0F
 * 0000000140420F21: add     rsp, 8
 * 0000000140420F25: call    loc_140420F18
 * 0000000140420F2A: add     rsp, 8
 * 0000000140420F2E: call    loc_140420F21
 * 0000000140420F33: add     rsp, 8
 * 0000000140420F37: call    loc_140420F2A
 * 0000000140420F3C: add     rsp, 8
 * 0000000140420F40: call    loc_140420F33
 * 0000000140420F45: add     rsp, 8
 * 0000000140420F49: call    loc_140420F3C
 * 0000000140420F4E: add     rsp, 8
 * 0000000140420F52: call    loc_140420F45
 * 0000000140420F57: add     rsp, 8
 * 0000000140420F5B: call    loc_140420F4E
 * 0000000140420F60: add     rsp, 8
 * 0000000140420F64: call    loc_140420F57
 * 0000000140420F69: add     rsp, 8
 * 0000000140420F6D: call    loc_140420F60
 * 0000000140420F72: add     rsp, 8
 * 0000000140420F76: call    loc_140420F69
 * 0000000140420F7B: add     rsp, 8
 * 0000000140420F7F: call    loc_140420F72
 * 0000000140420F84: add     rsp, 8
 * 0000000140420F88: call    loc_140420F7B
 * 0000000140420F8D: add     rsp, 8
 * 0000000140420F91: call    loc_140420F84
 * 0000000140420F96: add     rsp, 8
 * 0000000140420F9A: call    loc_140420F8D
 * 0000000140420F9F: add     rsp, 8
 * 0000000140420FA3: call    loc_140420F96
 * 0000000140420FA8: add     rsp, 8
 * 0000000140420FAC: call    loc_140420F9F
 * 0000000140420FB1: add     rsp, 8
 * 0000000140420FB5: call    loc_140420FA8
 * 0000000140420FBA: add     rsp, 8
 * 0000000140420FBE: call    loc_140420FB1
 * 0000000140420FC3: add     rsp, 8
 * 0000000140420FC7: call    loc_140420FBA
 * 0000000140420FCC: add     rsp, 8
 * 0000000140420FD0: call    loc_140420FC3
 * 0000000140420FD5: add     rsp, 8
 * 0000000140420FD9: call    loc_140420FCC
 * 0000000140420FDE: add     rsp, 8
 * 0000000140420FE2: mov     eax, 0DADAh
 * 0000000140420FE7: test    byte ptr gs:862h, 8
 * 0000000140420FF0: jz      short loc_140420FF9
 * 0000000140420FF2: mov     al, 20h ; ' '
 * 0000000140420FF4: incsspq rax
 * 0000000140420FF9: test    word ptr gs:860h, 80h
 * 0000000140421004: jz      short loc_140421012
 * 0000000140421006: xor     eax, eax
 * 0000000140421008: xor     edx, edx
 * 000000014042100A: mov     ecx, 1
 * 000000014042100F: div     rcx
 * 0000000140421012: mov     rdx, [rbp-40h]
 * 0000000140421016: mov     rcx, [rbp-48h]
 * 000000014042101A: mov     rax, [rbp-50h]
 * 000000014042101E: mov     rsp, rbp
 * 0000000140421021: mov     rbp, [rbp+0D8h]
 * 0000000140421028: add     rsp, 0E8h
 * 000000014042102F: test    cs:KiKvaShadow, 1
 * 0000000140421036: jz      short loc_14042103D
 * 0000000140421038: jmp     KiKernelExit
 * 000000014042103D: test    word ptr gs:860h, 100h
 * 0000000140421048: jz      short loc_14042104F
 * 000000014042104A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042104F: swapgs
 * 0000000140421052: iretq
 * 0000000140421054: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421058: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042105C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421060: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421064: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421068: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042106C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421070: mov     r11, [rbp-20h]
 * 0000000140421074: mov     r10, [rbp-28h]
 * 0000000140421078: mov     r9, [rbp-30h]
 * 000000014042107C: mov     r8, [rbp-38h]
 * 0000000140421080: mov     rdx, [rbp-40h]
 * 0000000140421084: mov     rcx, [rbp-48h]
 * 0000000140421088: mov     rax, [rbp-50h]
 * 000000014042108C: mov     rsp, rbp
 * 000000014042108F: mov     rbp, [rbp+0D8h]
 * 0000000140421096: add     rsp, 0E8h
 * 000000014042109D: iretq
 */
