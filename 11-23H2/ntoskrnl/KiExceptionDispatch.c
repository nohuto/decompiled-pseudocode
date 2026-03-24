/*
 * XREFs of KiExceptionDispatch @ 0x140434940
 * Callers:
 *     KiDivideErrorFault @ 0x14042BC00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042C140 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042CB00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042CE80 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042DFC0 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x14042EE00 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F200 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042F580 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430100 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430500 (KiAlignmentFault.c)
 *     KiXmmException @ 0x140431640 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x140432C00 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140432F80 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1404335C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF7E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x14041FC20 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x140434940
 * Reason: Hex-Rays returned no pseudocode for 0x140434940
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434940: sub     rsp, 1D8h
 * 0000000140434947: lea     rax, [rsp+1D8h+var_D8]
 * 000000014043494F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434954: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434959: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014043495F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434965: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014043496B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434970: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434975: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014043497A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014043497F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434984: mov     [rax], rbx
 * 0000000140434987: mov     [rax+8], rdi
 * 000000014043498B: mov     [rax+10h], rsi
 * 000000014043498F: mov     [rax+18h], r12
 * 0000000140434993: mov     [rax+20h], r13
 * 0000000140434997: mov     [rax+28h], r14
 * 000000014043499B: mov     [rax+30h], r15
 * 000000014043499F: lea     rax, [rsp+1D8h+var_A0]
 * 00000001404349A7: mov     [rax], ecx
 * 00000001404349A9: xor     ecx, ecx
 * 00000001404349AB: mov     [rax+4], ecx
 * 00000001404349AE: mov     [rax+8], rcx
 * 00000001404349B2: mov     [rax+10h], r8
 * 00000001404349B6: mov     [rax+18h], edx
 * 00000001404349B9: mov     [rax+20h], r9
 * 00000001404349BD: mov     [rax+28h], r10
 * 00000001404349C1: mov     [rax+30h], r11
 * 00000001404349C5: mov     r9b, [rbp+0F0h]
 * 00000001404349CC: and     r9b, 1
 * 00000001404349D0: mov     [rsp+1D8h+var_1B8], 1; char
 * 00000001404349D5: lea     r8, [rbp-80h]
 * 00000001404349D9: mov     rdx, rsp
 * 00000001404349DC: mov     rcx, rax; ULONG_PTR
 * 00000001404349DF: jnz     loc_140434A77
 * 00000001404349E5: mov     r10, cr8
 * 00000001404349E9: mov     r11, 2
 * 00000001404349F0: test    dword ptr [rbp+0F8h], 200h
 * 00000001404349FA: cmovz   r10, r11
 * 00000001404349FE: cmp     r10, r11
 * 0000000140434A01: jb      short loc_140434A77
 * 0000000140434A03: cmp     byte ptr gs:83E6h, 0
 * 0000000140434A0C: jnz     short loc_140434A77
 * 0000000140434A0E: mov     r10, gs:83E8h
 * 0000000140434A17: add     r10, 50h ; 'P'
 * 0000000140434A1B: cmp     rsp, r10
 * 0000000140434A1E: ja      short loc_140434A2C
 * 0000000140434A20: sub     r10, 6000h
 * 0000000140434A27: cmp     rsp, r10
 * 0000000140434A2A: jnb     short loc_140434A77
 * 0000000140434A2C: mov     r10, gs:8B58h
 * 0000000140434A35: cmp     rsp, r10
 * 0000000140434A38: ja      short loc_140434A46
 * 0000000140434A3A: sub     r10, 6000h
 * 0000000140434A41: cmp     rsp, r10
 * 0000000140434A44: jnb     short loc_140434A77
 * 0000000140434A46: mov     r10, gs:8
 * 0000000140434A4F: mov     r10, [r10+24h]
 * 0000000140434A53: cmp     rsp, r10
 * 0000000140434A56: ja      short loc_140434A64
 * 0000000140434A58: sub     r10, 6000h
 * 0000000140434A5F: cmp     rsp, r10
 * 0000000140434A62: jnb     short loc_140434A77
 * 0000000140434A64: cmp     word ptr gs:8026h, 0
 * 0000000140434A6E: jnz     short loc_140434A77
 * 0000000140434A70: call    KiExceptionDispatchOnExceptionStack
 * 0000000140434A75: jmp     short loc_140434A7C
 * 0000000140434A77: call    KiDispatchException
 * 0000000140434A7C: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140434A84: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434A89: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140434A8E: movaps  xmm8, [rsp+1D8h+var_188]
 * 0000000140434A94: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140434A9A: movaps  xmm10, [rsp+1D8h+var_168]
 * 0000000140434AA0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140434AA5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140434AAA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140434AAF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140434AB4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140434AB9: mov     rbx, [rcx]
 * 0000000140434ABC: mov     rdi, [rcx+8]
 * 0000000140434AC0: mov     rsi, [rcx+10h]
 * 0000000140434AC4: mov     r12, [rcx+18h]
 * 0000000140434AC8: mov     r13, [rcx+20h]
 * 0000000140434ACC: mov     r14, [rcx+28h]
 * 0000000140434AD0: mov     r15, [rcx+30h]
 * 0000000140434AD4: cli
 * 0000000140434AD5: xor     ecx, ecx
 * 0000000140434AD7: rdsspq  rcx
 * 0000000140434ADC: test    rcx, rcx
 * 0000000140434ADF: jz      short loc_140434AEB
 * 0000000140434AE1: mov     ecx, 1
 * 0000000140434AE6: incsspq rcx
 * 0000000140434AEB: test    byte ptr [rbp+0F0h], 1
 * 0000000140434AF2: jz      loc_140434DE0
 * 0000000140434AF8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140434AFF: jz      short loc_140434B04
 * 0000000140434B01: stac
 * 0000000140434B04: mov     rcx, gs:188h
 * 0000000140434B0D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434B14: jz      short loc_140434B31
 * 0000000140434B16: mov     ecx, 1
 * 0000000140434B1B: mov     cr8, rcx
 * 0000000140434B1F: sti
 * 0000000140434B20: call    KiInitiateUserApc
 * 0000000140434B25: cli
 * 0000000140434B26: mov     ecx, 0
 * 0000000140434B2B: mov     cr8, rcx
 * 0000000140434B2F: jmp     short loc_140434B04
 * 0000000140434B31: test    byte ptr gs:86Ch, 2
 * 0000000140434B3A: jz      short loc_140434B43
 * 0000000140434B3C: xor     ecx, ecx
 * 0000000140434B3E: call    KiUpdateStibpPairing
 * 0000000140434B43: mov     rcx, gs:188h
 * 0000000140434B4C: test    dword ptr [rcx], 8000000h
 * 0000000140434B52: jz      short loc_140434B59
 * 0000000140434B54: call    KiRestoreSetContextState
 * 0000000140434B59: mov     rcx, gs:188h
 * 0000000140434B62: test    dword ptr [rcx], 10000h
 * 0000000140434B68: jz      short loc_140434B7E
 * 0000000140434B6A: test    byte ptr [rcx+2], 1
 * 0000000140434B6E: jz      short loc_140434B7E
 * 0000000140434B70: call    KiCopyCounters
 * 0000000140434B75: mov     rcx, gs:188h
 * 0000000140434B7E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434B82: cmp     word ptr [rbp+80h], 0
 * 0000000140434B8A: jz      short loc_140434B91
 * 0000000140434B8C: call    KiRestoreDebugRegisterState
 * 0000000140434B91: mov     rcx, gs:188h
 * 0000000140434B9A: bt      dword ptr [rcx+74h], 16h
 * 0000000140434B9F: jnb     short loc_140434BCB
 * 0000000140434BA1: xor     ecx, ecx
 * 0000000140434BA3: rdsspq  rcx
 * 0000000140434BA8: mov     r8, gs:95A8h
 * 0000000140434BB1: add     r8, 8
 * 0000000140434BB5: cmp     rcx, r8
 * 0000000140434BB8: jnz     short loc_140434BCB
 * 0000000140434BBA: mov     rcx, gs:95A0h
 * 0000000140434BC3: rstorssp qword ptr [rcx]
 * 0000000140434BC7: saveprevssp
 * 0000000140434BCB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434BCF: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434BD3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434BD7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434BDB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434BDF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434BE3: mov     r11, [rbp-20h]
 * 0000000140434BE7: mov     r10, [rbp-28h]
 * 0000000140434BEB: mov     r9, [rbp-30h]
 * 0000000140434BEF: mov     r8, [rbp-38h]
 * 0000000140434BF3: mov     byte ptr gs:856h, 0
 * 0000000140434BFC: movzx   eax, word ptr gs:86Ah
 * 0000000140434C05: cmp     gs:864h, ax
 * 0000000140434C0E: jz      short loc_140434C22
 * 0000000140434C10: mov     gs:864h, ax
 * 0000000140434C19: mov     ecx, 48h ; 'H'
 * 0000000140434C1E: xor     edx, edx
 * 0000000140434C20: wrmsr
 * 0000000140434C22: btr     word ptr gs:860h, 2
 * 0000000140434C2D: jnb     short loc_140434C3D
 * 0000000140434C2F: mov     eax, 1
 * 0000000140434C34: xor     edx, edx
 * 0000000140434C36: mov     ecx, 49h ; 'I'
 * 0000000140434C3B: wrmsr
 * 0000000140434C3D: btr     word ptr gs:860h, 5
 * 0000000140434C48: jnb     loc_140434D85
 * 0000000140434C4E: call    loc_140434D61
 * 0000000140434C53: add     rsp, 8
 * 0000000140434C57: call    loc_140434D6A
 * 0000000140434C5C: add     rsp, 8
 * 0000000140434C60: call    loc_140434C53
 * 0000000140434C65: add     rsp, 8
 * 0000000140434C69: call    loc_140434C5C
 * 0000000140434C6E: add     rsp, 8
 * 0000000140434C72: call    loc_140434C65
 * 0000000140434C77: add     rsp, 8
 * 0000000140434C7B: call    loc_140434C6E
 * 0000000140434C80: add     rsp, 8
 * 0000000140434C84: call    loc_140434C77
 * 0000000140434C89: add     rsp, 8
 * 0000000140434C8D: call    loc_140434C80
 * 0000000140434C92: add     rsp, 8
 * 0000000140434C96: call    loc_140434C89
 * 0000000140434C9B: add     rsp, 8
 * 0000000140434C9F: call    loc_140434C92
 * 0000000140434CA4: add     rsp, 8
 * 0000000140434CA8: call    loc_140434C9B
 * 0000000140434CAD: add     rsp, 8
 * 0000000140434CB1: call    loc_140434CA4
 * 0000000140434CB6: add     rsp, 8
 * 0000000140434CBA: call    loc_140434CAD
 * 0000000140434CBF: add     rsp, 8
 * 0000000140434CC3: call    loc_140434CB6
 * 0000000140434CC8: add     rsp, 8
 * 0000000140434CCC: call    loc_140434CBF
 * 0000000140434CD1: add     rsp, 8
 * 0000000140434CD5: call    loc_140434CC8
 * 0000000140434CDA: add     rsp, 8
 * 0000000140434CDE: call    loc_140434CD1
 * 0000000140434CE3: add     rsp, 8
 * 0000000140434CE7: call    loc_140434CDA
 * 0000000140434CEC: add     rsp, 8
 * 0000000140434CF0: call    loc_140434CE3
 * 0000000140434CF5: add     rsp, 8
 * 0000000140434CF9: call    loc_140434CEC
 * 0000000140434CFE: add     rsp, 8
 * 0000000140434D02: call    loc_140434CF5
 * 0000000140434D07: add     rsp, 8
 * 0000000140434D0B: call    loc_140434CFE
 * 0000000140434D10: add     rsp, 8
 * 0000000140434D14: call    loc_140434D07
 * 0000000140434D19: add     rsp, 8
 * 0000000140434D1D: call    loc_140434D10
 * 0000000140434D22: add     rsp, 8
 * 0000000140434D26: call    loc_140434D19
 * 0000000140434D2B: add     rsp, 8
 * 0000000140434D2F: call    loc_140434D22
 * 0000000140434D34: add     rsp, 8
 * 0000000140434D38: call    loc_140434D2B
 * 0000000140434D3D: add     rsp, 8
 * 0000000140434D41: call    loc_140434D34
 * 0000000140434D46: add     rsp, 8
 * 0000000140434D4A: call    loc_140434D3D
 * 0000000140434D4F: add     rsp, 8
 * 0000000140434D53: call    loc_140434D46
 * 0000000140434D58: add     rsp, 8
 * 0000000140434D5C: call    loc_140434D4F
 * 0000000140434D61: add     rsp, 8
 * 0000000140434D65: call    loc_140434D58
 * 0000000140434D6A: add     rsp, 8
 * 0000000140434D6E: mov     eax, 0DADAh
 * 0000000140434D73: test    byte ptr gs:862h, 8
 * 0000000140434D7C: jz      short loc_140434D85
 * 0000000140434D7E: mov     al, 20h ; ' '
 * 0000000140434D80: incsspq rax
 * 0000000140434D85: test    word ptr gs:860h, 80h
 * 0000000140434D90: jz      short loc_140434D9E
 * 0000000140434D92: xor     eax, eax
 * 0000000140434D94: xor     edx, edx
 * 0000000140434D96: mov     ecx, 1
 * 0000000140434D9B: div     rcx
 * 0000000140434D9E: mov     rdx, [rbp-40h]
 * 0000000140434DA2: mov     rcx, [rbp-48h]
 * 0000000140434DA6: mov     rax, [rbp-50h]
 * 0000000140434DAA: mov     rsp, rbp
 * 0000000140434DAD: mov     rbp, [rbp+0D8h]
 * 0000000140434DB4: add     rsp, 0E8h
 * 0000000140434DBB: test    cs:KiKvaShadow, 1
 * 0000000140434DC2: jz      short loc_140434DC9
 * 0000000140434DC4: jmp     KiKernelExit
 * 0000000140434DC9: test    word ptr gs:860h, 100h
 * 0000000140434DD4: jz      short loc_140434DDB
 * 0000000140434DD6: verw    [rsp-1E8h+arg_200]
 * 0000000140434DDB: swapgs
 * 0000000140434DDE: iretq
 * 0000000140434DE0: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434DE4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434DE8: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434DEC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434DF0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434DF4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434DF8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434DFC: mov     r11, [rbp-20h]
 * 0000000140434E00: mov     r10, [rbp-28h]
 * 0000000140434E04: mov     r9, [rbp-30h]
 * 0000000140434E08: mov     r8, [rbp-38h]
 * 0000000140434E0C: mov     rdx, [rbp-40h]
 * 0000000140434E10: mov     rcx, [rbp-48h]
 * 0000000140434E14: mov     rax, [rbp-50h]
 * 0000000140434E18: mov     rsp, rbp
 * 0000000140434E1B: mov     rbp, [rbp+0D8h]
 * 0000000140434E22: add     rsp, 0E8h
 * 0000000140434E29: iretq
 */
