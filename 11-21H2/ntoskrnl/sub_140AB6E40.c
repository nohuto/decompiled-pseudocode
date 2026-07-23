/*
 * XREFs of sub_140AB6E40 @ 0x140AB6E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140AB6E40 @ 0x140AB6E40 (sub_140AB6E40.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB6E40 @ 0x140AB6E40
 * Reason: Hex-Rays returned no pseudocode for 0x140AB6E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB6E40: swapgs
 * 0000000140AB6E43: mov     gs:0A010h, rsp
 * 0000000140AB6E4C: mov     rsp, gs:0A000h
 * 0000000140AB6E55: mov     cr3, rsp
 * 0000000140AB6E58: mov     rsp, gs:0A008h
 * 0000000140AB6E61: push    2Bh ; '+'
 * 0000000140AB6E63: push    qword ptr gs:0A010h
 * 0000000140AB6E6B: push    r11
 * 0000000140AB6E6D: push    23h ; '#'
 * 0000000140AB6E6F: push    rcx
 * 0000000140AB6E70: sub     rsp, 8
 * 0000000140AB6E74: push    rbp
 * 0000000140AB6E75: sub     rsp, 158h
 * 0000000140AB6E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140AB6E84: mov     byte ptr [rbp-55h], 1
 * 0000000140AB6E88: mov     [rbp-50h], rax
 * 0000000140AB6E8C: mov     [rbp-48h], rcx
 * 0000000140AB6E90: mov     [rbp-40h], rdx
 * 0000000140AB6E94: mov     [rbp-38h], r8
 * 0000000140AB6E98: mov     [rbp-30h], r9
 * 0000000140AB6E9C: mov     [rbp-28h], r10
 * 0000000140AB6EA0: mov     [rbp-20h], r11
 * 0000000140AB6EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140AB6EAB: jnz     short loc_140AB6EE7
 * 0000000140AB6EAD: xor     edx, edx
 * 0000000140AB6EAF: rdsspq  rdx
 * 0000000140AB6EB4: mov     [rbp+58h], rdx
 * 0000000140AB6EB8: lfence
 * 0000000140AB6EBB: test    word ptr gs:860h, 1
 * 0000000140AB6EC6: jnz     short loc_140AB6ED0
 * 0000000140AB6EC8: lfence
 * 0000000140AB6ECB: jmp     loc_140AB712F
 * 0000000140AB6ED0: movzx   eax, word ptr gs:864h
 * 0000000140AB6ED9: mov     ecx, 48h ; 'H'
 * 0000000140AB6EDE: xor     edx, edx
 * 0000000140AB6EE0: wrmsr
 * 0000000140AB6EE2: jmp     loc_140AB712F
 * 0000000140AB6EE7: test    cs:byte_140E01840, 1
 * 0000000140AB6EEE: jnz     short loc_140AB6EF3
 * 0000000140AB6EF0: swapgs
 * 0000000140AB6EF3: lfence
 * 0000000140AB6EF6: mov     rcx, gs:9828h
 * 0000000140AB6EFF: test    rcx, rcx
 * 0000000140AB6F02: jz      short loc_140AB6F23
 * 0000000140AB6F04: rdsspq  rdx
 * 0000000140AB6F09: mov     r10, gs:9820h
 * 0000000140AB6F12: add     r10, 8
 * 0000000140AB6F16: cmp     rdx, r10
 * 0000000140AB6F19: jnz     short loc_140AB6F23
 * 0000000140AB6F1B: rstorssp qword ptr [rcx]
 * 0000000140AB6F1F: saveprevssp
 * 0000000140AB6F23: mov     r10, gs:188h
 * 0000000140AB6F2C: mov     rcx, gs:188h
 * 0000000140AB6F35: mov     rcx, [rcx+220h]
 * 0000000140AB6F3C: mov     rcx, [rcx+9E0h]
 * 0000000140AB6F43: mov     gs:858h, rcx
 * 0000000140AB6F4C: mov     cx, gs:850h
 * 0000000140AB6F55: mov     gs:852h, cx
 * 0000000140AB6F5E: mov     cx, gs:860h
 * 0000000140AB6F67: mov     gs:854h, cx
 * 0000000140AB6F70: movzx   eax, word ptr gs:866h
 * 0000000140AB6F79: cmp     gs:864h, ax
 * 0000000140AB6F82: jz      short loc_140AB6F96
 * 0000000140AB6F84: mov     gs:864h, ax
 * 0000000140AB6F8D: mov     ecx, 48h ; 'H'
 * 0000000140AB6F92: xor     edx, edx
 * 0000000140AB6F94: wrmsr
 * 0000000140AB6F96: movzx   edx, word ptr gs:860h
 * 0000000140AB6F9F: test    edx, 8
 * 0000000140AB6FA5: jz      short loc_140AB6FBE
 * 0000000140AB6FA7: mov     eax, 1
 * 0000000140AB6FAC: xor     edx, edx
 * 0000000140AB6FAE: mov     ecx, 49h ; 'I'
 * 0000000140AB6FB3: wrmsr
 * 0000000140AB6FB5: movzx   edx, word ptr gs:860h
 * 0000000140AB6FBE: test    edx, 2
 * 0000000140AB6FC4: jz      loc_140AB7101
 * 0000000140AB6FCA: call    loc_140AB70DD
 * 0000000140AB6FCF: add     rsp, 8
 * 0000000140AB6FD3: call    loc_140AB70E6
 * 0000000140AB6FD8: add     rsp, 8
 * 0000000140AB6FDC: call    loc_140AB6FCF
 * 0000000140AB6FE1: add     rsp, 8
 * 0000000140AB6FE5: call    loc_140AB6FD8
 * 0000000140AB6FEA: add     rsp, 8
 * 0000000140AB6FEE: call    loc_140AB6FE1
 * 0000000140AB6FF3: add     rsp, 8
 * 0000000140AB6FF7: call    loc_140AB6FEA
 * 0000000140AB6FFC: add     rsp, 8
 * 0000000140AB7000: call    loc_140AB6FF3
 * 0000000140AB7005: add     rsp, 8
 * 0000000140AB7009: call    loc_140AB6FFC
 * 0000000140AB700E: add     rsp, 8
 * 0000000140AB7012: call    loc_140AB7005
 * 0000000140AB7017: add     rsp, 8
 * 0000000140AB701B: call    loc_140AB700E
 * 0000000140AB7020: add     rsp, 8
 * 0000000140AB7024: call    loc_140AB7017
 * 0000000140AB7029: add     rsp, 8
 * 0000000140AB702D: call    loc_140AB7020
 * 0000000140AB7032: add     rsp, 8
 * 0000000140AB7036: call    loc_140AB7029
 * 0000000140AB703B: add     rsp, 8
 * 0000000140AB703F: call    loc_140AB7032
 * 0000000140AB7044: add     rsp, 8
 * 0000000140AB7048: call    loc_140AB703B
 * 0000000140AB704D: add     rsp, 8
 * 0000000140AB7051: call    loc_140AB7044
 * 0000000140AB7056: add     rsp, 8
 * 0000000140AB705A: call    loc_140AB704D
 * 0000000140AB705F: add     rsp, 8
 * 0000000140AB7063: call    loc_140AB7056
 * 0000000140AB7068: add     rsp, 8
 * 0000000140AB706C: call    loc_140AB705F
 * 0000000140AB7071: add     rsp, 8
 * 0000000140AB7075: call    loc_140AB7068
 * 0000000140AB707A: add     rsp, 8
 * 0000000140AB707E: call    loc_140AB7071
 * 0000000140AB7083: add     rsp, 8
 * 0000000140AB7087: call    loc_140AB707A
 * 0000000140AB708C: add     rsp, 8
 * 0000000140AB7090: call    loc_140AB7083
 * 0000000140AB7095: add     rsp, 8
 * 0000000140AB7099: call    loc_140AB708C
 * 0000000140AB709E: add     rsp, 8
 * 0000000140AB70A2: call    loc_140AB7095
 * 0000000140AB70A7: add     rsp, 8
 * 0000000140AB70AB: call    loc_140AB709E
 * 0000000140AB70B0: add     rsp, 8
 * 0000000140AB70B4: call    loc_140AB70A7
 * 0000000140AB70B9: add     rsp, 8
 * 0000000140AB70BD: call    loc_140AB70B0
 * 0000000140AB70C2: add     rsp, 8
 * 0000000140AB70C6: call    loc_140AB70B9
 * 0000000140AB70CB: add     rsp, 8
 * 0000000140AB70CF: call    loc_140AB70C2
 * 0000000140AB70D4: add     rsp, 8
 * 0000000140AB70D8: call    loc_140AB70CB
 * 0000000140AB70DD: add     rsp, 8
 * 0000000140AB70E1: call    loc_140AB70D4
 * 0000000140AB70E6: add     rsp, 8
 * 0000000140AB70EA: mov     eax, 0DADAh
 * 0000000140AB70EF: test    byte ptr gs:862h, 8
 * 0000000140AB70F8: jz      short loc_140AB7101
 * 0000000140AB70FA: mov     al, 20h ; ' '
 * 0000000140AB70FC: incsspq rax
 * 0000000140AB7101: test    edx, 200h
 * 0000000140AB7107: jz      short loc_140AB710E
 * 0000000140AB7109: call    sub_1404357C0
 * 0000000140AB710E: lfence
 * 0000000140AB7111: mov     byte ptr gs:856h, 0
 * 0000000140AB711A: test    byte ptr [r10+3], 3
 * 0000000140AB711F: mov     word ptr [rbp+80h], 0
 * 0000000140AB7128: jz      short loc_140AB712F
 * 0000000140AB712A: call    sub_14041F920
 * 0000000140AB712F: cld
 * 0000000140AB7130: stmxcsr dword ptr [rbp-54h]
 * 0000000140AB7134: ldmxcsr dword ptr gs:180h
 * 0000000140AB713D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140AB7141: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140AB7145: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140AB7149: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140AB714D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140AB7151: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140AB7155: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140AB715C: jz      short loc_140AB716A
 * 0000000140AB715E: test    byte ptr [rbp+0F0h], 1
 * 0000000140AB7165: jz      short loc_140AB716A
 * 0000000140AB7167: stac
 * 0000000140AB716A: sub     qword ptr [rbp+0E8h], 2
 * 0000000140AB7172: and     dword ptr [rbp+0ECh], 0
 * 0000000140AB7179: sti
 * 0000000140AB717A: mov     ecx, 0C000001Dh
 * 0000000140AB717F: xor     edx, edx
 * 0000000140AB7181: mov     r8, [rbp+0E8h]
 * 0000000140AB7188: call    sub_140434E40
 * 0000000140AB718D: nop
 * 0000000140AB718E: retn
 */
