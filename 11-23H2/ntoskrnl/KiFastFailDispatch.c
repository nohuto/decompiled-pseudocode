/*
 * XREFs of KiFastFailDispatch @ 0x140434E40
 * Callers:
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432880 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x140434E40
 * Reason: Hex-Rays returned no pseudocode for 0x140434E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434E40: sub     rsp, 1D8h
 * 0000000140434E47: lea     rax, [rsp+1D8h+var_D8]
 * 0000000140434E4F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434E54: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434E59: movaps  [rsp+1D8h+var_188], xmm8
 * 0000000140434E5F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434E65: movaps  [rsp+1D8h+var_168], xmm10
 * 0000000140434E6B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434E70: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434E75: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140434E7A: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140434E7F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434E84: mov     [rax], rbx
 * 0000000140434E87: mov     [rax+8], rdi
 * 0000000140434E8B: mov     [rax+10h], rsi
 * 0000000140434E8F: mov     [rax+18h], r12
 * 0000000140434E93: mov     [rax+20h], r13
 * 0000000140434E97: mov     [rax+28h], r14
 * 0000000140434E9B: mov     [rax+30h], r15
 * 0000000140434E9F: lea     rax, [rsp+1D8h+var_A0]
 * 0000000140434EA7: mov     [rax], ecx
 * 0000000140434EA9: xor     ecx, ecx
 * 0000000140434EAB: mov     dword ptr [rax+4], 1
 * 0000000140434EB2: mov     [rax+8], rcx
 * 0000000140434EB6: mov     [rax+10h], r8
 * 0000000140434EBA: mov     [rax+18h], edx
 * 0000000140434EBD: mov     [rax+20h], r9
 * 0000000140434EC1: mov     [rax+28h], r10
 * 0000000140434EC5: mov     [rax+30h], r11
 * 0000000140434EC9: mov     r9b, [rbp+0F0h]
 * 0000000140434ED0: and     r9b, 1
 * 0000000140434ED4: cmp     r9b, 0
 * 0000000140434ED8: jnz     short loc_140434EF2
 * 0000000140434EDA: mov     rdx, [rax+20h]
 * 0000000140434EDE: xor     r10, r10
 * 0000000140434EE1: mov     r9, rax
 * 0000000140434EE4: lea     r8, [rbp-80h]
 * 0000000140434EE8: mov     ecx, 139h
 * 0000000140434EED: call    KiBugCheckDispatch
 * 0000000140434EF2: mov     [rsp+1D8h+var_1B8], 0; char
 * 0000000140434EF7: lea     r8, [rbp-80h]
 * 0000000140434EFB: mov     rdx, rsp
 * 0000000140434EFE: mov     rcx, rax; ULONG_PTR
 * 0000000140434F01: call    KiDispatchException
 * 0000000140434F06: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140434F0E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434F13: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140434F18: movaps  xmm8, [rsp+1D8h+var_188]
 * 0000000140434F1E: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140434F24: movaps  xmm10, [rsp+1D8h+var_168]
 * 0000000140434F2A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140434F2F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140434F34: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140434F39: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140434F3E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140434F43: mov     rbx, [rcx]
 * 0000000140434F46: mov     rdi, [rcx+8]
 * 0000000140434F4A: mov     rsi, [rcx+10h]
 * 0000000140434F4E: mov     r12, [rcx+18h]
 * 0000000140434F52: mov     r13, [rcx+20h]
 * 0000000140434F56: mov     r14, [rcx+28h]
 * 0000000140434F5A: mov     r15, [rcx+30h]
 * 0000000140434F5E: cli
 * 0000000140434F5F: xor     ecx, ecx
 * 0000000140434F61: rdsspq  rcx
 * 0000000140434F66: test    rcx, rcx
 * 0000000140434F69: jz      short loc_140434F75
 * 0000000140434F6B: mov     ecx, 1
 * 0000000140434F70: incsspq rcx
 * 0000000140434F75: test    byte ptr [rbp+0F0h], 1
 * 0000000140434F7C: jz      loc_14043526A
 * 0000000140434F82: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140434F89: jz      short loc_140434F8E
 * 0000000140434F8B: stac
 * 0000000140434F8E: mov     rcx, gs:188h
 * 0000000140434F97: test    byte ptr [rcx+0C2h], 3
 * 0000000140434F9E: jz      short loc_140434FBB
 * 0000000140434FA0: mov     ecx, 1
 * 0000000140434FA5: mov     cr8, rcx
 * 0000000140434FA9: sti
 * 0000000140434FAA: call    KiInitiateUserApc
 * 0000000140434FAF: cli
 * 0000000140434FB0: mov     ecx, 0
 * 0000000140434FB5: mov     cr8, rcx
 * 0000000140434FB9: jmp     short loc_140434F8E
 * 0000000140434FBB: test    byte ptr gs:86Ch, 2
 * 0000000140434FC4: jz      short loc_140434FCD
 * 0000000140434FC6: xor     ecx, ecx
 * 0000000140434FC8: call    KiUpdateStibpPairing
 * 0000000140434FCD: mov     rcx, gs:188h
 * 0000000140434FD6: test    dword ptr [rcx], 8000000h
 * 0000000140434FDC: jz      short loc_140434FE3
 * 0000000140434FDE: call    KiRestoreSetContextState
 * 0000000140434FE3: mov     rcx, gs:188h
 * 0000000140434FEC: test    dword ptr [rcx], 10000h
 * 0000000140434FF2: jz      short loc_140435008
 * 0000000140434FF4: test    byte ptr [rcx+2], 1
 * 0000000140434FF8: jz      short loc_140435008
 * 0000000140434FFA: call    KiCopyCounters
 * 0000000140434FFF: mov     rcx, gs:188h
 * 0000000140435008: ldmxcsr dword ptr [rbp-54h]
 * 000000014043500C: cmp     word ptr [rbp+80h], 0
 * 0000000140435014: jz      short loc_14043501B
 * 0000000140435016: call    KiRestoreDebugRegisterState
 * 000000014043501B: mov     rcx, gs:188h
 * 0000000140435024: bt      dword ptr [rcx+74h], 16h
 * 0000000140435029: jnb     short loc_140435055
 * 000000014043502B: xor     ecx, ecx
 * 000000014043502D: rdsspq  rcx
 * 0000000140435032: mov     r8, gs:95A8h
 * 000000014043503B: add     r8, 8
 * 000000014043503F: cmp     rcx, r8
 * 0000000140435042: jnz     short loc_140435055
 * 0000000140435044: mov     rcx, gs:95A0h
 * 000000014043504D: rstorssp qword ptr [rcx]
 * 0000000140435051: saveprevssp
 * 0000000140435055: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435059: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014043505D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140435061: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140435065: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435069: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014043506D: mov     r11, [rbp-20h]
 * 0000000140435071: mov     r10, [rbp-28h]
 * 0000000140435075: mov     r9, [rbp-30h]
 * 0000000140435079: mov     r8, [rbp-38h]
 * 000000014043507D: mov     byte ptr gs:856h, 0
 * 0000000140435086: movzx   eax, word ptr gs:86Ah
 * 000000014043508F: cmp     gs:864h, ax
 * 0000000140435098: jz      short loc_1404350AC
 * 000000014043509A: mov     gs:864h, ax
 * 00000001404350A3: mov     ecx, 48h ; 'H'
 * 00000001404350A8: xor     edx, edx
 * 00000001404350AA: wrmsr
 * 00000001404350AC: btr     word ptr gs:860h, 2
 * 00000001404350B7: jnb     short loc_1404350C7
 * 00000001404350B9: mov     eax, 1
 * 00000001404350BE: xor     edx, edx
 * 00000001404350C0: mov     ecx, 49h ; 'I'
 * 00000001404350C5: wrmsr
 * 00000001404350C7: btr     word ptr gs:860h, 5
 * 00000001404350D2: jnb     loc_14043520F
 * 00000001404350D8: call    loc_1404351EB
 * 00000001404350DD: add     rsp, 8
 * 00000001404350E1: call    loc_1404351F4
 * 00000001404350E6: add     rsp, 8
 * 00000001404350EA: call    loc_1404350DD
 * 00000001404350EF: add     rsp, 8
 * 00000001404350F3: call    loc_1404350E6
 * 00000001404350F8: add     rsp, 8
 * 00000001404350FC: call    loc_1404350EF
 * 0000000140435101: add     rsp, 8
 * 0000000140435105: call    loc_1404350F8
 * 000000014043510A: add     rsp, 8
 * 000000014043510E: call    loc_140435101
 * 0000000140435113: add     rsp, 8
 * 0000000140435117: call    loc_14043510A
 * 000000014043511C: add     rsp, 8
 * 0000000140435120: call    loc_140435113
 * 0000000140435125: add     rsp, 8
 * 0000000140435129: call    loc_14043511C
 * 000000014043512E: add     rsp, 8
 * 0000000140435132: call    loc_140435125
 * 0000000140435137: add     rsp, 8
 * 000000014043513B: call    loc_14043512E
 * 0000000140435140: add     rsp, 8
 * 0000000140435144: call    loc_140435137
 * 0000000140435149: add     rsp, 8
 * 000000014043514D: call    loc_140435140
 * 0000000140435152: add     rsp, 8
 * 0000000140435156: call    loc_140435149
 * 000000014043515B: add     rsp, 8
 * 000000014043515F: call    loc_140435152
 * 0000000140435164: add     rsp, 8
 * 0000000140435168: call    loc_14043515B
 * 000000014043516D: add     rsp, 8
 * 0000000140435171: call    loc_140435164
 * 0000000140435176: add     rsp, 8
 * 000000014043517A: call    loc_14043516D
 * 000000014043517F: add     rsp, 8
 * 0000000140435183: call    loc_140435176
 * 0000000140435188: add     rsp, 8
 * 000000014043518C: call    loc_14043517F
 * 0000000140435191: add     rsp, 8
 * 0000000140435195: call    loc_140435188
 * 000000014043519A: add     rsp, 8
 * 000000014043519E: call    loc_140435191
 * 00000001404351A3: add     rsp, 8
 * 00000001404351A7: call    loc_14043519A
 * 00000001404351AC: add     rsp, 8
 * 00000001404351B0: call    loc_1404351A3
 * 00000001404351B5: add     rsp, 8
 * 00000001404351B9: call    loc_1404351AC
 * 00000001404351BE: add     rsp, 8
 * 00000001404351C2: call    loc_1404351B5
 * 00000001404351C7: add     rsp, 8
 * 00000001404351CB: call    loc_1404351BE
 * 00000001404351D0: add     rsp, 8
 * 00000001404351D4: call    loc_1404351C7
 * 00000001404351D9: add     rsp, 8
 * 00000001404351DD: call    loc_1404351D0
 * 00000001404351E2: add     rsp, 8
 * 00000001404351E6: call    loc_1404351D9
 * 00000001404351EB: add     rsp, 8
 * 00000001404351EF: call    loc_1404351E2
 * 00000001404351F4: add     rsp, 8
 * 00000001404351F8: mov     eax, 0DADAh
 * 00000001404351FD: test    byte ptr gs:862h, 8
 * 0000000140435206: jz      short loc_14043520F
 * 0000000140435208: mov     al, 20h ; ' '
 * 000000014043520A: incsspq rax
 * 000000014043520F: test    word ptr gs:860h, 80h
 * 000000014043521A: jz      short loc_140435228
 * 000000014043521C: xor     eax, eax
 * 000000014043521E: xor     edx, edx
 * 0000000140435220: mov     ecx, 1
 * 0000000140435225: div     rcx
 * 0000000140435228: mov     rdx, [rbp-40h]
 * 000000014043522C: mov     rcx, [rbp-48h]
 * 0000000140435230: mov     rax, [rbp-50h]
 * 0000000140435234: mov     rsp, rbp
 * 0000000140435237: mov     rbp, [rbp+0D8h]
 * 000000014043523E: add     rsp, 0E8h
 * 0000000140435245: test    cs:KiKvaShadow, 1
 * 000000014043524C: jz      short loc_140435253
 * 000000014043524E: jmp     KiKernelExit
 * 0000000140435253: test    word ptr gs:860h, 100h
 * 000000014043525E: jz      short loc_140435265
 * 0000000140435260: verw    [rsp-1E8h+arg_200]
 * 0000000140435265: swapgs
 * 0000000140435268: iretq
 * 000000014043526A: ldmxcsr dword ptr [rbp-54h]
 * 000000014043526E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435272: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140435276: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014043527A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014043527E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435282: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140435286: mov     r11, [rbp-20h]
 * 000000014043528A: mov     r10, [rbp-28h]
 * 000000014043528E: mov     r9, [rbp-30h]
 * 0000000140435292: mov     r8, [rbp-38h]
 * 0000000140435296: mov     rdx, [rbp-40h]
 * 000000014043529A: mov     rcx, [rbp-48h]
 * 000000014043529E: mov     rax, [rbp-50h]
 * 00000001404352A2: mov     rsp, rbp
 * 00000001404352A5: mov     rbp, [rbp+0D8h]
 * 00000001404352AC: add     rsp, 0E8h
 * 00000001404352B3: iretq
 */
