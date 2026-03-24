/*
 * XREFs of NtContinueEx @ 0x14041EAD0
 * Callers:
 *     NtContinue @ 0x14041EAC0 (NtContinue.c)
 *     RtlContinue @ 0x1405B2088 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x1405B20A0 (RtlContinueLongJump.c)
 * Callees:
 *     KiContinueEx @ 0x14030CD30 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x14041EAD0
 * Reason: Hex-Rays returned no pseudocode for 0x14041EAD0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041EAD0: mov     rbx, [rbp+0C0h]
 * 000000014041EAD7: mov     rdi, [rbp+0C8h]
 * 000000014041EADE: mov     rsi, [rbp+0D0h]
 * 000000014041EAE5: xor     eax, eax
 * 000000014041EAE7: mov     [rbp-50h], rax
 * 000000014041EAEB: sub     rsp, 138h
 * 000000014041EAF2: lea     rax, [rsp+138h+var_38]
 * 000000014041EAFA: movaps  [rsp+138h+var_108], xmm6
 * 000000014041EAFF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041EB04: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041EB0A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041EB10: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041EB16: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041EB1B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041EB20: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041EB25: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041EB2A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041EB2F: mov     [rax], rbx
 * 000000014041EB32: mov     [rax+8], rdi
 * 000000014041EB36: mov     [rax+10h], rsi
 * 000000014041EB3A: mov     [rax+18h], r12
 * 000000014041EB3E: mov     [rax+20h], r13
 * 000000014041EB42: mov     [rax+28h], r14
 * 000000014041EB46: mov     [rax+30h], r15
 * 000000014041EB4A: mov     r8, rsp
 * 000000014041EB4D: lea     r9, [rbp-80h]
 * 000000014041EB51: call    KiContinueEx
 * 000000014041EB56: test    eax, eax
 * 000000014041EB58: jle     loc_14041EF36
 * 000000014041EB5E: mov     rcx, gs:188h
 * 000000014041EB67: test    byte ptr [rbp+0F0h], 1
 * 000000014041EB6E: jnz     short loc_14041EB87
 * 000000014041EB70: mov     rdx, [rbp+0B8h]
 * 000000014041EB77: mov     [rcx+90h], rdx
 * 000000014041EB7E: mov     dl, [rbp-58h]
 * 000000014041EB81: mov     [rcx+232h], dl
 * 000000014041EB87: lea     rcx, [rsp+138h+var_38]
 * 000000014041EB8F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041EB94: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041EB99: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041EB9F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041EBA5: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041EBAB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041EBB0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041EBB5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041EBBA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041EBBF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041EBC4: mov     rbx, [rcx]
 * 000000014041EBC7: mov     rdi, [rcx+8]
 * 000000014041EBCB: mov     rsi, [rcx+10h]
 * 000000014041EBCF: mov     r12, [rcx+18h]
 * 000000014041EBD3: mov     r13, [rcx+20h]
 * 000000014041EBD7: mov     r14, [rcx+28h]
 * 000000014041EBDB: mov     r15, [rcx+30h]
 * 000000014041EBDF: cli
 * 000000014041EBE0: xor     ecx, ecx
 * 000000014041EBE2: rdsspq  rcx
 * 000000014041EBE7: test    rcx, rcx
 * 000000014041EBEA: jz      short loc_14041EBF6
 * 000000014041EBEC: mov     ecx, 1
 * 000000014041EBF1: incsspq rcx
 * 000000014041EBF6: test    byte ptr [rbp+0F0h], 1
 * 000000014041EBFD: jz      loc_14041EEEB
 * 000000014041EC03: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041EC0A: jz      short loc_14041EC0F
 * 000000014041EC0C: stac
 * 000000014041EC0F: mov     rcx, gs:188h
 * 000000014041EC18: test    byte ptr [rcx+0C2h], 3
 * 000000014041EC1F: jz      short loc_14041EC3C
 * 000000014041EC21: mov     ecx, 1
 * 000000014041EC26: mov     cr8, rcx
 * 000000014041EC2A: sti
 * 000000014041EC2B: call    KiInitiateUserApc
 * 000000014041EC30: cli
 * 000000014041EC31: mov     ecx, 0
 * 000000014041EC36: mov     cr8, rcx
 * 000000014041EC3A: jmp     short loc_14041EC0F
 * 000000014041EC3C: test    byte ptr gs:86Ch, 2
 * 000000014041EC45: jz      short loc_14041EC4E
 * 000000014041EC47: xor     ecx, ecx
 * 000000014041EC49: call    KiUpdateStibpPairing
 * 000000014041EC4E: mov     rcx, gs:188h
 * 000000014041EC57: test    dword ptr [rcx], 8000000h
 * 000000014041EC5D: jz      short loc_14041EC64
 * 000000014041EC5F: call    KiRestoreSetContextState
 * 000000014041EC64: mov     rcx, gs:188h
 * 000000014041EC6D: test    dword ptr [rcx], 10000h
 * 000000014041EC73: jz      short loc_14041EC89
 * 000000014041EC75: test    byte ptr [rcx+2], 1
 * 000000014041EC79: jz      short loc_14041EC89
 * 000000014041EC7B: call    KiCopyCounters
 * 000000014041EC80: mov     rcx, gs:188h
 * 000000014041EC89: ldmxcsr dword ptr [rbp-54h]
 * 000000014041EC8D: cmp     word ptr [rbp+80h], 0
 * 000000014041EC95: jz      short loc_14041EC9C
 * 000000014041EC97: call    KiRestoreDebugRegisterState
 * 000000014041EC9C: mov     rcx, gs:188h
 * 000000014041ECA5: bt      dword ptr [rcx+74h], 16h
 * 000000014041ECAA: jnb     short loc_14041ECD6
 * 000000014041ECAC: xor     ecx, ecx
 * 000000014041ECAE: rdsspq  rcx
 * 000000014041ECB3: mov     r8, gs:95A8h
 * 000000014041ECBC: add     r8, 8
 * 000000014041ECC0: cmp     rcx, r8
 * 000000014041ECC3: jnz     short loc_14041ECD6
 * 000000014041ECC5: mov     rcx, gs:95A0h
 * 000000014041ECCE: rstorssp qword ptr [rcx]
 * 000000014041ECD2: saveprevssp
 * 000000014041ECD6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041ECDA: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041ECDE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041ECE2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041ECE6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041ECEA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041ECEE: mov     r11, [rbp-20h]
 * 000000014041ECF2: mov     r10, [rbp-28h]
 * 000000014041ECF6: mov     r9, [rbp-30h]
 * 000000014041ECFA: mov     r8, [rbp-38h]
 * 000000014041ECFE: mov     byte ptr gs:856h, 0
 * 000000014041ED07: movzx   eax, word ptr gs:86Ah
 * 000000014041ED10: cmp     gs:864h, ax
 * 000000014041ED19: jz      short loc_14041ED2D
 * 000000014041ED1B: mov     gs:864h, ax
 * 000000014041ED24: mov     ecx, 48h ; 'H'
 * 000000014041ED29: xor     edx, edx
 * 000000014041ED2B: wrmsr
 * 000000014041ED2D: btr     word ptr gs:860h, 2
 * 000000014041ED38: jnb     short loc_14041ED48
 * 000000014041ED3A: mov     eax, 1
 * 000000014041ED3F: xor     edx, edx
 * 000000014041ED41: mov     ecx, 49h ; 'I'
 * 000000014041ED46: wrmsr
 * 000000014041ED48: btr     word ptr gs:860h, 5
 * 000000014041ED53: jnb     loc_14041EE90
 * 000000014041ED59: call    loc_14041EE6C
 * 000000014041ED5E: add     rsp, 8
 * 000000014041ED62: call    loc_14041EE75
 * 000000014041ED67: add     rsp, 8
 * 000000014041ED6B: call    loc_14041ED5E
 * 000000014041ED70: add     rsp, 8
 * 000000014041ED74: call    loc_14041ED67
 * 000000014041ED79: add     rsp, 8
 * 000000014041ED7D: call    loc_14041ED70
 * 000000014041ED82: add     rsp, 8
 * 000000014041ED86: call    loc_14041ED79
 * 000000014041ED8B: add     rsp, 8
 * 000000014041ED8F: call    loc_14041ED82
 * 000000014041ED94: add     rsp, 8
 * 000000014041ED98: call    loc_14041ED8B
 * 000000014041ED9D: add     rsp, 8
 * 000000014041EDA1: call    loc_14041ED94
 * 000000014041EDA6: add     rsp, 8
 * 000000014041EDAA: call    loc_14041ED9D
 * 000000014041EDAF: add     rsp, 8
 * 000000014041EDB3: call    loc_14041EDA6
 * 000000014041EDB8: add     rsp, 8
 * 000000014041EDBC: call    loc_14041EDAF
 * 000000014041EDC1: add     rsp, 8
 * 000000014041EDC5: call    loc_14041EDB8
 * 000000014041EDCA: add     rsp, 8
 * 000000014041EDCE: call    loc_14041EDC1
 * 000000014041EDD3: add     rsp, 8
 * 000000014041EDD7: call    loc_14041EDCA
 * 000000014041EDDC: add     rsp, 8
 * 000000014041EDE0: call    loc_14041EDD3
 * 000000014041EDE5: add     rsp, 8
 * 000000014041EDE9: call    loc_14041EDDC
 * 000000014041EDEE: add     rsp, 8
 * 000000014041EDF2: call    loc_14041EDE5
 * 000000014041EDF7: add     rsp, 8
 * 000000014041EDFB: call    loc_14041EDEE
 * 000000014041EE00: add     rsp, 8
 * 000000014041EE04: call    loc_14041EDF7
 * 000000014041EE09: add     rsp, 8
 * 000000014041EE0D: call    loc_14041EE00
 * 000000014041EE12: add     rsp, 8
 * 000000014041EE16: call    loc_14041EE09
 * 000000014041EE1B: add     rsp, 8
 * 000000014041EE1F: call    loc_14041EE12
 * 000000014041EE24: add     rsp, 8
 * 000000014041EE28: call    loc_14041EE1B
 * 000000014041EE2D: add     rsp, 8
 * 000000014041EE31: call    loc_14041EE24
 * 000000014041EE36: add     rsp, 8
 * 000000014041EE3A: call    loc_14041EE2D
 * 000000014041EE3F: add     rsp, 8
 * 000000014041EE43: call    loc_14041EE36
 * 000000014041EE48: add     rsp, 8
 * 000000014041EE4C: call    loc_14041EE3F
 * 000000014041EE51: add     rsp, 8
 * 000000014041EE55: call    loc_14041EE48
 * 000000014041EE5A: add     rsp, 8
 * 000000014041EE5E: call    loc_14041EE51
 * 000000014041EE63: add     rsp, 8
 * 000000014041EE67: call    loc_14041EE5A
 * 000000014041EE6C: add     rsp, 8
 * 000000014041EE70: call    loc_14041EE63
 * 000000014041EE75: add     rsp, 8
 * 000000014041EE79: mov     eax, 0DADAh
 * 000000014041EE7E: test    byte ptr gs:862h, 8
 * 000000014041EE87: jz      short loc_14041EE90
 * 000000014041EE89: mov     al, 20h ; ' '
 * 000000014041EE8B: incsspq rax
 * 000000014041EE90: test    word ptr gs:860h, 80h
 * 000000014041EE9B: jz      short loc_14041EEA9
 * 000000014041EE9D: xor     eax, eax
 * 000000014041EE9F: xor     edx, edx
 * 000000014041EEA1: mov     ecx, 1
 * 000000014041EEA6: div     rcx
 * 000000014041EEA9: mov     rdx, [rbp-40h]
 * 000000014041EEAD: mov     rcx, [rbp-48h]
 * 000000014041EEB1: mov     rax, [rbp-50h]
 * 000000014041EEB5: mov     rsp, rbp
 * 000000014041EEB8: mov     rbp, [rbp+0D8h]
 * 000000014041EEBF: add     rsp, 0E8h
 * 000000014041EEC6: test    cs:KiKvaShadow, 1
 * 000000014041EECD: jz      short loc_14041EED4
 * 000000014041EECF: jmp     KiKernelExit
 * 000000014041EED4: test    word ptr gs:860h, 100h
 * 000000014041EEDF: jz      short loc_14041EEE6
 * 000000014041EEE1: verw    [rsp-1E8h+arg_200]
 * 000000014041EEE6: swapgs
 * 000000014041EEE9: iretq
 * 000000014041EEEB: ldmxcsr dword ptr [rbp-54h]
 * 000000014041EEEF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041EEF3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041EEF7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041EEFB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041EEFF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041EF03: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041EF07: mov     r11, [rbp-20h]
 * 000000014041EF0B: mov     r10, [rbp-28h]
 * 000000014041EF0F: mov     r9, [rbp-30h]
 * 000000014041EF13: mov     r8, [rbp-38h]
 * 000000014041EF17: mov     rdx, [rbp-40h]
 * 000000014041EF1B: mov     rcx, [rbp-48h]
 * 000000014041EF1F: mov     rax, [rbp-50h]
 * 000000014041EF23: mov     rsp, rbp
 * 000000014041EF26: mov     rbp, [rbp+0D8h]
 * 000000014041EF2D: add     rsp, 0E8h
 * 000000014041EF34: iretq
 * 000000014041EF36: add     rsp, 138h
 * 000000014041EF3D: retn
 */
