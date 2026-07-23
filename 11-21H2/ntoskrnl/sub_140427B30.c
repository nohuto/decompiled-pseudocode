/*
 * XREFs of sub_140427B30 @ 0x140427B30
 * Callers:
 *     sub_140AB5F40 @ 0x140AB5F40 (sub_140AB5F40.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140427B30 @ 0x140427B30
 * Reason: Hex-Rays returned no pseudocode for 0x140427B30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427B30: sub     rsp, 8
 * 0000000140427B34: push    rbp
 * 0000000140427B35: push    rsi
 * 0000000140427B36: sub     rsp, 150h
 * 0000000140427B3D: lea     rbp, [rsp+80h]
 * 0000000140427B45: mov     [rbp+0E8h+var_13D], 0
 * 0000000140427B49: mov     [rbp+0E8h+var_138], rax
 * 0000000140427B4D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140427B51: mov     [rbp+0E8h+var_128], rdx
 * 0000000140427B55: mov     [rbp+0E8h+var_120], r8
 * 0000000140427B59: mov     [rbp+0E8h+var_118], r9
 * 0000000140427B5D: mov     [rbp+0E8h+var_110], r10
 * 0000000140427B61: mov     [rbp+0E8h+var_108], r11
 * 0000000140427B65: test    [rbp+0E8h+arg_0], 1
 * 0000000140427B6C: jnz     short loc_140427BA8
 * 0000000140427B6E: xor     edx, edx
 * 0000000140427B70: rdsspq  rdx
 * 0000000140427B75: mov     [rbp+0E8h+var_90], rdx
 * 0000000140427B79: lfence
 * 0000000140427B7C: test    word ptr gs:860h, 1
 * 0000000140427B87: jnz     short loc_140427B91
 * 0000000140427B89: lfence
 * 0000000140427B8C: jmp     loc_140427DF0
 * 0000000140427B91: movzx   eax, word ptr gs:864h
 * 0000000140427B9A: mov     ecx, 48h ; 'H'
 * 0000000140427B9F: xor     edx, edx
 * 0000000140427BA1: wrmsr
 * 0000000140427BA3: jmp     loc_140427DF0
 * 0000000140427BA8: test    cs:byte_140E01840, 1
 * 0000000140427BAF: jnz     short loc_140427BB4
 * 0000000140427BB1: swapgs
 * 0000000140427BB4: lfence
 * 0000000140427BB7: mov     rcx, gs:9828h
 * 0000000140427BC0: test    rcx, rcx
 * 0000000140427BC3: jz      short loc_140427BE4
 * 0000000140427BC5: rdsspq  rdx
 * 0000000140427BCA: mov     r10, gs:9820h
 * 0000000140427BD3: add     r10, 8
 * 0000000140427BD7: cmp     rdx, r10
 * 0000000140427BDA: jnz     short loc_140427BE4
 * 0000000140427BDC: rstorssp qword ptr [rcx]
 * 0000000140427BE0: saveprevssp
 * 0000000140427BE4: mov     r10, gs:188h
 * 0000000140427BED: mov     rcx, gs:188h
 * 0000000140427BF6: mov     rcx, [rcx+220h]
 * 0000000140427BFD: mov     rcx, [rcx+9E0h]
 * 0000000140427C04: mov     gs:858h, rcx
 * 0000000140427C0D: mov     cx, gs:850h
 * 0000000140427C16: mov     gs:852h, cx
 * 0000000140427C1F: mov     cx, gs:860h
 * 0000000140427C28: mov     gs:854h, cx
 * 0000000140427C31: movzx   eax, word ptr gs:866h
 * 0000000140427C3A: cmp     gs:864h, ax
 * 0000000140427C43: jz      short loc_140427C57
 * 0000000140427C45: mov     gs:864h, ax
 * 0000000140427C4E: mov     ecx, 48h ; 'H'
 * 0000000140427C53: xor     edx, edx
 * 0000000140427C55: wrmsr
 * 0000000140427C57: movzx   edx, word ptr gs:860h
 * 0000000140427C60: test    edx, 8
 * 0000000140427C66: jz      short loc_140427C7F
 * 0000000140427C68: mov     eax, 1
 * 0000000140427C6D: xor     edx, edx
 * 0000000140427C6F: mov     ecx, 49h ; 'I'
 * 0000000140427C74: wrmsr
 * 0000000140427C76: movzx   edx, word ptr gs:860h
 * 0000000140427C7F: test    edx, 2
 * 0000000140427C85: jz      loc_140427DC2
 * 0000000140427C8B: call    loc_140427D9E
 * 0000000140427C90: add     rsp, 8
 * 0000000140427C94: call    loc_140427DA7
 * 0000000140427C99: add     rsp, 8
 * 0000000140427C9D: call    loc_140427C90
 * 0000000140427CA2: add     rsp, 8
 * 0000000140427CA6: call    loc_140427C99
 * 0000000140427CAB: add     rsp, 8
 * 0000000140427CAF: call    loc_140427CA2
 * 0000000140427CB4: add     rsp, 8
 * 0000000140427CB8: call    loc_140427CAB
 * 0000000140427CBD: add     rsp, 8
 * 0000000140427CC1: call    loc_140427CB4
 * 0000000140427CC6: add     rsp, 8
 * 0000000140427CCA: call    loc_140427CBD
 * 0000000140427CCF: add     rsp, 8
 * 0000000140427CD3: call    loc_140427CC6
 * 0000000140427CD8: add     rsp, 8
 * 0000000140427CDC: call    loc_140427CCF
 * 0000000140427CE1: add     rsp, 8
 * 0000000140427CE5: call    loc_140427CD8
 * 0000000140427CEA: add     rsp, 8
 * 0000000140427CEE: call    loc_140427CE1
 * 0000000140427CF3: add     rsp, 8
 * 0000000140427CF7: call    loc_140427CEA
 * 0000000140427CFC: add     rsp, 8
 * 0000000140427D00: call    loc_140427CF3
 * 0000000140427D05: add     rsp, 8
 * 0000000140427D09: call    loc_140427CFC
 * 0000000140427D0E: add     rsp, 8
 * 0000000140427D12: call    loc_140427D05
 * 0000000140427D17: add     rsp, 8
 * 0000000140427D1B: call    loc_140427D0E
 * 0000000140427D20: add     rsp, 8
 * 0000000140427D24: call    loc_140427D17
 * 0000000140427D29: add     rsp, 8
 * 0000000140427D2D: call    loc_140427D20
 * 0000000140427D32: add     rsp, 8
 * 0000000140427D36: call    loc_140427D29
 * 0000000140427D3B: add     rsp, 8
 * 0000000140427D3F: call    loc_140427D32
 * 0000000140427D44: add     rsp, 8
 * 0000000140427D48: call    loc_140427D3B
 * 0000000140427D4D: add     rsp, 8
 * 0000000140427D51: call    loc_140427D44
 * 0000000140427D56: add     rsp, 8
 * 0000000140427D5A: call    loc_140427D4D
 * 0000000140427D5F: add     rsp, 8
 * 0000000140427D63: call    loc_140427D56
 * 0000000140427D68: add     rsp, 8
 * 0000000140427D6C: call    loc_140427D5F
 * 0000000140427D71: add     rsp, 8
 * 0000000140427D75: call    loc_140427D68
 * 0000000140427D7A: add     rsp, 8
 * 0000000140427D7E: call    loc_140427D71
 * 0000000140427D83: add     rsp, 8
 * 0000000140427D87: call    loc_140427D7A
 * 0000000140427D8C: add     rsp, 8
 * 0000000140427D90: call    loc_140427D83
 * 0000000140427D95: add     rsp, 8
 * 0000000140427D99: call    loc_140427D8C
 * 0000000140427D9E: add     rsp, 8
 * 0000000140427DA2: call    loc_140427D95
 * 0000000140427DA7: add     rsp, 8
 * 0000000140427DAB: mov     eax, 0DADAh
 * 0000000140427DB0: test    byte ptr gs:862h, 8
 * 0000000140427DB9: jz      short loc_140427DC2
 * 0000000140427DBB: mov     al, 20h ; ' '
 * 0000000140427DBD: incsspq rax
 * 0000000140427DC2: test    edx, 200h
 * 0000000140427DC8: jz      short loc_140427DCF
 * 0000000140427DCA: call    sub_1404357C0
 * 0000000140427DCF: lfence
 * 0000000140427DD2: mov     byte ptr gs:856h, 0
 * 0000000140427DDB: test    byte ptr [r10+3], 3
 * 0000000140427DE0: mov     [rbp+0E8h+var_68], 0
 * 0000000140427DE9: jz      short loc_140427DF0
 * 0000000140427DEB: call    sub_14041F920
 * 0000000140427DF0: cld
 * 0000000140427DF1: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140427DF5: ldmxcsr dword ptr gs:180h
 * 0000000140427DFE: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140427E02: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140427E06: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140427E0A: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140427E0E: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140427E12: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140427E16: xor     esi, esi
 * 0000000140427E18: inc     dword ptr gs:82C0h
 * 0000000140427E20: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140427E27: jz      short loc_140427E2C
 * 0000000140427E29: clac
 * 0000000140427E2C: mov     ecx, 2
 * 0000000140427E31: cmp     cs:dword_140D06B08, 0
 * 0000000140427E38: jz      short loc_140427E41
 * 0000000140427E3A: call    sub_140569E70
 * 0000000140427E3F: jmp     short loc_140427E49
 * 0000000140427E41: mov     rax, cr8
 * 0000000140427E45: mov     cr8, rcx
 * 0000000140427E49: mov     [rbp+0E8h+var_13F], al
 * 0000000140427E4C: mov     rcx, rsi
 * 0000000140427E4F: call    HalPerformEndOfInterrupt
 * 0000000140427E54: sti
 * 0000000140427E55: cmp     byte ptr gs:187h, 0
 * 0000000140427E5E: jnz     short loc_140427E77
 * 0000000140427E60: mov     al, [rbp+0E8h+var_13F]
 * 0000000140427E63: mov     rcx, gs:188h
 * 0000000140427E6C: mov     [rcx+186h], al
 * 0000000140427E72: call    sub_140428B10
 * 0000000140427E77: cli
 * 0000000140427E78: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140427E7C: cmp     cs:dword_140D06B08, 0
 * 0000000140427E83: jz      short loc_140427E8C
 * 0000000140427E85: call    sub_140569E70
 * 0000000140427E8A: jmp     short loc_140427E90
 * 0000000140427E8C: mov     cr8, rcx
 * 0000000140427E90: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140427E97: cli
 * 0000000140427E98: test    [rbp+0E8h+arg_0], 1
 * 0000000140427E9F: jz      loc_14042818D
 * 0000000140427EA5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140427EAC: jz      short loc_140427EB1
 * 0000000140427EAE: stac
 * 0000000140427EB1: mov     rcx, gs:188h
 * 0000000140427EBA: test    byte ptr [rcx+0C2h], 3
 * 0000000140427EC1: jz      short loc_140427EDE
 * 0000000140427EC3: mov     ecx, 1
 * 0000000140427EC8: mov     cr8, rcx
 * 0000000140427ECC: sti
 * 0000000140427ECD: call    sub_140425700
 * 0000000140427ED2: cli
 * 0000000140427ED3: mov     ecx, 0
 * 0000000140427ED8: mov     cr8, rcx
 * 0000000140427EDC: jmp     short loc_140427EB1
 * 0000000140427EDE: test    byte ptr gs:86Ch, 2
 * 0000000140427EE7: jz      short loc_140427EF0
 * 0000000140427EE9: xor     ecx, ecx
 * 0000000140427EEB: call    sub_14020D230
 * 0000000140427EF0: mov     rcx, gs:188h
 * 0000000140427EF9: test    dword ptr [rcx], 8000000h
 * 0000000140427EFF: jz      short loc_140427F06
 * 0000000140427F01: call    sub_1404206B0
 * 0000000140427F06: mov     rcx, gs:188h
 * 0000000140427F0F: test    dword ptr [rcx], 10000h
 * 0000000140427F15: jz      short loc_140427F2B
 * 0000000140427F17: test    byte ptr [rcx+2], 1
 * 0000000140427F1B: jz      short loc_140427F2B
 * 0000000140427F1D: call    sub_140571820
 * 0000000140427F22: mov     rcx, gs:188h
 * 0000000140427F2B: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427F2F: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427F37: jz      short loc_140427F3E
 * 0000000140427F39: call    sub_14041F8A0
 * 0000000140427F3E: mov     rcx, gs:188h
 * 0000000140427F47: bt      dword ptr [rcx+74h], 16h
 * 0000000140427F4C: jnb     short loc_140427F78
 * 0000000140427F4E: xor     ecx, ecx
 * 0000000140427F50: rdsspq  rcx
 * 0000000140427F55: mov     r8, gs:9828h
 * 0000000140427F5E: add     r8, 8
 * 0000000140427F62: cmp     rcx, r8
 * 0000000140427F65: jnz     short loc_140427F78
 * 0000000140427F67: mov     rcx, gs:9820h
 * 0000000140427F70: rstorssp qword ptr [rcx]
 * 0000000140427F74: saveprevssp
 * 0000000140427F78: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427F7C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427F80: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427F84: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427F88: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427F8C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427F90: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427F94: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427F98: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427F9C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427FA0: mov     byte ptr gs:856h, 0
 * 0000000140427FA9: movzx   eax, word ptr gs:86Ah
 * 0000000140427FB2: cmp     gs:864h, ax
 * 0000000140427FBB: jz      short loc_140427FCF
 * 0000000140427FBD: mov     gs:864h, ax
 * 0000000140427FC6: mov     ecx, 48h ; 'H'
 * 0000000140427FCB: xor     edx, edx
 * 0000000140427FCD: wrmsr
 * 0000000140427FCF: btr     word ptr gs:860h, 2
 * 0000000140427FDA: jnb     short loc_140427FEA
 * 0000000140427FDC: mov     eax, 1
 * 0000000140427FE1: xor     edx, edx
 * 0000000140427FE3: mov     ecx, 49h ; 'I'
 * 0000000140427FE8: wrmsr
 * 0000000140427FEA: btr     word ptr gs:860h, 5
 * 0000000140427FF5: jnb     loc_140428132
 * 0000000140427FFB: call    loc_14042810E
 * 0000000140428000: add     rsp, 8
 * 0000000140428004: call    loc_140428117
 * 0000000140428009: add     rsp, 8
 * 000000014042800D: call    loc_140428000
 * 0000000140428012: add     rsp, 8
 * 0000000140428016: call    loc_140428009
 * 000000014042801B: add     rsp, 8
 * 000000014042801F: call    loc_140428012
 * 0000000140428024: add     rsp, 8
 * 0000000140428028: call    loc_14042801B
 * 000000014042802D: add     rsp, 8
 * 0000000140428031: call    loc_140428024
 * 0000000140428036: add     rsp, 8
 * 000000014042803A: call    loc_14042802D
 * 000000014042803F: add     rsp, 8
 * 0000000140428043: call    loc_140428036
 * 0000000140428048: add     rsp, 8
 * 000000014042804C: call    loc_14042803F
 * 0000000140428051: add     rsp, 8
 * 0000000140428055: call    loc_140428048
 * 000000014042805A: add     rsp, 8
 * 000000014042805E: call    loc_140428051
 * 0000000140428063: add     rsp, 8
 * 0000000140428067: call    loc_14042805A
 * 000000014042806C: add     rsp, 8
 * 0000000140428070: call    loc_140428063
 * 0000000140428075: add     rsp, 8
 * 0000000140428079: call    loc_14042806C
 * 000000014042807E: add     rsp, 8
 * 0000000140428082: call    loc_140428075
 * 0000000140428087: add     rsp, 8
 * 000000014042808B: call    loc_14042807E
 * 0000000140428090: add     rsp, 8
 * 0000000140428094: call    loc_140428087
 * 0000000140428099: add     rsp, 8
 * 000000014042809D: call    loc_140428090
 * 00000001404280A2: add     rsp, 8
 * 00000001404280A6: call    loc_140428099
 * 00000001404280AB: add     rsp, 8
 * 00000001404280AF: call    loc_1404280A2
 * 00000001404280B4: add     rsp, 8
 * 00000001404280B8: call    loc_1404280AB
 * 00000001404280BD: add     rsp, 8
 * 00000001404280C1: call    loc_1404280B4
 * 00000001404280C6: add     rsp, 8
 * 00000001404280CA: call    loc_1404280BD
 * 00000001404280CF: add     rsp, 8
 * 00000001404280D3: call    loc_1404280C6
 * 00000001404280D8: add     rsp, 8
 * 00000001404280DC: call    loc_1404280CF
 * 00000001404280E1: add     rsp, 8
 * 00000001404280E5: call    loc_1404280D8
 * 00000001404280EA: add     rsp, 8
 * 00000001404280EE: call    loc_1404280E1
 * 00000001404280F3: add     rsp, 8
 * 00000001404280F7: call    loc_1404280EA
 * 00000001404280FC: add     rsp, 8
 * 0000000140428100: call    loc_1404280F3
 * 0000000140428105: add     rsp, 8
 * 0000000140428109: call    loc_1404280FC
 * 000000014042810E: add     rsp, 8
 * 0000000140428112: call    loc_140428105
 * 0000000140428117: add     rsp, 8
 * 000000014042811B: mov     eax, 0DADAh
 * 0000000140428120: test    byte ptr gs:862h, 8
 * 0000000140428129: jz      short loc_140428132
 * 000000014042812B: mov     al, 20h ; ' '
 * 000000014042812D: incsspq rax
 * 0000000140428132: test    word ptr gs:860h, 80h
 * 000000014042813D: jz      short loc_14042814B
 * 000000014042813F: xor     eax, eax
 * 0000000140428141: xor     edx, edx
 * 0000000140428143: mov     ecx, 1
 * 0000000140428148: div     rcx
 * 000000014042814B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042814F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140428153: mov     rax, [rbp+0E8h+var_138]
 * 0000000140428157: mov     rsp, rbp
 * 000000014042815A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140428161: add     rsp, 0E8h
 * 0000000140428168: test    cs:byte_140E01840, 1
 * 000000014042816F: jz      short loc_140428176
 * 0000000140428171: jmp     sub_140AB6B80
 * 0000000140428176: test    word ptr gs:860h, 100h
 * 0000000140428181: jz      short loc_140428188
 * 0000000140428183: verw    [rsp+arg_18]
 * 0000000140428188: swapgs
 * 000000014042818B: iretq
 * 000000014042818D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140428191: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140428195: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140428199: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042819D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404281A1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404281A5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404281A9: mov     r11, [rbp+0E8h+var_108]
 * 00000001404281AD: mov     r10, [rbp+0E8h+var_110]
 * 00000001404281B1: mov     r9, [rbp+0E8h+var_118]
 * 00000001404281B5: mov     r8, [rbp+0E8h+var_120]
 * 00000001404281B9: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404281BD: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404281C1: mov     rax, [rbp+0E8h+var_138]
 * 00000001404281C5: mov     rsp, rbp
 * 00000001404281C8: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404281CF: add     rsp, 0E8h
 * 00000001404281D6: iretq
 */
