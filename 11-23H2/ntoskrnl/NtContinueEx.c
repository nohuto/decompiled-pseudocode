/*
 * XREFs of NtContinueEx @ 0x14041F190
 * Callers:
 *     NtContinue @ 0x14041F180 (NtContinue.c)
 *     RtlContinue @ 0x1405B1FF8 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x1405B2010 (RtlContinueLongJump.c)
 * Callees:
 *     KiContinueEx @ 0x14030CF10 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x14041F190
 * Reason: Hex-Rays returned no pseudocode for 0x14041F190
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F190: mov     rbx, [rbp+0C0h]
 * 000000014041F197: mov     rdi, [rbp+0C8h]
 * 000000014041F19E: mov     rsi, [rbp+0D0h]
 * 000000014041F1A5: xor     eax, eax
 * 000000014041F1A7: mov     [rbp-50h], rax
 * 000000014041F1AB: sub     rsp, 138h
 * 000000014041F1B2: lea     rax, [rsp+138h+var_38]
 * 000000014041F1BA: movaps  [rsp+138h+var_108], xmm6
 * 000000014041F1BF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041F1C4: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041F1CA: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041F1D0: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041F1D6: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041F1DB: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041F1E0: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041F1E5: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041F1EA: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041F1EF: mov     [rax], rbx
 * 000000014041F1F2: mov     [rax+8], rdi
 * 000000014041F1F6: mov     [rax+10h], rsi
 * 000000014041F1FA: mov     [rax+18h], r12
 * 000000014041F1FE: mov     [rax+20h], r13
 * 000000014041F202: mov     [rax+28h], r14
 * 000000014041F206: mov     [rax+30h], r15
 * 000000014041F20A: mov     r8, rsp
 * 000000014041F20D: lea     r9, [rbp-80h]
 * 000000014041F211: call    KiContinueEx
 * 000000014041F216: test    eax, eax
 * 000000014041F218: jle     loc_14041F5F6
 * 000000014041F21E: mov     rcx, gs:188h
 * 000000014041F227: test    byte ptr [rbp+0F0h], 1
 * 000000014041F22E: jnz     short loc_14041F247
 * 000000014041F230: mov     rdx, [rbp+0B8h]
 * 000000014041F237: mov     [rcx+90h], rdx
 * 000000014041F23E: mov     dl, [rbp-58h]
 * 000000014041F241: mov     [rcx+232h], dl
 * 000000014041F247: lea     rcx, [rsp+138h+var_38]
 * 000000014041F24F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F254: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F259: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F25F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F265: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F26B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F270: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F275: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F27A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F27F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F284: mov     rbx, [rcx]
 * 000000014041F287: mov     rdi, [rcx+8]
 * 000000014041F28B: mov     rsi, [rcx+10h]
 * 000000014041F28F: mov     r12, [rcx+18h]
 * 000000014041F293: mov     r13, [rcx+20h]
 * 000000014041F297: mov     r14, [rcx+28h]
 * 000000014041F29B: mov     r15, [rcx+30h]
 * 000000014041F29F: cli
 * 000000014041F2A0: xor     ecx, ecx
 * 000000014041F2A2: rdsspq  rcx
 * 000000014041F2A7: test    rcx, rcx
 * 000000014041F2AA: jz      short loc_14041F2B6
 * 000000014041F2AC: mov     ecx, 1
 * 000000014041F2B1: incsspq rcx
 * 000000014041F2B6: test    byte ptr [rbp+0F0h], 1
 * 000000014041F2BD: jz      loc_14041F5AB
 * 000000014041F2C3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041F2CA: jz      short loc_14041F2CF
 * 000000014041F2CC: stac
 * 000000014041F2CF: mov     rcx, gs:188h
 * 000000014041F2D8: test    byte ptr [rcx+0C2h], 3
 * 000000014041F2DF: jz      short loc_14041F2FC
 * 000000014041F2E1: mov     ecx, 1
 * 000000014041F2E6: mov     cr8, rcx
 * 000000014041F2EA: sti
 * 000000014041F2EB: call    KiInitiateUserApc
 * 000000014041F2F0: cli
 * 000000014041F2F1: mov     ecx, 0
 * 000000014041F2F6: mov     cr8, rcx
 * 000000014041F2FA: jmp     short loc_14041F2CF
 * 000000014041F2FC: test    byte ptr gs:86Ch, 2
 * 000000014041F305: jz      short loc_14041F30E
 * 000000014041F307: xor     ecx, ecx
 * 000000014041F309: call    KiUpdateStibpPairing
 * 000000014041F30E: mov     rcx, gs:188h
 * 000000014041F317: test    dword ptr [rcx], 8000000h
 * 000000014041F31D: jz      short loc_14041F324
 * 000000014041F31F: call    KiRestoreSetContextState
 * 000000014041F324: mov     rcx, gs:188h
 * 000000014041F32D: test    dword ptr [rcx], 10000h
 * 000000014041F333: jz      short loc_14041F349
 * 000000014041F335: test    byte ptr [rcx+2], 1
 * 000000014041F339: jz      short loc_14041F349
 * 000000014041F33B: call    KiCopyCounters
 * 000000014041F340: mov     rcx, gs:188h
 * 000000014041F349: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F34D: cmp     word ptr [rbp+80h], 0
 * 000000014041F355: jz      short loc_14041F35C
 * 000000014041F357: call    KiRestoreDebugRegisterState
 * 000000014041F35C: mov     rcx, gs:188h
 * 000000014041F365: bt      dword ptr [rcx+74h], 16h
 * 000000014041F36A: jnb     short loc_14041F396
 * 000000014041F36C: xor     ecx, ecx
 * 000000014041F36E: rdsspq  rcx
 * 000000014041F373: mov     r8, gs:95A8h
 * 000000014041F37C: add     r8, 8
 * 000000014041F380: cmp     rcx, r8
 * 000000014041F383: jnz     short loc_14041F396
 * 000000014041F385: mov     rcx, gs:95A0h
 * 000000014041F38E: rstorssp qword ptr [rcx]
 * 000000014041F392: saveprevssp
 * 000000014041F396: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F39A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F39E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F3A2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F3A6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F3AA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F3AE: mov     r11, [rbp-20h]
 * 000000014041F3B2: mov     r10, [rbp-28h]
 * 000000014041F3B6: mov     r9, [rbp-30h]
 * 000000014041F3BA: mov     r8, [rbp-38h]
 * 000000014041F3BE: mov     byte ptr gs:856h, 0
 * 000000014041F3C7: movzx   eax, word ptr gs:86Ah
 * 000000014041F3D0: cmp     gs:864h, ax
 * 000000014041F3D9: jz      short loc_14041F3ED
 * 000000014041F3DB: mov     gs:864h, ax
 * 000000014041F3E4: mov     ecx, 48h ; 'H'
 * 000000014041F3E9: xor     edx, edx
 * 000000014041F3EB: wrmsr
 * 000000014041F3ED: btr     word ptr gs:860h, 2
 * 000000014041F3F8: jnb     short loc_14041F408
 * 000000014041F3FA: mov     eax, 1
 * 000000014041F3FF: xor     edx, edx
 * 000000014041F401: mov     ecx, 49h ; 'I'
 * 000000014041F406: wrmsr
 * 000000014041F408: btr     word ptr gs:860h, 5
 * 000000014041F413: jnb     loc_14041F550
 * 000000014041F419: call    loc_14041F52C
 * 000000014041F41E: add     rsp, 8
 * 000000014041F422: call    loc_14041F535
 * 000000014041F427: add     rsp, 8
 * 000000014041F42B: call    loc_14041F41E
 * 000000014041F430: add     rsp, 8
 * 000000014041F434: call    loc_14041F427
 * 000000014041F439: add     rsp, 8
 * 000000014041F43D: call    loc_14041F430
 * 000000014041F442: add     rsp, 8
 * 000000014041F446: call    loc_14041F439
 * 000000014041F44B: add     rsp, 8
 * 000000014041F44F: call    loc_14041F442
 * 000000014041F454: add     rsp, 8
 * 000000014041F458: call    loc_14041F44B
 * 000000014041F45D: add     rsp, 8
 * 000000014041F461: call    loc_14041F454
 * 000000014041F466: add     rsp, 8
 * 000000014041F46A: call    loc_14041F45D
 * 000000014041F46F: add     rsp, 8
 * 000000014041F473: call    loc_14041F466
 * 000000014041F478: add     rsp, 8
 * 000000014041F47C: call    loc_14041F46F
 * 000000014041F481: add     rsp, 8
 * 000000014041F485: call    loc_14041F478
 * 000000014041F48A: add     rsp, 8
 * 000000014041F48E: call    loc_14041F481
 * 000000014041F493: add     rsp, 8
 * 000000014041F497: call    loc_14041F48A
 * 000000014041F49C: add     rsp, 8
 * 000000014041F4A0: call    loc_14041F493
 * 000000014041F4A5: add     rsp, 8
 * 000000014041F4A9: call    loc_14041F49C
 * 000000014041F4AE: add     rsp, 8
 * 000000014041F4B2: call    loc_14041F4A5
 * 000000014041F4B7: add     rsp, 8
 * 000000014041F4BB: call    loc_14041F4AE
 * 000000014041F4C0: add     rsp, 8
 * 000000014041F4C4: call    loc_14041F4B7
 * 000000014041F4C9: add     rsp, 8
 * 000000014041F4CD: call    loc_14041F4C0
 * 000000014041F4D2: add     rsp, 8
 * 000000014041F4D6: call    loc_14041F4C9
 * 000000014041F4DB: add     rsp, 8
 * 000000014041F4DF: call    loc_14041F4D2
 * 000000014041F4E4: add     rsp, 8
 * 000000014041F4E8: call    loc_14041F4DB
 * 000000014041F4ED: add     rsp, 8
 * 000000014041F4F1: call    loc_14041F4E4
 * 000000014041F4F6: add     rsp, 8
 * 000000014041F4FA: call    loc_14041F4ED
 * 000000014041F4FF: add     rsp, 8
 * 000000014041F503: call    loc_14041F4F6
 * 000000014041F508: add     rsp, 8
 * 000000014041F50C: call    loc_14041F4FF
 * 000000014041F511: add     rsp, 8
 * 000000014041F515: call    loc_14041F508
 * 000000014041F51A: add     rsp, 8
 * 000000014041F51E: call    loc_14041F511
 * 000000014041F523: add     rsp, 8
 * 000000014041F527: call    loc_14041F51A
 * 000000014041F52C: add     rsp, 8
 * 000000014041F530: call    loc_14041F523
 * 000000014041F535: add     rsp, 8
 * 000000014041F539: mov     eax, 0DADAh
 * 000000014041F53E: test    byte ptr gs:862h, 8
 * 000000014041F547: jz      short loc_14041F550
 * 000000014041F549: mov     al, 20h ; ' '
 * 000000014041F54B: incsspq rax
 * 000000014041F550: test    word ptr gs:860h, 80h
 * 000000014041F55B: jz      short loc_14041F569
 * 000000014041F55D: xor     eax, eax
 * 000000014041F55F: xor     edx, edx
 * 000000014041F561: mov     ecx, 1
 * 000000014041F566: div     rcx
 * 000000014041F569: mov     rdx, [rbp-40h]
 * 000000014041F56D: mov     rcx, [rbp-48h]
 * 000000014041F571: mov     rax, [rbp-50h]
 * 000000014041F575: mov     rsp, rbp
 * 000000014041F578: mov     rbp, [rbp+0D8h]
 * 000000014041F57F: add     rsp, 0E8h
 * 000000014041F586: test    cs:KiKvaShadow, 1
 * 000000014041F58D: jz      short loc_14041F594
 * 000000014041F58F: jmp     KiKernelExit
 * 000000014041F594: test    word ptr gs:860h, 100h
 * 000000014041F59F: jz      short loc_14041F5A6
 * 000000014041F5A1: verw    [rsp-1E8h+arg_200]
 * 000000014041F5A6: swapgs
 * 000000014041F5A9: iretq
 * 000000014041F5AB: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F5AF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F5B3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F5B7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F5BB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F5BF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F5C3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F5C7: mov     r11, [rbp-20h]
 * 000000014041F5CB: mov     r10, [rbp-28h]
 * 000000014041F5CF: mov     r9, [rbp-30h]
 * 000000014041F5D3: mov     r8, [rbp-38h]
 * 000000014041F5D7: mov     rdx, [rbp-40h]
 * 000000014041F5DB: mov     rcx, [rbp-48h]
 * 000000014041F5DF: mov     rax, [rbp-50h]
 * 000000014041F5E3: mov     rsp, rbp
 * 000000014041F5E6: mov     rbp, [rbp+0D8h]
 * 000000014041F5ED: add     rsp, 0E8h
 * 000000014041F5F4: iretq
 * 000000014041F5F6: add     rsp, 138h
 * 000000014041F5FD: retn
 */
