/*
 * XREFs of KiExceptionDispatch @ 0x140434340
 * Callers:
 *     KiDivideErrorFault @ 0x14042B600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042BB40 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042C500 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042C880 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042D9C0 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x14042E800 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042EC00 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042EF80 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14042FB00 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14042FF00 (KiAlignmentFault.c)
 *     KiXmmException @ 0x140431040 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x140432600 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140432980 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140432FC0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF8E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x14041F560 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x140434340
 * Reason: Hex-Rays returned no pseudocode for 0x140434340
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434340: sub     rsp, 1D8h
 * 0000000140434347: lea     rax, [rsp+1D8h+var_D8]
 * 000000014043434F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434354: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434359: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014043435F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434365: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014043436B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434370: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434375: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014043437A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014043437F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434384: mov     [rax], rbx
 * 0000000140434387: mov     [rax+8], rdi
 * 000000014043438B: mov     [rax+10h], rsi
 * 000000014043438F: mov     [rax+18h], r12
 * 0000000140434393: mov     [rax+20h], r13
 * 0000000140434397: mov     [rax+28h], r14
 * 000000014043439B: mov     [rax+30h], r15
 * 000000014043439F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001404343A7: mov     [rax], ecx
 * 00000001404343A9: xor     ecx, ecx
 * 00000001404343AB: mov     [rax+4], ecx
 * 00000001404343AE: mov     [rax+8], rcx
 * 00000001404343B2: mov     [rax+10h], r8
 * 00000001404343B6: mov     [rax+18h], edx
 * 00000001404343B9: mov     [rax+20h], r9
 * 00000001404343BD: mov     [rax+28h], r10
 * 00000001404343C1: mov     [rax+30h], r11
 * 00000001404343C5: mov     r9b, [rbp+0F0h]
 * 00000001404343CC: and     r9b, 1
 * 00000001404343D0: mov     [rsp+1D8h+var_1B8], 1; char
 * 00000001404343D5: lea     r8, [rbp-80h]
 * 00000001404343D9: mov     rdx, rsp
 * 00000001404343DC: mov     rcx, rax; ExceptionRecord
 * 00000001404343DF: jnz     loc_140434477
 * 00000001404343E5: mov     r10, cr8
 * 00000001404343E9: mov     r11, 2
 * 00000001404343F0: test    dword ptr [rbp+0F8h], 200h
 * 00000001404343FA: cmovz   r10, r11
 * 00000001404343FE: cmp     r10, r11
 * 0000000140434401: jb      short loc_140434477
 * 0000000140434403: cmp     byte ptr gs:83E6h, 0
 * 000000014043440C: jnz     short loc_140434477
 * 000000014043440E: mov     r10, gs:83E8h
 * 0000000140434417: add     r10, 50h ; 'P'
 * 000000014043441B: cmp     rsp, r10
 * 000000014043441E: ja      short loc_14043442C
 * 0000000140434420: sub     r10, 6000h
 * 0000000140434427: cmp     rsp, r10
 * 000000014043442A: jnb     short loc_140434477
 * 000000014043442C: mov     r10, gs:8B58h
 * 0000000140434435: cmp     rsp, r10
 * 0000000140434438: ja      short loc_140434446
 * 000000014043443A: sub     r10, 6000h
 * 0000000140434441: cmp     rsp, r10
 * 0000000140434444: jnb     short loc_140434477
 * 0000000140434446: mov     r10, gs:8
 * 000000014043444F: mov     r10, [r10+24h]
 * 0000000140434453: cmp     rsp, r10
 * 0000000140434456: ja      short loc_140434464
 * 0000000140434458: sub     r10, 6000h
 * 000000014043445F: cmp     rsp, r10
 * 0000000140434462: jnb     short loc_140434477
 * 0000000140434464: cmp     word ptr gs:8026h, 0
 * 000000014043446E: jnz     short loc_140434477
 * 0000000140434470: call    KiExceptionDispatchOnExceptionStack
 * 0000000140434475: jmp     short loc_14043447C
 * 0000000140434477: call    KiDispatchException
 * 000000014043447C: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140434484: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434489: movaps  xmm7, [rsp+1D8h+var_198]
 * 000000014043448E: movaps  xmm8, [rsp+1D8h+var_188]
 * 0000000140434494: movaps  xmm9, [rsp+1D8h+var_178]
 * 000000014043449A: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001404344A0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001404344A5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001404344AA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001404344AF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001404344B4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001404344B9: mov     rbx, [rcx]
 * 00000001404344BC: mov     rdi, [rcx+8]
 * 00000001404344C0: mov     rsi, [rcx+10h]
 * 00000001404344C4: mov     r12, [rcx+18h]
 * 00000001404344C8: mov     r13, [rcx+20h]
 * 00000001404344CC: mov     r14, [rcx+28h]
 * 00000001404344D0: mov     r15, [rcx+30h]
 * 00000001404344D4: cli
 * 00000001404344D5: xor     ecx, ecx
 * 00000001404344D7: rdsspq  rcx
 * 00000001404344DC: test    rcx, rcx
 * 00000001404344DF: jz      short loc_1404344EB
 * 00000001404344E1: mov     ecx, 1
 * 00000001404344E6: incsspq rcx
 * 00000001404344EB: test    byte ptr [rbp+0F0h], 1
 * 00000001404344F2: jz      loc_1404347E0
 * 00000001404344F8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404344FF: jz      short loc_140434504
 * 0000000140434501: stac
 * 0000000140434504: mov     rcx, gs:188h
 * 000000014043450D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434514: jz      short loc_140434531
 * 0000000140434516: mov     ecx, 1
 * 000000014043451B: mov     cr8, rcx
 * 000000014043451F: sti
 * 0000000140434520: call    KiInitiateUserApc
 * 0000000140434525: cli
 * 0000000140434526: mov     ecx, 0
 * 000000014043452B: mov     cr8, rcx
 * 000000014043452F: jmp     short loc_140434504
 * 0000000140434531: test    byte ptr gs:86Ch, 2
 * 000000014043453A: jz      short loc_140434543
 * 000000014043453C: xor     ecx, ecx
 * 000000014043453E: call    KiUpdateStibpPairing
 * 0000000140434543: mov     rcx, gs:188h
 * 000000014043454C: test    dword ptr [rcx], 8000000h
 * 0000000140434552: jz      short loc_140434559
 * 0000000140434554: call    KiRestoreSetContextState
 * 0000000140434559: mov     rcx, gs:188h
 * 0000000140434562: test    dword ptr [rcx], 10000h
 * 0000000140434568: jz      short loc_14043457E
 * 000000014043456A: test    byte ptr [rcx+2], 1
 * 000000014043456E: jz      short loc_14043457E
 * 0000000140434570: call    KiCopyCounters
 * 0000000140434575: mov     rcx, gs:188h
 * 000000014043457E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434582: cmp     word ptr [rbp+80h], 0
 * 000000014043458A: jz      short loc_140434591
 * 000000014043458C: call    KiRestoreDebugRegisterState
 * 0000000140434591: mov     rcx, gs:188h
 * 000000014043459A: bt      dword ptr [rcx+74h], 16h
 * 000000014043459F: jnb     short loc_1404345CB
 * 00000001404345A1: xor     ecx, ecx
 * 00000001404345A3: rdsspq  rcx
 * 00000001404345A8: mov     r8, gs:95A8h
 * 00000001404345B1: add     r8, 8
 * 00000001404345B5: cmp     rcx, r8
 * 00000001404345B8: jnz     short loc_1404345CB
 * 00000001404345BA: mov     rcx, gs:95A0h
 * 00000001404345C3: rstorssp qword ptr [rcx]
 * 00000001404345C7: saveprevssp
 * 00000001404345CB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404345CF: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404345D3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404345D7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404345DB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404345DF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404345E3: mov     r11, [rbp-20h]
 * 00000001404345E7: mov     r10, [rbp-28h]
 * 00000001404345EB: mov     r9, [rbp-30h]
 * 00000001404345EF: mov     r8, [rbp-38h]
 * 00000001404345F3: mov     byte ptr gs:856h, 0
 * 00000001404345FC: movzx   eax, word ptr gs:86Ah
 * 0000000140434605: cmp     gs:864h, ax
 * 000000014043460E: jz      short loc_140434622
 * 0000000140434610: mov     gs:864h, ax
 * 0000000140434619: mov     ecx, 48h ; 'H'
 * 000000014043461E: xor     edx, edx
 * 0000000140434620: wrmsr
 * 0000000140434622: btr     word ptr gs:860h, 2
 * 000000014043462D: jnb     short loc_14043463D
 * 000000014043462F: mov     eax, 1
 * 0000000140434634: xor     edx, edx
 * 0000000140434636: mov     ecx, 49h ; 'I'
 * 000000014043463B: wrmsr
 * 000000014043463D: btr     word ptr gs:860h, 5
 * 0000000140434648: jnb     loc_140434785
 * 000000014043464E: call    loc_140434761
 * 0000000140434653: add     rsp, 8
 * 0000000140434657: call    loc_14043476A
 * 000000014043465C: add     rsp, 8
 * 0000000140434660: call    loc_140434653
 * 0000000140434665: add     rsp, 8
 * 0000000140434669: call    loc_14043465C
 * 000000014043466E: add     rsp, 8
 * 0000000140434672: call    loc_140434665
 * 0000000140434677: add     rsp, 8
 * 000000014043467B: call    loc_14043466E
 * 0000000140434680: add     rsp, 8
 * 0000000140434684: call    loc_140434677
 * 0000000140434689: add     rsp, 8
 * 000000014043468D: call    loc_140434680
 * 0000000140434692: add     rsp, 8
 * 0000000140434696: call    loc_140434689
 * 000000014043469B: add     rsp, 8
 * 000000014043469F: call    loc_140434692
 * 00000001404346A4: add     rsp, 8
 * 00000001404346A8: call    loc_14043469B
 * 00000001404346AD: add     rsp, 8
 * 00000001404346B1: call    loc_1404346A4
 * 00000001404346B6: add     rsp, 8
 * 00000001404346BA: call    loc_1404346AD
 * 00000001404346BF: add     rsp, 8
 * 00000001404346C3: call    loc_1404346B6
 * 00000001404346C8: add     rsp, 8
 * 00000001404346CC: call    loc_1404346BF
 * 00000001404346D1: add     rsp, 8
 * 00000001404346D5: call    loc_1404346C8
 * 00000001404346DA: add     rsp, 8
 * 00000001404346DE: call    loc_1404346D1
 * 00000001404346E3: add     rsp, 8
 * 00000001404346E7: call    loc_1404346DA
 * 00000001404346EC: add     rsp, 8
 * 00000001404346F0: call    loc_1404346E3
 * 00000001404346F5: add     rsp, 8
 * 00000001404346F9: call    loc_1404346EC
 * 00000001404346FE: add     rsp, 8
 * 0000000140434702: call    loc_1404346F5
 * 0000000140434707: add     rsp, 8
 * 000000014043470B: call    loc_1404346FE
 * 0000000140434710: add     rsp, 8
 * 0000000140434714: call    loc_140434707
 * 0000000140434719: add     rsp, 8
 * 000000014043471D: call    loc_140434710
 * 0000000140434722: add     rsp, 8
 * 0000000140434726: call    loc_140434719
 * 000000014043472B: add     rsp, 8
 * 000000014043472F: call    loc_140434722
 * 0000000140434734: add     rsp, 8
 * 0000000140434738: call    loc_14043472B
 * 000000014043473D: add     rsp, 8
 * 0000000140434741: call    loc_140434734
 * 0000000140434746: add     rsp, 8
 * 000000014043474A: call    loc_14043473D
 * 000000014043474F: add     rsp, 8
 * 0000000140434753: call    loc_140434746
 * 0000000140434758: add     rsp, 8
 * 000000014043475C: call    loc_14043474F
 * 0000000140434761: add     rsp, 8
 * 0000000140434765: call    loc_140434758
 * 000000014043476A: add     rsp, 8
 * 000000014043476E: mov     eax, 0DADAh
 * 0000000140434773: test    byte ptr gs:862h, 8
 * 000000014043477C: jz      short loc_140434785
 * 000000014043477E: mov     al, 20h ; ' '
 * 0000000140434780: incsspq rax
 * 0000000140434785: test    word ptr gs:860h, 80h
 * 0000000140434790: jz      short loc_14043479E
 * 0000000140434792: xor     eax, eax
 * 0000000140434794: xor     edx, edx
 * 0000000140434796: mov     ecx, 1
 * 000000014043479B: div     rcx
 * 000000014043479E: mov     rdx, [rbp-40h]
 * 00000001404347A2: mov     rcx, [rbp-48h]
 * 00000001404347A6: mov     rax, [rbp-50h]
 * 00000001404347AA: mov     rsp, rbp
 * 00000001404347AD: mov     rbp, [rbp+0D8h]
 * 00000001404347B4: add     rsp, 0E8h
 * 00000001404347BB: test    cs:KiKvaShadow, 1
 * 00000001404347C2: jz      short loc_1404347C9
 * 00000001404347C4: jmp     KiKernelExit
 * 00000001404347C9: test    word ptr gs:860h, 100h
 * 00000001404347D4: jz      short loc_1404347DB
 * 00000001404347D6: verw    [rsp-1E8h+arg_200]
 * 00000001404347DB: swapgs
 * 00000001404347DE: iretq
 * 00000001404347E0: ldmxcsr dword ptr [rbp-54h]
 * 00000001404347E4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404347E8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404347EC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404347F0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404347F4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404347F8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404347FC: mov     r11, [rbp-20h]
 * 0000000140434800: mov     r10, [rbp-28h]
 * 0000000140434804: mov     r9, [rbp-30h]
 * 0000000140434808: mov     r8, [rbp-38h]
 * 000000014043480C: mov     rdx, [rbp-40h]
 * 0000000140434810: mov     rcx, [rbp-48h]
 * 0000000140434814: mov     rax, [rbp-50h]
 * 0000000140434818: mov     rsp, rbp
 * 000000014043481B: mov     rbp, [rbp+0D8h]
 * 0000000140434822: add     rsp, 0E8h
 * 0000000140434829: iretq
 */
