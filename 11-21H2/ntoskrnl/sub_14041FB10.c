/*
 * XREFs of sub_14041FB10 @ 0x14041FB10
 * Callers:
 *     sub_14041FB00 @ 0x14041FB00 (sub_14041FB00.c)
 *     sub_1405EED3C @ 0x1405EED3C (sub_1405EED3C.c)
 *     sub_1405EED54 @ 0x1405EED54 (sub_1405EED54.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_1402987C0 @ 0x1402987C0 (sub_1402987C0.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14041FB10 @ 0x14041FB10
 * Reason: Hex-Rays returned no pseudocode for 0x14041FB10
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FB10: mov     rbx, [rbp+0C0h]
 * 000000014041FB17: mov     rdi, [rbp+0C8h]
 * 000000014041FB1E: mov     rsi, [rbp+0D0h]
 * 000000014041FB25: xor     eax, eax
 * 000000014041FB27: mov     [rbp-50h], rax
 * 000000014041FB2B: sub     rsp, 138h
 * 000000014041FB32: lea     rax, [rsp+138h+var_38]
 * 000000014041FB3A: movaps  [rsp+138h+var_108], xmm6
 * 000000014041FB3F: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041FB44: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041FB4A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041FB50: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041FB56: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041FB5B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041FB60: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041FB65: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041FB6A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041FB6F: mov     [rax], rbx
 * 000000014041FB72: mov     [rax+8], rdi
 * 000000014041FB76: mov     [rax+10h], rsi
 * 000000014041FB7A: mov     [rax+18h], r12
 * 000000014041FB7E: mov     [rax+20h], r13
 * 000000014041FB82: mov     [rax+28h], r14
 * 000000014041FB86: mov     [rax+30h], r15
 * 000000014041FB8A: mov     r8, rsp
 * 000000014041FB8D: lea     r9, [rbp-80h]
 * 000000014041FB91: call    sub_1402987C0
 * 000000014041FB96: test    eax, eax
 * 000000014041FB98: jle     loc_14041FF76
 * 000000014041FB9E: mov     rcx, gs:188h
 * 000000014041FBA7: test    byte ptr [rbp+0F0h], 1
 * 000000014041FBAE: jnz     short loc_14041FBC7
 * 000000014041FBB0: mov     rdx, [rbp+0B8h]
 * 000000014041FBB7: mov     [rcx+90h], rdx
 * 000000014041FBBE: mov     dl, [rbp-58h]
 * 000000014041FBC1: mov     [rcx+232h], dl
 * 000000014041FBC7: lea     rcx, [rsp+138h+var_38]
 * 000000014041FBCF: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041FBD4: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041FBD9: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041FBDF: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041FBE5: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041FBEB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041FBF0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041FBF5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041FBFA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041FBFF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041FC04: mov     rbx, [rcx]
 * 000000014041FC07: mov     rdi, [rcx+8]
 * 000000014041FC0B: mov     rsi, [rcx+10h]
 * 000000014041FC0F: mov     r12, [rcx+18h]
 * 000000014041FC13: mov     r13, [rcx+20h]
 * 000000014041FC17: mov     r14, [rcx+28h]
 * 000000014041FC1B: mov     r15, [rcx+30h]
 * 000000014041FC1F: cli
 * 000000014041FC20: xor     ecx, ecx
 * 000000014041FC22: rdsspq  rcx
 * 000000014041FC27: test    rcx, rcx
 * 000000014041FC2A: jz      short loc_14041FC36
 * 000000014041FC2C: mov     ecx, 1
 * 000000014041FC31: incsspq rcx
 * 000000014041FC36: test    byte ptr [rbp+0F0h], 1
 * 000000014041FC3D: jz      loc_14041FF2B
 * 000000014041FC43: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014041FC4A: jz      short loc_14041FC4F
 * 000000014041FC4C: stac
 * 000000014041FC4F: mov     rcx, gs:188h
 * 000000014041FC58: test    byte ptr [rcx+0C2h], 3
 * 000000014041FC5F: jz      short loc_14041FC7C
 * 000000014041FC61: mov     ecx, 1
 * 000000014041FC66: mov     cr8, rcx
 * 000000014041FC6A: sti
 * 000000014041FC6B: call    sub_140425700
 * 000000014041FC70: cli
 * 000000014041FC71: mov     ecx, 0
 * 000000014041FC76: mov     cr8, rcx
 * 000000014041FC7A: jmp     short loc_14041FC4F
 * 000000014041FC7C: test    byte ptr gs:86Ch, 2
 * 000000014041FC85: jz      short loc_14041FC8E
 * 000000014041FC87: xor     ecx, ecx
 * 000000014041FC89: call    sub_14020D230
 * 000000014041FC8E: mov     rcx, gs:188h
 * 000000014041FC97: test    dword ptr [rcx], 8000000h
 * 000000014041FC9D: jz      short loc_14041FCA4
 * 000000014041FC9F: call    sub_1404206B0
 * 000000014041FCA4: mov     rcx, gs:188h
 * 000000014041FCAD: test    dword ptr [rcx], 10000h
 * 000000014041FCB3: jz      short loc_14041FCC9
 * 000000014041FCB5: test    byte ptr [rcx+2], 1
 * 000000014041FCB9: jz      short loc_14041FCC9
 * 000000014041FCBB: call    sub_140571820
 * 000000014041FCC0: mov     rcx, gs:188h
 * 000000014041FCC9: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FCCD: cmp     word ptr [rbp+80h], 0
 * 000000014041FCD5: jz      short loc_14041FCDC
 * 000000014041FCD7: call    sub_14041F8A0
 * 000000014041FCDC: mov     rcx, gs:188h
 * 000000014041FCE5: bt      dword ptr [rcx+74h], 16h
 * 000000014041FCEA: jnb     short loc_14041FD16
 * 000000014041FCEC: xor     ecx, ecx
 * 000000014041FCEE: rdsspq  rcx
 * 000000014041FCF3: mov     r8, gs:9828h
 * 000000014041FCFC: add     r8, 8
 * 000000014041FD00: cmp     rcx, r8
 * 000000014041FD03: jnz     short loc_14041FD16
 * 000000014041FD05: mov     rcx, gs:9820h
 * 000000014041FD0E: rstorssp qword ptr [rcx]
 * 000000014041FD12: saveprevssp
 * 000000014041FD16: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FD1A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FD1E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FD22: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FD26: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FD2A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FD2E: mov     r11, [rbp-20h]
 * 000000014041FD32: mov     r10, [rbp-28h]
 * 000000014041FD36: mov     r9, [rbp-30h]
 * 000000014041FD3A: mov     r8, [rbp-38h]
 * 000000014041FD3E: mov     byte ptr gs:856h, 0
 * 000000014041FD47: movzx   eax, word ptr gs:86Ah
 * 000000014041FD50: cmp     gs:864h, ax
 * 000000014041FD59: jz      short loc_14041FD6D
 * 000000014041FD5B: mov     gs:864h, ax
 * 000000014041FD64: mov     ecx, 48h ; 'H'
 * 000000014041FD69: xor     edx, edx
 * 000000014041FD6B: wrmsr
 * 000000014041FD6D: btr     word ptr gs:860h, 2
 * 000000014041FD78: jnb     short loc_14041FD88
 * 000000014041FD7A: mov     eax, 1
 * 000000014041FD7F: xor     edx, edx
 * 000000014041FD81: mov     ecx, 49h ; 'I'
 * 000000014041FD86: wrmsr
 * 000000014041FD88: btr     word ptr gs:860h, 5
 * 000000014041FD93: jnb     loc_14041FED0
 * 000000014041FD99: call    loc_14041FEAC
 * 000000014041FD9E: add     rsp, 8
 * 000000014041FDA2: call    loc_14041FEB5
 * 000000014041FDA7: add     rsp, 8
 * 000000014041FDAB: call    loc_14041FD9E
 * 000000014041FDB0: add     rsp, 8
 * 000000014041FDB4: call    loc_14041FDA7
 * 000000014041FDB9: add     rsp, 8
 * 000000014041FDBD: call    loc_14041FDB0
 * 000000014041FDC2: add     rsp, 8
 * 000000014041FDC6: call    loc_14041FDB9
 * 000000014041FDCB: add     rsp, 8
 * 000000014041FDCF: call    loc_14041FDC2
 * 000000014041FDD4: add     rsp, 8
 * 000000014041FDD8: call    loc_14041FDCB
 * 000000014041FDDD: add     rsp, 8
 * 000000014041FDE1: call    loc_14041FDD4
 * 000000014041FDE6: add     rsp, 8
 * 000000014041FDEA: call    loc_14041FDDD
 * 000000014041FDEF: add     rsp, 8
 * 000000014041FDF3: call    loc_14041FDE6
 * 000000014041FDF8: add     rsp, 8
 * 000000014041FDFC: call    loc_14041FDEF
 * 000000014041FE01: add     rsp, 8
 * 000000014041FE05: call    loc_14041FDF8
 * 000000014041FE0A: add     rsp, 8
 * 000000014041FE0E: call    loc_14041FE01
 * 000000014041FE13: add     rsp, 8
 * 000000014041FE17: call    loc_14041FE0A
 * 000000014041FE1C: add     rsp, 8
 * 000000014041FE20: call    loc_14041FE13
 * 000000014041FE25: add     rsp, 8
 * 000000014041FE29: call    loc_14041FE1C
 * 000000014041FE2E: add     rsp, 8
 * 000000014041FE32: call    loc_14041FE25
 * 000000014041FE37: add     rsp, 8
 * 000000014041FE3B: call    loc_14041FE2E
 * 000000014041FE40: add     rsp, 8
 * 000000014041FE44: call    loc_14041FE37
 * 000000014041FE49: add     rsp, 8
 * 000000014041FE4D: call    loc_14041FE40
 * 000000014041FE52: add     rsp, 8
 * 000000014041FE56: call    loc_14041FE49
 * 000000014041FE5B: add     rsp, 8
 * 000000014041FE5F: call    loc_14041FE52
 * 000000014041FE64: add     rsp, 8
 * 000000014041FE68: call    loc_14041FE5B
 * 000000014041FE6D: add     rsp, 8
 * 000000014041FE71: call    loc_14041FE64
 * 000000014041FE76: add     rsp, 8
 * 000000014041FE7A: call    loc_14041FE6D
 * 000000014041FE7F: add     rsp, 8
 * 000000014041FE83: call    loc_14041FE76
 * 000000014041FE88: add     rsp, 8
 * 000000014041FE8C: call    loc_14041FE7F
 * 000000014041FE91: add     rsp, 8
 * 000000014041FE95: call    loc_14041FE88
 * 000000014041FE9A: add     rsp, 8
 * 000000014041FE9E: call    loc_14041FE91
 * 000000014041FEA3: add     rsp, 8
 * 000000014041FEA7: call    loc_14041FE9A
 * 000000014041FEAC: add     rsp, 8
 * 000000014041FEB0: call    loc_14041FEA3
 * 000000014041FEB5: add     rsp, 8
 * 000000014041FEB9: mov     eax, 0DADAh
 * 000000014041FEBE: test    byte ptr gs:862h, 8
 * 000000014041FEC7: jz      short loc_14041FED0
 * 000000014041FEC9: mov     al, 20h ; ' '
 * 000000014041FECB: incsspq rax
 * 000000014041FED0: test    word ptr gs:860h, 80h
 * 000000014041FEDB: jz      short loc_14041FEE9
 * 000000014041FEDD: xor     eax, eax
 * 000000014041FEDF: xor     edx, edx
 * 000000014041FEE1: mov     ecx, 1
 * 000000014041FEE6: div     rcx
 * 000000014041FEE9: mov     rdx, [rbp-40h]
 * 000000014041FEED: mov     rcx, [rbp-48h]
 * 000000014041FEF1: mov     rax, [rbp-50h]
 * 000000014041FEF5: mov     rsp, rbp
 * 000000014041FEF8: mov     rbp, [rbp+0D8h]
 * 000000014041FEFF: add     rsp, 0E8h
 * 000000014041FF06: test    cs:byte_140E01840, 1
 * 000000014041FF0D: jz      short loc_14041FF14
 * 000000014041FF0F: jmp     sub_140AB6B80
 * 000000014041FF14: test    word ptr gs:860h, 100h
 * 000000014041FF1F: jz      short loc_14041FF26
 * 000000014041FF21: verw    [rsp-1E8h+arg_200]
 * 000000014041FF26: swapgs
 * 000000014041FF29: iretq
 * 000000014041FF2B: ldmxcsr dword ptr [rbp-54h]
 * 000000014041FF2F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041FF33: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041FF37: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041FF3B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041FF3F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041FF43: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041FF47: mov     r11, [rbp-20h]
 * 000000014041FF4B: mov     r10, [rbp-28h]
 * 000000014041FF4F: mov     r9, [rbp-30h]
 * 000000014041FF53: mov     r8, [rbp-38h]
 * 000000014041FF57: mov     rdx, [rbp-40h]
 * 000000014041FF5B: mov     rcx, [rbp-48h]
 * 000000014041FF5F: mov     rax, [rbp-50h]
 * 000000014041FF63: mov     rsp, rbp
 * 000000014041FF66: mov     rbp, [rbp+0D8h]
 * 000000014041FF6D: add     rsp, 0E8h
 * 000000014041FF74: iretq
 * 000000014041FF76: add     rsp, 138h
 * 000000014041FF7D: retn
 */
