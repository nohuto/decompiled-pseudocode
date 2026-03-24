/*
 * XREFs of KiRestoreSetContextState @ 0x14041F680
 * Callers:
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041EF50 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429630 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 * Callees:
 *     KeContextToKframes @ 0x14041E4C0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x14041F680
 * Reason: Hex-Rays returned no pseudocode for 0x14041F680
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F680: sub     rsp, 138h
 * 000000014041F687: lea     rax, [rsp+138h+var_38]
 * 000000014041F68F: movaps  [rsp+138h+var_108], xmm6
 * 000000014041F694: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041F699: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041F69F: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041F6A5: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041F6AB: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041F6B0: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041F6B5: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041F6BA: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041F6BF: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041F6C4: mov     [rax], rbx
 * 000000014041F6C7: mov     [rax+8], rdi
 * 000000014041F6CB: mov     [rax+10h], rsi
 * 000000014041F6CF: mov     [rax+18h], r12
 * 000000014041F6D3: mov     [rax+20h], r13
 * 000000014041F6D7: mov     [rax+28h], r14
 * 000000014041F6DB: mov     [rax+30h], r15
 * 000000014041F6DF: mov     ecx, 1
 * 000000014041F6E4: mov     cr8, rcx
 * 000000014041F6E8: sti
 * 000000014041F6E9: mov     rcx, gs:188h
 * 000000014041F6F2: mov     rcx, [rcx+668h]
 * 000000014041F6F9: mov     [rsp+138h+var_118], 1
 * 000000014041F702: mov     r9d, [rcx+30h]
 * 000000014041F706: mov     r8, rcx
 * 000000014041F709: mov     rdx, rsp
 * 000000014041F70C: lea     rcx, [rbp-80h]
 * 000000014041F710: call    KeContextToKframes
 * 000000014041F715: cli
 * 000000014041F716: mov     ecx, 0
 * 000000014041F71B: mov     cr8, rcx
 * 000000014041F71F: mov     rcx, gs:188h
 * 000000014041F728: lock btr dword ptr [rcx], 1Bh
 * 000000014041F72D: lea     rcx, [rsp+138h+var_38]
 * 000000014041F735: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F73A: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F73F: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F745: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F74B: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F751: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F756: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F75B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F760: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F765: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F76A: mov     rbx, [rcx]
 * 000000014041F76D: mov     rdi, [rcx+8]
 * 000000014041F771: mov     rsi, [rcx+10h]
 * 000000014041F775: mov     r12, [rcx+18h]
 * 000000014041F779: mov     r13, [rcx+20h]
 * 000000014041F77D: mov     r14, [rcx+28h]
 * 000000014041F781: mov     r15, [rcx+30h]
 * 000000014041F785: test    byte ptr gs:86Ch, 2
 * 000000014041F78E: jz      short loc_14041F797
 * 000000014041F790: xor     ecx, ecx
 * 000000014041F792: call    KiUpdateStibpPairing
 * 000000014041F797: xor     ecx, ecx
 * 000000014041F799: rdsspq  rcx
 * 000000014041F79E: test    rcx, rcx
 * 000000014041F7A1: jz      short loc_14041F7AD
 * 000000014041F7A3: mov     ecx, 1
 * 000000014041F7A8: incsspq rcx
 * 000000014041F7AD: test    byte ptr [rbp+0F0h], 1
 * 000000014041F7B4: jz      loc_14041FA4D
 * 000000014041F7BA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041F7C1: jz      short loc_14041F7C6
 * 000000014041F7C3: stac
 * 000000014041F7C6: mov     rcx, gs:188h
 * 000000014041F7CF: test    dword ptr [rcx], 10000h
 * 000000014041F7D5: jz      short loc_14041F7EB
 * 000000014041F7D7: test    byte ptr [rcx+2], 1
 * 000000014041F7DB: jz      short loc_14041F7EB
 * 000000014041F7DD: call    KiCopyCounters
 * 000000014041F7E2: mov     rcx, gs:188h
 * 000000014041F7EB: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F7EF: cmp     word ptr [rbp+80h], 0
 * 000000014041F7F7: jz      short loc_14041F7FE
 * 000000014041F7F9: call    KiRestoreDebugRegisterState
 * 000000014041F7FE: mov     rcx, gs:188h
 * 000000014041F807: bt      dword ptr [rcx+74h], 16h
 * 000000014041F80C: jnb     short loc_14041F838
 * 000000014041F80E: xor     ecx, ecx
 * 000000014041F810: rdsspq  rcx
 * 000000014041F815: mov     r8, gs:95A8h
 * 000000014041F81E: add     r8, 8
 * 000000014041F822: cmp     rcx, r8
 * 000000014041F825: jnz     short loc_14041F838
 * 000000014041F827: mov     rcx, gs:95A0h
 * 000000014041F830: rstorssp qword ptr [rcx]
 * 000000014041F834: saveprevssp
 * 000000014041F838: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F83C: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F840: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F844: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F848: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F84C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F850: mov     r11, [rbp-20h]
 * 000000014041F854: mov     r10, [rbp-28h]
 * 000000014041F858: mov     r9, [rbp-30h]
 * 000000014041F85C: mov     r8, [rbp-38h]
 * 000000014041F860: mov     byte ptr gs:856h, 0
 * 000000014041F869: movzx   eax, word ptr gs:86Ah
 * 000000014041F872: cmp     gs:864h, ax
 * 000000014041F87B: jz      short loc_14041F88F
 * 000000014041F87D: mov     gs:864h, ax
 * 000000014041F886: mov     ecx, 48h ; 'H'
 * 000000014041F88B: xor     edx, edx
 * 000000014041F88D: wrmsr
 * 000000014041F88F: btr     word ptr gs:860h, 2
 * 000000014041F89A: jnb     short loc_14041F8AA
 * 000000014041F89C: mov     eax, 1
 * 000000014041F8A1: xor     edx, edx
 * 000000014041F8A3: mov     ecx, 49h ; 'I'
 * 000000014041F8A8: wrmsr
 * 000000014041F8AA: btr     word ptr gs:860h, 5
 * 000000014041F8B5: jnb     loc_14041F9F2
 * 000000014041F8BB: call    loc_14041F9CE
 * 000000014041F8C0: add     rsp, 8
 * 000000014041F8C4: call    loc_14041F9D7
 * 000000014041F8C9: add     rsp, 8
 * 000000014041F8CD: call    loc_14041F8C0
 * 000000014041F8D2: add     rsp, 8
 * 000000014041F8D6: call    loc_14041F8C9
 * 000000014041F8DB: add     rsp, 8
 * 000000014041F8DF: call    loc_14041F8D2
 * 000000014041F8E4: add     rsp, 8
 * 000000014041F8E8: call    loc_14041F8DB
 * 000000014041F8ED: add     rsp, 8
 * 000000014041F8F1: call    loc_14041F8E4
 * 000000014041F8F6: add     rsp, 8
 * 000000014041F8FA: call    loc_14041F8ED
 * 000000014041F8FF: add     rsp, 8
 * 000000014041F903: call    loc_14041F8F6
 * 000000014041F908: add     rsp, 8
 * 000000014041F90C: call    loc_14041F8FF
 * 000000014041F911: add     rsp, 8
 * 000000014041F915: call    loc_14041F908
 * 000000014041F91A: add     rsp, 8
 * 000000014041F91E: call    loc_14041F911
 * 000000014041F923: add     rsp, 8
 * 000000014041F927: call    loc_14041F91A
 * 000000014041F92C: add     rsp, 8
 * 000000014041F930: call    loc_14041F923
 * 000000014041F935: add     rsp, 8
 * 000000014041F939: call    loc_14041F92C
 * 000000014041F93E: add     rsp, 8
 * 000000014041F942: call    loc_14041F935
 * 000000014041F947: add     rsp, 8
 * 000000014041F94B: call    loc_14041F93E
 * 000000014041F950: add     rsp, 8
 * 000000014041F954: call    loc_14041F947
 * 000000014041F959: add     rsp, 8
 * 000000014041F95D: call    loc_14041F950
 * 000000014041F962: add     rsp, 8
 * 000000014041F966: call    loc_14041F959
 * 000000014041F96B: add     rsp, 8
 * 000000014041F96F: call    loc_14041F962
 * 000000014041F974: add     rsp, 8
 * 000000014041F978: call    loc_14041F96B
 * 000000014041F97D: add     rsp, 8
 * 000000014041F981: call    loc_14041F974
 * 000000014041F986: add     rsp, 8
 * 000000014041F98A: call    loc_14041F97D
 * 000000014041F98F: add     rsp, 8
 * 000000014041F993: call    loc_14041F986
 * 000000014041F998: add     rsp, 8
 * 000000014041F99C: call    loc_14041F98F
 * 000000014041F9A1: add     rsp, 8
 * 000000014041F9A5: call    loc_14041F998
 * 000000014041F9AA: add     rsp, 8
 * 000000014041F9AE: call    loc_14041F9A1
 * 000000014041F9B3: add     rsp, 8
 * 000000014041F9B7: call    loc_14041F9AA
 * 000000014041F9BC: add     rsp, 8
 * 000000014041F9C0: call    loc_14041F9B3
 * 000000014041F9C5: add     rsp, 8
 * 000000014041F9C9: call    loc_14041F9BC
 * 000000014041F9CE: add     rsp, 8
 * 000000014041F9D2: call    loc_14041F9C5
 * 000000014041F9D7: add     rsp, 8
 * 000000014041F9DB: mov     eax, 0DADAh
 * 000000014041F9E0: test    byte ptr gs:862h, 8
 * 000000014041F9E9: jz      short loc_14041F9F2
 * 000000014041F9EB: mov     al, 20h ; ' '
 * 000000014041F9ED: incsspq rax
 * 000000014041F9F2: test    word ptr gs:860h, 80h
 * 000000014041F9FD: jz      short loc_14041FA0B
 * 000000014041F9FF: xor     eax, eax
 * 000000014041FA01: xor     edx, edx
 * 000000014041FA03: mov     ecx, 1
 * 000000014041FA08: div     rcx
 * 000000014041FA0B: mov     rdx, [rbp-40h]
 * 000000014041FA0F: mov     rcx, [rbp-48h]
 * 000000014041FA13: mov     rax, [rbp-50h]
 * 000000014041FA17: mov     rsp, rbp
 * 000000014041FA1A: mov     rbp, [rbp+0D8h]
 * 000000014041FA21: add     rsp, 0E8h
 * 000000014041FA28: test    cs:KiKvaShadow, 1
 * 000000014041FA2F: jz      short loc_14041FA36
 * 000000014041FA31: jmp     KiKernelExit
 * 000000014041FA36: test    word ptr gs:860h, 100h
 * 000000014041FA41: jz      short loc_14041FA48
 * 000000014041FA43: verw    [rsp-1E8h+arg_200]
 * 000000014041FA48: swapgs
 * 000000014041FA4B: iretq
 * 000000014041FA4D: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FA51: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FA55: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FA59: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FA5D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FA61: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FA65: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FA69: mov     r11, [rbp-20h]
 * 000000014041FA6D: mov     r10, [rbp-28h]
 * 000000014041FA71: mov     r9, [rbp-30h]
 * 000000014041FA75: mov     r8, [rbp-38h]
 * 000000014041FA79: mov     rdx, [rbp-40h]
 * 000000014041FA7D: mov     rcx, [rbp-48h]
 * 000000014041FA81: mov     rax, [rbp-50h]
 * 000000014041FA85: mov     rsp, rbp
 * 000000014041FA88: mov     rbp, [rbp+0D8h]
 * 000000014041FA8F: add     rsp, 0E8h
 * 000000014041FA96: iretq
 * 000000014041FA98: retn
 */
