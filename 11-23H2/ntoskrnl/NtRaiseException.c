/*
 * XREFs of NtRaiseException @ 0x14041F610
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x140578910 (KiRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x14041F610
 * Reason: Hex-Rays returned no pseudocode for 0x14041F610
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F610: mov     rbx, [rbp+0C0h]
 * 000000014041F617: mov     rdi, [rbp+0C8h]
 * 000000014041F61E: mov     rsi, [rbp+0D0h]
 * 000000014041F625: xor     eax, eax
 * 000000014041F627: mov     [rbp-50h], rax
 * 000000014041F62B: sub     rsp, 138h
 * 000000014041F632: lea     rax, [rsp+138h+var_38]
 * 000000014041F63A: movaps  [rsp+138h+var_108], xmm6
 * 000000014041F63F: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041F644: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041F64A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041F650: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041F656: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041F65B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041F660: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041F665: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041F66A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041F66F: mov     [rax], rbx
 * 000000014041F672: mov     [rax+8], rdi
 * 000000014041F676: mov     [rax+10h], rsi
 * 000000014041F67A: mov     [rax+18h], r12
 * 000000014041F67E: mov     [rax+20h], r13
 * 000000014041F682: mov     [rax+28h], r14
 * 000000014041F686: mov     [rax+30h], r15
 * 000000014041F68A: mov     rax, [rbp+0E8h]
 * 000000014041F691: mov     [rbp+50h], rax
 * 000000014041F695: mov     [rsp+138h+var_118], r8b
 * 000000014041F69A: mov     r8, rsp
 * 000000014041F69D: lea     r9, [rbp-80h]
 * 000000014041F6A1: call    KiRaiseException
 * 000000014041F6A6: test    eax, eax
 * 000000014041F6A8: jnz     loc_14041FA86
 * 000000014041F6AE: test    byte ptr [rbp+0F0h], 1
 * 000000014041F6B5: jnz     short loc_14041F6D7
 * 000000014041F6B7: mov     rbx, gs:188h
 * 000000014041F6C0: mov     rdx, [rbp+0B8h]
 * 000000014041F6C7: mov     [rbx+90h], rdx
 * 000000014041F6CE: mov     dl, [rbp-58h]
 * 000000014041F6D1: mov     [rbx+232h], dl
 * 000000014041F6D7: lea     rcx, [rsp+138h+var_38]
 * 000000014041F6DF: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F6E4: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F6E9: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F6EF: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F6F5: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F6FB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F700: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F705: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F70A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F70F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F714: mov     rbx, [rcx]
 * 000000014041F717: mov     rdi, [rcx+8]
 * 000000014041F71B: mov     rsi, [rcx+10h]
 * 000000014041F71F: mov     r12, [rcx+18h]
 * 000000014041F723: mov     r13, [rcx+20h]
 * 000000014041F727: mov     r14, [rcx+28h]
 * 000000014041F72B: mov     r15, [rcx+30h]
 * 000000014041F72F: cli
 * 000000014041F730: xor     ecx, ecx
 * 000000014041F732: rdsspq  rcx
 * 000000014041F737: test    rcx, rcx
 * 000000014041F73A: jz      short loc_14041F746
 * 000000014041F73C: mov     ecx, 1
 * 000000014041F741: incsspq rcx
 * 000000014041F746: test    byte ptr [rbp+0F0h], 1
 * 000000014041F74D: jz      loc_14041FA3B
 * 000000014041F753: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041F75A: jz      short loc_14041F75F
 * 000000014041F75C: stac
 * 000000014041F75F: mov     rcx, gs:188h
 * 000000014041F768: test    byte ptr [rcx+0C2h], 3
 * 000000014041F76F: jz      short loc_14041F78C
 * 000000014041F771: mov     ecx, 1
 * 000000014041F776: mov     cr8, rcx
 * 000000014041F77A: sti
 * 000000014041F77B: call    KiInitiateUserApc
 * 000000014041F780: cli
 * 000000014041F781: mov     ecx, 0
 * 000000014041F786: mov     cr8, rcx
 * 000000014041F78A: jmp     short loc_14041F75F
 * 000000014041F78C: test    byte ptr gs:86Ch, 2
 * 000000014041F795: jz      short loc_14041F79E
 * 000000014041F797: xor     ecx, ecx
 * 000000014041F799: call    KiUpdateStibpPairing
 * 000000014041F79E: mov     rcx, gs:188h
 * 000000014041F7A7: test    dword ptr [rcx], 8000000h
 * 000000014041F7AD: jz      short loc_14041F7B4
 * 000000014041F7AF: call    KiRestoreSetContextState
 * 000000014041F7B4: mov     rcx, gs:188h
 * 000000014041F7BD: test    dword ptr [rcx], 10000h
 * 000000014041F7C3: jz      short loc_14041F7D9
 * 000000014041F7C5: test    byte ptr [rcx+2], 1
 * 000000014041F7C9: jz      short loc_14041F7D9
 * 000000014041F7CB: call    KiCopyCounters
 * 000000014041F7D0: mov     rcx, gs:188h
 * 000000014041F7D9: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F7DD: cmp     word ptr [rbp+80h], 0
 * 000000014041F7E5: jz      short loc_14041F7EC
 * 000000014041F7E7: call    KiRestoreDebugRegisterState
 * 000000014041F7EC: mov     rcx, gs:188h
 * 000000014041F7F5: bt      dword ptr [rcx+74h], 16h
 * 000000014041F7FA: jnb     short loc_14041F826
 * 000000014041F7FC: xor     ecx, ecx
 * 000000014041F7FE: rdsspq  rcx
 * 000000014041F803: mov     r8, gs:95A8h
 * 000000014041F80C: add     r8, 8
 * 000000014041F810: cmp     rcx, r8
 * 000000014041F813: jnz     short loc_14041F826
 * 000000014041F815: mov     rcx, gs:95A0h
 * 000000014041F81E: rstorssp qword ptr [rcx]
 * 000000014041F822: saveprevssp
 * 000000014041F826: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F82A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F82E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F832: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F836: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F83A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F83E: mov     r11, [rbp-20h]
 * 000000014041F842: mov     r10, [rbp-28h]
 * 000000014041F846: mov     r9, [rbp-30h]
 * 000000014041F84A: mov     r8, [rbp-38h]
 * 000000014041F84E: mov     byte ptr gs:856h, 0
 * 000000014041F857: movzx   eax, word ptr gs:86Ah
 * 000000014041F860: cmp     gs:864h, ax
 * 000000014041F869: jz      short loc_14041F87D
 * 000000014041F86B: mov     gs:864h, ax
 * 000000014041F874: mov     ecx, 48h ; 'H'
 * 000000014041F879: xor     edx, edx
 * 000000014041F87B: wrmsr
 * 000000014041F87D: btr     word ptr gs:860h, 2
 * 000000014041F888: jnb     short loc_14041F898
 * 000000014041F88A: mov     eax, 1
 * 000000014041F88F: xor     edx, edx
 * 000000014041F891: mov     ecx, 49h ; 'I'
 * 000000014041F896: wrmsr
 * 000000014041F898: btr     word ptr gs:860h, 5
 * 000000014041F8A3: jnb     loc_14041F9E0
 * 000000014041F8A9: call    loc_14041F9BC
 * 000000014041F8AE: add     rsp, 8
 * 000000014041F8B2: call    loc_14041F9C5
 * 000000014041F8B7: add     rsp, 8
 * 000000014041F8BB: call    loc_14041F8AE
 * 000000014041F8C0: add     rsp, 8
 * 000000014041F8C4: call    loc_14041F8B7
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
 * 000000014041F9C9: mov     eax, 0DADAh
 * 000000014041F9CE: test    byte ptr gs:862h, 8
 * 000000014041F9D7: jz      short loc_14041F9E0
 * 000000014041F9D9: mov     al, 20h ; ' '
 * 000000014041F9DB: incsspq rax
 * 000000014041F9E0: test    word ptr gs:860h, 80h
 * 000000014041F9EB: jz      short loc_14041F9F9
 * 000000014041F9ED: xor     eax, eax
 * 000000014041F9EF: xor     edx, edx
 * 000000014041F9F1: mov     ecx, 1
 * 000000014041F9F6: div     rcx
 * 000000014041F9F9: mov     rdx, [rbp-40h]
 * 000000014041F9FD: mov     rcx, [rbp-48h]
 * 000000014041FA01: mov     rax, [rbp-50h]
 * 000000014041FA05: mov     rsp, rbp
 * 000000014041FA08: mov     rbp, [rbp+0D8h]
 * 000000014041FA0F: add     rsp, 0E8h
 * 000000014041FA16: test    cs:KiKvaShadow, 1
 * 000000014041FA1D: jz      short loc_14041FA24
 * 000000014041FA1F: jmp     KiKernelExit
 * 000000014041FA24: test    word ptr gs:860h, 100h
 * 000000014041FA2F: jz      short loc_14041FA36
 * 000000014041FA31: verw    [rsp-1E8h+arg_200]
 * 000000014041FA36: swapgs
 * 000000014041FA39: iretq
 * 000000014041FA3B: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FA3F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FA43: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FA47: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FA4B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FA4F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FA53: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FA57: mov     r11, [rbp-20h]
 * 000000014041FA5B: mov     r10, [rbp-28h]
 * 000000014041FA5F: mov     r9, [rbp-30h]
 * 000000014041FA63: mov     r8, [rbp-38h]
 * 000000014041FA67: mov     rdx, [rbp-40h]
 * 000000014041FA6B: mov     rcx, [rbp-48h]
 * 000000014041FA6F: mov     rax, [rbp-50h]
 * 000000014041FA73: mov     rsp, rbp
 * 000000014041FA76: mov     rbp, [rbp+0D8h]
 * 000000014041FA7D: add     rsp, 0E8h
 * 000000014041FA84: iretq
 * 000000014041FA86: lea     rcx, [rsp+138h+var_38]
 * 000000014041FA8E: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041FA93: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041FA98: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041FA9E: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041FAA4: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041FAAA: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041FAAF: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041FAB4: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041FAB9: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041FABE: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041FAC3: mov     rbx, [rcx]
 * 000000014041FAC6: mov     rdi, [rcx+8]
 * 000000014041FACA: mov     rsi, [rcx+10h]
 * 000000014041FACE: mov     r12, [rcx+18h]
 * 000000014041FAD2: mov     r13, [rcx+20h]
 * 000000014041FAD6: mov     r14, [rcx+28h]
 * 000000014041FADA: mov     r15, [rcx+30h]
 * 000000014041FADE: add     rsp, 138h
 * 000000014041FAE5: retn
 */
