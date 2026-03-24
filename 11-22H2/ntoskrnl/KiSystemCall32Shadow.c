/*
 * XREFs of KiSystemCall32Shadow @ 0x140AF8E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140AF8E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140AF8E40
 * Reason: Hex-Rays returned no pseudocode for 0x140AF8E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF8E40: swapgs
 * 0000000140AF8E43: mov     gs:0A010h, rsp
 * 0000000140AF8E4C: mov     rsp, gs:0A000h
 * 0000000140AF8E55: mov     cr3, rsp
 * 0000000140AF8E58: mov     rsp, gs:0A008h
 * 0000000140AF8E61: push    2Bh ; '+'
 * 0000000140AF8E63: push    qword ptr gs:0A010h
 * 0000000140AF8E6B: push    r11
 * 0000000140AF8E6D: push    23h ; '#'
 * 0000000140AF8E6F: push    rcx
 * 0000000140AF8E70: sub     rsp, 8
 * 0000000140AF8E74: push    rbp
 * 0000000140AF8E75: sub     rsp, 158h
 * 0000000140AF8E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140AF8E84: mov     byte ptr [rbp-55h], 1
 * 0000000140AF8E88: mov     [rbp-50h], rax
 * 0000000140AF8E8C: mov     [rbp-48h], rcx
 * 0000000140AF8E90: mov     [rbp-40h], rdx
 * 0000000140AF8E94: mov     [rbp-38h], r8
 * 0000000140AF8E98: mov     [rbp-30h], r9
 * 0000000140AF8E9C: mov     [rbp-28h], r10
 * 0000000140AF8EA0: mov     [rbp-20h], r11
 * 0000000140AF8EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF8EAB: jnz     short loc_140AF8EE7
 * 0000000140AF8EAD: xor     edx, edx
 * 0000000140AF8EAF: rdsspq  rdx
 * 0000000140AF8EB4: mov     [rbp+58h], rdx
 * 0000000140AF8EB8: lfence
 * 0000000140AF8EBB: test    word ptr gs:860h, 1
 * 0000000140AF8EC6: jnz     short loc_140AF8ED0
 * 0000000140AF8EC8: lfence
 * 0000000140AF8ECB: jmp     loc_140AF9157
 * 0000000140AF8ED0: movzx   eax, word ptr gs:864h
 * 0000000140AF8ED9: mov     ecx, 48h ; 'H'
 * 0000000140AF8EDE: xor     edx, edx
 * 0000000140AF8EE0: wrmsr
 * 0000000140AF8EE2: jmp     loc_140AF9157
 * 0000000140AF8EE7: test    cs:KiKvaShadow, 1
 * 0000000140AF8EEE: jnz     short loc_140AF8EF3
 * 0000000140AF8EF0: swapgs
 * 0000000140AF8EF3: lfence
 * 0000000140AF8EF6: mov     rcx, gs:95A8h
 * 0000000140AF8EFF: test    rcx, rcx
 * 0000000140AF8F02: jz      short loc_140AF8F23
 * 0000000140AF8F04: rdsspq  rdx
 * 0000000140AF8F09: mov     r10, gs:95A0h
 * 0000000140AF8F12: add     r10, 8
 * 0000000140AF8F16: cmp     rdx, r10
 * 0000000140AF8F19: jnz     short loc_140AF8F23
 * 0000000140AF8F1B: rstorssp qword ptr [rcx]
 * 0000000140AF8F1F: saveprevssp
 * 0000000140AF8F23: mov     r10, gs:188h
 * 0000000140AF8F2C: mov     rcx, gs:188h
 * 0000000140AF8F35: mov     rcx, [rcx+220h]
 * 0000000140AF8F3C: mov     rcx, [rcx+9E0h]
 * 0000000140AF8F43: mov     gs:858h, rcx
 * 0000000140AF8F4C: mov     cx, gs:850h
 * 0000000140AF8F55: mov     gs:852h, cx
 * 0000000140AF8F5E: mov     cx, gs:860h
 * 0000000140AF8F67: mov     gs:854h, cx
 * 0000000140AF8F70: movzx   eax, word ptr gs:866h
 * 0000000140AF8F79: cmp     gs:864h, ax
 * 0000000140AF8F82: jz      short loc_140AF8F96
 * 0000000140AF8F84: mov     gs:864h, ax
 * 0000000140AF8F8D: mov     ecx, 48h ; 'H'
 * 0000000140AF8F92: xor     edx, edx
 * 0000000140AF8F94: wrmsr
 * 0000000140AF8F96: movzx   edx, word ptr gs:860h
 * 0000000140AF8F9F: test    edx, 8
 * 0000000140AF8FA5: jz      short loc_140AF8FBE
 * 0000000140AF8FA7: mov     eax, 1
 * 0000000140AF8FAC: xor     edx, edx
 * 0000000140AF8FAE: mov     ecx, 49h ; 'I'
 * 0000000140AF8FB3: wrmsr
 * 0000000140AF8FB5: movzx   edx, word ptr gs:860h
 * 0000000140AF8FBE: test    edx, 2
 * 0000000140AF8FC4: jz      loc_140AF9101
 * 0000000140AF8FCA: call    loc_140AF90DD
 * 0000000140AF8FCF: add     rsp, 8
 * 0000000140AF8FD3: call    loc_140AF90E6
 * 0000000140AF8FD8: add     rsp, 8
 * 0000000140AF8FDC: call    loc_140AF8FCF
 * 0000000140AF8FE1: add     rsp, 8
 * 0000000140AF8FE5: call    loc_140AF8FD8
 * 0000000140AF8FEA: add     rsp, 8
 * 0000000140AF8FEE: call    loc_140AF8FE1
 * 0000000140AF8FF3: add     rsp, 8
 * 0000000140AF8FF7: call    loc_140AF8FEA
 * 0000000140AF8FFC: add     rsp, 8
 * 0000000140AF9000: call    loc_140AF8FF3
 * 0000000140AF9005: add     rsp, 8
 * 0000000140AF9009: call    loc_140AF8FFC
 * 0000000140AF900E: add     rsp, 8
 * 0000000140AF9012: call    loc_140AF9005
 * 0000000140AF9017: add     rsp, 8
 * 0000000140AF901B: call    loc_140AF900E
 * 0000000140AF9020: add     rsp, 8
 * 0000000140AF9024: call    loc_140AF9017
 * 0000000140AF9029: add     rsp, 8
 * 0000000140AF902D: call    loc_140AF9020
 * 0000000140AF9032: add     rsp, 8
 * 0000000140AF9036: call    loc_140AF9029
 * 0000000140AF903B: add     rsp, 8
 * 0000000140AF903F: call    loc_140AF9032
 * 0000000140AF9044: add     rsp, 8
 * 0000000140AF9048: call    loc_140AF903B
 * 0000000140AF904D: add     rsp, 8
 * 0000000140AF9051: call    loc_140AF9044
 * 0000000140AF9056: add     rsp, 8
 * 0000000140AF905A: call    loc_140AF904D
 * 0000000140AF905F: add     rsp, 8
 * 0000000140AF9063: call    loc_140AF9056
 * 0000000140AF9068: add     rsp, 8
 * 0000000140AF906C: call    loc_140AF905F
 * 0000000140AF9071: add     rsp, 8
 * 0000000140AF9075: call    loc_140AF9068
 * 0000000140AF907A: add     rsp, 8
 * 0000000140AF907E: call    loc_140AF9071
 * 0000000140AF9083: add     rsp, 8
 * 0000000140AF9087: call    loc_140AF907A
 * 0000000140AF908C: add     rsp, 8
 * 0000000140AF9090: call    loc_140AF9083
 * 0000000140AF9095: add     rsp, 8
 * 0000000140AF9099: call    loc_140AF908C
 * 0000000140AF909E: add     rsp, 8
 * 0000000140AF90A2: call    loc_140AF9095
 * 0000000140AF90A7: add     rsp, 8
 * 0000000140AF90AB: call    loc_140AF909E
 * 0000000140AF90B0: add     rsp, 8
 * 0000000140AF90B4: call    loc_140AF90A7
 * 0000000140AF90B9: add     rsp, 8
 * 0000000140AF90BD: call    loc_140AF90B0
 * 0000000140AF90C2: add     rsp, 8
 * 0000000140AF90C6: call    loc_140AF90B9
 * 0000000140AF90CB: add     rsp, 8
 * 0000000140AF90CF: call    loc_140AF90C2
 * 0000000140AF90D4: add     rsp, 8
 * 0000000140AF90D8: call    loc_140AF90CB
 * 0000000140AF90DD: add     rsp, 8
 * 0000000140AF90E1: call    loc_140AF90D4
 * 0000000140AF90E6: add     rsp, 8
 * 0000000140AF90EA: mov     eax, 0DADAh
 * 0000000140AF90EF: test    byte ptr gs:862h, 8
 * 0000000140AF90F8: jz      short loc_140AF9101
 * 0000000140AF90FA: mov     al, 20h ; ' '
 * 0000000140AF90FC: incsspq rax
 * 0000000140AF9101: test    edx, 200h
 * 0000000140AF9107: jz      short loc_140AF910E
 * 0000000140AF9109: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140AF910E: lfence
 * 0000000140AF9111: mov     byte ptr gs:856h, 0
 * 0000000140AF911A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140AF9121: jz      short loc_140AF9142
 * 0000000140AF9123: mov     ecx, 6A7h
 * 0000000140AF9128: rdmsr
 * 0000000140AF912A: cmp     edx, 0
 * 0000000140AF912D: jz      short loc_140AF9142
 * 0000000140AF912F: mov     ecx, edx
 * 0000000140AF9131: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140AF9137: cmp     edx, ecx
 * 0000000140AF9139: jz      short loc_140AF9142
 * 0000000140AF913B: mov     ecx, 6A7h
 * 0000000140AF9140: wrmsr
 * 0000000140AF9142: test    byte ptr [r10+3], 3
 * 0000000140AF9147: mov     word ptr [rbp+80h], 0
 * 0000000140AF9150: jz      short loc_140AF9157
 * 0000000140AF9152: call    KiSaveDebugRegisterState
 * 0000000140AF9157: cld
 * 0000000140AF9158: stmxcsr dword ptr [rbp-54h]
 * 0000000140AF915C: ldmxcsr dword ptr gs:180h
 * 0000000140AF9165: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140AF9169: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140AF916D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140AF9171: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140AF9175: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140AF9179: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140AF917D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140AF9184: jz      short loc_140AF9192
 * 0000000140AF9186: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF918D: jz      short loc_140AF9192
 * 0000000140AF918F: stac
 * 0000000140AF9192: sub     qword ptr [rbp+0E8h], 2
 * 0000000140AF919A: and     dword ptr [rbp+0ECh], 0
 * 0000000140AF91A1: sti
 * 0000000140AF91A2: mov     ecx, 0C000001Dh
 * 0000000140AF91A7: xor     edx, edx
 * 0000000140AF91A9: mov     r8, [rbp+0E8h]
 * 0000000140AF91B0: call    KiExceptionDispatch
 * 0000000140AF91B5: nop
 * 0000000140AF91B6: retn
 */
