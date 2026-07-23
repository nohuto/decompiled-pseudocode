/*
 * XREFs of NtRaiseException @ 0x14041F9A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x14041F9A0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x140578E00 (KiRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x14041F9A0
 * Reason: Hex-Rays returned no pseudocode for 0x14041F9A0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F9A0: mov     rbx, [rbp+0C0h]
 * 000000014041F9A7: mov     rdi, [rbp+0C8h]
 * 000000014041F9AE: mov     rsi, [rbp+0D0h]
 * 000000014041F9B5: xor     eax, eax
 * 000000014041F9B7: mov     [rbp-50h], rax
 * 000000014041F9BB: sub     rsp, 138h
 * 000000014041F9C2: lea     rax, [rsp+138h+var_38]
 * 000000014041F9CA: movaps  [rsp+138h+var_108], xmm6
 * 000000014041F9CF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041F9D4: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041F9DA: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041F9E0: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041F9E6: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041F9EB: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041F9F0: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041F9F5: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041F9FA: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041F9FF: mov     [rax], rbx
 * 000000014041FA02: mov     [rax+8], rdi
 * 000000014041FA06: mov     [rax+10h], rsi
 * 000000014041FA0A: mov     [rax+18h], r12
 * 000000014041FA0E: mov     [rax+20h], r13
 * 000000014041FA12: mov     [rax+28h], r14
 * 000000014041FA16: mov     [rax+30h], r15
 * 000000014041FA1A: mov     rax, [rbp+0E8h]
 * 000000014041FA21: mov     [rbp+50h], rax
 * 000000014041FA25: mov     [rsp+138h+var_118], r8b
 * 000000014041FA2A: mov     r8, rsp
 * 000000014041FA2D: lea     r9, [rbp-80h]
 * 000000014041FA31: call    KiRaiseException
 * 000000014041FA36: test    eax, eax
 * 000000014041FA38: jnz     loc_14041FE16
 * 000000014041FA3E: test    byte ptr [rbp+0F0h], 1
 * 000000014041FA45: jnz     short loc_14041FA67
 * 000000014041FA47: mov     rbx, gs:188h
 * 000000014041FA50: mov     rdx, [rbp+0B8h]
 * 000000014041FA57: mov     [rbx+90h], rdx
 * 000000014041FA5E: mov     dl, [rbp-58h]
 * 000000014041FA61: mov     [rbx+232h], dl
 * 000000014041FA67: lea     rcx, [rsp+138h+var_38]
 * 000000014041FA6F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041FA74: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041FA79: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041FA7F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041FA85: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041FA8B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041FA90: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041FA95: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041FA9A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041FA9F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041FAA4: mov     rbx, [rcx]
 * 000000014041FAA7: mov     rdi, [rcx+8]
 * 000000014041FAAB: mov     rsi, [rcx+10h]
 * 000000014041FAAF: mov     r12, [rcx+18h]
 * 000000014041FAB3: mov     r13, [rcx+20h]
 * 000000014041FAB7: mov     r14, [rcx+28h]
 * 000000014041FABB: mov     r15, [rcx+30h]
 * 000000014041FABF: cli
 * 000000014041FAC0: xor     ecx, ecx
 * 000000014041FAC2: rdsspq  rcx
 * 000000014041FAC7: test    rcx, rcx
 * 000000014041FACA: jz      short loc_14041FAD6
 * 000000014041FACC: mov     ecx, 1
 * 000000014041FAD1: incsspq rcx
 * 000000014041FAD6: test    byte ptr [rbp+0F0h], 1
 * 000000014041FADD: jz      loc_14041FDCB
 * 000000014041FAE3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041FAEA: jz      short loc_14041FAEF
 * 000000014041FAEC: stac
 * 000000014041FAEF: mov     rcx, gs:188h
 * 000000014041FAF8: test    byte ptr [rcx+0C2h], 3
 * 000000014041FAFF: jz      short loc_14041FB1C
 * 000000014041FB01: mov     ecx, 1
 * 000000014041FB06: mov     cr8, rcx
 * 000000014041FB0A: sti
 * 000000014041FB0B: call    KiInitiateUserApc
 * 000000014041FB10: cli
 * 000000014041FB11: mov     ecx, 0
 * 000000014041FB16: mov     cr8, rcx
 * 000000014041FB1A: jmp     short loc_14041FAEF
 * 000000014041FB1C: test    byte ptr gs:86Ch, 2
 * 000000014041FB25: jz      short loc_14041FB2E
 * 000000014041FB27: xor     ecx, ecx
 * 000000014041FB29: call    KiUpdateStibpPairing
 * 000000014041FB2E: mov     rcx, gs:188h
 * 000000014041FB37: test    dword ptr [rcx], 8000000h
 * 000000014041FB3D: jz      short loc_14041FB44
 * 000000014041FB3F: call    KiRestoreSetContextState
 * 000000014041FB44: mov     rcx, gs:188h
 * 000000014041FB4D: test    dword ptr [rcx], 10000h
 * 000000014041FB53: jz      short loc_14041FB69
 * 000000014041FB55: test    byte ptr [rcx+2], 1
 * 000000014041FB59: jz      short loc_14041FB69
 * 000000014041FB5B: call    KiCopyCounters
 * 000000014041FB60: mov     rcx, gs:188h
 * 000000014041FB69: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FB6D: cmp     word ptr [rbp+80h], 0
 * 000000014041FB75: jz      short loc_14041FB7C
 * 000000014041FB77: call    KiRestoreDebugRegisterState
 * 000000014041FB7C: mov     rcx, gs:188h
 * 000000014041FB85: bt      dword ptr [rcx+74h], 16h
 * 000000014041FB8A: jnb     short loc_14041FBB6
 * 000000014041FB8C: xor     ecx, ecx
 * 000000014041FB8E: rdsspq  rcx
 * 000000014041FB93: mov     r8, gs:95A8h
 * 000000014041FB9C: add     r8, 8
 * 000000014041FBA0: cmp     rcx, r8
 * 000000014041FBA3: jnz     short loc_14041FBB6
 * 000000014041FBA5: mov     rcx, gs:95A0h
 * 000000014041FBAE: rstorssp qword ptr [rcx]
 * 000000014041FBB2: saveprevssp
 * 000000014041FBB6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FBBA: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FBBE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FBC2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FBC6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FBCA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FBCE: mov     r11, [rbp-20h]
 * 000000014041FBD2: mov     r10, [rbp-28h]
 * 000000014041FBD6: mov     r9, [rbp-30h]
 * 000000014041FBDA: mov     r8, [rbp-38h]
 * 000000014041FBDE: mov     byte ptr gs:856h, 0
 * 000000014041FBE7: movzx   eax, word ptr gs:86Ah
 * 000000014041FBF0: cmp     gs:864h, ax
 * 000000014041FBF9: jz      short loc_14041FC0D
 * 000000014041FBFB: mov     gs:864h, ax
 * 000000014041FC04: mov     ecx, 48h ; 'H'
 * 000000014041FC09: xor     edx, edx
 * 000000014041FC0B: wrmsr
 * 000000014041FC0D: btr     word ptr gs:860h, 2
 * 000000014041FC18: jnb     short loc_14041FC28
 * 000000014041FC1A: mov     eax, 1
 * 000000014041FC1F: xor     edx, edx
 * 000000014041FC21: mov     ecx, 49h ; 'I'
 * 000000014041FC26: wrmsr
 * 000000014041FC28: btr     word ptr gs:860h, 5
 * 000000014041FC33: jnb     loc_14041FD70
 * 000000014041FC39: call    loc_14041FD4C
 * 000000014041FC3E: add     rsp, 8
 * 000000014041FC42: call    loc_14041FD55
 * 000000014041FC47: add     rsp, 8
 * 000000014041FC4B: call    loc_14041FC3E
 * 000000014041FC50: add     rsp, 8
 * 000000014041FC54: call    loc_14041FC47
 * 000000014041FC59: add     rsp, 8
 * 000000014041FC5D: call    loc_14041FC50
 * 000000014041FC62: add     rsp, 8
 * 000000014041FC66: call    loc_14041FC59
 * 000000014041FC6B: add     rsp, 8
 * 000000014041FC6F: call    loc_14041FC62
 * 000000014041FC74: add     rsp, 8
 * 000000014041FC78: call    loc_14041FC6B
 * 000000014041FC7D: add     rsp, 8
 * 000000014041FC81: call    loc_14041FC74
 * 000000014041FC86: add     rsp, 8
 * 000000014041FC8A: call    loc_14041FC7D
 * 000000014041FC8F: add     rsp, 8
 * 000000014041FC93: call    loc_14041FC86
 * 000000014041FC98: add     rsp, 8
 * 000000014041FC9C: call    loc_14041FC8F
 * 000000014041FCA1: add     rsp, 8
 * 000000014041FCA5: call    loc_14041FC98
 * 000000014041FCAA: add     rsp, 8
 * 000000014041FCAE: call    loc_14041FCA1
 * 000000014041FCB3: add     rsp, 8
 * 000000014041FCB7: call    loc_14041FCAA
 * 000000014041FCBC: add     rsp, 8
 * 000000014041FCC0: call    loc_14041FCB3
 * 000000014041FCC5: add     rsp, 8
 * 000000014041FCC9: call    loc_14041FCBC
 * 000000014041FCCE: add     rsp, 8
 * 000000014041FCD2: call    loc_14041FCC5
 * 000000014041FCD7: add     rsp, 8
 * 000000014041FCDB: call    loc_14041FCCE
 * 000000014041FCE0: add     rsp, 8
 * 000000014041FCE4: call    loc_14041FCD7
 * 000000014041FCE9: add     rsp, 8
 * 000000014041FCED: call    loc_14041FCE0
 * 000000014041FCF2: add     rsp, 8
 * 000000014041FCF6: call    loc_14041FCE9
 * 000000014041FCFB: add     rsp, 8
 * 000000014041FCFF: call    loc_14041FCF2
 * 000000014041FD04: add     rsp, 8
 * 000000014041FD08: call    loc_14041FCFB
 * 000000014041FD0D: add     rsp, 8
 * 000000014041FD11: call    loc_14041FD04
 * 000000014041FD16: add     rsp, 8
 * 000000014041FD1A: call    loc_14041FD0D
 * 000000014041FD1F: add     rsp, 8
 * 000000014041FD23: call    loc_14041FD16
 * 000000014041FD28: add     rsp, 8
 * 000000014041FD2C: call    loc_14041FD1F
 * 000000014041FD31: add     rsp, 8
 * 000000014041FD35: call    loc_14041FD28
 * 000000014041FD3A: add     rsp, 8
 * 000000014041FD3E: call    loc_14041FD31
 * 000000014041FD43: add     rsp, 8
 * 000000014041FD47: call    loc_14041FD3A
 * 000000014041FD4C: add     rsp, 8
 * 000000014041FD50: call    loc_14041FD43
 * 000000014041FD55: add     rsp, 8
 * 000000014041FD59: mov     eax, 0DADAh
 * 000000014041FD5E: test    byte ptr gs:862h, 8
 * 000000014041FD67: jz      short loc_14041FD70
 * 000000014041FD69: mov     al, 20h ; ' '
 * 000000014041FD6B: incsspq rax
 * 000000014041FD70: test    word ptr gs:860h, 80h
 * 000000014041FD7B: jz      short loc_14041FD89
 * 000000014041FD7D: xor     eax, eax
 * 000000014041FD7F: xor     edx, edx
 * 000000014041FD81: mov     ecx, 1
 * 000000014041FD86: div     rcx
 * 000000014041FD89: mov     rdx, [rbp-40h]
 * 000000014041FD8D: mov     rcx, [rbp-48h]
 * 000000014041FD91: mov     rax, [rbp-50h]
 * 000000014041FD95: mov     rsp, rbp
 * 000000014041FD98: mov     rbp, [rbp+0D8h]
 * 000000014041FD9F: add     rsp, 0E8h
 * 000000014041FDA6: test    cs:KiKvaShadow, 1
 * 000000014041FDAD: jz      short loc_14041FDB4
 * 000000014041FDAF: jmp     KiKernelExit
 * 000000014041FDB4: test    word ptr gs:860h, 100h
 * 000000014041FDBF: jz      short loc_14041FDC6
 * 000000014041FDC1: verw    [rsp-1E8h+arg_200]
 * 000000014041FDC6: swapgs
 * 000000014041FDC9: iretq
 * 000000014041FDCB: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FDCF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FDD3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FDD7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FDDB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FDDF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FDE3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FDE7: mov     r11, [rbp-20h]
 * 000000014041FDEB: mov     r10, [rbp-28h]
 * 000000014041FDEF: mov     r9, [rbp-30h]
 * 000000014041FDF3: mov     r8, [rbp-38h]
 * 000000014041FDF7: mov     rdx, [rbp-40h]
 * 000000014041FDFB: mov     rcx, [rbp-48h]
 * 000000014041FDFF: mov     rax, [rbp-50h]
 * 000000014041FE03: mov     rsp, rbp
 * 000000014041FE06: mov     rbp, [rbp+0D8h]
 * 000000014041FE0D: add     rsp, 0E8h
 * 000000014041FE14: iretq
 * 000000014041FE16: lea     rcx, [rsp+138h+var_38]
 * 000000014041FE1E: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041FE23: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041FE28: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041FE2E: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041FE34: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041FE3A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041FE3F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041FE44: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041FE49: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041FE4E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041FE53: mov     rbx, [rcx]
 * 000000014041FE56: mov     rdi, [rcx+8]
 * 000000014041FE5A: mov     rsi, [rcx+10h]
 * 000000014041FE5E: mov     r12, [rcx+18h]
 * 000000014041FE62: mov     r13, [rcx+20h]
 * 000000014041FE66: mov     r14, [rcx+28h]
 * 000000014041FE6A: mov     r15, [rcx+30h]
 * 000000014041FE6E: add     rsp, 138h
 * 000000014041FE75: retn
 */
