/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140420E30
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404204A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140420E30
 * Reason: Hex-Rays returned no pseudocode for 0x140420E30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140420E30: mov     rdx, rsp
 * 0000000140420E33: mov     rcx, gs:8B58h
 * 0000000140420E3C: lea     rax, [rcx-6000h]
 * 0000000140420E43: cmp     rax, rsp
 * 0000000140420E46: ja      short loc_140420E4D
 * 0000000140420E48: cmp     rsp, rcx
 * 0000000140420E4B: jb      short loc_140420E59
 * 0000000140420E4D: cmp     cs:KiBugCheckActive, 0
 * 0000000140420E54: jnz     short loc_140420E59
 * 0000000140420E56: mov     rsp, rcx
 * 0000000140420E59: sub     rsp, 20h
 * 0000000140420E5D: mov     [rsp+20h+var_10], rdx
 * 0000000140420E62: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140420E67: mov     rsp, [rsp+20h+var_10]
 * 0000000140420E6C: mov     rcx, rsi
 * 0000000140420E6F: call    HalPerformEndOfInterrupt
 * 0000000140420E74: mov     rcx, gs:20h
 * 0000000140420E7D: cmp     byte ptr [rcx+20h], 1
 * 0000000140420E81: ja      short loc_140420EFD
 * 0000000140420E83: rdtsc
 * 0000000140420E85: shl     rdx, 20h
 * 0000000140420E89: or      rax, rdx
 * 0000000140420E8C: sub     rax, [rcx+8180h]
 * 0000000140420E93: add     [rcx+8278h], rax
 * 0000000140420E9A: add     [rcx+8180h], rax
 * 0000000140420EA1: mov     r8, rax
 * 0000000140420EA4: mov     rax, [rcx+8]
 * 0000000140420EA8: test    byte ptr [rax+2], 72h
 * 0000000140420EAC: jz      short loc_140420EC1
 * 0000000140420EAE: xor     edx, edx
 * 0000000140420EB0: call    KiBeginThreadAccountingPeriod
 * 0000000140420EB5: mov     rcx, gs:20h
 * 0000000140420EBE: inc     byte ptr [rcx+20h]
 * 0000000140420EC1: mov     dl, [rcx+6]
 * 0000000140420EC4: and     byte ptr [rcx+6], 0
 * 0000000140420EC8: cmp     byte ptr [rcx+7], 0
 * 0000000140420ECC: jnz     short loc_140420EFD
 * 0000000140420ECE: test    dl, dl
 * 0000000140420ED0: jz      short loc_140420EFD
 * 0000000140420ED2: cmp     byte ptr [rbp-57h], 2
 * 0000000140420ED6: jnb     short loc_140420EE3
 * 0000000140420ED8: and     byte ptr [rcx+20h], 0
 * 0000000140420EDC: call    KiDpcInterruptBypass
 * 0000000140420EE1: jmp     short loc_140420F00
 * 0000000140420EE3: mov     ecx, 2
 * 0000000140420EE8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140420EEF: nop     dword ptr [rax+rax+00h]
 * 0000000140420EF4: mov     rcx, gs:20h
 * 0000000140420EFD: dec     byte ptr [rcx+20h]
 * 0000000140420F00: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420F04: cmp     cs:KiIrqlFlags, 0
 * 0000000140420F0B: jz      short loc_140420F14
 * 0000000140420F0D: call    KzSetIrqlUnsafe
 * 0000000140420F12: jmp     short loc_140420F18
 * 0000000140420F14: mov     cr8, rcx
 * 0000000140420F18: mov     rsi, [rbp+0D0h]
 * 0000000140420F1F: test    byte ptr [rbp+0F0h], 1
 * 0000000140420F26: jz      loc_140421214
 * 0000000140420F2C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140420F33: jz      short loc_140420F38
 * 0000000140420F35: stac
 * 0000000140420F38: mov     rcx, gs:188h
 * 0000000140420F41: test    byte ptr [rcx+0C2h], 3
 * 0000000140420F48: jz      short loc_140420F65
 * 0000000140420F4A: mov     ecx, 1
 * 0000000140420F4F: mov     cr8, rcx
 * 0000000140420F53: sti
 * 0000000140420F54: call    KiInitiateUserApc
 * 0000000140420F59: cli
 * 0000000140420F5A: mov     ecx, 0
 * 0000000140420F5F: mov     cr8, rcx
 * 0000000140420F63: jmp     short loc_140420F38
 * 0000000140420F65: test    byte ptr gs:86Ch, 2
 * 0000000140420F6E: jz      short loc_140420F77
 * 0000000140420F70: xor     ecx, ecx
 * 0000000140420F72: call    KiUpdateStibpPairing
 * 0000000140420F77: mov     rcx, gs:188h
 * 0000000140420F80: test    dword ptr [rcx], 8000000h
 * 0000000140420F86: jz      short loc_140420F8D
 * 0000000140420F88: call    KiRestoreSetContextState
 * 0000000140420F8D: mov     rcx, gs:188h
 * 0000000140420F96: test    dword ptr [rcx], 10000h
 * 0000000140420F9C: jz      short loc_140420FB2
 * 0000000140420F9E: test    byte ptr [rcx+2], 1
 * 0000000140420FA2: jz      short loc_140420FB2
 * 0000000140420FA4: call    KiCopyCounters
 * 0000000140420FA9: mov     rcx, gs:188h
 * 0000000140420FB2: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420FB6: cmp     word ptr [rbp+80h], 0
 * 0000000140420FBE: jz      short loc_140420FC5
 * 0000000140420FC0: call    KiRestoreDebugRegisterState
 * 0000000140420FC5: mov     rcx, gs:188h
 * 0000000140420FCE: bt      dword ptr [rcx+74h], 16h
 * 0000000140420FD3: jnb     short loc_140420FFF
 * 0000000140420FD5: xor     ecx, ecx
 * 0000000140420FD7: rdsspq  rcx
 * 0000000140420FDC: mov     r8, gs:95A8h
 * 0000000140420FE5: add     r8, 8
 * 0000000140420FE9: cmp     rcx, r8
 * 0000000140420FEC: jnz     short loc_140420FFF
 * 0000000140420FEE: mov     rcx, gs:95A0h
 * 0000000140420FF7: rstorssp qword ptr [rcx]
 * 0000000140420FFB: saveprevssp
 * 0000000140420FFF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421003: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421007: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042100B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042100F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421013: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421017: mov     r11, [rbp-20h]
 * 000000014042101B: mov     r10, [rbp-28h]
 * 000000014042101F: mov     r9, [rbp-30h]
 * 0000000140421023: mov     r8, [rbp-38h]
 * 0000000140421027: mov     byte ptr gs:856h, 0
 * 0000000140421030: movzx   eax, word ptr gs:86Ah
 * 0000000140421039: cmp     gs:864h, ax
 * 0000000140421042: jz      short loc_140421056
 * 0000000140421044: mov     gs:864h, ax
 * 000000014042104D: mov     ecx, 48h ; 'H'
 * 0000000140421052: xor     edx, edx
 * 0000000140421054: wrmsr
 * 0000000140421056: btr     word ptr gs:860h, 2
 * 0000000140421061: jnb     short loc_140421071
 * 0000000140421063: mov     eax, 1
 * 0000000140421068: xor     edx, edx
 * 000000014042106A: mov     ecx, 49h ; 'I'
 * 000000014042106F: wrmsr
 * 0000000140421071: btr     word ptr gs:860h, 5
 * 000000014042107C: jnb     loc_1404211B9
 * 0000000140421082: call    loc_140421195
 * 0000000140421087: add     rsp, 8
 * 000000014042108B: call    loc_14042119E
 * 0000000140421090: add     rsp, 8
 * 0000000140421094: call    loc_140421087
 * 0000000140421099: add     rsp, 8
 * 000000014042109D: call    loc_140421090
 * 00000001404210A2: add     rsp, 8
 * 00000001404210A6: call    loc_140421099
 * 00000001404210AB: add     rsp, 8
 * 00000001404210AF: call    loc_1404210A2
 * 00000001404210B4: add     rsp, 8
 * 00000001404210B8: call    loc_1404210AB
 * 00000001404210BD: add     rsp, 8
 * 00000001404210C1: call    loc_1404210B4
 * 00000001404210C6: add     rsp, 8
 * 00000001404210CA: call    loc_1404210BD
 * 00000001404210CF: add     rsp, 8
 * 00000001404210D3: call    loc_1404210C6
 * 00000001404210D8: add     rsp, 8
 * 00000001404210DC: call    loc_1404210CF
 * 00000001404210E1: add     rsp, 8
 * 00000001404210E5: call    loc_1404210D8
 * 00000001404210EA: add     rsp, 8
 * 00000001404210EE: call    loc_1404210E1
 * 00000001404210F3: add     rsp, 8
 * 00000001404210F7: call    loc_1404210EA
 * 00000001404210FC: add     rsp, 8
 * 0000000140421100: call    loc_1404210F3
 * 0000000140421105: add     rsp, 8
 * 0000000140421109: call    loc_1404210FC
 * 000000014042110E: add     rsp, 8
 * 0000000140421112: call    loc_140421105
 * 0000000140421117: add     rsp, 8
 * 000000014042111B: call    loc_14042110E
 * 0000000140421120: add     rsp, 8
 * 0000000140421124: call    loc_140421117
 * 0000000140421129: add     rsp, 8
 * 000000014042112D: call    loc_140421120
 * 0000000140421132: add     rsp, 8
 * 0000000140421136: call    loc_140421129
 * 000000014042113B: add     rsp, 8
 * 000000014042113F: call    loc_140421132
 * 0000000140421144: add     rsp, 8
 * 0000000140421148: call    loc_14042113B
 * 000000014042114D: add     rsp, 8
 * 0000000140421151: call    loc_140421144
 * 0000000140421156: add     rsp, 8
 * 000000014042115A: call    loc_14042114D
 * 000000014042115F: add     rsp, 8
 * 0000000140421163: call    loc_140421156
 * 0000000140421168: add     rsp, 8
 * 000000014042116C: call    loc_14042115F
 * 0000000140421171: add     rsp, 8
 * 0000000140421175: call    loc_140421168
 * 000000014042117A: add     rsp, 8
 * 000000014042117E: call    loc_140421171
 * 0000000140421183: add     rsp, 8
 * 0000000140421187: call    loc_14042117A
 * 000000014042118C: add     rsp, 8
 * 0000000140421190: call    loc_140421183
 * 0000000140421195: add     rsp, 8
 * 0000000140421199: call    loc_14042118C
 * 000000014042119E: add     rsp, 8
 * 00000001404211A2: mov     eax, 0DADAh
 * 00000001404211A7: test    byte ptr gs:862h, 8
 * 00000001404211B0: jz      short loc_1404211B9
 * 00000001404211B2: mov     al, 20h ; ' '
 * 00000001404211B4: incsspq rax
 * 00000001404211B9: test    word ptr gs:860h, 80h
 * 00000001404211C4: jz      short loc_1404211D2
 * 00000001404211C6: xor     eax, eax
 * 00000001404211C8: xor     edx, edx
 * 00000001404211CA: mov     ecx, 1
 * 00000001404211CF: div     rcx
 * 00000001404211D2: mov     rdx, [rbp-40h]
 * 00000001404211D6: mov     rcx, [rbp-48h]
 * 00000001404211DA: mov     rax, [rbp-50h]
 * 00000001404211DE: mov     rsp, rbp
 * 00000001404211E1: mov     rbp, [rbp+0D8h]
 * 00000001404211E8: add     rsp, 0E8h
 * 00000001404211EF: test    cs:KiKvaShadow, 1
 * 00000001404211F6: jz      short loc_1404211FD
 * 00000001404211F8: jmp     KiKernelExit
 * 00000001404211FD: test    word ptr gs:860h, 100h
 * 0000000140421208: jz      short loc_14042120F
 * 000000014042120A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042120F: swapgs
 * 0000000140421212: iretq
 * 0000000140421214: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421218: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042121C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421220: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421224: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421228: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042122C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421230: mov     r11, [rbp-20h]
 * 0000000140421234: mov     r10, [rbp-28h]
 * 0000000140421238: mov     r9, [rbp-30h]
 * 000000014042123C: mov     r8, [rbp-38h]
 * 0000000140421240: mov     rdx, [rbp-40h]
 * 0000000140421244: mov     rcx, [rbp-48h]
 * 0000000140421248: mov     rax, [rbp-50h]
 * 000000014042124C: mov     rsp, rbp
 * 000000014042124F: mov     rbp, [rbp+0D8h]
 * 0000000140421256: add     rsp, 0E8h
 * 000000014042125D: iretq
 */
