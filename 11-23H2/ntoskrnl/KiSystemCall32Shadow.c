/*
 * XREFs of KiSystemCall32Shadow @ 0x140AF7E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140AF7E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140AF7E40
 * Reason: Hex-Rays returned no pseudocode for 0x140AF7E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF7E40: swapgs
 * 0000000140AF7E43: mov     gs:0A010h, rsp
 * 0000000140AF7E4C: mov     rsp, gs:0A000h
 * 0000000140AF7E55: mov     cr3, rsp
 * 0000000140AF7E58: mov     rsp, gs:0A008h
 * 0000000140AF7E61: push    2Bh ; '+'
 * 0000000140AF7E63: push    qword ptr gs:0A010h
 * 0000000140AF7E6B: push    r11
 * 0000000140AF7E6D: push    23h ; '#'
 * 0000000140AF7E6F: push    rcx
 * 0000000140AF7E70: sub     rsp, 8
 * 0000000140AF7E74: push    rbp
 * 0000000140AF7E75: sub     rsp, 158h
 * 0000000140AF7E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140AF7E84: mov     byte ptr [rbp-55h], 1
 * 0000000140AF7E88: mov     [rbp-50h], rax
 * 0000000140AF7E8C: mov     [rbp-48h], rcx
 * 0000000140AF7E90: mov     [rbp-40h], rdx
 * 0000000140AF7E94: mov     [rbp-38h], r8
 * 0000000140AF7E98: mov     [rbp-30h], r9
 * 0000000140AF7E9C: mov     [rbp-28h], r10
 * 0000000140AF7EA0: mov     [rbp-20h], r11
 * 0000000140AF7EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF7EAB: jnz     short loc_140AF7EE7
 * 0000000140AF7EAD: xor     edx, edx
 * 0000000140AF7EAF: rdsspq  rdx
 * 0000000140AF7EB4: mov     [rbp+58h], rdx
 * 0000000140AF7EB8: lfence
 * 0000000140AF7EBB: test    word ptr gs:860h, 1
 * 0000000140AF7EC6: jnz     short loc_140AF7ED0
 * 0000000140AF7EC8: lfence
 * 0000000140AF7ECB: jmp     loc_140AF8157
 * 0000000140AF7ED0: movzx   eax, word ptr gs:864h
 * 0000000140AF7ED9: mov     ecx, 48h ; 'H'
 * 0000000140AF7EDE: xor     edx, edx
 * 0000000140AF7EE0: wrmsr
 * 0000000140AF7EE2: jmp     loc_140AF8157
 * 0000000140AF7EE7: test    cs:KiKvaShadow, 1
 * 0000000140AF7EEE: jnz     short loc_140AF7EF3
 * 0000000140AF7EF0: swapgs
 * 0000000140AF7EF3: lfence
 * 0000000140AF7EF6: mov     rcx, gs:95A8h
 * 0000000140AF7EFF: test    rcx, rcx
 * 0000000140AF7F02: jz      short loc_140AF7F23
 * 0000000140AF7F04: rdsspq  rdx
 * 0000000140AF7F09: mov     r10, gs:95A0h
 * 0000000140AF7F12: add     r10, 8
 * 0000000140AF7F16: cmp     rdx, r10
 * 0000000140AF7F19: jnz     short loc_140AF7F23
 * 0000000140AF7F1B: rstorssp qword ptr [rcx]
 * 0000000140AF7F1F: saveprevssp
 * 0000000140AF7F23: mov     r10, gs:188h
 * 0000000140AF7F2C: mov     rcx, gs:188h
 * 0000000140AF7F35: mov     rcx, [rcx+220h]
 * 0000000140AF7F3C: mov     rcx, [rcx+9E0h]
 * 0000000140AF7F43: mov     gs:858h, rcx
 * 0000000140AF7F4C: mov     cx, gs:850h
 * 0000000140AF7F55: mov     gs:852h, cx
 * 0000000140AF7F5E: mov     cx, gs:860h
 * 0000000140AF7F67: mov     gs:854h, cx
 * 0000000140AF7F70: movzx   eax, word ptr gs:866h
 * 0000000140AF7F79: cmp     gs:864h, ax
 * 0000000140AF7F82: jz      short loc_140AF7F96
 * 0000000140AF7F84: mov     gs:864h, ax
 * 0000000140AF7F8D: mov     ecx, 48h ; 'H'
 * 0000000140AF7F92: xor     edx, edx
 * 0000000140AF7F94: wrmsr
 * 0000000140AF7F96: movzx   edx, word ptr gs:860h
 * 0000000140AF7F9F: test    edx, 8
 * 0000000140AF7FA5: jz      short loc_140AF7FBE
 * 0000000140AF7FA7: mov     eax, 1
 * 0000000140AF7FAC: xor     edx, edx
 * 0000000140AF7FAE: mov     ecx, 49h ; 'I'
 * 0000000140AF7FB3: wrmsr
 * 0000000140AF7FB5: movzx   edx, word ptr gs:860h
 * 0000000140AF7FBE: test    edx, 2
 * 0000000140AF7FC4: jz      loc_140AF8101
 * 0000000140AF7FCA: call    loc_140AF80DD
 * 0000000140AF7FCF: add     rsp, 8
 * 0000000140AF7FD3: call    loc_140AF80E6
 * 0000000140AF7FD8: add     rsp, 8
 * 0000000140AF7FDC: call    loc_140AF7FCF
 * 0000000140AF7FE1: add     rsp, 8
 * 0000000140AF7FE5: call    loc_140AF7FD8
 * 0000000140AF7FEA: add     rsp, 8
 * 0000000140AF7FEE: call    loc_140AF7FE1
 * 0000000140AF7FF3: add     rsp, 8
 * 0000000140AF7FF7: call    loc_140AF7FEA
 * 0000000140AF7FFC: add     rsp, 8
 * 0000000140AF8000: call    loc_140AF7FF3
 * 0000000140AF8005: add     rsp, 8
 * 0000000140AF8009: call    loc_140AF7FFC
 * 0000000140AF800E: add     rsp, 8
 * 0000000140AF8012: call    loc_140AF8005
 * 0000000140AF8017: add     rsp, 8
 * 0000000140AF801B: call    loc_140AF800E
 * 0000000140AF8020: add     rsp, 8
 * 0000000140AF8024: call    loc_140AF8017
 * 0000000140AF8029: add     rsp, 8
 * 0000000140AF802D: call    loc_140AF8020
 * 0000000140AF8032: add     rsp, 8
 * 0000000140AF8036: call    loc_140AF8029
 * 0000000140AF803B: add     rsp, 8
 * 0000000140AF803F: call    loc_140AF8032
 * 0000000140AF8044: add     rsp, 8
 * 0000000140AF8048: call    loc_140AF803B
 * 0000000140AF804D: add     rsp, 8
 * 0000000140AF8051: call    loc_140AF8044
 * 0000000140AF8056: add     rsp, 8
 * 0000000140AF805A: call    loc_140AF804D
 * 0000000140AF805F: add     rsp, 8
 * 0000000140AF8063: call    loc_140AF8056
 * 0000000140AF8068: add     rsp, 8
 * 0000000140AF806C: call    loc_140AF805F
 * 0000000140AF8071: add     rsp, 8
 * 0000000140AF8075: call    loc_140AF8068
 * 0000000140AF807A: add     rsp, 8
 * 0000000140AF807E: call    loc_140AF8071
 * 0000000140AF8083: add     rsp, 8
 * 0000000140AF8087: call    loc_140AF807A
 * 0000000140AF808C: add     rsp, 8
 * 0000000140AF8090: call    loc_140AF8083
 * 0000000140AF8095: add     rsp, 8
 * 0000000140AF8099: call    loc_140AF808C
 * 0000000140AF809E: add     rsp, 8
 * 0000000140AF80A2: call    loc_140AF8095
 * 0000000140AF80A7: add     rsp, 8
 * 0000000140AF80AB: call    loc_140AF809E
 * 0000000140AF80B0: add     rsp, 8
 * 0000000140AF80B4: call    loc_140AF80A7
 * 0000000140AF80B9: add     rsp, 8
 * 0000000140AF80BD: call    loc_140AF80B0
 * 0000000140AF80C2: add     rsp, 8
 * 0000000140AF80C6: call    loc_140AF80B9
 * 0000000140AF80CB: add     rsp, 8
 * 0000000140AF80CF: call    loc_140AF80C2
 * 0000000140AF80D4: add     rsp, 8
 * 0000000140AF80D8: call    loc_140AF80CB
 * 0000000140AF80DD: add     rsp, 8
 * 0000000140AF80E1: call    loc_140AF80D4
 * 0000000140AF80E6: add     rsp, 8
 * 0000000140AF80EA: mov     eax, 0DADAh
 * 0000000140AF80EF: test    byte ptr gs:862h, 8
 * 0000000140AF80F8: jz      short loc_140AF8101
 * 0000000140AF80FA: mov     al, 20h ; ' '
 * 0000000140AF80FC: incsspq rax
 * 0000000140AF8101: test    edx, 200h
 * 0000000140AF8107: jz      short loc_140AF810E
 * 0000000140AF8109: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140AF810E: lfence
 * 0000000140AF8111: mov     byte ptr gs:856h, 0
 * 0000000140AF811A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140AF8121: jz      short loc_140AF8142
 * 0000000140AF8123: mov     ecx, 6A7h
 * 0000000140AF8128: rdmsr
 * 0000000140AF812A: cmp     edx, 0
 * 0000000140AF812D: jz      short loc_140AF8142
 * 0000000140AF812F: mov     ecx, edx
 * 0000000140AF8131: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140AF8137: cmp     edx, ecx
 * 0000000140AF8139: jz      short loc_140AF8142
 * 0000000140AF813B: mov     ecx, 6A7h
 * 0000000140AF8140: wrmsr
 * 0000000140AF8142: test    byte ptr [r10+3], 3
 * 0000000140AF8147: mov     word ptr [rbp+80h], 0
 * 0000000140AF8150: jz      short loc_140AF8157
 * 0000000140AF8152: call    KiSaveDebugRegisterState
 * 0000000140AF8157: cld
 * 0000000140AF8158: stmxcsr dword ptr [rbp-54h]
 * 0000000140AF815C: ldmxcsr dword ptr gs:180h
 * 0000000140AF8165: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140AF8169: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140AF816D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140AF8171: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140AF8175: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140AF8179: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140AF817D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140AF8184: jz      short loc_140AF8192
 * 0000000140AF8186: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF818D: jz      short loc_140AF8192
 * 0000000140AF818F: stac
 * 0000000140AF8192: sub     qword ptr [rbp+0E8h], 2
 * 0000000140AF819A: and     dword ptr [rbp+0ECh], 0
 * 0000000140AF81A1: sti
 * 0000000140AF81A2: mov     ecx, 0C000001Dh
 * 0000000140AF81A7: xor     edx, edx
 * 0000000140AF81A9: mov     r8, [rbp+0E8h]
 * 0000000140AF81B0: call    KiExceptionDispatch
 * 0000000140AF81B5: nop
 * 0000000140AF81B6: retn
 */
