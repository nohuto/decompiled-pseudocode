/*
 * XREFs of NtRaiseException @ 0x14041EF50
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x14041EF50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     KiRaiseException @ 0x1405789A0 (KiRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x14041EF50
 * Reason: Hex-Rays returned no pseudocode for 0x14041EF50
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041EF50: mov     rbx, [rbp+0C0h]
 * 000000014041EF57: mov     rdi, [rbp+0C8h]
 * 000000014041EF5E: mov     rsi, [rbp+0D0h]
 * 000000014041EF65: xor     eax, eax
 * 000000014041EF67: mov     [rbp-50h], rax
 * 000000014041EF6B: sub     rsp, 138h
 * 000000014041EF72: lea     rax, [rsp+138h+var_38]
 * 000000014041EF7A: movaps  [rsp+138h+var_108], xmm6
 * 000000014041EF7F: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041EF84: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041EF8A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041EF90: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041EF96: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041EF9B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041EFA0: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041EFA5: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041EFAA: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041EFAF: mov     [rax], rbx
 * 000000014041EFB2: mov     [rax+8], rdi
 * 000000014041EFB6: mov     [rax+10h], rsi
 * 000000014041EFBA: mov     [rax+18h], r12
 * 000000014041EFBE: mov     [rax+20h], r13
 * 000000014041EFC2: mov     [rax+28h], r14
 * 000000014041EFC6: mov     [rax+30h], r15
 * 000000014041EFCA: mov     rax, [rbp+0E8h]
 * 000000014041EFD1: mov     [rbp+50h], rax
 * 000000014041EFD5: mov     [rsp+138h+var_118], r8b
 * 000000014041EFDA: mov     r8, rsp
 * 000000014041EFDD: lea     r9, [rbp-80h]
 * 000000014041EFE1: call    KiRaiseException
 * 000000014041EFE6: test    eax, eax
 * 000000014041EFE8: jnz     loc_14041F3C6
 * 000000014041EFEE: test    byte ptr [rbp+0F0h], 1
 * 000000014041EFF5: jnz     short loc_14041F017
 * 000000014041EFF7: mov     rbx, gs:188h
 * 000000014041F000: mov     rdx, [rbp+0B8h]
 * 000000014041F007: mov     [rbx+90h], rdx
 * 000000014041F00E: mov     dl, [rbp-58h]
 * 000000014041F011: mov     [rbx+232h], dl
 * 000000014041F017: lea     rcx, [rsp+138h+var_38]
 * 000000014041F01F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F024: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F029: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F02F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F035: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F03B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F040: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F045: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F04A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F04F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F054: mov     rbx, [rcx]
 * 000000014041F057: mov     rdi, [rcx+8]
 * 000000014041F05B: mov     rsi, [rcx+10h]
 * 000000014041F05F: mov     r12, [rcx+18h]
 * 000000014041F063: mov     r13, [rcx+20h]
 * 000000014041F067: mov     r14, [rcx+28h]
 * 000000014041F06B: mov     r15, [rcx+30h]
 * 000000014041F06F: cli
 * 000000014041F070: xor     ecx, ecx
 * 000000014041F072: rdsspq  rcx
 * 000000014041F077: test    rcx, rcx
 * 000000014041F07A: jz      short loc_14041F086
 * 000000014041F07C: mov     ecx, 1
 * 000000014041F081: incsspq rcx
 * 000000014041F086: test    byte ptr [rbp+0F0h], 1
 * 000000014041F08D: jz      loc_14041F37B
 * 000000014041F093: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041F09A: jz      short loc_14041F09F
 * 000000014041F09C: stac
 * 000000014041F09F: mov     rcx, gs:188h
 * 000000014041F0A8: test    byte ptr [rcx+0C2h], 3
 * 000000014041F0AF: jz      short loc_14041F0CC
 * 000000014041F0B1: mov     ecx, 1
 * 000000014041F0B6: mov     cr8, rcx
 * 000000014041F0BA: sti
 * 000000014041F0BB: call    KiInitiateUserApc
 * 000000014041F0C0: cli
 * 000000014041F0C1: mov     ecx, 0
 * 000000014041F0C6: mov     cr8, rcx
 * 000000014041F0CA: jmp     short loc_14041F09F
 * 000000014041F0CC: test    byte ptr gs:86Ch, 2
 * 000000014041F0D5: jz      short loc_14041F0DE
 * 000000014041F0D7: xor     ecx, ecx
 * 000000014041F0D9: call    KiUpdateStibpPairing
 * 000000014041F0DE: mov     rcx, gs:188h
 * 000000014041F0E7: test    dword ptr [rcx], 8000000h
 * 000000014041F0ED: jz      short loc_14041F0F4
 * 000000014041F0EF: call    KiRestoreSetContextState
 * 000000014041F0F4: mov     rcx, gs:188h
 * 000000014041F0FD: test    dword ptr [rcx], 10000h
 * 000000014041F103: jz      short loc_14041F119
 * 000000014041F105: test    byte ptr [rcx+2], 1
 * 000000014041F109: jz      short loc_14041F119
 * 000000014041F10B: call    KiCopyCounters
 * 000000014041F110: mov     rcx, gs:188h
 * 000000014041F119: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F11D: cmp     word ptr [rbp+80h], 0
 * 000000014041F125: jz      short loc_14041F12C
 * 000000014041F127: call    KiRestoreDebugRegisterState
 * 000000014041F12C: mov     rcx, gs:188h
 * 000000014041F135: bt      dword ptr [rcx+74h], 16h
 * 000000014041F13A: jnb     short loc_14041F166
 * 000000014041F13C: xor     ecx, ecx
 * 000000014041F13E: rdsspq  rcx
 * 000000014041F143: mov     r8, gs:95A8h
 * 000000014041F14C: add     r8, 8
 * 000000014041F150: cmp     rcx, r8
 * 000000014041F153: jnz     short loc_14041F166
 * 000000014041F155: mov     rcx, gs:95A0h
 * 000000014041F15E: rstorssp qword ptr [rcx]
 * 000000014041F162: saveprevssp
 * 000000014041F166: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F16A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F16E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F172: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F176: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F17A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F17E: mov     r11, [rbp-20h]
 * 000000014041F182: mov     r10, [rbp-28h]
 * 000000014041F186: mov     r9, [rbp-30h]
 * 000000014041F18A: mov     r8, [rbp-38h]
 * 000000014041F18E: mov     byte ptr gs:856h, 0
 * 000000014041F197: movzx   eax, word ptr gs:86Ah
 * 000000014041F1A0: cmp     gs:864h, ax
 * 000000014041F1A9: jz      short loc_14041F1BD
 * 000000014041F1AB: mov     gs:864h, ax
 * 000000014041F1B4: mov     ecx, 48h ; 'H'
 * 000000014041F1B9: xor     edx, edx
 * 000000014041F1BB: wrmsr
 * 000000014041F1BD: btr     word ptr gs:860h, 2
 * 000000014041F1C8: jnb     short loc_14041F1D8
 * 000000014041F1CA: mov     eax, 1
 * 000000014041F1CF: xor     edx, edx
 * 000000014041F1D1: mov     ecx, 49h ; 'I'
 * 000000014041F1D6: wrmsr
 * 000000014041F1D8: btr     word ptr gs:860h, 5
 * 000000014041F1E3: jnb     loc_14041F320
 * 000000014041F1E9: call    loc_14041F2FC
 * 000000014041F1EE: add     rsp, 8
 * 000000014041F1F2: call    loc_14041F305
 * 000000014041F1F7: add     rsp, 8
 * 000000014041F1FB: call    loc_14041F1EE
 * 000000014041F200: add     rsp, 8
 * 000000014041F204: call    loc_14041F1F7
 * 000000014041F209: add     rsp, 8
 * 000000014041F20D: call    loc_14041F200
 * 000000014041F212: add     rsp, 8
 * 000000014041F216: call    loc_14041F209
 * 000000014041F21B: add     rsp, 8
 * 000000014041F21F: call    loc_14041F212
 * 000000014041F224: add     rsp, 8
 * 000000014041F228: call    loc_14041F21B
 * 000000014041F22D: add     rsp, 8
 * 000000014041F231: call    loc_14041F224
 * 000000014041F236: add     rsp, 8
 * 000000014041F23A: call    loc_14041F22D
 * 000000014041F23F: add     rsp, 8
 * 000000014041F243: call    loc_14041F236
 * 000000014041F248: add     rsp, 8
 * 000000014041F24C: call    loc_14041F23F
 * 000000014041F251: add     rsp, 8
 * 000000014041F255: call    loc_14041F248
 * 000000014041F25A: add     rsp, 8
 * 000000014041F25E: call    loc_14041F251
 * 000000014041F263: add     rsp, 8
 * 000000014041F267: call    loc_14041F25A
 * 000000014041F26C: add     rsp, 8
 * 000000014041F270: call    loc_14041F263
 * 000000014041F275: add     rsp, 8
 * 000000014041F279: call    loc_14041F26C
 * 000000014041F27E: add     rsp, 8
 * 000000014041F282: call    loc_14041F275
 * 000000014041F287: add     rsp, 8
 * 000000014041F28B: call    loc_14041F27E
 * 000000014041F290: add     rsp, 8
 * 000000014041F294: call    loc_14041F287
 * 000000014041F299: add     rsp, 8
 * 000000014041F29D: call    loc_14041F290
 * 000000014041F2A2: add     rsp, 8
 * 000000014041F2A6: call    loc_14041F299
 * 000000014041F2AB: add     rsp, 8
 * 000000014041F2AF: call    loc_14041F2A2
 * 000000014041F2B4: add     rsp, 8
 * 000000014041F2B8: call    loc_14041F2AB
 * 000000014041F2BD: add     rsp, 8
 * 000000014041F2C1: call    loc_14041F2B4
 * 000000014041F2C6: add     rsp, 8
 * 000000014041F2CA: call    loc_14041F2BD
 * 000000014041F2CF: add     rsp, 8
 * 000000014041F2D3: call    loc_14041F2C6
 * 000000014041F2D8: add     rsp, 8
 * 000000014041F2DC: call    loc_14041F2CF
 * 000000014041F2E1: add     rsp, 8
 * 000000014041F2E5: call    loc_14041F2D8
 * 000000014041F2EA: add     rsp, 8
 * 000000014041F2EE: call    loc_14041F2E1
 * 000000014041F2F3: add     rsp, 8
 * 000000014041F2F7: call    loc_14041F2EA
 * 000000014041F2FC: add     rsp, 8
 * 000000014041F300: call    loc_14041F2F3
 * 000000014041F305: add     rsp, 8
 * 000000014041F309: mov     eax, 0DADAh
 * 000000014041F30E: test    byte ptr gs:862h, 8
 * 000000014041F317: jz      short loc_14041F320
 * 000000014041F319: mov     al, 20h ; ' '
 * 000000014041F31B: incsspq rax
 * 000000014041F320: test    word ptr gs:860h, 80h
 * 000000014041F32B: jz      short loc_14041F339
 * 000000014041F32D: xor     eax, eax
 * 000000014041F32F: xor     edx, edx
 * 000000014041F331: mov     ecx, 1
 * 000000014041F336: div     rcx
 * 000000014041F339: mov     rdx, [rbp-40h]
 * 000000014041F33D: mov     rcx, [rbp-48h]
 * 000000014041F341: mov     rax, [rbp-50h]
 * 000000014041F345: mov     rsp, rbp
 * 000000014041F348: mov     rbp, [rbp+0D8h]
 * 000000014041F34F: add     rsp, 0E8h
 * 000000014041F356: test    cs:KiKvaShadow, 1
 * 000000014041F35D: jz      short loc_14041F364
 * 000000014041F35F: jmp     KiKernelExit
 * 000000014041F364: test    word ptr gs:860h, 100h
 * 000000014041F36F: jz      short loc_14041F376
 * 000000014041F371: verw    [rsp-1E8h+arg_200]
 * 000000014041F376: swapgs
 * 000000014041F379: iretq
 * 000000014041F37B: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F37F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F383: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F387: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F38B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F38F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F393: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F397: mov     r11, [rbp-20h]
 * 000000014041F39B: mov     r10, [rbp-28h]
 * 000000014041F39F: mov     r9, [rbp-30h]
 * 000000014041F3A3: mov     r8, [rbp-38h]
 * 000000014041F3A7: mov     rdx, [rbp-40h]
 * 000000014041F3AB: mov     rcx, [rbp-48h]
 * 000000014041F3AF: mov     rax, [rbp-50h]
 * 000000014041F3B3: mov     rsp, rbp
 * 000000014041F3B6: mov     rbp, [rbp+0D8h]
 * 000000014041F3BD: add     rsp, 0E8h
 * 000000014041F3C4: iretq
 * 000000014041F3C6: lea     rcx, [rsp+138h+var_38]
 * 000000014041F3CE: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F3D3: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F3D8: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F3DE: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F3E4: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F3EA: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F3EF: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F3F4: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F3F9: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F3FE: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F403: mov     rbx, [rcx]
 * 000000014041F406: mov     rdi, [rcx+8]
 * 000000014041F40A: mov     rsi, [rcx+10h]
 * 000000014041F40E: mov     r12, [rcx+18h]
 * 000000014041F412: mov     r13, [rcx+20h]
 * 000000014041F416: mov     r14, [rcx+28h]
 * 000000014041F41A: mov     r15, [rcx+30h]
 * 000000014041F41E: add     rsp, 138h
 * 000000014041F425: retn
 */
