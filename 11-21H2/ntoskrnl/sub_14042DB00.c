/*
 * XREFs of sub_14042DB00 @ 0x14042DB00
 * Callers:
 *     sub_140AB53C0 @ 0x140AB53C0 (sub_140AB53C0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_14056AB60 @ 0x14056AB60 (sub_14056AB60.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042DB00 @ 0x14042DB00
 * Reason: Hex-Rays returned no pseudocode for 0x14042DB00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042DB00: sub     rsp, 8
 * 000000014042DB04: push    rbp
 * 000000014042DB05: sub     rsp, 158h
 * 000000014042DB0C: lea     rbp, [rsp+80h]
 * 000000014042DB14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042DB18: mov     [rbp+0E8h+var_138], rax
 * 000000014042DB1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042DB20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042DB24: mov     [rbp+0E8h+var_120], r8
 * 000000014042DB28: mov     [rbp+0E8h+var_118], r9
 * 000000014042DB2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042DB30: mov     [rbp+0E8h+var_108], r11
 * 000000014042DB34: test    [rbp+0E8h+arg_0], 1
 * 000000014042DB3B: jnz     short loc_14042DB77
 * 000000014042DB3D: xor     edx, edx
 * 000000014042DB3F: rdsspq  rdx
 * 000000014042DB44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042DB48: lfence
 * 000000014042DB4B: test    word ptr gs:860h, 1
 * 000000014042DB56: jnz     short loc_14042DB60
 * 000000014042DB58: lfence
 * 000000014042DB5B: jmp     loc_14042DDBF
 * 000000014042DB60: movzx   eax, word ptr gs:864h
 * 000000014042DB69: mov     ecx, 48h ; 'H'
 * 000000014042DB6E: xor     edx, edx
 * 000000014042DB70: wrmsr
 * 000000014042DB72: jmp     loc_14042DDBF
 * 000000014042DB77: test    cs:byte_140E01840, 1
 * 000000014042DB7E: jnz     short loc_14042DB83
 * 000000014042DB80: swapgs
 * 000000014042DB83: lfence
 * 000000014042DB86: mov     rcx, gs:9828h
 * 000000014042DB8F: test    rcx, rcx
 * 000000014042DB92: jz      short loc_14042DBB3
 * 000000014042DB94: rdsspq  rdx
 * 000000014042DB99: mov     r10, gs:9820h
 * 000000014042DBA2: add     r10, 8
 * 000000014042DBA6: cmp     rdx, r10
 * 000000014042DBA9: jnz     short loc_14042DBB3
 * 000000014042DBAB: rstorssp qword ptr [rcx]
 * 000000014042DBAF: saveprevssp
 * 000000014042DBB3: mov     r10, gs:188h
 * 000000014042DBBC: mov     rcx, gs:188h
 * 000000014042DBC5: mov     rcx, [rcx+220h]
 * 000000014042DBCC: mov     rcx, [rcx+9E0h]
 * 000000014042DBD3: mov     gs:858h, rcx
 * 000000014042DBDC: mov     cx, gs:850h
 * 000000014042DBE5: mov     gs:852h, cx
 * 000000014042DBEE: mov     cx, gs:860h
 * 000000014042DBF7: mov     gs:854h, cx
 * 000000014042DC00: movzx   eax, word ptr gs:866h
 * 000000014042DC09: cmp     gs:864h, ax
 * 000000014042DC12: jz      short loc_14042DC26
 * 000000014042DC14: mov     gs:864h, ax
 * 000000014042DC1D: mov     ecx, 48h ; 'H'
 * 000000014042DC22: xor     edx, edx
 * 000000014042DC24: wrmsr
 * 000000014042DC26: movzx   edx, word ptr gs:860h
 * 000000014042DC2F: test    edx, 8
 * 000000014042DC35: jz      short loc_14042DC4E
 * 000000014042DC37: mov     eax, 1
 * 000000014042DC3C: xor     edx, edx
 * 000000014042DC3E: mov     ecx, 49h ; 'I'
 * 000000014042DC43: wrmsr
 * 000000014042DC45: movzx   edx, word ptr gs:860h
 * 000000014042DC4E: test    edx, 2
 * 000000014042DC54: jz      loc_14042DD91
 * 000000014042DC5A: call    loc_14042DD6D
 * 000000014042DC5F: add     rsp, 8
 * 000000014042DC63: call    loc_14042DD76
 * 000000014042DC68: add     rsp, 8
 * 000000014042DC6C: call    loc_14042DC5F
 * 000000014042DC71: add     rsp, 8
 * 000000014042DC75: call    loc_14042DC68
 * 000000014042DC7A: add     rsp, 8
 * 000000014042DC7E: call    loc_14042DC71
 * 000000014042DC83: add     rsp, 8
 * 000000014042DC87: call    loc_14042DC7A
 * 000000014042DC8C: add     rsp, 8
 * 000000014042DC90: call    loc_14042DC83
 * 000000014042DC95: add     rsp, 8
 * 000000014042DC99: call    loc_14042DC8C
 * 000000014042DC9E: add     rsp, 8
 * 000000014042DCA2: call    loc_14042DC95
 * 000000014042DCA7: add     rsp, 8
 * 000000014042DCAB: call    loc_14042DC9E
 * 000000014042DCB0: add     rsp, 8
 * 000000014042DCB4: call    loc_14042DCA7
 * 000000014042DCB9: add     rsp, 8
 * 000000014042DCBD: call    loc_14042DCB0
 * 000000014042DCC2: add     rsp, 8
 * 000000014042DCC6: call    loc_14042DCB9
 * 000000014042DCCB: add     rsp, 8
 * 000000014042DCCF: call    loc_14042DCC2
 * 000000014042DCD4: add     rsp, 8
 * 000000014042DCD8: call    loc_14042DCCB
 * 000000014042DCDD: add     rsp, 8
 * 000000014042DCE1: call    loc_14042DCD4
 * 000000014042DCE6: add     rsp, 8
 * 000000014042DCEA: call    loc_14042DCDD
 * 000000014042DCEF: add     rsp, 8
 * 000000014042DCF3: call    loc_14042DCE6
 * 000000014042DCF8: add     rsp, 8
 * 000000014042DCFC: call    loc_14042DCEF
 * 000000014042DD01: add     rsp, 8
 * 000000014042DD05: call    loc_14042DCF8
 * 000000014042DD0A: add     rsp, 8
 * 000000014042DD0E: call    loc_14042DD01
 * 000000014042DD13: add     rsp, 8
 * 000000014042DD17: call    loc_14042DD0A
 * 000000014042DD1C: add     rsp, 8
 * 000000014042DD20: call    loc_14042DD13
 * 000000014042DD25: add     rsp, 8
 * 000000014042DD29: call    loc_14042DD1C
 * 000000014042DD2E: add     rsp, 8
 * 000000014042DD32: call    loc_14042DD25
 * 000000014042DD37: add     rsp, 8
 * 000000014042DD3B: call    loc_14042DD2E
 * 000000014042DD40: add     rsp, 8
 * 000000014042DD44: call    loc_14042DD37
 * 000000014042DD49: add     rsp, 8
 * 000000014042DD4D: call    loc_14042DD40
 * 000000014042DD52: add     rsp, 8
 * 000000014042DD56: call    loc_14042DD49
 * 000000014042DD5B: add     rsp, 8
 * 000000014042DD5F: call    loc_14042DD52
 * 000000014042DD64: add     rsp, 8
 * 000000014042DD68: call    loc_14042DD5B
 * 000000014042DD6D: add     rsp, 8
 * 000000014042DD71: call    loc_14042DD64
 * 000000014042DD76: add     rsp, 8
 * 000000014042DD7A: mov     eax, 0DADAh
 * 000000014042DD7F: test    byte ptr gs:862h, 8
 * 000000014042DD88: jz      short loc_14042DD91
 * 000000014042DD8A: mov     al, 20h ; ' '
 * 000000014042DD8C: incsspq rax
 * 000000014042DD91: test    edx, 200h
 * 000000014042DD97: jz      short loc_14042DD9E
 * 000000014042DD99: call    sub_1404357C0
 * 000000014042DD9E: lfence
 * 000000014042DDA1: mov     byte ptr gs:856h, 0
 * 000000014042DDAA: test    byte ptr [r10+3], 3
 * 000000014042DDAF: mov     [rbp+0E8h+var_68], 0
 * 000000014042DDB8: jz      short loc_14042DDBF
 * 000000014042DDBA: call    sub_14041F920
 * 000000014042DDBF: cld
 * 000000014042DDC0: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042DDC4: ldmxcsr dword ptr gs:180h
 * 000000014042DDCD: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042DDD1: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042DDD5: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042DDD9: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042DDDD: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042DDE1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042DDE5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042DDEC: jz      short loc_14042DDFA
 * 000000014042DDEE: test    [rbp+0E8h+arg_0], 1
 * 000000014042DDF5: jz      short loc_14042DDFA
 * 000000014042DDF7: stac
 * 000000014042DDFA: test    [rbp+0E8h+arg_8], 200h
 * 000000014042DE04: jz      short loc_14042DE07
 * 000000014042DE06: sti
 * 000000014042DE07: test    [rbp+0E8h+arg_0], 1
 * 000000014042DE0E: jz      short loc_14042DE51
 * 000000014042DE10: call    sub_14056AB60
 * 000000014042DE15: cmp     eax, 0
 * 000000014042DE18: jz      short loc_14042DE51
 * 000000014042DE1A: cmp     eax, 1
 * 000000014042DE1D: jz      short loc_14042DE65
 * 000000014042DE1F: cmp     eax, 2
 * 000000014042DE22: jz      short loc_14042DE33
 * 000000014042DE24: mov     edx, 5
 * 000000014042DE29: mov     ecx, 7Fh
 * 000000014042DE2E: call    sub_140434DC0
 * 000000014042DE33: mov     r9, 1Ch
 * 000000014042DE3A: mov     ecx, 0C0000409h
 * 000000014042DE3F: mov     edx, 1
 * 000000014042DE44: mov     r8, [rbp+0E8h]
 * 000000014042DE4B: call    sub_140435300
 * 000000014042DE50: nop
 * 000000014042DE51: mov     ecx, 0C000008Ch
 * 000000014042DE56: xor     edx, edx
 * 000000014042DE58: mov     r8, [rbp+0E8h]
 * 000000014042DE5F: call    sub_140434E40
 * 000000014042DE64: nop
 * 000000014042DE65: cli
 * 000000014042DE66: test    [rbp+0E8h+arg_0], 1
 * 000000014042DE6D: jz      loc_14042E15B
 * 000000014042DE73: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042DE7A: jz      short loc_14042DE7F
 * 000000014042DE7C: stac
 * 000000014042DE7F: mov     rcx, gs:188h
 * 000000014042DE88: test    byte ptr [rcx+0C2h], 3
 * 000000014042DE8F: jz      short loc_14042DEAC
 * 000000014042DE91: mov     ecx, 1
 * 000000014042DE96: mov     cr8, rcx
 * 000000014042DE9A: sti
 * 000000014042DE9B: call    sub_140425700
 * 000000014042DEA0: cli
 * 000000014042DEA1: mov     ecx, 0
 * 000000014042DEA6: mov     cr8, rcx
 * 000000014042DEAA: jmp     short loc_14042DE7F
 * 000000014042DEAC: test    byte ptr gs:86Ch, 2
 * 000000014042DEB5: jz      short loc_14042DEBE
 * 000000014042DEB7: xor     ecx, ecx
 * 000000014042DEB9: call    sub_14020D230
 * 000000014042DEBE: mov     rcx, gs:188h
 * 000000014042DEC7: test    dword ptr [rcx], 8000000h
 * 000000014042DECD: jz      short loc_14042DED4
 * 000000014042DECF: call    sub_1404206B0
 * 000000014042DED4: mov     rcx, gs:188h
 * 000000014042DEDD: test    dword ptr [rcx], 10000h
 * 000000014042DEE3: jz      short loc_14042DEF9
 * 000000014042DEE5: test    byte ptr [rcx+2], 1
 * 000000014042DEE9: jz      short loc_14042DEF9
 * 000000014042DEEB: call    sub_140571820
 * 000000014042DEF0: mov     rcx, gs:188h
 * 000000014042DEF9: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042DEFD: cmp     [rbp+0E8h+var_68], 0
 * 000000014042DF05: jz      short loc_14042DF0C
 * 000000014042DF07: call    sub_14041F8A0
 * 000000014042DF0C: mov     rcx, gs:188h
 * 000000014042DF15: bt      dword ptr [rcx+74h], 16h
 * 000000014042DF1A: jnb     short loc_14042DF46
 * 000000014042DF1C: xor     ecx, ecx
 * 000000014042DF1E: rdsspq  rcx
 * 000000014042DF23: mov     r8, gs:9828h
 * 000000014042DF2C: add     r8, 8
 * 000000014042DF30: cmp     rcx, r8
 * 000000014042DF33: jnz     short loc_14042DF46
 * 000000014042DF35: mov     rcx, gs:9820h
 * 000000014042DF3E: rstorssp qword ptr [rcx]
 * 000000014042DF42: saveprevssp
 * 000000014042DF46: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042DF4A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042DF4E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042DF52: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042DF56: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042DF5A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042DF5E: mov     r11, [rbp+0E8h+var_108]
 * 000000014042DF62: mov     r10, [rbp+0E8h+var_110]
 * 000000014042DF66: mov     r9, [rbp+0E8h+var_118]
 * 000000014042DF6A: mov     r8, [rbp+0E8h+var_120]
 * 000000014042DF6E: mov     byte ptr gs:856h, 0
 * 000000014042DF77: movzx   eax, word ptr gs:86Ah
 * 000000014042DF80: cmp     gs:864h, ax
 * 000000014042DF89: jz      short loc_14042DF9D
 * 000000014042DF8B: mov     gs:864h, ax
 * 000000014042DF94: mov     ecx, 48h ; 'H'
 * 000000014042DF99: xor     edx, edx
 * 000000014042DF9B: wrmsr
 * 000000014042DF9D: btr     word ptr gs:860h, 2
 * 000000014042DFA8: jnb     short loc_14042DFB8
 * 000000014042DFAA: mov     eax, 1
 * 000000014042DFAF: xor     edx, edx
 * 000000014042DFB1: mov     ecx, 49h ; 'I'
 * 000000014042DFB6: wrmsr
 * 000000014042DFB8: btr     word ptr gs:860h, 5
 * 000000014042DFC3: jnb     loc_14042E100
 * 000000014042DFC9: call    loc_14042E0DC
 * 000000014042DFCE: add     rsp, 8
 * 000000014042DFD2: call    loc_14042E0E5
 * 000000014042DFD7: add     rsp, 8
 * 000000014042DFDB: call    loc_14042DFCE
 * 000000014042DFE0: add     rsp, 8
 * 000000014042DFE4: call    loc_14042DFD7
 * 000000014042DFE9: add     rsp, 8
 * 000000014042DFED: call    loc_14042DFE0
 * 000000014042DFF2: add     rsp, 8
 * 000000014042DFF6: call    loc_14042DFE9
 * 000000014042DFFB: add     rsp, 8
 * 000000014042DFFF: call    loc_14042DFF2
 * 000000014042E004: add     rsp, 8
 * 000000014042E008: call    loc_14042DFFB
 * 000000014042E00D: add     rsp, 8
 * 000000014042E011: call    loc_14042E004
 * 000000014042E016: add     rsp, 8
 * 000000014042E01A: call    loc_14042E00D
 * 000000014042E01F: add     rsp, 8
 * 000000014042E023: call    loc_14042E016
 * 000000014042E028: add     rsp, 8
 * 000000014042E02C: call    loc_14042E01F
 * 000000014042E031: add     rsp, 8
 * 000000014042E035: call    loc_14042E028
 * 000000014042E03A: add     rsp, 8
 * 000000014042E03E: call    loc_14042E031
 * 000000014042E043: add     rsp, 8
 * 000000014042E047: call    loc_14042E03A
 * 000000014042E04C: add     rsp, 8
 * 000000014042E050: call    loc_14042E043
 * 000000014042E055: add     rsp, 8
 * 000000014042E059: call    loc_14042E04C
 * 000000014042E05E: add     rsp, 8
 * 000000014042E062: call    loc_14042E055
 * 000000014042E067: add     rsp, 8
 * 000000014042E06B: call    loc_14042E05E
 * 000000014042E070: add     rsp, 8
 * 000000014042E074: call    loc_14042E067
 * 000000014042E079: add     rsp, 8
 * 000000014042E07D: call    loc_14042E070
 * 000000014042E082: add     rsp, 8
 * 000000014042E086: call    loc_14042E079
 * 000000014042E08B: add     rsp, 8
 * 000000014042E08F: call    loc_14042E082
 * 000000014042E094: add     rsp, 8
 * 000000014042E098: call    loc_14042E08B
 * 000000014042E09D: add     rsp, 8
 * 000000014042E0A1: call    loc_14042E094
 * 000000014042E0A6: add     rsp, 8
 * 000000014042E0AA: call    loc_14042E09D
 * 000000014042E0AF: add     rsp, 8
 * 000000014042E0B3: call    loc_14042E0A6
 * 000000014042E0B8: add     rsp, 8
 * 000000014042E0BC: call    loc_14042E0AF
 * 000000014042E0C1: add     rsp, 8
 * 000000014042E0C5: call    loc_14042E0B8
 * 000000014042E0CA: add     rsp, 8
 * 000000014042E0CE: call    loc_14042E0C1
 * 000000014042E0D3: add     rsp, 8
 * 000000014042E0D7: call    loc_14042E0CA
 * 000000014042E0DC: add     rsp, 8
 * 000000014042E0E0: call    loc_14042E0D3
 * 000000014042E0E5: add     rsp, 8
 * 000000014042E0E9: mov     eax, 0DADAh
 * 000000014042E0EE: test    byte ptr gs:862h, 8
 * 000000014042E0F7: jz      short loc_14042E100
 * 000000014042E0F9: mov     al, 20h ; ' '
 * 000000014042E0FB: incsspq rax
 * 000000014042E100: test    word ptr gs:860h, 80h
 * 000000014042E10B: jz      short loc_14042E119
 * 000000014042E10D: xor     eax, eax
 * 000000014042E10F: xor     edx, edx
 * 000000014042E111: mov     ecx, 1
 * 000000014042E116: div     rcx
 * 000000014042E119: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E11D: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E121: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E125: mov     rsp, rbp
 * 000000014042E128: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E12F: add     rsp, 0E8h
 * 000000014042E136: test    cs:byte_140E01840, 1
 * 000000014042E13D: jz      short loc_14042E144
 * 000000014042E13F: jmp     sub_140AB6B80
 * 000000014042E144: test    word ptr gs:860h, 100h
 * 000000014042E14F: jz      short loc_14042E156
 * 000000014042E151: verw    [rsp+arg_18]
 * 000000014042E156: swapgs
 * 000000014042E159: iretq
 * 000000014042E15B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042E15F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042E163: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042E167: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042E16B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042E16F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042E173: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042E177: mov     r11, [rbp+0E8h+var_108]
 * 000000014042E17B: mov     r10, [rbp+0E8h+var_110]
 * 000000014042E17F: mov     r9, [rbp+0E8h+var_118]
 * 000000014042E183: mov     r8, [rbp+0E8h+var_120]
 * 000000014042E187: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E18B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E18F: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E193: mov     rsp, rbp
 * 000000014042E196: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E19D: add     rsp, 0E8h
 * 000000014042E1A4: iretq
 */
