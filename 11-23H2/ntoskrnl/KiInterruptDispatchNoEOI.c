/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140421CC0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420DA0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140421CC0 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140421CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140421CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421CC0: mov     rdx, rsp
 * 0000000140421CC3: mov     rcx, gs:8B58h
 * 0000000140421CCC: lea     rax, [rcx-6000h]
 * 0000000140421CD3: cmp     rax, rsp
 * 0000000140421CD6: ja      short loc_140421CDD
 * 0000000140421CD8: cmp     rsp, rcx
 * 0000000140421CDB: jb      short loc_140421CE9
 * 0000000140421CDD: cmp     cs:KiBugCheckActive, 0
 * 0000000140421CE4: jnz     short loc_140421CE9
 * 0000000140421CE6: mov     rsp, rcx
 * 0000000140421CE9: sub     rsp, 20h
 * 0000000140421CED: mov     [rsp+20h+var_10], rdx
 * 0000000140421CF2: call    KiInterruptSubDispatchNoLock
 * 0000000140421CF7: mov     rsp, [rsp+20h+var_10]
 * 0000000140421CFC: mov     rcx, gs:20h
 * 0000000140421D05: cmp     byte ptr [rcx+20h], 1
 * 0000000140421D09: ja      short loc_140421D85
 * 0000000140421D0B: rdtsc
 * 0000000140421D0D: shl     rdx, 20h
 * 0000000140421D11: or      rax, rdx
 * 0000000140421D14: sub     rax, [rcx+8180h]
 * 0000000140421D1B: add     [rcx+8278h], rax
 * 0000000140421D22: add     [rcx+8180h], rax
 * 0000000140421D29: mov     r8, rax
 * 0000000140421D2C: mov     rax, [rcx+8]
 * 0000000140421D30: test    byte ptr [rax+2], 72h
 * 0000000140421D34: jz      short loc_140421D49
 * 0000000140421D36: xor     edx, edx
 * 0000000140421D38: call    KiBeginThreadAccountingPeriod
 * 0000000140421D3D: mov     rcx, gs:20h
 * 0000000140421D46: inc     byte ptr [rcx+20h]
 * 0000000140421D49: mov     dl, [rcx+6]
 * 0000000140421D4C: and     byte ptr [rcx+6], 0
 * 0000000140421D50: cmp     byte ptr [rcx+7], 0
 * 0000000140421D54: jnz     short loc_140421D85
 * 0000000140421D56: test    dl, dl
 * 0000000140421D58: jz      short loc_140421D85
 * 0000000140421D5A: cmp     byte ptr [rbp-57h], 2
 * 0000000140421D5E: jnb     short loc_140421D6B
 * 0000000140421D60: and     byte ptr [rcx+20h], 0
 * 0000000140421D64: call    KiDpcInterruptBypass
 * 0000000140421D69: jmp     short loc_140421D88
 * 0000000140421D6B: mov     ecx, 2
 * 0000000140421D70: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140421D77: nop     dword ptr [rax+rax+00h]
 * 0000000140421D7C: mov     rcx, gs:20h
 * 0000000140421D85: dec     byte ptr [rcx+20h]
 * 0000000140421D88: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421D8C: cmp     cs:KiIrqlFlags, 0
 * 0000000140421D93: jz      short loc_140421D9C
 * 0000000140421D95: call    KzSetIrqlUnsafe
 * 0000000140421D9A: jmp     short loc_140421DA0
 * 0000000140421D9C: mov     cr8, rcx
 * 0000000140421DA0: mov     rsi, [rbp+0D0h]
 * 0000000140421DA7: test    byte ptr [rbp+0F0h], 1
 * 0000000140421DAE: jz      loc_14042209C
 * 0000000140421DB4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421DBB: jz      short loc_140421DC0
 * 0000000140421DBD: stac
 * 0000000140421DC0: mov     rcx, gs:188h
 * 0000000140421DC9: test    byte ptr [rcx+0C2h], 3
 * 0000000140421DD0: jz      short loc_140421DED
 * 0000000140421DD2: mov     ecx, 1
 * 0000000140421DD7: mov     cr8, rcx
 * 0000000140421DDB: sti
 * 0000000140421DDC: call    KiInitiateUserApc
 * 0000000140421DE1: cli
 * 0000000140421DE2: mov     ecx, 0
 * 0000000140421DE7: mov     cr8, rcx
 * 0000000140421DEB: jmp     short loc_140421DC0
 * 0000000140421DED: test    byte ptr gs:86Ch, 2
 * 0000000140421DF6: jz      short loc_140421DFF
 * 0000000140421DF8: xor     ecx, ecx
 * 0000000140421DFA: call    KiUpdateStibpPairing
 * 0000000140421DFF: mov     rcx, gs:188h
 * 0000000140421E08: test    dword ptr [rcx], 8000000h
 * 0000000140421E0E: jz      short loc_140421E15
 * 0000000140421E10: call    KiRestoreSetContextState
 * 0000000140421E15: mov     rcx, gs:188h
 * 0000000140421E1E: test    dword ptr [rcx], 10000h
 * 0000000140421E24: jz      short loc_140421E3A
 * 0000000140421E26: test    byte ptr [rcx+2], 1
 * 0000000140421E2A: jz      short loc_140421E3A
 * 0000000140421E2C: call    KiCopyCounters
 * 0000000140421E31: mov     rcx, gs:188h
 * 0000000140421E3A: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421E3E: cmp     word ptr [rbp+80h], 0
 * 0000000140421E46: jz      short loc_140421E4D
 * 0000000140421E48: call    KiRestoreDebugRegisterState
 * 0000000140421E4D: mov     rcx, gs:188h
 * 0000000140421E56: bt      dword ptr [rcx+74h], 16h
 * 0000000140421E5B: jnb     short loc_140421E87
 * 0000000140421E5D: xor     ecx, ecx
 * 0000000140421E5F: rdsspq  rcx
 * 0000000140421E64: mov     r8, gs:95A8h
 * 0000000140421E6D: add     r8, 8
 * 0000000140421E71: cmp     rcx, r8
 * 0000000140421E74: jnz     short loc_140421E87
 * 0000000140421E76: mov     rcx, gs:95A0h
 * 0000000140421E7F: rstorssp qword ptr [rcx]
 * 0000000140421E83: saveprevssp
 * 0000000140421E87: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421E8B: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421E8F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421E93: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421E97: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421E9B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421E9F: mov     r11, [rbp-20h]
 * 0000000140421EA3: mov     r10, [rbp-28h]
 * 0000000140421EA7: mov     r9, [rbp-30h]
 * 0000000140421EAB: mov     r8, [rbp-38h]
 * 0000000140421EAF: mov     byte ptr gs:856h, 0
 * 0000000140421EB8: movzx   eax, word ptr gs:86Ah
 * 0000000140421EC1: cmp     gs:864h, ax
 * 0000000140421ECA: jz      short loc_140421EDE
 * 0000000140421ECC: mov     gs:864h, ax
 * 0000000140421ED5: mov     ecx, 48h ; 'H'
 * 0000000140421EDA: xor     edx, edx
 * 0000000140421EDC: wrmsr
 * 0000000140421EDE: btr     word ptr gs:860h, 2
 * 0000000140421EE9: jnb     short loc_140421EF9
 * 0000000140421EEB: mov     eax, 1
 * 0000000140421EF0: xor     edx, edx
 * 0000000140421EF2: mov     ecx, 49h ; 'I'
 * 0000000140421EF7: wrmsr
 * 0000000140421EF9: btr     word ptr gs:860h, 5
 * 0000000140421F04: jnb     loc_140422041
 * 0000000140421F0A: call    loc_14042201D
 * 0000000140421F0F: add     rsp, 8
 * 0000000140421F13: call    loc_140422026
 * 0000000140421F18: add     rsp, 8
 * 0000000140421F1C: call    loc_140421F0F
 * 0000000140421F21: add     rsp, 8
 * 0000000140421F25: call    loc_140421F18
 * 0000000140421F2A: add     rsp, 8
 * 0000000140421F2E: call    loc_140421F21
 * 0000000140421F33: add     rsp, 8
 * 0000000140421F37: call    loc_140421F2A
 * 0000000140421F3C: add     rsp, 8
 * 0000000140421F40: call    loc_140421F33
 * 0000000140421F45: add     rsp, 8
 * 0000000140421F49: call    loc_140421F3C
 * 0000000140421F4E: add     rsp, 8
 * 0000000140421F52: call    loc_140421F45
 * 0000000140421F57: add     rsp, 8
 * 0000000140421F5B: call    loc_140421F4E
 * 0000000140421F60: add     rsp, 8
 * 0000000140421F64: call    loc_140421F57
 * 0000000140421F69: add     rsp, 8
 * 0000000140421F6D: call    loc_140421F60
 * 0000000140421F72: add     rsp, 8
 * 0000000140421F76: call    loc_140421F69
 * 0000000140421F7B: add     rsp, 8
 * 0000000140421F7F: call    loc_140421F72
 * 0000000140421F84: add     rsp, 8
 * 0000000140421F88: call    loc_140421F7B
 * 0000000140421F8D: add     rsp, 8
 * 0000000140421F91: call    loc_140421F84
 * 0000000140421F96: add     rsp, 8
 * 0000000140421F9A: call    loc_140421F8D
 * 0000000140421F9F: add     rsp, 8
 * 0000000140421FA3: call    loc_140421F96
 * 0000000140421FA8: add     rsp, 8
 * 0000000140421FAC: call    loc_140421F9F
 * 0000000140421FB1: add     rsp, 8
 * 0000000140421FB5: call    loc_140421FA8
 * 0000000140421FBA: add     rsp, 8
 * 0000000140421FBE: call    loc_140421FB1
 * 0000000140421FC3: add     rsp, 8
 * 0000000140421FC7: call    loc_140421FBA
 * 0000000140421FCC: add     rsp, 8
 * 0000000140421FD0: call    loc_140421FC3
 * 0000000140421FD5: add     rsp, 8
 * 0000000140421FD9: call    loc_140421FCC
 * 0000000140421FDE: add     rsp, 8
 * 0000000140421FE2: call    loc_140421FD5
 * 0000000140421FE7: add     rsp, 8
 * 0000000140421FEB: call    loc_140421FDE
 * 0000000140421FF0: add     rsp, 8
 * 0000000140421FF4: call    loc_140421FE7
 * 0000000140421FF9: add     rsp, 8
 * 0000000140421FFD: call    loc_140421FF0
 * 0000000140422002: add     rsp, 8
 * 0000000140422006: call    loc_140421FF9
 * 000000014042200B: add     rsp, 8
 * 000000014042200F: call    loc_140422002
 * 0000000140422014: add     rsp, 8
 * 0000000140422018: call    loc_14042200B
 * 000000014042201D: add     rsp, 8
 * 0000000140422021: call    loc_140422014
 * 0000000140422026: add     rsp, 8
 * 000000014042202A: mov     eax, 0DADAh
 * 000000014042202F: test    byte ptr gs:862h, 8
 * 0000000140422038: jz      short loc_140422041
 * 000000014042203A: mov     al, 20h ; ' '
 * 000000014042203C: incsspq rax
 * 0000000140422041: test    word ptr gs:860h, 80h
 * 000000014042204C: jz      short loc_14042205A
 * 000000014042204E: xor     eax, eax
 * 0000000140422050: xor     edx, edx
 * 0000000140422052: mov     ecx, 1
 * 0000000140422057: div     rcx
 * 000000014042205A: mov     rdx, [rbp-40h]
 * 000000014042205E: mov     rcx, [rbp-48h]
 * 0000000140422062: mov     rax, [rbp-50h]
 * 0000000140422066: mov     rsp, rbp
 * 0000000140422069: mov     rbp, [rbp+0D8h]
 * 0000000140422070: add     rsp, 0E8h
 * 0000000140422077: test    cs:KiKvaShadow, 1
 * 000000014042207E: jz      short loc_140422085
 * 0000000140422080: jmp     KiKernelExit
 * 0000000140422085: test    word ptr gs:860h, 100h
 * 0000000140422090: jz      short loc_140422097
 * 0000000140422092: verw    [rsp-1C8h+arg_1E0]
 * 0000000140422097: swapgs
 * 000000014042209A: iretq
 * 000000014042209C: ldmxcsr dword ptr [rbp-54h]
 * 00000001404220A0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404220A4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404220A8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404220AC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404220B0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404220B4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404220B8: mov     r11, [rbp-20h]
 * 00000001404220BC: mov     r10, [rbp-28h]
 * 00000001404220C0: mov     r9, [rbp-30h]
 * 00000001404220C4: mov     r8, [rbp-38h]
 * 00000001404220C8: mov     rdx, [rbp-40h]
 * 00000001404220CC: mov     rcx, [rbp-48h]
 * 00000001404220D0: mov     rax, [rbp-50h]
 * 00000001404220D4: mov     rsp, rbp
 * 00000001404220D7: mov     rbp, [rbp+0D8h]
 * 00000001404220DE: add     rsp, 0E8h
 * 00000001404220E5: iretq
 */
