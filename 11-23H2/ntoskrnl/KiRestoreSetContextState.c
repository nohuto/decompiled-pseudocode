/*
 * XREFs of KiRestoreSetContextState @ 0x14041FD40
 * Callers:
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 * Callees:
 *     KeContextToKframes @ 0x14041EB80 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x14041FD40
 * Reason: Hex-Rays returned no pseudocode for 0x14041FD40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FD40: sub     rsp, 138h
 * 000000014041FD47: lea     rax, [rsp+138h+var_38]
 * 000000014041FD4F: movaps  [rsp+138h+var_108], xmm6
 * 000000014041FD54: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041FD59: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041FD5F: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041FD65: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041FD6B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041FD70: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041FD75: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041FD7A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041FD7F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041FD84: mov     [rax], rbx
 * 000000014041FD87: mov     [rax+8], rdi
 * 000000014041FD8B: mov     [rax+10h], rsi
 * 000000014041FD8F: mov     [rax+18h], r12
 * 000000014041FD93: mov     [rax+20h], r13
 * 000000014041FD97: mov     [rax+28h], r14
 * 000000014041FD9B: mov     [rax+30h], r15
 * 000000014041FD9F: mov     ecx, 1
 * 000000014041FDA4: mov     cr8, rcx
 * 000000014041FDA8: sti
 * 000000014041FDA9: mov     rcx, gs:188h
 * 000000014041FDB2: mov     rcx, [rcx+668h]
 * 000000014041FDB9: mov     [rsp+138h+var_118], 1
 * 000000014041FDC2: mov     r9d, [rcx+30h]
 * 000000014041FDC6: mov     r8, rcx
 * 000000014041FDC9: mov     rdx, rsp
 * 000000014041FDCC: lea     rcx, [rbp-80h]
 * 000000014041FDD0: call    KeContextToKframes
 * 000000014041FDD5: cli
 * 000000014041FDD6: mov     ecx, 0
 * 000000014041FDDB: mov     cr8, rcx
 * 000000014041FDDF: mov     rcx, gs:188h
 * 000000014041FDE8: lock btr dword ptr [rcx], 1Bh
 * 000000014041FDED: lea     rcx, [rsp+138h+var_38]
 * 000000014041FDF5: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041FDFA: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041FDFF: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041FE05: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041FE0B: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041FE11: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041FE16: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041FE1B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041FE20: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041FE25: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041FE2A: mov     rbx, [rcx]
 * 000000014041FE2D: mov     rdi, [rcx+8]
 * 000000014041FE31: mov     rsi, [rcx+10h]
 * 000000014041FE35: mov     r12, [rcx+18h]
 * 000000014041FE39: mov     r13, [rcx+20h]
 * 000000014041FE3D: mov     r14, [rcx+28h]
 * 000000014041FE41: mov     r15, [rcx+30h]
 * 000000014041FE45: test    byte ptr gs:86Ch, 2
 * 000000014041FE4E: jz      short loc_14041FE57
 * 000000014041FE50: xor     ecx, ecx
 * 000000014041FE52: call    KiUpdateStibpPairing
 * 000000014041FE57: xor     ecx, ecx
 * 000000014041FE59: rdsspq  rcx
 * 000000014041FE5E: test    rcx, rcx
 * 000000014041FE61: jz      short loc_14041FE6D
 * 000000014041FE63: mov     ecx, 1
 * 000000014041FE68: incsspq rcx
 * 000000014041FE6D: test    byte ptr [rbp+0F0h], 1
 * 000000014041FE74: jz      loc_14042010D
 * 000000014041FE7A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041FE81: jz      short loc_14041FE86
 * 000000014041FE83: stac
 * 000000014041FE86: mov     rcx, gs:188h
 * 000000014041FE8F: test    dword ptr [rcx], 10000h
 * 000000014041FE95: jz      short loc_14041FEAB
 * 000000014041FE97: test    byte ptr [rcx+2], 1
 * 000000014041FE9B: jz      short loc_14041FEAB
 * 000000014041FE9D: call    KiCopyCounters
 * 000000014041FEA2: mov     rcx, gs:188h
 * 000000014041FEAB: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FEAF: cmp     word ptr [rbp+80h], 0
 * 000000014041FEB7: jz      short loc_14041FEBE
 * 000000014041FEB9: call    KiRestoreDebugRegisterState
 * 000000014041FEBE: mov     rcx, gs:188h
 * 000000014041FEC7: bt      dword ptr [rcx+74h], 16h
 * 000000014041FECC: jnb     short loc_14041FEF8
 * 000000014041FECE: xor     ecx, ecx
 * 000000014041FED0: rdsspq  rcx
 * 000000014041FED5: mov     r8, gs:95A8h
 * 000000014041FEDE: add     r8, 8
 * 000000014041FEE2: cmp     rcx, r8
 * 000000014041FEE5: jnz     short loc_14041FEF8
 * 000000014041FEE7: mov     rcx, gs:95A0h
 * 000000014041FEF0: rstorssp qword ptr [rcx]
 * 000000014041FEF4: saveprevssp
 * 000000014041FEF8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FEFC: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FF00: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FF04: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FF08: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FF0C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FF10: mov     r11, [rbp-20h]
 * 000000014041FF14: mov     r10, [rbp-28h]
 * 000000014041FF18: mov     r9, [rbp-30h]
 * 000000014041FF1C: mov     r8, [rbp-38h]
 * 000000014041FF20: mov     byte ptr gs:856h, 0
 * 000000014041FF29: movzx   eax, word ptr gs:86Ah
 * 000000014041FF32: cmp     gs:864h, ax
 * 000000014041FF3B: jz      short loc_14041FF4F
 * 000000014041FF3D: mov     gs:864h, ax
 * 000000014041FF46: mov     ecx, 48h ; 'H'
 * 000000014041FF4B: xor     edx, edx
 * 000000014041FF4D: wrmsr
 * 000000014041FF4F: btr     word ptr gs:860h, 2
 * 000000014041FF5A: jnb     short loc_14041FF6A
 * 000000014041FF5C: mov     eax, 1
 * 000000014041FF61: xor     edx, edx
 * 000000014041FF63: mov     ecx, 49h ; 'I'
 * 000000014041FF68: wrmsr
 * 000000014041FF6A: btr     word ptr gs:860h, 5
 * 000000014041FF75: jnb     loc_1404200B2
 * 000000014041FF7B: call    loc_14042008E
 * 000000014041FF80: add     rsp, 8
 * 000000014041FF84: call    loc_140420097
 * 000000014041FF89: add     rsp, 8
 * 000000014041FF8D: call    loc_14041FF80
 * 000000014041FF92: add     rsp, 8
 * 000000014041FF96: call    loc_14041FF89
 * 000000014041FF9B: add     rsp, 8
 * 000000014041FF9F: call    loc_14041FF92
 * 000000014041FFA4: add     rsp, 8
 * 000000014041FFA8: call    loc_14041FF9B
 * 000000014041FFAD: add     rsp, 8
 * 000000014041FFB1: call    loc_14041FFA4
 * 000000014041FFB6: add     rsp, 8
 * 000000014041FFBA: call    loc_14041FFAD
 * 000000014041FFBF: add     rsp, 8
 * 000000014041FFC3: call    loc_14041FFB6
 * 000000014041FFC8: add     rsp, 8
 * 000000014041FFCC: call    loc_14041FFBF
 * 000000014041FFD1: add     rsp, 8
 * 000000014041FFD5: call    loc_14041FFC8
 * 000000014041FFDA: add     rsp, 8
 * 000000014041FFDE: call    loc_14041FFD1
 * 000000014041FFE3: add     rsp, 8
 * 000000014041FFE7: call    loc_14041FFDA
 * 000000014041FFEC: add     rsp, 8
 * 000000014041FFF0: call    loc_14041FFE3
 * 000000014041FFF5: add     rsp, 8
 * 000000014041FFF9: call    loc_14041FFEC
 * 000000014041FFFE: add     rsp, 8
 * 0000000140420002: call    loc_14041FFF5
 * 0000000140420007: add     rsp, 8
 * 000000014042000B: call    loc_14041FFFE
 * 0000000140420010: add     rsp, 8
 * 0000000140420014: call    loc_140420007
 * 0000000140420019: add     rsp, 8
 * 000000014042001D: call    loc_140420010
 * 0000000140420022: add     rsp, 8
 * 0000000140420026: call    loc_140420019
 * 000000014042002B: add     rsp, 8
 * 000000014042002F: call    loc_140420022
 * 0000000140420034: add     rsp, 8
 * 0000000140420038: call    loc_14042002B
 * 000000014042003D: add     rsp, 8
 * 0000000140420041: call    loc_140420034
 * 0000000140420046: add     rsp, 8
 * 000000014042004A: call    loc_14042003D
 * 000000014042004F: add     rsp, 8
 * 0000000140420053: call    loc_140420046
 * 0000000140420058: add     rsp, 8
 * 000000014042005C: call    loc_14042004F
 * 0000000140420061: add     rsp, 8
 * 0000000140420065: call    loc_140420058
 * 000000014042006A: add     rsp, 8
 * 000000014042006E: call    loc_140420061
 * 0000000140420073: add     rsp, 8
 * 0000000140420077: call    loc_14042006A
 * 000000014042007C: add     rsp, 8
 * 0000000140420080: call    loc_140420073
 * 0000000140420085: add     rsp, 8
 * 0000000140420089: call    loc_14042007C
 * 000000014042008E: add     rsp, 8
 * 0000000140420092: call    loc_140420085
 * 0000000140420097: add     rsp, 8
 * 000000014042009B: mov     eax, 0DADAh
 * 00000001404200A0: test    byte ptr gs:862h, 8
 * 00000001404200A9: jz      short loc_1404200B2
 * 00000001404200AB: mov     al, 20h ; ' '
 * 00000001404200AD: incsspq rax
 * 00000001404200B2: test    word ptr gs:860h, 80h
 * 00000001404200BD: jz      short loc_1404200CB
 * 00000001404200BF: xor     eax, eax
 * 00000001404200C1: xor     edx, edx
 * 00000001404200C3: mov     ecx, 1
 * 00000001404200C8: div     rcx
 * 00000001404200CB: mov     rdx, [rbp-40h]
 * 00000001404200CF: mov     rcx, [rbp-48h]
 * 00000001404200D3: mov     rax, [rbp-50h]
 * 00000001404200D7: mov     rsp, rbp
 * 00000001404200DA: mov     rbp, [rbp+0D8h]
 * 00000001404200E1: add     rsp, 0E8h
 * 00000001404200E8: test    cs:KiKvaShadow, 1
 * 00000001404200EF: jz      short loc_1404200F6
 * 00000001404200F1: jmp     KiKernelExit
 * 00000001404200F6: test    word ptr gs:860h, 100h
 * 0000000140420101: jz      short loc_140420108
 * 0000000140420103: verw    [rsp-1E8h+arg_200]
 * 0000000140420108: swapgs
 * 000000014042010B: iretq
 * 000000014042010D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420111: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420115: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420119: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042011D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420121: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420125: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420129: mov     r11, [rbp-20h]
 * 000000014042012D: mov     r10, [rbp-28h]
 * 0000000140420131: mov     r9, [rbp-30h]
 * 0000000140420135: mov     r8, [rbp-38h]
 * 0000000140420139: mov     rdx, [rbp-40h]
 * 000000014042013D: mov     rcx, [rbp-48h]
 * 0000000140420141: mov     rax, [rbp-50h]
 * 0000000140420145: mov     rsp, rbp
 * 0000000140420148: mov     rbp, [rbp+0D8h]
 * 000000014042014F: add     rsp, 0E8h
 * 0000000140420156: iretq
 * 0000000140420158: retn
 */
