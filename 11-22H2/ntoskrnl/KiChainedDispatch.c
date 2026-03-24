/*
 * XREFs of KiChainedDispatch @ 0x14041FBE0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x14041FBE0
 * Reason: Hex-Rays returned no pseudocode for 0x14041FBE0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FBE0: mov     rdx, rsp
 * 000000014041FBE3: mov     rcx, gs:8B58h
 * 000000014041FBEC: lea     rax, [rcx-6000h]
 * 000000014041FBF3: cmp     rax, rsp
 * 000000014041FBF6: ja      short loc_14041FBFD
 * 000000014041FBF8: cmp     rsp, rcx
 * 000000014041FBFB: jb      short loc_14041FC09
 * 000000014041FBFD: cmp     cs:KiBugCheckActive, 0
 * 000000014041FC04: jnz     short loc_14041FC09
 * 000000014041FC06: mov     rsp, rcx
 * 000000014041FC09: sub     rsp, 20h
 * 000000014041FC0D: mov     [rsp+20h+var_10], rdx
 * 000000014041FC12: call    KiScanInterruptObjectList
 * 000000014041FC17: mov     rsp, [rsp+20h+var_10]
 * 000000014041FC1C: mov     rcx, rsi
 * 000000014041FC1F: call    HalPerformEndOfInterrupt
 * 000000014041FC24: mov     rcx, gs:20h
 * 000000014041FC2D: cmp     byte ptr [rcx+20h], 1
 * 000000014041FC31: ja      short loc_14041FCAD
 * 000000014041FC33: rdtsc
 * 000000014041FC35: shl     rdx, 20h
 * 000000014041FC39: or      rax, rdx
 * 000000014041FC3C: sub     rax, [rcx+8180h]
 * 000000014041FC43: add     [rcx+8278h], rax
 * 000000014041FC4A: add     [rcx+8180h], rax
 * 000000014041FC51: mov     r8, rax
 * 000000014041FC54: mov     rax, [rcx+8]
 * 000000014041FC58: test    byte ptr [rax+2], 72h
 * 000000014041FC5C: jz      short loc_14041FC71
 * 000000014041FC5E: xor     edx, edx
 * 000000014041FC60: call    KiBeginThreadAccountingPeriod
 * 000000014041FC65: mov     rcx, gs:20h
 * 000000014041FC6E: inc     byte ptr [rcx+20h]
 * 000000014041FC71: mov     dl, [rcx+6]
 * 000000014041FC74: and     byte ptr [rcx+6], 0
 * 000000014041FC78: cmp     byte ptr [rcx+7], 0
 * 000000014041FC7C: jnz     short loc_14041FCAD
 * 000000014041FC7E: test    dl, dl
 * 000000014041FC80: jz      short loc_14041FCAD
 * 000000014041FC82: cmp     byte ptr [rbp-57h], 2
 * 000000014041FC86: jnb     short loc_14041FC93
 * 000000014041FC88: and     byte ptr [rcx+20h], 0
 * 000000014041FC8C: call    KiDpcInterruptBypass
 * 000000014041FC91: jmp     short loc_14041FCB0
 * 000000014041FC93: mov     ecx, 2
 * 000000014041FC98: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014041FC9F: nop     dword ptr [rax+rax+00h]
 * 000000014041FCA4: mov     rcx, gs:20h
 * 000000014041FCAD: dec     byte ptr [rcx+20h]
 * 000000014041FCB0: movzx   ecx, byte ptr [rbp-57h]
 * 000000014041FCB4: cmp     cs:KiIrqlFlags, 0
 * 000000014041FCBB: jz      short loc_14041FCC4
 * 000000014041FCBD: call    KzSetIrqlUnsafe
 * 000000014041FCC2: jmp     short loc_14041FCC8
 * 000000014041FCC4: mov     cr8, rcx
 * 000000014041FCC8: mov     rsi, [rbp+0D0h]
 * 000000014041FCCF: test    byte ptr [rbp+0F0h], 1
 * 000000014041FCD6: jz      loc_14041FFC4
 * 000000014041FCDC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041FCE3: jz      short loc_14041FCE8
 * 000000014041FCE5: stac
 * 000000014041FCE8: mov     rcx, gs:188h
 * 000000014041FCF1: test    byte ptr [rcx+0C2h], 3
 * 000000014041FCF8: jz      short loc_14041FD15
 * 000000014041FCFA: mov     ecx, 1
 * 000000014041FCFF: mov     cr8, rcx
 * 000000014041FD03: sti
 * 000000014041FD04: call    KiInitiateUserApc
 * 000000014041FD09: cli
 * 000000014041FD0A: mov     ecx, 0
 * 000000014041FD0F: mov     cr8, rcx
 * 000000014041FD13: jmp     short loc_14041FCE8
 * 000000014041FD15: test    byte ptr gs:86Ch, 2
 * 000000014041FD1E: jz      short loc_14041FD27
 * 000000014041FD20: xor     ecx, ecx
 * 000000014041FD22: call    KiUpdateStibpPairing
 * 000000014041FD27: mov     rcx, gs:188h
 * 000000014041FD30: test    dword ptr [rcx], 8000000h
 * 000000014041FD36: jz      short loc_14041FD3D
 * 000000014041FD38: call    KiRestoreSetContextState
 * 000000014041FD3D: mov     rcx, gs:188h
 * 000000014041FD46: test    dword ptr [rcx], 10000h
 * 000000014041FD4C: jz      short loc_14041FD62
 * 000000014041FD4E: test    byte ptr [rcx+2], 1
 * 000000014041FD52: jz      short loc_14041FD62
 * 000000014041FD54: call    KiCopyCounters
 * 000000014041FD59: mov     rcx, gs:188h
 * 000000014041FD62: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FD66: cmp     word ptr [rbp+80h], 0
 * 000000014041FD6E: jz      short loc_14041FD75
 * 000000014041FD70: call    KiRestoreDebugRegisterState
 * 000000014041FD75: mov     rcx, gs:188h
 * 000000014041FD7E: bt      dword ptr [rcx+74h], 16h
 * 000000014041FD83: jnb     short loc_14041FDAF
 * 000000014041FD85: xor     ecx, ecx
 * 000000014041FD87: rdsspq  rcx
 * 000000014041FD8C: mov     r8, gs:95A8h
 * 000000014041FD95: add     r8, 8
 * 000000014041FD99: cmp     rcx, r8
 * 000000014041FD9C: jnz     short loc_14041FDAF
 * 000000014041FD9E: mov     rcx, gs:95A0h
 * 000000014041FDA7: rstorssp qword ptr [rcx]
 * 000000014041FDAB: saveprevssp
 * 000000014041FDAF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FDB3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FDB7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FDBB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FDBF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FDC3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FDC7: mov     r11, [rbp-20h]
 * 000000014041FDCB: mov     r10, [rbp-28h]
 * 000000014041FDCF: mov     r9, [rbp-30h]
 * 000000014041FDD3: mov     r8, [rbp-38h]
 * 000000014041FDD7: mov     byte ptr gs:856h, 0
 * 000000014041FDE0: movzx   eax, word ptr gs:86Ah
 * 000000014041FDE9: cmp     gs:864h, ax
 * 000000014041FDF2: jz      short loc_14041FE06
 * 000000014041FDF4: mov     gs:864h, ax
 * 000000014041FDFD: mov     ecx, 48h ; 'H'
 * 000000014041FE02: xor     edx, edx
 * 000000014041FE04: wrmsr
 * 000000014041FE06: btr     word ptr gs:860h, 2
 * 000000014041FE11: jnb     short loc_14041FE21
 * 000000014041FE13: mov     eax, 1
 * 000000014041FE18: xor     edx, edx
 * 000000014041FE1A: mov     ecx, 49h ; 'I'
 * 000000014041FE1F: wrmsr
 * 000000014041FE21: btr     word ptr gs:860h, 5
 * 000000014041FE2C: jnb     loc_14041FF69
 * 000000014041FE32: call    loc_14041FF45
 * 000000014041FE37: add     rsp, 8
 * 000000014041FE3B: call    loc_14041FF4E
 * 000000014041FE40: add     rsp, 8
 * 000000014041FE44: call    loc_14041FE37
 * 000000014041FE49: add     rsp, 8
 * 000000014041FE4D: call    loc_14041FE40
 * 000000014041FE52: add     rsp, 8
 * 000000014041FE56: call    loc_14041FE49
 * 000000014041FE5B: add     rsp, 8
 * 000000014041FE5F: call    loc_14041FE52
 * 000000014041FE64: add     rsp, 8
 * 000000014041FE68: call    loc_14041FE5B
 * 000000014041FE6D: add     rsp, 8
 * 000000014041FE71: call    loc_14041FE64
 * 000000014041FE76: add     rsp, 8
 * 000000014041FE7A: call    loc_14041FE6D
 * 000000014041FE7F: add     rsp, 8
 * 000000014041FE83: call    loc_14041FE76
 * 000000014041FE88: add     rsp, 8
 * 000000014041FE8C: call    loc_14041FE7F
 * 000000014041FE91: add     rsp, 8
 * 000000014041FE95: call    loc_14041FE88
 * 000000014041FE9A: add     rsp, 8
 * 000000014041FE9E: call    loc_14041FE91
 * 000000014041FEA3: add     rsp, 8
 * 000000014041FEA7: call    loc_14041FE9A
 * 000000014041FEAC: add     rsp, 8
 * 000000014041FEB0: call    loc_14041FEA3
 * 000000014041FEB5: add     rsp, 8
 * 000000014041FEB9: call    loc_14041FEAC
 * 000000014041FEBE: add     rsp, 8
 * 000000014041FEC2: call    loc_14041FEB5
 * 000000014041FEC7: add     rsp, 8
 * 000000014041FECB: call    loc_14041FEBE
 * 000000014041FED0: add     rsp, 8
 * 000000014041FED4: call    loc_14041FEC7
 * 000000014041FED9: add     rsp, 8
 * 000000014041FEDD: call    loc_14041FED0
 * 000000014041FEE2: add     rsp, 8
 * 000000014041FEE6: call    loc_14041FED9
 * 000000014041FEEB: add     rsp, 8
 * 000000014041FEEF: call    loc_14041FEE2
 * 000000014041FEF4: add     rsp, 8
 * 000000014041FEF8: call    loc_14041FEEB
 * 000000014041FEFD: add     rsp, 8
 * 000000014041FF01: call    loc_14041FEF4
 * 000000014041FF06: add     rsp, 8
 * 000000014041FF0A: call    loc_14041FEFD
 * 000000014041FF0F: add     rsp, 8
 * 000000014041FF13: call    loc_14041FF06
 * 000000014041FF18: add     rsp, 8
 * 000000014041FF1C: call    loc_14041FF0F
 * 000000014041FF21: add     rsp, 8
 * 000000014041FF25: call    loc_14041FF18
 * 000000014041FF2A: add     rsp, 8
 * 000000014041FF2E: call    loc_14041FF21
 * 000000014041FF33: add     rsp, 8
 * 000000014041FF37: call    loc_14041FF2A
 * 000000014041FF3C: add     rsp, 8
 * 000000014041FF40: call    loc_14041FF33
 * 000000014041FF45: add     rsp, 8
 * 000000014041FF49: call    loc_14041FF3C
 * 000000014041FF4E: add     rsp, 8
 * 000000014041FF52: mov     eax, 0DADAh
 * 000000014041FF57: test    byte ptr gs:862h, 8
 * 000000014041FF60: jz      short loc_14041FF69
 * 000000014041FF62: mov     al, 20h ; ' '
 * 000000014041FF64: incsspq rax
 * 000000014041FF69: test    word ptr gs:860h, 80h
 * 000000014041FF74: jz      short loc_14041FF82
 * 000000014041FF76: xor     eax, eax
 * 000000014041FF78: xor     edx, edx
 * 000000014041FF7A: mov     ecx, 1
 * 000000014041FF7F: div     rcx
 * 000000014041FF82: mov     rdx, [rbp-40h]
 * 000000014041FF86: mov     rcx, [rbp-48h]
 * 000000014041FF8A: mov     rax, [rbp-50h]
 * 000000014041FF8E: mov     rsp, rbp
 * 000000014041FF91: mov     rbp, [rbp+0D8h]
 * 000000014041FF98: add     rsp, 0E8h
 * 000000014041FF9F: test    cs:KiKvaShadow, 1
 * 000000014041FFA6: jz      short loc_14041FFAD
 * 000000014041FFA8: jmp     KiKernelExit
 * 000000014041FFAD: test    word ptr gs:860h, 100h
 * 000000014041FFB8: jz      short loc_14041FFBF
 * 000000014041FFBA: verw    [rsp-1C8h+arg_1E0]
 * 000000014041FFBF: swapgs
 * 000000014041FFC2: iretq
 * 000000014041FFC4: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FFC8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FFCC: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FFD0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FFD4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FFD8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FFDC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FFE0: mov     r11, [rbp-20h]
 * 000000014041FFE4: mov     r10, [rbp-28h]
 * 000000014041FFE8: mov     r9, [rbp-30h]
 * 000000014041FFEC: mov     r8, [rbp-38h]
 * 000000014041FFF0: mov     rdx, [rbp-40h]
 * 000000014041FFF4: mov     rcx, [rbp-48h]
 * 000000014041FFF8: mov     rax, [rbp-50h]
 * 000000014041FFFC: mov     rsp, rbp
 * 000000014041FFFF: mov     rbp, [rbp+0D8h]
 * 0000000140420006: add     rsp, 0E8h
 * 000000014042000D: iretq
 */
