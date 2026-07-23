/*
 * XREFs of sub_140432780 @ 0x140432780
 * Callers:
 *     sub_140AB5BC0 @ 0x140AB5BC0 (sub_140AB5BC0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140569910 @ 0x140569910 (sub_140569910.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140432780 @ 0x140432780
 * Reason: Hex-Rays returned no pseudocode for 0x140432780
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432780: push    rbp
 * 0000000140432781: sub     rsp, 158h
 * 0000000140432788: lea     rbp, [rsp+80h]
 * 0000000140432790: mov     [rbp+0D8h+var_12D], 1
 * 0000000140432794: mov     [rbp+0D8h+var_128], rax
 * 0000000140432798: mov     [rbp+0D8h+var_120], rcx
 * 000000014043279C: mov     [rbp+0D8h+var_118], rdx
 * 00000001404327A0: mov     [rbp+0D8h+var_110], r8
 * 00000001404327A4: mov     [rbp+0D8h+var_108], r9
 * 00000001404327A8: mov     [rbp+0D8h+var_100], r10
 * 00000001404327AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404327B0: test    [rbp+0D8h+arg_8], 1
 * 00000001404327B7: jnz     short loc_1404327F3
 * 00000001404327B9: xor     edx, edx
 * 00000001404327BB: rdsspq  rdx
 * 00000001404327C0: mov     [rbp+0D8h+var_80], rdx
 * 00000001404327C4: lfence
 * 00000001404327C7: test    word ptr gs:860h, 1
 * 00000001404327D2: jnz     short loc_1404327DC
 * 00000001404327D4: lfence
 * 00000001404327D7: jmp     loc_140432A3B
 * 00000001404327DC: movzx   eax, word ptr gs:864h
 * 00000001404327E5: mov     ecx, 48h ; 'H'
 * 00000001404327EA: xor     edx, edx
 * 00000001404327EC: wrmsr
 * 00000001404327EE: jmp     loc_140432A3B
 * 00000001404327F3: test    cs:byte_140E01840, 1
 * 00000001404327FA: jnz     short loc_1404327FF
 * 00000001404327FC: swapgs
 * 00000001404327FF: lfence
 * 0000000140432802: mov     rcx, gs:9828h
 * 000000014043280B: test    rcx, rcx
 * 000000014043280E: jz      short loc_14043282F
 * 0000000140432810: rdsspq  rdx
 * 0000000140432815: mov     r10, gs:9820h
 * 000000014043281E: add     r10, 8
 * 0000000140432822: cmp     rdx, r10
 * 0000000140432825: jnz     short loc_14043282F
 * 0000000140432827: rstorssp qword ptr [rcx]
 * 000000014043282B: saveprevssp
 * 000000014043282F: mov     r10, gs:188h
 * 0000000140432838: mov     rcx, gs:188h
 * 0000000140432841: mov     rcx, [rcx+220h]
 * 0000000140432848: mov     rcx, [rcx+9E0h]
 * 000000014043284F: mov     gs:858h, rcx
 * 0000000140432858: mov     cx, gs:850h
 * 0000000140432861: mov     gs:852h, cx
 * 000000014043286A: mov     cx, gs:860h
 * 0000000140432873: mov     gs:854h, cx
 * 000000014043287C: movzx   eax, word ptr gs:866h
 * 0000000140432885: cmp     gs:864h, ax
 * 000000014043288E: jz      short loc_1404328A2
 * 0000000140432890: mov     gs:864h, ax
 * 0000000140432899: mov     ecx, 48h ; 'H'
 * 000000014043289E: xor     edx, edx
 * 00000001404328A0: wrmsr
 * 00000001404328A2: movzx   edx, word ptr gs:860h
 * 00000001404328AB: test    edx, 8
 * 00000001404328B1: jz      short loc_1404328CA
 * 00000001404328B3: mov     eax, 1
 * 00000001404328B8: xor     edx, edx
 * 00000001404328BA: mov     ecx, 49h ; 'I'
 * 00000001404328BF: wrmsr
 * 00000001404328C1: movzx   edx, word ptr gs:860h
 * 00000001404328CA: test    edx, 2
 * 00000001404328D0: jz      loc_140432A0D
 * 00000001404328D6: call    loc_1404329E9
 * 00000001404328DB: add     rsp, 8
 * 00000001404328DF: call    loc_1404329F2
 * 00000001404328E4: add     rsp, 8
 * 00000001404328E8: call    loc_1404328DB
 * 00000001404328ED: add     rsp, 8
 * 00000001404328F1: call    loc_1404328E4
 * 00000001404328F6: add     rsp, 8
 * 00000001404328FA: call    loc_1404328ED
 * 00000001404328FF: add     rsp, 8
 * 0000000140432903: call    loc_1404328F6
 * 0000000140432908: add     rsp, 8
 * 000000014043290C: call    loc_1404328FF
 * 0000000140432911: add     rsp, 8
 * 0000000140432915: call    loc_140432908
 * 000000014043291A: add     rsp, 8
 * 000000014043291E: call    loc_140432911
 * 0000000140432923: add     rsp, 8
 * 0000000140432927: call    loc_14043291A
 * 000000014043292C: add     rsp, 8
 * 0000000140432930: call    loc_140432923
 * 0000000140432935: add     rsp, 8
 * 0000000140432939: call    loc_14043292C
 * 000000014043293E: add     rsp, 8
 * 0000000140432942: call    loc_140432935
 * 0000000140432947: add     rsp, 8
 * 000000014043294B: call    loc_14043293E
 * 0000000140432950: add     rsp, 8
 * 0000000140432954: call    loc_140432947
 * 0000000140432959: add     rsp, 8
 * 000000014043295D: call    loc_140432950
 * 0000000140432962: add     rsp, 8
 * 0000000140432966: call    loc_140432959
 * 000000014043296B: add     rsp, 8
 * 000000014043296F: call    loc_140432962
 * 0000000140432974: add     rsp, 8
 * 0000000140432978: call    loc_14043296B
 * 000000014043297D: add     rsp, 8
 * 0000000140432981: call    loc_140432974
 * 0000000140432986: add     rsp, 8
 * 000000014043298A: call    loc_14043297D
 * 000000014043298F: add     rsp, 8
 * 0000000140432993: call    loc_140432986
 * 0000000140432998: add     rsp, 8
 * 000000014043299C: call    loc_14043298F
 * 00000001404329A1: add     rsp, 8
 * 00000001404329A5: call    loc_140432998
 * 00000001404329AA: add     rsp, 8
 * 00000001404329AE: call    loc_1404329A1
 * 00000001404329B3: add     rsp, 8
 * 00000001404329B7: call    loc_1404329AA
 * 00000001404329BC: add     rsp, 8
 * 00000001404329C0: call    loc_1404329B3
 * 00000001404329C5: add     rsp, 8
 * 00000001404329C9: call    loc_1404329BC
 * 00000001404329CE: add     rsp, 8
 * 00000001404329D2: call    loc_1404329C5
 * 00000001404329D7: add     rsp, 8
 * 00000001404329DB: call    loc_1404329CE
 * 00000001404329E0: add     rsp, 8
 * 00000001404329E4: call    loc_1404329D7
 * 00000001404329E9: add     rsp, 8
 * 00000001404329ED: call    loc_1404329E0
 * 00000001404329F2: add     rsp, 8
 * 00000001404329F6: mov     eax, 0DADAh
 * 00000001404329FB: test    byte ptr gs:862h, 8
 * 0000000140432A04: jz      short loc_140432A0D
 * 0000000140432A06: mov     al, 20h ; ' '
 * 0000000140432A08: incsspq rax
 * 0000000140432A0D: test    edx, 200h
 * 0000000140432A13: jz      short loc_140432A1A
 * 0000000140432A15: call    sub_1404357C0
 * 0000000140432A1A: lfence
 * 0000000140432A1D: mov     byte ptr gs:856h, 0
 * 0000000140432A26: test    byte ptr [r10+3], 3
 * 0000000140432A2B: mov     [rbp+0D8h+var_58], 0
 * 0000000140432A34: jz      short loc_140432A3B
 * 0000000140432A36: call    sub_14041F920
 * 0000000140432A3B: cld
 * 0000000140432A3C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140432A40: ldmxcsr dword ptr gs:180h
 * 0000000140432A49: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140432A4D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140432A51: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140432A55: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140432A59: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140432A5D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140432A61: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140432A68: jz      short loc_140432A76
 * 0000000140432A6A: test    [rbp+0D8h+arg_8], 1
 * 0000000140432A71: jz      short loc_140432A76
 * 0000000140432A73: stac
 * 0000000140432A76: mov     eax, [rbp+0E0h]
 * 0000000140432A7C: test    [rbp+0D8h+arg_10], 200h
 * 0000000140432A86: jz      short loc_140432A89
 * 0000000140432A88: sti
 * 0000000140432A89: test    byte ptr gs:8B25h, 40h
 * 0000000140432A92: jz      loc_140432B2B
 * 0000000140432A98: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140432A9C: call    sub_140569910
 * 0000000140432AA1: cmp     eax, 1
 * 0000000140432AA4: jz      loc_140432B4E
 * 0000000140432AAA: cmp     eax, 2
 * 0000000140432AAD: jz      short loc_140432ABA
 * 0000000140432AAF: cmp     eax, 3
 * 0000000140432AB2: jz      loc_140432B3A
 * 0000000140432AB8: jmp     short loc_140432B2B
 * 0000000140432ABA: test    [rbp+0D8h+arg_8], 1
 * 0000000140432AC1: jz      short loc_140432B06
 * 0000000140432AC3: mov     ecx, 6A7h
 * 0000000140432AC8: rdmsr
 * 0000000140432ACA: shl     rdx, 20h
 * 0000000140432ACE: or      rax, rdx
 * 0000000140432AD1: mov     r10, rax
 * 0000000140432AD4: mov     rcx, gs:188h
 * 0000000140432ADD: mov     rcx, [rcx+220h]
 * 0000000140432AE4: mov     r11d, [rcx+9D4h]
 * 0000000140432AEB: and     r11d, 0C0F6C000h
 * 0000000140432AF2: mov     edx, cs:dword_140D06C34
 * 0000000140432AF8: shl     rdx, 20h
 * 0000000140432AFC: or      r11, rdx
 * 0000000140432AFF: mov     edx, 3
 * 0000000140432B04: jmp     short loc_140432B12
 * 0000000140432B06: mov     edx, 2
 * 0000000140432B0B: mov     r10, [rbp+0D8h+var_80]
 * 0000000140432B0F: mov     r10, [r10]
 * 0000000140432B12: mov     r9, 39h ; '9'
 * 0000000140432B19: mov     ecx, 0C0000409h
 * 0000000140432B1E: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140432B25: call    sub_140435300
 * 0000000140432B2A: nop
 * 0000000140432B2B: mov     edx, 15h
 * 0000000140432B30: mov     ecx, 7Fh
 * 0000000140432B35: call    sub_140434DC0
 * 0000000140432B3A: mov     ecx, 80000033h
 * 0000000140432B3F: xor     edx, edx
 * 0000000140432B41: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140432B48: call    sub_140434E40
 * 0000000140432B4D: nop
 * 0000000140432B4E: cli
 * 0000000140432B4F: test    [rbp+0D8h+arg_8], 1
 * 0000000140432B56: jz      loc_140432E44
 * 0000000140432B5C: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140432B63: jz      short loc_140432B68
 * 0000000140432B65: stac
 * 0000000140432B68: mov     rcx, gs:188h
 * 0000000140432B71: test    byte ptr [rcx+0C2h], 3
 * 0000000140432B78: jz      short loc_140432B95
 * 0000000140432B7A: mov     ecx, 1
 * 0000000140432B7F: mov     cr8, rcx
 * 0000000140432B83: sti
 * 0000000140432B84: call    sub_140425700
 * 0000000140432B89: cli
 * 0000000140432B8A: mov     ecx, 0
 * 0000000140432B8F: mov     cr8, rcx
 * 0000000140432B93: jmp     short loc_140432B68
 * 0000000140432B95: test    byte ptr gs:86Ch, 2
 * 0000000140432B9E: jz      short loc_140432BA7
 * 0000000140432BA0: xor     ecx, ecx
 * 0000000140432BA2: call    sub_14020D230
 * 0000000140432BA7: mov     rcx, gs:188h
 * 0000000140432BB0: test    dword ptr [rcx], 8000000h
 * 0000000140432BB6: jz      short loc_140432BBD
 * 0000000140432BB8: call    sub_1404206B0
 * 0000000140432BBD: mov     rcx, gs:188h
 * 0000000140432BC6: test    dword ptr [rcx], 10000h
 * 0000000140432BCC: jz      short loc_140432BE2
 * 0000000140432BCE: test    byte ptr [rcx+2], 1
 * 0000000140432BD2: jz      short loc_140432BE2
 * 0000000140432BD4: call    sub_140571820
 * 0000000140432BD9: mov     rcx, gs:188h
 * 0000000140432BE2: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140432BE6: cmp     [rbp+0D8h+var_58], 0
 * 0000000140432BEE: jz      short loc_140432BF5
 * 0000000140432BF0: call    sub_14041F8A0
 * 0000000140432BF5: mov     rcx, gs:188h
 * 0000000140432BFE: bt      dword ptr [rcx+74h], 16h
 * 0000000140432C03: jnb     short loc_140432C2F
 * 0000000140432C05: xor     ecx, ecx
 * 0000000140432C07: rdsspq  rcx
 * 0000000140432C0C: mov     r8, gs:9828h
 * 0000000140432C15: add     r8, 8
 * 0000000140432C19: cmp     rcx, r8
 * 0000000140432C1C: jnz     short loc_140432C2F
 * 0000000140432C1E: mov     rcx, gs:9820h
 * 0000000140432C27: rstorssp qword ptr [rcx]
 * 0000000140432C2B: saveprevssp
 * 0000000140432C2F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432C33: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432C37: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432C3B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432C3F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432C43: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432C47: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432C4B: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432C4F: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432C53: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432C57: mov     byte ptr gs:856h, 0
 * 0000000140432C60: movzx   eax, word ptr gs:86Ah
 * 0000000140432C69: cmp     gs:864h, ax
 * 0000000140432C72: jz      short loc_140432C86
 * 0000000140432C74: mov     gs:864h, ax
 * 0000000140432C7D: mov     ecx, 48h ; 'H'
 * 0000000140432C82: xor     edx, edx
 * 0000000140432C84: wrmsr
 * 0000000140432C86: btr     word ptr gs:860h, 2
 * 0000000140432C91: jnb     short loc_140432CA1
 * 0000000140432C93: mov     eax, 1
 * 0000000140432C98: xor     edx, edx
 * 0000000140432C9A: mov     ecx, 49h ; 'I'
 * 0000000140432C9F: wrmsr
 * 0000000140432CA1: btr     word ptr gs:860h, 5
 * 0000000140432CAC: jnb     loc_140432DE9
 * 0000000140432CB2: call    loc_140432DC5
 * 0000000140432CB7: add     rsp, 8
 * 0000000140432CBB: call    loc_140432DCE
 * 0000000140432CC0: add     rsp, 8
 * 0000000140432CC4: call    loc_140432CB7
 * 0000000140432CC9: add     rsp, 8
 * 0000000140432CCD: call    loc_140432CC0
 * 0000000140432CD2: add     rsp, 8
 * 0000000140432CD6: call    loc_140432CC9
 * 0000000140432CDB: add     rsp, 8
 * 0000000140432CDF: call    loc_140432CD2
 * 0000000140432CE4: add     rsp, 8
 * 0000000140432CE8: call    loc_140432CDB
 * 0000000140432CED: add     rsp, 8
 * 0000000140432CF1: call    loc_140432CE4
 * 0000000140432CF6: add     rsp, 8
 * 0000000140432CFA: call    loc_140432CED
 * 0000000140432CFF: add     rsp, 8
 * 0000000140432D03: call    loc_140432CF6
 * 0000000140432D08: add     rsp, 8
 * 0000000140432D0C: call    loc_140432CFF
 * 0000000140432D11: add     rsp, 8
 * 0000000140432D15: call    loc_140432D08
 * 0000000140432D1A: add     rsp, 8
 * 0000000140432D1E: call    loc_140432D11
 * 0000000140432D23: add     rsp, 8
 * 0000000140432D27: call    loc_140432D1A
 * 0000000140432D2C: add     rsp, 8
 * 0000000140432D30: call    loc_140432D23
 * 0000000140432D35: add     rsp, 8
 * 0000000140432D39: call    loc_140432D2C
 * 0000000140432D3E: add     rsp, 8
 * 0000000140432D42: call    loc_140432D35
 * 0000000140432D47: add     rsp, 8
 * 0000000140432D4B: call    loc_140432D3E
 * 0000000140432D50: add     rsp, 8
 * 0000000140432D54: call    loc_140432D47
 * 0000000140432D59: add     rsp, 8
 * 0000000140432D5D: call    loc_140432D50
 * 0000000140432D62: add     rsp, 8
 * 0000000140432D66: call    loc_140432D59
 * 0000000140432D6B: add     rsp, 8
 * 0000000140432D6F: call    loc_140432D62
 * 0000000140432D74: add     rsp, 8
 * 0000000140432D78: call    loc_140432D6B
 * 0000000140432D7D: add     rsp, 8
 * 0000000140432D81: call    loc_140432D74
 * 0000000140432D86: add     rsp, 8
 * 0000000140432D8A: call    loc_140432D7D
 * 0000000140432D8F: add     rsp, 8
 * 0000000140432D93: call    loc_140432D86
 * 0000000140432D98: add     rsp, 8
 * 0000000140432D9C: call    loc_140432D8F
 * 0000000140432DA1: add     rsp, 8
 * 0000000140432DA5: call    loc_140432D98
 * 0000000140432DAA: add     rsp, 8
 * 0000000140432DAE: call    loc_140432DA1
 * 0000000140432DB3: add     rsp, 8
 * 0000000140432DB7: call    loc_140432DAA
 * 0000000140432DBC: add     rsp, 8
 * 0000000140432DC0: call    loc_140432DB3
 * 0000000140432DC5: add     rsp, 8
 * 0000000140432DC9: call    loc_140432DBC
 * 0000000140432DCE: add     rsp, 8
 * 0000000140432DD2: mov     eax, 0DADAh
 * 0000000140432DD7: test    byte ptr gs:862h, 8
 * 0000000140432DE0: jz      short loc_140432DE9
 * 0000000140432DE2: mov     al, 20h ; ' '
 * 0000000140432DE4: incsspq rax
 * 0000000140432DE9: test    word ptr gs:860h, 80h
 * 0000000140432DF4: jz      short loc_140432E02
 * 0000000140432DF6: xor     eax, eax
 * 0000000140432DF8: xor     edx, edx
 * 0000000140432DFA: mov     ecx, 1
 * 0000000140432DFF: div     rcx
 * 0000000140432E02: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140432E06: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432E0A: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432E0E: mov     rsp, rbp
 * 0000000140432E11: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432E18: add     rsp, 0E8h
 * 0000000140432E1F: test    cs:byte_140E01840, 1
 * 0000000140432E26: jz      short loc_140432E2D
 * 0000000140432E28: jmp     sub_140AB6B80
 * 0000000140432E2D: test    word ptr gs:860h, 100h
 * 0000000140432E38: jz      short loc_140432E3F
 * 0000000140432E3A: verw    [rsp-10h+arg_20]
 * 0000000140432E3F: swapgs
 * 0000000140432E42: iretq
 * 0000000140432E44: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140432E48: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432E4C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432E50: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432E54: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432E58: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432E5C: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432E60: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432E64: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432E68: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432E6C: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432E70: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140432E74: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432E78: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432E7C: mov     rsp, rbp
 * 0000000140432E7F: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432E86: add     rsp, 0E8h
 * 0000000140432E8D: iretq
 * 0000000140432E8F: retn
 */
