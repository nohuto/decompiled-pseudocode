/*
 * XREFs of sub_14042FCC0 @ 0x14042FCC0
 * Callers:
 *     sub_140AB57C0 @ 0x140AB57C0 (sub_140AB57C0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042FCC0 @ 0x14042FCC0 (sub_14042FCC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042FCC0 @ 0x14042FCC0
 * Reason: Hex-Rays returned no pseudocode for 0x14042FCC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042FCC0: push    rbp
 * 000000014042FCC1: sub     rsp, 158h
 * 000000014042FCC8: lea     rbp, [rsp+80h]
 * 000000014042FCD0: mov     [rbp+0D8h+var_12D], 1
 * 000000014042FCD4: mov     [rbp+0D8h+var_128], rax
 * 000000014042FCD8: mov     [rbp+0D8h+var_120], rcx
 * 000000014042FCDC: mov     [rbp+0D8h+var_118], rdx
 * 000000014042FCE0: mov     [rbp+0D8h+var_110], r8
 * 000000014042FCE4: mov     [rbp+0D8h+var_108], r9
 * 000000014042FCE8: mov     [rbp+0D8h+var_100], r10
 * 000000014042FCEC: mov     [rbp+0D8h+var_F8], r11
 * 000000014042FCF0: test    [rbp+0D8h+arg_8], 1
 * 000000014042FCF7: jnz     short loc_14042FD33
 * 000000014042FCF9: xor     edx, edx
 * 000000014042FCFB: rdsspq  rdx
 * 000000014042FD00: mov     [rbp+0D8h+var_80], rdx
 * 000000014042FD04: lfence
 * 000000014042FD07: test    word ptr gs:860h, 1
 * 000000014042FD12: jnz     short loc_14042FD1C
 * 000000014042FD14: lfence
 * 000000014042FD17: jmp     loc_14042FF7B
 * 000000014042FD1C: movzx   eax, word ptr gs:864h
 * 000000014042FD25: mov     ecx, 48h ; 'H'
 * 000000014042FD2A: xor     edx, edx
 * 000000014042FD2C: wrmsr
 * 000000014042FD2E: jmp     loc_14042FF7B
 * 000000014042FD33: test    cs:byte_140E01840, 1
 * 000000014042FD3A: jnz     short loc_14042FD3F
 * 000000014042FD3C: swapgs
 * 000000014042FD3F: lfence
 * 000000014042FD42: mov     rcx, gs:9828h
 * 000000014042FD4B: test    rcx, rcx
 * 000000014042FD4E: jz      short loc_14042FD6F
 * 000000014042FD50: rdsspq  rdx
 * 000000014042FD55: mov     r10, gs:9820h
 * 000000014042FD5E: add     r10, 8
 * 000000014042FD62: cmp     rdx, r10
 * 000000014042FD65: jnz     short loc_14042FD6F
 * 000000014042FD67: rstorssp qword ptr [rcx]
 * 000000014042FD6B: saveprevssp
 * 000000014042FD6F: mov     r10, gs:188h
 * 000000014042FD78: mov     rcx, gs:188h
 * 000000014042FD81: mov     rcx, [rcx+220h]
 * 000000014042FD88: mov     rcx, [rcx+9E0h]
 * 000000014042FD8F: mov     gs:858h, rcx
 * 000000014042FD98: mov     cx, gs:850h
 * 000000014042FDA1: mov     gs:852h, cx
 * 000000014042FDAA: mov     cx, gs:860h
 * 000000014042FDB3: mov     gs:854h, cx
 * 000000014042FDBC: movzx   eax, word ptr gs:866h
 * 000000014042FDC5: cmp     gs:864h, ax
 * 000000014042FDCE: jz      short loc_14042FDE2
 * 000000014042FDD0: mov     gs:864h, ax
 * 000000014042FDD9: mov     ecx, 48h ; 'H'
 * 000000014042FDDE: xor     edx, edx
 * 000000014042FDE0: wrmsr
 * 000000014042FDE2: movzx   edx, word ptr gs:860h
 * 000000014042FDEB: test    edx, 8
 * 000000014042FDF1: jz      short loc_14042FE0A
 * 000000014042FDF3: mov     eax, 1
 * 000000014042FDF8: xor     edx, edx
 * 000000014042FDFA: mov     ecx, 49h ; 'I'
 * 000000014042FDFF: wrmsr
 * 000000014042FE01: movzx   edx, word ptr gs:860h
 * 000000014042FE0A: test    edx, 2
 * 000000014042FE10: jz      loc_14042FF4D
 * 000000014042FE16: call    loc_14042FF29
 * 000000014042FE1B: add     rsp, 8
 * 000000014042FE1F: call    loc_14042FF32
 * 000000014042FE24: add     rsp, 8
 * 000000014042FE28: call    loc_14042FE1B
 * 000000014042FE2D: add     rsp, 8
 * 000000014042FE31: call    loc_14042FE24
 * 000000014042FE36: add     rsp, 8
 * 000000014042FE3A: call    loc_14042FE2D
 * 000000014042FE3F: add     rsp, 8
 * 000000014042FE43: call    loc_14042FE36
 * 000000014042FE48: add     rsp, 8
 * 000000014042FE4C: call    loc_14042FE3F
 * 000000014042FE51: add     rsp, 8
 * 000000014042FE55: call    loc_14042FE48
 * 000000014042FE5A: add     rsp, 8
 * 000000014042FE5E: call    loc_14042FE51
 * 000000014042FE63: add     rsp, 8
 * 000000014042FE67: call    loc_14042FE5A
 * 000000014042FE6C: add     rsp, 8
 * 000000014042FE70: call    loc_14042FE63
 * 000000014042FE75: add     rsp, 8
 * 000000014042FE79: call    loc_14042FE6C
 * 000000014042FE7E: add     rsp, 8
 * 000000014042FE82: call    loc_14042FE75
 * 000000014042FE87: add     rsp, 8
 * 000000014042FE8B: call    loc_14042FE7E
 * 000000014042FE90: add     rsp, 8
 * 000000014042FE94: call    loc_14042FE87
 * 000000014042FE99: add     rsp, 8
 * 000000014042FE9D: call    loc_14042FE90
 * 000000014042FEA2: add     rsp, 8
 * 000000014042FEA6: call    loc_14042FE99
 * 000000014042FEAB: add     rsp, 8
 * 000000014042FEAF: call    loc_14042FEA2
 * 000000014042FEB4: add     rsp, 8
 * 000000014042FEB8: call    loc_14042FEAB
 * 000000014042FEBD: add     rsp, 8
 * 000000014042FEC1: call    loc_14042FEB4
 * 000000014042FEC6: add     rsp, 8
 * 000000014042FECA: call    loc_14042FEBD
 * 000000014042FECF: add     rsp, 8
 * 000000014042FED3: call    loc_14042FEC6
 * 000000014042FED8: add     rsp, 8
 * 000000014042FEDC: call    loc_14042FECF
 * 000000014042FEE1: add     rsp, 8
 * 000000014042FEE5: call    loc_14042FED8
 * 000000014042FEEA: add     rsp, 8
 * 000000014042FEEE: call    loc_14042FEE1
 * 000000014042FEF3: add     rsp, 8
 * 000000014042FEF7: call    loc_14042FEEA
 * 000000014042FEFC: add     rsp, 8
 * 000000014042FF00: call    loc_14042FEF3
 * 000000014042FF05: add     rsp, 8
 * 000000014042FF09: call    loc_14042FEFC
 * 000000014042FF0E: add     rsp, 8
 * 000000014042FF12: call    loc_14042FF05
 * 000000014042FF17: add     rsp, 8
 * 000000014042FF1B: call    loc_14042FF0E
 * 000000014042FF20: add     rsp, 8
 * 000000014042FF24: call    loc_14042FF17
 * 000000014042FF29: add     rsp, 8
 * 000000014042FF2D: call    loc_14042FF20
 * 000000014042FF32: add     rsp, 8
 * 000000014042FF36: mov     eax, 0DADAh
 * 000000014042FF3B: test    byte ptr gs:862h, 8
 * 000000014042FF44: jz      short loc_14042FF4D
 * 000000014042FF46: mov     al, 20h ; ' '
 * 000000014042FF48: incsspq rax
 * 000000014042FF4D: test    edx, 200h
 * 000000014042FF53: jz      short loc_14042FF5A
 * 000000014042FF55: call    sub_1404357C0
 * 000000014042FF5A: lfence
 * 000000014042FF5D: mov     byte ptr gs:856h, 0
 * 000000014042FF66: test    byte ptr [r10+3], 3
 * 000000014042FF6B: mov     [rbp+0D8h+var_58], 0
 * 000000014042FF74: jz      short loc_14042FF7B
 * 000000014042FF76: call    sub_14041F920
 * 000000014042FF7B: cld
 * 000000014042FF7C: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042FF80: ldmxcsr dword ptr gs:180h
 * 000000014042FF89: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042FF8D: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042FF91: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042FF95: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042FF99: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042FF9D: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042FFA1: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042FFA8: jz      short loc_14042FFB6
 * 000000014042FFAA: test    [rbp+0D8h+arg_8], 1
 * 000000014042FFB1: jz      short loc_14042FFB6
 * 000000014042FFB3: stac
 * 000000014042FFB6: mov     eax, [rbp+0E0h]
 * 000000014042FFBC: test    [rbp+0D8h+arg_10], 200h
 * 000000014042FFC6: jz      short loc_14042FFC9
 * 000000014042FFC8: sti
 * 000000014042FFC9: mov     ecx, 10000001h
 * 000000014042FFCE: mov     edx, 2
 * 000000014042FFD3: mov     r9d, [rbp+0E0h]
 * 000000014042FFDA: and     r9d, 0FFFFh
 * 000000014042FFE1: xor     r10, r10
 * 000000014042FFE4: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042FFEB: call    sub_140434E40
 * 000000014042FFF0: nop
 * 000000014042FFF1: retn
 */
