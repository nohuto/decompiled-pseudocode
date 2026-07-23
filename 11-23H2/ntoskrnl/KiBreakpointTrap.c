/*
 * XREFs of KiBreakpointTrap @ 0x14042CF00
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140AF62C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14042CF00 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14042CF00
 * Reason: Hex-Rays returned no pseudocode for 0x14042CF00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042CF00: sub     rsp, 8
 * 000000014042CF04: push    rbp
 * 000000014042CF05: sub     rsp, 158h
 * 000000014042CF0C: lea     rbp, [rsp+80h]
 * 000000014042CF14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042CF18: mov     [rbp+0E8h+var_138], rax
 * 000000014042CF1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042CF20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042CF24: mov     [rbp+0E8h+var_120], r8
 * 000000014042CF28: mov     [rbp+0E8h+var_118], r9
 * 000000014042CF2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042CF30: mov     [rbp+0E8h+var_108], r11
 * 000000014042CF34: test    [rbp+0E8h+arg_0], 1
 * 000000014042CF3B: jnz     short loc_14042CF77
 * 000000014042CF3D: xor     edx, edx
 * 000000014042CF3F: rdsspq  rdx
 * 000000014042CF44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042CF48: lfence
 * 000000014042CF4B: test    word ptr gs:860h, 1
 * 000000014042CF56: jnz     short loc_14042CF60
 * 000000014042CF58: lfence
 * 000000014042CF5B: jmp     loc_14042D1E7
 * 000000014042CF60: movzx   eax, word ptr gs:864h
 * 000000014042CF69: mov     ecx, 48h ; 'H'
 * 000000014042CF6E: xor     edx, edx
 * 000000014042CF70: wrmsr
 * 000000014042CF72: jmp     loc_14042D1E7
 * 000000014042CF77: test    cs:KiKvaShadow, 1
 * 000000014042CF7E: jnz     short loc_14042CF83
 * 000000014042CF80: swapgs
 * 000000014042CF83: lfence
 * 000000014042CF86: mov     rcx, gs:95A8h
 * 000000014042CF8F: test    rcx, rcx
 * 000000014042CF92: jz      short loc_14042CFB3
 * 000000014042CF94: rdsspq  rdx
 * 000000014042CF99: mov     r10, gs:95A0h
 * 000000014042CFA2: add     r10, 8
 * 000000014042CFA6: cmp     rdx, r10
 * 000000014042CFA9: jnz     short loc_14042CFB3
 * 000000014042CFAB: rstorssp qword ptr [rcx]
 * 000000014042CFAF: saveprevssp
 * 000000014042CFB3: mov     r10, gs:188h
 * 000000014042CFBC: mov     rcx, gs:188h
 * 000000014042CFC5: mov     rcx, [rcx+220h]
 * 000000014042CFCC: mov     rcx, [rcx+9E0h]
 * 000000014042CFD3: mov     gs:858h, rcx
 * 000000014042CFDC: mov     cx, gs:850h
 * 000000014042CFE5: mov     gs:852h, cx
 * 000000014042CFEE: mov     cx, gs:860h
 * 000000014042CFF7: mov     gs:854h, cx
 * 000000014042D000: movzx   eax, word ptr gs:866h
 * 000000014042D009: cmp     gs:864h, ax
 * 000000014042D012: jz      short loc_14042D026
 * 000000014042D014: mov     gs:864h, ax
 * 000000014042D01D: mov     ecx, 48h ; 'H'
 * 000000014042D022: xor     edx, edx
 * 000000014042D024: wrmsr
 * 000000014042D026: movzx   edx, word ptr gs:860h
 * 000000014042D02F: test    edx, 8
 * 000000014042D035: jz      short loc_14042D04E
 * 000000014042D037: mov     eax, 1
 * 000000014042D03C: xor     edx, edx
 * 000000014042D03E: mov     ecx, 49h ; 'I'
 * 000000014042D043: wrmsr
 * 000000014042D045: movzx   edx, word ptr gs:860h
 * 000000014042D04E: test    edx, 2
 * 000000014042D054: jz      loc_14042D191
 * 000000014042D05A: call    loc_14042D16D
 * 000000014042D05F: add     rsp, 8
 * 000000014042D063: call    loc_14042D176
 * 000000014042D068: add     rsp, 8
 * 000000014042D06C: call    loc_14042D05F
 * 000000014042D071: add     rsp, 8
 * 000000014042D075: call    loc_14042D068
 * 000000014042D07A: add     rsp, 8
 * 000000014042D07E: call    loc_14042D071
 * 000000014042D083: add     rsp, 8
 * 000000014042D087: call    loc_14042D07A
 * 000000014042D08C: add     rsp, 8
 * 000000014042D090: call    loc_14042D083
 * 000000014042D095: add     rsp, 8
 * 000000014042D099: call    loc_14042D08C
 * 000000014042D09E: add     rsp, 8
 * 000000014042D0A2: call    loc_14042D095
 * 000000014042D0A7: add     rsp, 8
 * 000000014042D0AB: call    loc_14042D09E
 * 000000014042D0B0: add     rsp, 8
 * 000000014042D0B4: call    loc_14042D0A7
 * 000000014042D0B9: add     rsp, 8
 * 000000014042D0BD: call    loc_14042D0B0
 * 000000014042D0C2: add     rsp, 8
 * 000000014042D0C6: call    loc_14042D0B9
 * 000000014042D0CB: add     rsp, 8
 * 000000014042D0CF: call    loc_14042D0C2
 * 000000014042D0D4: add     rsp, 8
 * 000000014042D0D8: call    loc_14042D0CB
 * 000000014042D0DD: add     rsp, 8
 * 000000014042D0E1: call    loc_14042D0D4
 * 000000014042D0E6: add     rsp, 8
 * 000000014042D0EA: call    loc_14042D0DD
 * 000000014042D0EF: add     rsp, 8
 * 000000014042D0F3: call    loc_14042D0E6
 * 000000014042D0F8: add     rsp, 8
 * 000000014042D0FC: call    loc_14042D0EF
 * 000000014042D101: add     rsp, 8
 * 000000014042D105: call    loc_14042D0F8
 * 000000014042D10A: add     rsp, 8
 * 000000014042D10E: call    loc_14042D101
 * 000000014042D113: add     rsp, 8
 * 000000014042D117: call    loc_14042D10A
 * 000000014042D11C: add     rsp, 8
 * 000000014042D120: call    loc_14042D113
 * 000000014042D125: add     rsp, 8
 * 000000014042D129: call    loc_14042D11C
 * 000000014042D12E: add     rsp, 8
 * 000000014042D132: call    loc_14042D125
 * 000000014042D137: add     rsp, 8
 * 000000014042D13B: call    loc_14042D12E
 * 000000014042D140: add     rsp, 8
 * 000000014042D144: call    loc_14042D137
 * 000000014042D149: add     rsp, 8
 * 000000014042D14D: call    loc_14042D140
 * 000000014042D152: add     rsp, 8
 * 000000014042D156: call    loc_14042D149
 * 000000014042D15B: add     rsp, 8
 * 000000014042D15F: call    loc_14042D152
 * 000000014042D164: add     rsp, 8
 * 000000014042D168: call    loc_14042D15B
 * 000000014042D16D: add     rsp, 8
 * 000000014042D171: call    loc_14042D164
 * 000000014042D176: add     rsp, 8
 * 000000014042D17A: mov     eax, 0DADAh
 * 000000014042D17F: test    byte ptr gs:862h, 8
 * 000000014042D188: jz      short loc_14042D191
 * 000000014042D18A: mov     al, 20h ; ' '
 * 000000014042D18C: incsspq rax
 * 000000014042D191: test    edx, 200h
 * 000000014042D197: jz      short loc_14042D19E
 * 000000014042D199: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D19E: lfence
 * 000000014042D1A1: mov     byte ptr gs:856h, 0
 * 000000014042D1AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D1B1: jz      short loc_14042D1D2
 * 000000014042D1B3: mov     ecx, 6A7h
 * 000000014042D1B8: rdmsr
 * 000000014042D1BA: cmp     edx, 0
 * 000000014042D1BD: jz      short loc_14042D1D2
 * 000000014042D1BF: mov     ecx, edx
 * 000000014042D1C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D1C7: cmp     edx, ecx
 * 000000014042D1C9: jz      short loc_14042D1D2
 * 000000014042D1CB: mov     ecx, 6A7h
 * 000000014042D1D0: wrmsr
 * 000000014042D1D2: test    byte ptr [r10+3], 3
 * 000000014042D1D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042D1E0: jz      short loc_14042D1E7
 * 000000014042D1E2: call    KiSaveDebugRegisterState
 * 000000014042D1E7: cld
 * 000000014042D1E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D1EC: ldmxcsr dword ptr gs:180h
 * 000000014042D1F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D1F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D1FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D201: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D205: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D209: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D20D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D214: jz      short loc_14042D222
 * 000000014042D216: test    [rbp+0E8h+arg_0], 1
 * 000000014042D21D: jz      short loc_14042D222
 * 000000014042D21F: stac
 * 000000014042D222: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D22C: jz      short loc_14042D22F
 * 000000014042D22E: sti
 * 000000014042D22F: mov     ecx, 80000003h
 * 000000014042D234: mov     edx, 1
 * 000000014042D239: mov     r8, [rbp+0E8h]
 * 000000014042D240: dec     r8
 * 000000014042D243: mov     r9d, 0
 * 000000014042D249: call    KiExceptionDispatch
 * 000000014042D24E: nop
 * 000000014042D24F: retn
 */
