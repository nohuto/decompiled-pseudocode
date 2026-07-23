/*
 * XREFs of KiExceptionDispatch @ 0x140434D40
 * Callers:
 *     KiDivideErrorFault @ 0x14042C000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042C540 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042CF00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042D280 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E3C0 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F200 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F600 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042F980 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430500 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430900 (KiAlignmentFault.c)
 *     KiXmmException @ 0x140431A40 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x140433000 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140433380 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1404339C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF7E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x14041FFB0 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x140434D40
 * Reason: Hex-Rays returned no pseudocode for 0x140434D40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434D40: sub     rsp, 1D8h
 * 0000000140434D47: lea     rax, [rsp+1D8h+var_D8]
 * 0000000140434D4F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434D54: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434D59: movaps  [rsp+1D8h+var_188], xmm8
 * 0000000140434D5F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434D65: movaps  [rsp+1D8h+var_168], xmm10
 * 0000000140434D6B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434D70: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434D75: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140434D7A: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140434D7F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434D84: mov     [rax], rbx
 * 0000000140434D87: mov     [rax+8], rdi
 * 0000000140434D8B: mov     [rax+10h], rsi
 * 0000000140434D8F: mov     [rax+18h], r12
 * 0000000140434D93: mov     [rax+20h], r13
 * 0000000140434D97: mov     [rax+28h], r14
 * 0000000140434D9B: mov     [rax+30h], r15
 * 0000000140434D9F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 0000000140434DA7: mov     [rax], ecx
 * 0000000140434DA9: xor     ecx, ecx
 * 0000000140434DAB: mov     [rax+4], ecx
 * 0000000140434DAE: mov     [rax+8], rcx
 * 0000000140434DB2: mov     [rax+10h], r8
 * 0000000140434DB6: mov     [rax+18h], edx
 * 0000000140434DB9: mov     [rax+20h], r9
 * 0000000140434DBD: mov     [rax+28h], r10
 * 0000000140434DC1: mov     [rax+30h], r11
 * 0000000140434DC5: mov     r9b, [rbp+0F0h]
 * 0000000140434DCC: and     r9b, 1
 * 0000000140434DD0: mov     [rsp+1D8h+var_1B8], 1; char
 * 0000000140434DD5: lea     r8, [rbp-80h]
 * 0000000140434DD9: mov     rdx, rsp
 * 0000000140434DDC: mov     rcx, rax; ExceptionRecord
 * 0000000140434DDF: jnz     loc_140434E77
 * 0000000140434DE5: mov     r10, cr8
 * 0000000140434DE9: mov     r11, 2
 * 0000000140434DF0: test    dword ptr [rbp+0F8h], 200h
 * 0000000140434DFA: cmovz   r10, r11
 * 0000000140434DFE: cmp     r10, r11
 * 0000000140434E01: jb      short loc_140434E77
 * 0000000140434E03: cmp     byte ptr gs:83E6h, 0
 * 0000000140434E0C: jnz     short loc_140434E77
 * 0000000140434E0E: mov     r10, gs:83E8h
 * 0000000140434E17: add     r10, 50h ; 'P'
 * 0000000140434E1B: cmp     rsp, r10
 * 0000000140434E1E: ja      short loc_140434E2C
 * 0000000140434E20: sub     r10, 6000h
 * 0000000140434E27: cmp     rsp, r10
 * 0000000140434E2A: jnb     short loc_140434E77
 * 0000000140434E2C: mov     r10, gs:8B58h
 * 0000000140434E35: cmp     rsp, r10
 * 0000000140434E38: ja      short loc_140434E46
 * 0000000140434E3A: sub     r10, 6000h
 * 0000000140434E41: cmp     rsp, r10
 * 0000000140434E44: jnb     short loc_140434E77
 * 0000000140434E46: mov     r10, gs:8
 * 0000000140434E4F: mov     r10, [r10+24h]
 * 0000000140434E53: cmp     rsp, r10
 * 0000000140434E56: ja      short loc_140434E64
 * 0000000140434E58: sub     r10, 6000h
 * 0000000140434E5F: cmp     rsp, r10
 * 0000000140434E62: jnb     short loc_140434E77
 * 0000000140434E64: cmp     word ptr gs:8026h, 0
 * 0000000140434E6E: jnz     short loc_140434E77
 * 0000000140434E70: call    KiExceptionDispatchOnExceptionStack
 * 0000000140434E75: jmp     short loc_140434E7C
 * 0000000140434E77: call    KiDispatchException
 * 0000000140434E7C: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140434E84: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434E89: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140434E8E: movaps  xmm8, [rsp+1D8h+var_188]
 * 0000000140434E94: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140434E9A: movaps  xmm10, [rsp+1D8h+var_168]
 * 0000000140434EA0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140434EA5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140434EAA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140434EAF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140434EB4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140434EB9: mov     rbx, [rcx]
 * 0000000140434EBC: mov     rdi, [rcx+8]
 * 0000000140434EC0: mov     rsi, [rcx+10h]
 * 0000000140434EC4: mov     r12, [rcx+18h]
 * 0000000140434EC8: mov     r13, [rcx+20h]
 * 0000000140434ECC: mov     r14, [rcx+28h]
 * 0000000140434ED0: mov     r15, [rcx+30h]
 * 0000000140434ED4: cli
 * 0000000140434ED5: xor     ecx, ecx
 * 0000000140434ED7: rdsspq  rcx
 * 0000000140434EDC: test    rcx, rcx
 * 0000000140434EDF: jz      short loc_140434EEB
 * 0000000140434EE1: mov     ecx, 1
 * 0000000140434EE6: incsspq rcx
 * 0000000140434EEB: test    byte ptr [rbp+0F0h], 1
 * 0000000140434EF2: jz      loc_1404351E0
 * 0000000140434EF8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140434EFF: jz      short loc_140434F04
 * 0000000140434F01: stac
 * 0000000140434F04: mov     rcx, gs:188h
 * 0000000140434F0D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434F14: jz      short loc_140434F31
 * 0000000140434F16: mov     ecx, 1
 * 0000000140434F1B: mov     cr8, rcx
 * 0000000140434F1F: sti
 * 0000000140434F20: call    KiInitiateUserApc
 * 0000000140434F25: cli
 * 0000000140434F26: mov     ecx, 0
 * 0000000140434F2B: mov     cr8, rcx
 * 0000000140434F2F: jmp     short loc_140434F04
 * 0000000140434F31: test    byte ptr gs:86Ch, 2
 * 0000000140434F3A: jz      short loc_140434F43
 * 0000000140434F3C: xor     ecx, ecx
 * 0000000140434F3E: call    KiUpdateStibpPairing
 * 0000000140434F43: mov     rcx, gs:188h
 * 0000000140434F4C: test    dword ptr [rcx], 8000000h
 * 0000000140434F52: jz      short loc_140434F59
 * 0000000140434F54: call    KiRestoreSetContextState
 * 0000000140434F59: mov     rcx, gs:188h
 * 0000000140434F62: test    dword ptr [rcx], 10000h
 * 0000000140434F68: jz      short loc_140434F7E
 * 0000000140434F6A: test    byte ptr [rcx+2], 1
 * 0000000140434F6E: jz      short loc_140434F7E
 * 0000000140434F70: call    KiCopyCounters
 * 0000000140434F75: mov     rcx, gs:188h
 * 0000000140434F7E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434F82: cmp     word ptr [rbp+80h], 0
 * 0000000140434F8A: jz      short loc_140434F91
 * 0000000140434F8C: call    KiRestoreDebugRegisterState
 * 0000000140434F91: mov     rcx, gs:188h
 * 0000000140434F9A: bt      dword ptr [rcx+74h], 16h
 * 0000000140434F9F: jnb     short loc_140434FCB
 * 0000000140434FA1: xor     ecx, ecx
 * 0000000140434FA3: rdsspq  rcx
 * 0000000140434FA8: mov     r8, gs:95A8h
 * 0000000140434FB1: add     r8, 8
 * 0000000140434FB5: cmp     rcx, r8
 * 0000000140434FB8: jnz     short loc_140434FCB
 * 0000000140434FBA: mov     rcx, gs:95A0h
 * 0000000140434FC3: rstorssp qword ptr [rcx]
 * 0000000140434FC7: saveprevssp
 * 0000000140434FCB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434FCF: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434FD3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434FD7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434FDB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434FDF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434FE3: mov     r11, [rbp-20h]
 * 0000000140434FE7: mov     r10, [rbp-28h]
 * 0000000140434FEB: mov     r9, [rbp-30h]
 * 0000000140434FEF: mov     r8, [rbp-38h]
 * 0000000140434FF3: mov     byte ptr gs:856h, 0
 * 0000000140434FFC: movzx   eax, word ptr gs:86Ah
 * 0000000140435005: cmp     gs:864h, ax
 * 000000014043500E: jz      short loc_140435022
 * 0000000140435010: mov     gs:864h, ax
 * 0000000140435019: mov     ecx, 48h ; 'H'
 * 000000014043501E: xor     edx, edx
 * 0000000140435020: wrmsr
 * 0000000140435022: btr     word ptr gs:860h, 2
 * 000000014043502D: jnb     short loc_14043503D
 * 000000014043502F: mov     eax, 1
 * 0000000140435034: xor     edx, edx
 * 0000000140435036: mov     ecx, 49h ; 'I'
 * 000000014043503B: wrmsr
 * 000000014043503D: btr     word ptr gs:860h, 5
 * 0000000140435048: jnb     loc_140435185
 * 000000014043504E: call    loc_140435161
 * 0000000140435053: add     rsp, 8
 * 0000000140435057: call    loc_14043516A
 * 000000014043505C: add     rsp, 8
 * 0000000140435060: call    loc_140435053
 * 0000000140435065: add     rsp, 8
 * 0000000140435069: call    loc_14043505C
 * 000000014043506E: add     rsp, 8
 * 0000000140435072: call    loc_140435065
 * 0000000140435077: add     rsp, 8
 * 000000014043507B: call    loc_14043506E
 * 0000000140435080: add     rsp, 8
 * 0000000140435084: call    loc_140435077
 * 0000000140435089: add     rsp, 8
 * 000000014043508D: call    loc_140435080
 * 0000000140435092: add     rsp, 8
 * 0000000140435096: call    loc_140435089
 * 000000014043509B: add     rsp, 8
 * 000000014043509F: call    loc_140435092
 * 00000001404350A4: add     rsp, 8
 * 00000001404350A8: call    loc_14043509B
 * 00000001404350AD: add     rsp, 8
 * 00000001404350B1: call    loc_1404350A4
 * 00000001404350B6: add     rsp, 8
 * 00000001404350BA: call    loc_1404350AD
 * 00000001404350BF: add     rsp, 8
 * 00000001404350C3: call    loc_1404350B6
 * 00000001404350C8: add     rsp, 8
 * 00000001404350CC: call    loc_1404350BF
 * 00000001404350D1: add     rsp, 8
 * 00000001404350D5: call    loc_1404350C8
 * 00000001404350DA: add     rsp, 8
 * 00000001404350DE: call    loc_1404350D1
 * 00000001404350E3: add     rsp, 8
 * 00000001404350E7: call    loc_1404350DA
 * 00000001404350EC: add     rsp, 8
 * 00000001404350F0: call    loc_1404350E3
 * 00000001404350F5: add     rsp, 8
 * 00000001404350F9: call    loc_1404350EC
 * 00000001404350FE: add     rsp, 8
 * 0000000140435102: call    loc_1404350F5
 * 0000000140435107: add     rsp, 8
 * 000000014043510B: call    loc_1404350FE
 * 0000000140435110: add     rsp, 8
 * 0000000140435114: call    loc_140435107
 * 0000000140435119: add     rsp, 8
 * 000000014043511D: call    loc_140435110
 * 0000000140435122: add     rsp, 8
 * 0000000140435126: call    loc_140435119
 * 000000014043512B: add     rsp, 8
 * 000000014043512F: call    loc_140435122
 * 0000000140435134: add     rsp, 8
 * 0000000140435138: call    loc_14043512B
 * 000000014043513D: add     rsp, 8
 * 0000000140435141: call    loc_140435134
 * 0000000140435146: add     rsp, 8
 * 000000014043514A: call    loc_14043513D
 * 000000014043514F: add     rsp, 8
 * 0000000140435153: call    loc_140435146
 * 0000000140435158: add     rsp, 8
 * 000000014043515C: call    loc_14043514F
 * 0000000140435161: add     rsp, 8
 * 0000000140435165: call    loc_140435158
 * 000000014043516A: add     rsp, 8
 * 000000014043516E: mov     eax, 0DADAh
 * 0000000140435173: test    byte ptr gs:862h, 8
 * 000000014043517C: jz      short loc_140435185
 * 000000014043517E: mov     al, 20h ; ' '
 * 0000000140435180: incsspq rax
 * 0000000140435185: test    word ptr gs:860h, 80h
 * 0000000140435190: jz      short loc_14043519E
 * 0000000140435192: xor     eax, eax
 * 0000000140435194: xor     edx, edx
 * 0000000140435196: mov     ecx, 1
 * 000000014043519B: div     rcx
 * 000000014043519E: mov     rdx, [rbp-40h]
 * 00000001404351A2: mov     rcx, [rbp-48h]
 * 00000001404351A6: mov     rax, [rbp-50h]
 * 00000001404351AA: mov     rsp, rbp
 * 00000001404351AD: mov     rbp, [rbp+0D8h]
 * 00000001404351B4: add     rsp, 0E8h
 * 00000001404351BB: test    cs:KiKvaShadow, 1
 * 00000001404351C2: jz      short loc_1404351C9
 * 00000001404351C4: jmp     KiKernelExit
 * 00000001404351C9: test    word ptr gs:860h, 100h
 * 00000001404351D4: jz      short loc_1404351DB
 * 00000001404351D6: verw    [rsp-1E8h+arg_200]
 * 00000001404351DB: swapgs
 * 00000001404351DE: iretq
 * 00000001404351E0: ldmxcsr dword ptr [rbp-54h]
 * 00000001404351E4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404351E8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404351EC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404351F0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404351F4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404351F8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404351FC: mov     r11, [rbp-20h]
 * 0000000140435200: mov     r10, [rbp-28h]
 * 0000000140435204: mov     r9, [rbp-30h]
 * 0000000140435208: mov     r8, [rbp-38h]
 * 000000014043520C: mov     rdx, [rbp-40h]
 * 0000000140435210: mov     rcx, [rbp-48h]
 * 0000000140435214: mov     rax, [rbp-50h]
 * 0000000140435218: mov     rsp, rbp
 * 000000014043521B: mov     rbp, [rbp+0D8h]
 * 0000000140435222: add     rsp, 0E8h
 * 0000000140435229: iretq
 */
