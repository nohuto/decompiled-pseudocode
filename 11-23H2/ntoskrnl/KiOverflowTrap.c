/*
 * XREFs of KiOverflowTrap @ 0x14042CE80
 * Callers:
 *     KiOverflowTrapShadow @ 0x140AF6340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14042CE80 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14042CE80
 * Reason: Hex-Rays returned no pseudocode for 0x14042CE80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042CE80: sub     rsp, 8
 * 000000014042CE84: push    rbp
 * 000000014042CE85: sub     rsp, 158h
 * 000000014042CE8C: lea     rbp, [rsp+80h]
 * 000000014042CE94: mov     [rbp+0E8h+var_13D], 1
 * 000000014042CE98: mov     [rbp+0E8h+var_138], rax
 * 000000014042CE9C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042CEA0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042CEA4: mov     [rbp+0E8h+var_120], r8
 * 000000014042CEA8: mov     [rbp+0E8h+var_118], r9
 * 000000014042CEAC: mov     [rbp+0E8h+var_110], r10
 * 000000014042CEB0: mov     [rbp+0E8h+var_108], r11
 * 000000014042CEB4: test    [rbp+0E8h+arg_0], 1
 * 000000014042CEBB: jnz     short loc_14042CEF7
 * 000000014042CEBD: xor     edx, edx
 * 000000014042CEBF: rdsspq  rdx
 * 000000014042CEC4: mov     [rbp+0E8h+var_90], rdx
 * 000000014042CEC8: lfence
 * 000000014042CECB: test    word ptr gs:860h, 1
 * 000000014042CED6: jnz     short loc_14042CEE0
 * 000000014042CED8: lfence
 * 000000014042CEDB: jmp     loc_14042D167
 * 000000014042CEE0: movzx   eax, word ptr gs:864h
 * 000000014042CEE9: mov     ecx, 48h ; 'H'
 * 000000014042CEEE: xor     edx, edx
 * 000000014042CEF0: wrmsr
 * 000000014042CEF2: jmp     loc_14042D167
 * 000000014042CEF7: test    cs:KiKvaShadow, 1
 * 000000014042CEFE: jnz     short loc_14042CF03
 * 000000014042CF00: swapgs
 * 000000014042CF03: lfence
 * 000000014042CF06: mov     rcx, gs:95A8h
 * 000000014042CF0F: test    rcx, rcx
 * 000000014042CF12: jz      short loc_14042CF33
 * 000000014042CF14: rdsspq  rdx
 * 000000014042CF19: mov     r10, gs:95A0h
 * 000000014042CF22: add     r10, 8
 * 000000014042CF26: cmp     rdx, r10
 * 000000014042CF29: jnz     short loc_14042CF33
 * 000000014042CF2B: rstorssp qword ptr [rcx]
 * 000000014042CF2F: saveprevssp
 * 000000014042CF33: mov     r10, gs:188h
 * 000000014042CF3C: mov     rcx, gs:188h
 * 000000014042CF45: mov     rcx, [rcx+220h]
 * 000000014042CF4C: mov     rcx, [rcx+9E0h]
 * 000000014042CF53: mov     gs:858h, rcx
 * 000000014042CF5C: mov     cx, gs:850h
 * 000000014042CF65: mov     gs:852h, cx
 * 000000014042CF6E: mov     cx, gs:860h
 * 000000014042CF77: mov     gs:854h, cx
 * 000000014042CF80: movzx   eax, word ptr gs:866h
 * 000000014042CF89: cmp     gs:864h, ax
 * 000000014042CF92: jz      short loc_14042CFA6
 * 000000014042CF94: mov     gs:864h, ax
 * 000000014042CF9D: mov     ecx, 48h ; 'H'
 * 000000014042CFA2: xor     edx, edx
 * 000000014042CFA4: wrmsr
 * 000000014042CFA6: movzx   edx, word ptr gs:860h
 * 000000014042CFAF: test    edx, 8
 * 000000014042CFB5: jz      short loc_14042CFCE
 * 000000014042CFB7: mov     eax, 1
 * 000000014042CFBC: xor     edx, edx
 * 000000014042CFBE: mov     ecx, 49h ; 'I'
 * 000000014042CFC3: wrmsr
 * 000000014042CFC5: movzx   edx, word ptr gs:860h
 * 000000014042CFCE: test    edx, 2
 * 000000014042CFD4: jz      loc_14042D111
 * 000000014042CFDA: call    loc_14042D0ED
 * 000000014042CFDF: add     rsp, 8
 * 000000014042CFE3: call    loc_14042D0F6
 * 000000014042CFE8: add     rsp, 8
 * 000000014042CFEC: call    loc_14042CFDF
 * 000000014042CFF1: add     rsp, 8
 * 000000014042CFF5: call    loc_14042CFE8
 * 000000014042CFFA: add     rsp, 8
 * 000000014042CFFE: call    loc_14042CFF1
 * 000000014042D003: add     rsp, 8
 * 000000014042D007: call    loc_14042CFFA
 * 000000014042D00C: add     rsp, 8
 * 000000014042D010: call    loc_14042D003
 * 000000014042D015: add     rsp, 8
 * 000000014042D019: call    loc_14042D00C
 * 000000014042D01E: add     rsp, 8
 * 000000014042D022: call    loc_14042D015
 * 000000014042D027: add     rsp, 8
 * 000000014042D02B: call    loc_14042D01E
 * 000000014042D030: add     rsp, 8
 * 000000014042D034: call    loc_14042D027
 * 000000014042D039: add     rsp, 8
 * 000000014042D03D: call    loc_14042D030
 * 000000014042D042: add     rsp, 8
 * 000000014042D046: call    loc_14042D039
 * 000000014042D04B: add     rsp, 8
 * 000000014042D04F: call    loc_14042D042
 * 000000014042D054: add     rsp, 8
 * 000000014042D058: call    loc_14042D04B
 * 000000014042D05D: add     rsp, 8
 * 000000014042D061: call    loc_14042D054
 * 000000014042D066: add     rsp, 8
 * 000000014042D06A: call    loc_14042D05D
 * 000000014042D06F: add     rsp, 8
 * 000000014042D073: call    loc_14042D066
 * 000000014042D078: add     rsp, 8
 * 000000014042D07C: call    loc_14042D06F
 * 000000014042D081: add     rsp, 8
 * 000000014042D085: call    loc_14042D078
 * 000000014042D08A: add     rsp, 8
 * 000000014042D08E: call    loc_14042D081
 * 000000014042D093: add     rsp, 8
 * 000000014042D097: call    loc_14042D08A
 * 000000014042D09C: add     rsp, 8
 * 000000014042D0A0: call    loc_14042D093
 * 000000014042D0A5: add     rsp, 8
 * 000000014042D0A9: call    loc_14042D09C
 * 000000014042D0AE: add     rsp, 8
 * 000000014042D0B2: call    loc_14042D0A5
 * 000000014042D0B7: add     rsp, 8
 * 000000014042D0BB: call    loc_14042D0AE
 * 000000014042D0C0: add     rsp, 8
 * 000000014042D0C4: call    loc_14042D0B7
 * 000000014042D0C9: add     rsp, 8
 * 000000014042D0CD: call    loc_14042D0C0
 * 000000014042D0D2: add     rsp, 8
 * 000000014042D0D6: call    loc_14042D0C9
 * 000000014042D0DB: add     rsp, 8
 * 000000014042D0DF: call    loc_14042D0D2
 * 000000014042D0E4: add     rsp, 8
 * 000000014042D0E8: call    loc_14042D0DB
 * 000000014042D0ED: add     rsp, 8
 * 000000014042D0F1: call    loc_14042D0E4
 * 000000014042D0F6: add     rsp, 8
 * 000000014042D0FA: mov     eax, 0DADAh
 * 000000014042D0FF: test    byte ptr gs:862h, 8
 * 000000014042D108: jz      short loc_14042D111
 * 000000014042D10A: mov     al, 20h ; ' '
 * 000000014042D10C: incsspq rax
 * 000000014042D111: test    edx, 200h
 * 000000014042D117: jz      short loc_14042D11E
 * 000000014042D119: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D11E: lfence
 * 000000014042D121: mov     byte ptr gs:856h, 0
 * 000000014042D12A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D131: jz      short loc_14042D152
 * 000000014042D133: mov     ecx, 6A7h
 * 000000014042D138: rdmsr
 * 000000014042D13A: cmp     edx, 0
 * 000000014042D13D: jz      short loc_14042D152
 * 000000014042D13F: mov     ecx, edx
 * 000000014042D141: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D147: cmp     edx, ecx
 * 000000014042D149: jz      short loc_14042D152
 * 000000014042D14B: mov     ecx, 6A7h
 * 000000014042D150: wrmsr
 * 000000014042D152: test    byte ptr [r10+3], 3
 * 000000014042D157: mov     [rbp+0E8h+var_68], 0
 * 000000014042D160: jz      short loc_14042D167
 * 000000014042D162: call    KiSaveDebugRegisterState
 * 000000014042D167: cld
 * 000000014042D168: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D16C: ldmxcsr dword ptr gs:180h
 * 000000014042D175: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D179: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D17D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D181: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D185: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D189: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D18D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D194: jz      short loc_14042D1A2
 * 000000014042D196: test    [rbp+0E8h+arg_0], 1
 * 000000014042D19D: jz      short loc_14042D1A2
 * 000000014042D19F: stac
 * 000000014042D1A2: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D1AC: jz      short loc_14042D1AF
 * 000000014042D1AE: sti
 * 000000014042D1AF: mov     ecx, 0C0000095h
 * 000000014042D1B4: xor     edx, edx
 * 000000014042D1B6: mov     r8, [rbp+0E8h]
 * 000000014042D1BD: dec     r8
 * 000000014042D1C0: call    KiExceptionDispatch
 * 000000014042D1C5: nop
 * 000000014042D1C6: retn
 */
