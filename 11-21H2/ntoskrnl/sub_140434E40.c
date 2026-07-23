/*
 * XREFs of sub_140434E40 @ 0x140434E40
 * Callers:
 *     sub_14042C600 @ 0x14042C600 (sub_14042C600.c)
 *     sub_14042CB00 @ 0x14042CB00 (sub_14042CB00.c)
 *     sub_14042D480 @ 0x14042D480 (sub_14042D480.c)
 *     sub_14042D7C0 @ 0x14042D7C0 (sub_14042D7C0.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_14042E840 @ 0x14042E840 (sub_14042E840.c)
 *     sub_14042F580 @ 0x14042F580 (sub_14042F580.c)
 *     sub_14042F940 @ 0x14042F940 (sub_14042F940.c)
 *     sub_14042FCC0 @ 0x14042FCC0 (sub_14042FCC0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430800 @ 0x140430800 (sub_140430800.c)
 *     sub_140430BC0 @ 0x140430BC0 (sub_140430BC0.c)
 *     sub_140431CC0 @ 0x140431CC0 (sub_140431CC0.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140433200 @ 0x140433200 (sub_140433200.c)
 *     sub_140433540 @ 0x140433540 (sub_140433540.c)
 *     sub_140433B00 @ 0x140433B00 (sub_140433B00.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140AB6E40 @ 0x140AB6E40 (sub_140AB6E40.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_140420590 @ 0x140420590 (sub_140420590.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140434E40 @ 0x140434E40
 * Reason: Hex-Rays returned no pseudocode for 0x140434E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434E40: sub     rsp, 1D8h
 * 0000000140434E47: lea     rax, [rsp+1D8h+var_D8]
 * 0000000140434E4F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434E54: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434E59: movaps  [rsp+1D8h+var_188], xmm8
 * 0000000140434E5F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434E65: movaps  [rsp+1D8h+var_168], xmm10
 * 0000000140434E6B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434E70: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434E75: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140434E7A: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140434E7F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434E84: mov     [rax], rbx
 * 0000000140434E87: mov     [rax+8], rdi
 * 0000000140434E8B: mov     [rax+10h], rsi
 * 0000000140434E8F: mov     [rax+18h], r12
 * 0000000140434E93: mov     [rax+20h], r13
 * 0000000140434E97: mov     [rax+28h], r14
 * 0000000140434E9B: mov     [rax+30h], r15
 * 0000000140434E9F: lea     rax, [rsp+1D8h+var_A0]
 * 0000000140434EA7: mov     [rax], ecx
 * 0000000140434EA9: xor     ecx, ecx
 * 0000000140434EAB: mov     [rax+4], ecx
 * 0000000140434EAE: mov     [rax+8], rcx
 * 0000000140434EB2: mov     [rax+10h], r8
 * 0000000140434EB6: mov     [rax+18h], edx
 * 0000000140434EB9: mov     [rax+20h], r9
 * 0000000140434EBD: mov     [rax+28h], r10
 * 0000000140434EC1: mov     [rax+30h], r11
 * 0000000140434EC5: mov     r9b, [rbp+0F0h]
 * 0000000140434ECC: and     r9b, 1
 * 0000000140434ED0: mov     [rsp+1D8h+var_1B8], 1; char
 * 0000000140434ED5: lea     r8, [rbp-80h]
 * 0000000140434ED9: mov     rdx, rsp
 * 0000000140434EDC: mov     rcx, rax; ULONG_PTR
 * 0000000140434EDF: jnz     short loc_140434F49
 * 0000000140434EE1: mov     r10, cr8
 * 0000000140434EE5: mov     r11, 2
 * 0000000140434EEC: test    dword ptr [rbp+0F8h], 200h
 * 0000000140434EF6: cmovz   r10, r11
 * 0000000140434EFA: cmp     r10, r11
 * 0000000140434EFD: jb      short loc_140434F49
 * 0000000140434EFF: cmp     byte ptr gs:83E6h, 0
 * 0000000140434F08: jnz     short loc_140434F49
 * 0000000140434F0A: mov     r10, gs:83E8h
 * 0000000140434F13: add     r10, 50h ; 'P'
 * 0000000140434F17: cmp     rsp, r10
 * 0000000140434F1A: ja      short loc_140434F28
 * 0000000140434F1C: sub     r10, 6000h
 * 0000000140434F23: cmp     rsp, r10
 * 0000000140434F26: jnb     short loc_140434F49
 * 0000000140434F28: mov     r10, gs:8B58h
 * 0000000140434F31: cmp     rsp, r10
 * 0000000140434F34: ja      short loc_140434F42
 * 0000000140434F36: sub     r10, 6000h
 * 0000000140434F3D: cmp     rsp, r10
 * 0000000140434F40: jnb     short loc_140434F49
 * 0000000140434F42: call    sub_140420590
 * 0000000140434F47: jmp     short loc_140434F4E
 * 0000000140434F49: call    sub_140299280
 * 0000000140434F4E: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140434F56: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434F5B: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140434F60: movaps  xmm8, [rsp+1D8h+var_188]
 * 0000000140434F66: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140434F6C: movaps  xmm10, [rsp+1D8h+var_168]
 * 0000000140434F72: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140434F77: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140434F7C: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140434F81: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140434F86: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140434F8B: mov     rbx, [rcx]
 * 0000000140434F8E: mov     rdi, [rcx+8]
 * 0000000140434F92: mov     rsi, [rcx+10h]
 * 0000000140434F96: mov     r12, [rcx+18h]
 * 0000000140434F9A: mov     r13, [rcx+20h]
 * 0000000140434F9E: mov     r14, [rcx+28h]
 * 0000000140434FA2: mov     r15, [rcx+30h]
 * 0000000140434FA6: cli
 * 0000000140434FA7: xor     ecx, ecx
 * 0000000140434FA9: rdsspq  rcx
 * 0000000140434FAE: test    rcx, rcx
 * 0000000140434FB1: jz      short loc_140434FBD
 * 0000000140434FB3: mov     ecx, 1
 * 0000000140434FB8: incsspq rcx
 * 0000000140434FBD: test    byte ptr [rbp+0F0h], 1
 * 0000000140434FC4: jz      loc_1404352B2
 * 0000000140434FCA: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140434FD1: jz      short loc_140434FD6
 * 0000000140434FD3: stac
 * 0000000140434FD6: mov     rcx, gs:188h
 * 0000000140434FDF: test    byte ptr [rcx+0C2h], 3
 * 0000000140434FE6: jz      short loc_140435003
 * 0000000140434FE8: mov     ecx, 1
 * 0000000140434FED: mov     cr8, rcx
 * 0000000140434FF1: sti
 * 0000000140434FF2: call    sub_140425700
 * 0000000140434FF7: cli
 * 0000000140434FF8: mov     ecx, 0
 * 0000000140434FFD: mov     cr8, rcx
 * 0000000140435001: jmp     short loc_140434FD6
 * 0000000140435003: test    byte ptr gs:86Ch, 2
 * 000000014043500C: jz      short loc_140435015
 * 000000014043500E: xor     ecx, ecx
 * 0000000140435010: call    sub_14020D230
 * 0000000140435015: mov     rcx, gs:188h
 * 000000014043501E: test    dword ptr [rcx], 8000000h
 * 0000000140435024: jz      short loc_14043502B
 * 0000000140435026: call    sub_1404206B0
 * 000000014043502B: mov     rcx, gs:188h
 * 0000000140435034: test    dword ptr [rcx], 10000h
 * 000000014043503A: jz      short loc_140435050
 * 000000014043503C: test    byte ptr [rcx+2], 1
 * 0000000140435040: jz      short loc_140435050
 * 0000000140435042: call    sub_140571820
 * 0000000140435047: mov     rcx, gs:188h
 * 0000000140435050: ldmxcsr dword ptr [rbp-54h]
 * 0000000140435054: cmp     word ptr [rbp+80h], 0
 * 000000014043505C: jz      short loc_140435063
 * 000000014043505E: call    sub_14041F8A0
 * 0000000140435063: mov     rcx, gs:188h
 * 000000014043506C: bt      dword ptr [rcx+74h], 16h
 * 0000000140435071: jnb     short loc_14043509D
 * 0000000140435073: xor     ecx, ecx
 * 0000000140435075: rdsspq  rcx
 * 000000014043507A: mov     r8, gs:9828h
 * 0000000140435083: add     r8, 8
 * 0000000140435087: cmp     rcx, r8
 * 000000014043508A: jnz     short loc_14043509D
 * 000000014043508C: mov     rcx, gs:9820h
 * 0000000140435095: rstorssp qword ptr [rcx]
 * 0000000140435099: saveprevssp
 * 000000014043509D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404350A1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404350A5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404350A9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404350AD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404350B1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404350B5: mov     r11, [rbp-20h]
 * 00000001404350B9: mov     r10, [rbp-28h]
 * 00000001404350BD: mov     r9, [rbp-30h]
 * 00000001404350C1: mov     r8, [rbp-38h]
 * 00000001404350C5: mov     byte ptr gs:856h, 0
 * 00000001404350CE: movzx   eax, word ptr gs:86Ah
 * 00000001404350D7: cmp     gs:864h, ax
 * 00000001404350E0: jz      short loc_1404350F4
 * 00000001404350E2: mov     gs:864h, ax
 * 00000001404350EB: mov     ecx, 48h ; 'H'
 * 00000001404350F0: xor     edx, edx
 * 00000001404350F2: wrmsr
 * 00000001404350F4: btr     word ptr gs:860h, 2
 * 00000001404350FF: jnb     short loc_14043510F
 * 0000000140435101: mov     eax, 1
 * 0000000140435106: xor     edx, edx
 * 0000000140435108: mov     ecx, 49h ; 'I'
 * 000000014043510D: wrmsr
 * 000000014043510F: btr     word ptr gs:860h, 5
 * 000000014043511A: jnb     loc_140435257
 * 0000000140435120: call    loc_140435233
 * 0000000140435125: add     rsp, 8
 * 0000000140435129: call    loc_14043523C
 * 000000014043512E: add     rsp, 8
 * 0000000140435132: call    loc_140435125
 * 0000000140435137: add     rsp, 8
 * 000000014043513B: call    loc_14043512E
 * 0000000140435140: add     rsp, 8
 * 0000000140435144: call    loc_140435137
 * 0000000140435149: add     rsp, 8
 * 000000014043514D: call    loc_140435140
 * 0000000140435152: add     rsp, 8
 * 0000000140435156: call    loc_140435149
 * 000000014043515B: add     rsp, 8
 * 000000014043515F: call    loc_140435152
 * 0000000140435164: add     rsp, 8
 * 0000000140435168: call    loc_14043515B
 * 000000014043516D: add     rsp, 8
 * 0000000140435171: call    loc_140435164
 * 0000000140435176: add     rsp, 8
 * 000000014043517A: call    loc_14043516D
 * 000000014043517F: add     rsp, 8
 * 0000000140435183: call    loc_140435176
 * 0000000140435188: add     rsp, 8
 * 000000014043518C: call    loc_14043517F
 * 0000000140435191: add     rsp, 8
 * 0000000140435195: call    loc_140435188
 * 000000014043519A: add     rsp, 8
 * 000000014043519E: call    loc_140435191
 * 00000001404351A3: add     rsp, 8
 * 00000001404351A7: call    loc_14043519A
 * 00000001404351AC: add     rsp, 8
 * 00000001404351B0: call    loc_1404351A3
 * 00000001404351B5: add     rsp, 8
 * 00000001404351B9: call    loc_1404351AC
 * 00000001404351BE: add     rsp, 8
 * 00000001404351C2: call    loc_1404351B5
 * 00000001404351C7: add     rsp, 8
 * 00000001404351CB: call    loc_1404351BE
 * 00000001404351D0: add     rsp, 8
 * 00000001404351D4: call    loc_1404351C7
 * 00000001404351D9: add     rsp, 8
 * 00000001404351DD: call    loc_1404351D0
 * 00000001404351E2: add     rsp, 8
 * 00000001404351E6: call    loc_1404351D9
 * 00000001404351EB: add     rsp, 8
 * 00000001404351EF: call    loc_1404351E2
 * 00000001404351F4: add     rsp, 8
 * 00000001404351F8: call    loc_1404351EB
 * 00000001404351FD: add     rsp, 8
 * 0000000140435201: call    loc_1404351F4
 * 0000000140435206: add     rsp, 8
 * 000000014043520A: call    loc_1404351FD
 * 000000014043520F: add     rsp, 8
 * 0000000140435213: call    loc_140435206
 * 0000000140435218: add     rsp, 8
 * 000000014043521C: call    loc_14043520F
 * 0000000140435221: add     rsp, 8
 * 0000000140435225: call    loc_140435218
 * 000000014043522A: add     rsp, 8
 * 000000014043522E: call    loc_140435221
 * 0000000140435233: add     rsp, 8
 * 0000000140435237: call    loc_14043522A
 * 000000014043523C: add     rsp, 8
 * 0000000140435240: mov     eax, 0DADAh
 * 0000000140435245: test    byte ptr gs:862h, 8
 * 000000014043524E: jz      short loc_140435257
 * 0000000140435250: mov     al, 20h ; ' '
 * 0000000140435252: incsspq rax
 * 0000000140435257: test    word ptr gs:860h, 80h
 * 0000000140435262: jz      short loc_140435270
 * 0000000140435264: xor     eax, eax
 * 0000000140435266: xor     edx, edx
 * 0000000140435268: mov     ecx, 1
 * 000000014043526D: div     rcx
 * 0000000140435270: mov     rdx, [rbp-40h]
 * 0000000140435274: mov     rcx, [rbp-48h]
 * 0000000140435278: mov     rax, [rbp-50h]
 * 000000014043527C: mov     rsp, rbp
 * 000000014043527F: mov     rbp, [rbp+0D8h]
 * 0000000140435286: add     rsp, 0E8h
 * 000000014043528D: test    cs:byte_140E01840, 1
 * 0000000140435294: jz      short loc_14043529B
 * 0000000140435296: jmp     sub_140AB6B80
 * 000000014043529B: test    word ptr gs:860h, 100h
 * 00000001404352A6: jz      short loc_1404352AD
 * 00000001404352A8: verw    [rsp-1E8h+arg_200]
 * 00000001404352AD: swapgs
 * 00000001404352B0: iretq
 * 00000001404352B2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404352B6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404352BA: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404352BE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404352C2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404352C6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404352CA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404352CE: mov     r11, [rbp-20h]
 * 00000001404352D2: mov     r10, [rbp-28h]
 * 00000001404352D6: mov     r9, [rbp-30h]
 * 00000001404352DA: mov     r8, [rbp-38h]
 * 00000001404352DE: mov     rdx, [rbp-40h]
 * 00000001404352E2: mov     rcx, [rbp-48h]
 * 00000001404352E6: mov     rax, [rbp-50h]
 * 00000001404352EA: mov     rsp, rbp
 * 00000001404352ED: mov     rbp, [rbp+0D8h]
 * 00000001404352F4: add     rsp, 0E8h
 * 00000001404352FB: iretq
 */
