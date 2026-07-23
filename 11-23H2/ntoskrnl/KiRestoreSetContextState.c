/*
 * XREFs of KiRestoreSetContextState @ 0x1404200D0
 * Callers:
 *     NtContinueEx @ 0x14041F520 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F9A0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x140420630 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140421000 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421880 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421CC0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x1404242C0 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426370 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404267C0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x14042A080 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404313C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 * Callees:
 *     KeContextToKframes @ 0x14041EF10 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x1404200D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404200D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404200D0: sub     rsp, 138h
 * 00000001404200D7: lea     rax, [rsp+138h+var_38]
 * 00000001404200DF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404200E4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404200E9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404200EF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404200F5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404200FB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140420100: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140420105: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014042010A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014042010F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140420114: mov     [rax], rbx
 * 0000000140420117: mov     [rax+8], rdi
 * 000000014042011B: mov     [rax+10h], rsi
 * 000000014042011F: mov     [rax+18h], r12
 * 0000000140420123: mov     [rax+20h], r13
 * 0000000140420127: mov     [rax+28h], r14
 * 000000014042012B: mov     [rax+30h], r15
 * 000000014042012F: mov     ecx, 1
 * 0000000140420134: mov     cr8, rcx
 * 0000000140420138: sti
 * 0000000140420139: mov     rcx, gs:188h
 * 0000000140420142: mov     rcx, [rcx+668h]
 * 0000000140420149: mov     [rsp+138h+var_118], 1
 * 0000000140420152: mov     r9d, [rcx+30h]
 * 0000000140420156: mov     r8, rcx
 * 0000000140420159: mov     rdx, rsp
 * 000000014042015C: lea     rcx, [rbp-80h]
 * 0000000140420160: call    KeContextToKframes
 * 0000000140420165: cli
 * 0000000140420166: mov     ecx, 0
 * 000000014042016B: mov     cr8, rcx
 * 000000014042016F: mov     rcx, gs:188h
 * 0000000140420178: lock btr dword ptr [rcx], 1Bh
 * 000000014042017D: lea     rcx, [rsp+138h+var_38]
 * 0000000140420185: movaps  xmm6, [rsp+138h+var_108]
 * 000000014042018A: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014042018F: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140420195: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014042019B: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001404201A1: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001404201A6: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001404201AB: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001404201B0: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001404201B5: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001404201BA: mov     rbx, [rcx]
 * 00000001404201BD: mov     rdi, [rcx+8]
 * 00000001404201C1: mov     rsi, [rcx+10h]
 * 00000001404201C5: mov     r12, [rcx+18h]
 * 00000001404201C9: mov     r13, [rcx+20h]
 * 00000001404201CD: mov     r14, [rcx+28h]
 * 00000001404201D1: mov     r15, [rcx+30h]
 * 00000001404201D5: test    byte ptr gs:86Ch, 2
 * 00000001404201DE: jz      short loc_1404201E7
 * 00000001404201E0: xor     ecx, ecx
 * 00000001404201E2: call    KiUpdateStibpPairing
 * 00000001404201E7: xor     ecx, ecx
 * 00000001404201E9: rdsspq  rcx
 * 00000001404201EE: test    rcx, rcx
 * 00000001404201F1: jz      short loc_1404201FD
 * 00000001404201F3: mov     ecx, 1
 * 00000001404201F8: incsspq rcx
 * 00000001404201FD: test    byte ptr [rbp+0F0h], 1
 * 0000000140420204: jz      loc_14042049D
 * 000000014042020A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140420211: jz      short loc_140420216
 * 0000000140420213: stac
 * 0000000140420216: mov     rcx, gs:188h
 * 000000014042021F: test    dword ptr [rcx], 10000h
 * 0000000140420225: jz      short loc_14042023B
 * 0000000140420227: test    byte ptr [rcx+2], 1
 * 000000014042022B: jz      short loc_14042023B
 * 000000014042022D: call    KiCopyCounters
 * 0000000140420232: mov     rcx, gs:188h
 * 000000014042023B: ldmxcsr dword ptr [rbp-54h]
 * 000000014042023F: cmp     word ptr [rbp+80h], 0
 * 0000000140420247: jz      short loc_14042024E
 * 0000000140420249: call    KiRestoreDebugRegisterState
 * 000000014042024E: mov     rcx, gs:188h
 * 0000000140420257: bt      dword ptr [rcx+74h], 16h
 * 000000014042025C: jnb     short loc_140420288
 * 000000014042025E: xor     ecx, ecx
 * 0000000140420260: rdsspq  rcx
 * 0000000140420265: mov     r8, gs:95A8h
 * 000000014042026E: add     r8, 8
 * 0000000140420272: cmp     rcx, r8
 * 0000000140420275: jnz     short loc_140420288
 * 0000000140420277: mov     rcx, gs:95A0h
 * 0000000140420280: rstorssp qword ptr [rcx]
 * 0000000140420284: saveprevssp
 * 0000000140420288: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042028C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420290: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420294: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420298: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042029C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404202A0: mov     r11, [rbp-20h]
 * 00000001404202A4: mov     r10, [rbp-28h]
 * 00000001404202A8: mov     r9, [rbp-30h]
 * 00000001404202AC: mov     r8, [rbp-38h]
 * 00000001404202B0: mov     byte ptr gs:856h, 0
 * 00000001404202B9: movzx   eax, word ptr gs:86Ah
 * 00000001404202C2: cmp     gs:864h, ax
 * 00000001404202CB: jz      short loc_1404202DF
 * 00000001404202CD: mov     gs:864h, ax
 * 00000001404202D6: mov     ecx, 48h ; 'H'
 * 00000001404202DB: xor     edx, edx
 * 00000001404202DD: wrmsr
 * 00000001404202DF: btr     word ptr gs:860h, 2
 * 00000001404202EA: jnb     short loc_1404202FA
 * 00000001404202EC: mov     eax, 1
 * 00000001404202F1: xor     edx, edx
 * 00000001404202F3: mov     ecx, 49h ; 'I'
 * 00000001404202F8: wrmsr
 * 00000001404202FA: btr     word ptr gs:860h, 5
 * 0000000140420305: jnb     loc_140420442
 * 000000014042030B: call    loc_14042041E
 * 0000000140420310: add     rsp, 8
 * 0000000140420314: call    loc_140420427
 * 0000000140420319: add     rsp, 8
 * 000000014042031D: call    loc_140420310
 * 0000000140420322: add     rsp, 8
 * 0000000140420326: call    loc_140420319
 * 000000014042032B: add     rsp, 8
 * 000000014042032F: call    loc_140420322
 * 0000000140420334: add     rsp, 8
 * 0000000140420338: call    loc_14042032B
 * 000000014042033D: add     rsp, 8
 * 0000000140420341: call    loc_140420334
 * 0000000140420346: add     rsp, 8
 * 000000014042034A: call    loc_14042033D
 * 000000014042034F: add     rsp, 8
 * 0000000140420353: call    loc_140420346
 * 0000000140420358: add     rsp, 8
 * 000000014042035C: call    loc_14042034F
 * 0000000140420361: add     rsp, 8
 * 0000000140420365: call    loc_140420358
 * 000000014042036A: add     rsp, 8
 * 000000014042036E: call    loc_140420361
 * 0000000140420373: add     rsp, 8
 * 0000000140420377: call    loc_14042036A
 * 000000014042037C: add     rsp, 8
 * 0000000140420380: call    loc_140420373
 * 0000000140420385: add     rsp, 8
 * 0000000140420389: call    loc_14042037C
 * 000000014042038E: add     rsp, 8
 * 0000000140420392: call    loc_140420385
 * 0000000140420397: add     rsp, 8
 * 000000014042039B: call    loc_14042038E
 * 00000001404203A0: add     rsp, 8
 * 00000001404203A4: call    loc_140420397
 * 00000001404203A9: add     rsp, 8
 * 00000001404203AD: call    loc_1404203A0
 * 00000001404203B2: add     rsp, 8
 * 00000001404203B6: call    loc_1404203A9
 * 00000001404203BB: add     rsp, 8
 * 00000001404203BF: call    loc_1404203B2
 * 00000001404203C4: add     rsp, 8
 * 00000001404203C8: call    loc_1404203BB
 * 00000001404203CD: add     rsp, 8
 * 00000001404203D1: call    loc_1404203C4
 * 00000001404203D6: add     rsp, 8
 * 00000001404203DA: call    loc_1404203CD
 * 00000001404203DF: add     rsp, 8
 * 00000001404203E3: call    loc_1404203D6
 * 00000001404203E8: add     rsp, 8
 * 00000001404203EC: call    loc_1404203DF
 * 00000001404203F1: add     rsp, 8
 * 00000001404203F5: call    loc_1404203E8
 * 00000001404203FA: add     rsp, 8
 * 00000001404203FE: call    loc_1404203F1
 * 0000000140420403: add     rsp, 8
 * 0000000140420407: call    loc_1404203FA
 * 000000014042040C: add     rsp, 8
 * 0000000140420410: call    loc_140420403
 * 0000000140420415: add     rsp, 8
 * 0000000140420419: call    loc_14042040C
 * 000000014042041E: add     rsp, 8
 * 0000000140420422: call    loc_140420415
 * 0000000140420427: add     rsp, 8
 * 000000014042042B: mov     eax, 0DADAh
 * 0000000140420430: test    byte ptr gs:862h, 8
 * 0000000140420439: jz      short loc_140420442
 * 000000014042043B: mov     al, 20h ; ' '
 * 000000014042043D: incsspq rax
 * 0000000140420442: test    word ptr gs:860h, 80h
 * 000000014042044D: jz      short loc_14042045B
 * 000000014042044F: xor     eax, eax
 * 0000000140420451: xor     edx, edx
 * 0000000140420453: mov     ecx, 1
 * 0000000140420458: div     rcx
 * 000000014042045B: mov     rdx, [rbp-40h]
 * 000000014042045F: mov     rcx, [rbp-48h]
 * 0000000140420463: mov     rax, [rbp-50h]
 * 0000000140420467: mov     rsp, rbp
 * 000000014042046A: mov     rbp, [rbp+0D8h]
 * 0000000140420471: add     rsp, 0E8h
 * 0000000140420478: test    cs:KiKvaShadow, 1
 * 000000014042047F: jz      short loc_140420486
 * 0000000140420481: jmp     KiKernelExit
 * 0000000140420486: test    word ptr gs:860h, 100h
 * 0000000140420491: jz      short loc_140420498
 * 0000000140420493: verw    [rsp-1E8h+arg_200]
 * 0000000140420498: swapgs
 * 000000014042049B: iretq
 * 000000014042049D: ldmxcsr dword ptr [rbp-54h]
 * 00000001404204A1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404204A5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404204A9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404204AD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404204B1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404204B5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404204B9: mov     r11, [rbp-20h]
 * 00000001404204BD: mov     r10, [rbp-28h]
 * 00000001404204C1: mov     r9, [rbp-30h]
 * 00000001404204C5: mov     r8, [rbp-38h]
 * 00000001404204C9: mov     rdx, [rbp-40h]
 * 00000001404204CD: mov     rcx, [rbp-48h]
 * 00000001404204D1: mov     rax, [rbp-50h]
 * 00000001404204D5: mov     rsp, rbp
 * 00000001404204D8: mov     rbp, [rbp+0D8h]
 * 00000001404204DF: add     rsp, 0E8h
 * 00000001404204E6: iretq
 * 00000001404204E8: retn
 */
