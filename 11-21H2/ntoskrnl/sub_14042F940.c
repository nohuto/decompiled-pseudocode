/*
 * XREFs of sub_14042F940 @ 0x14042F940
 * Callers:
 *     sub_140AB5740 @ 0x140AB5740 (sub_140AB5740.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042F940 @ 0x14042F940 (sub_14042F940.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042F940 @ 0x14042F940
 * Reason: Hex-Rays returned no pseudocode for 0x14042F940
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F940: push    rbp
 * 000000014042F941: sub     rsp, 158h
 * 000000014042F948: lea     rbp, [rsp+80h]
 * 000000014042F950: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F954: mov     [rbp+0D8h+var_128], rax
 * 000000014042F958: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F95C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F960: mov     [rbp+0D8h+var_110], r8
 * 000000014042F964: mov     [rbp+0D8h+var_108], r9
 * 000000014042F968: mov     [rbp+0D8h+var_100], r10
 * 000000014042F96C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F970: test    [rbp+0D8h+arg_8], 1
 * 000000014042F977: jnz     short loc_14042F9B3
 * 000000014042F979: xor     edx, edx
 * 000000014042F97B: rdsspq  rdx
 * 000000014042F980: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F984: lfence
 * 000000014042F987: test    word ptr gs:860h, 1
 * 000000014042F992: jnz     short loc_14042F99C
 * 000000014042F994: lfence
 * 000000014042F997: jmp     loc_14042FBFB
 * 000000014042F99C: movzx   eax, word ptr gs:864h
 * 000000014042F9A5: mov     ecx, 48h ; 'H'
 * 000000014042F9AA: xor     edx, edx
 * 000000014042F9AC: wrmsr
 * 000000014042F9AE: jmp     loc_14042FBFB
 * 000000014042F9B3: test    cs:byte_140E01840, 1
 * 000000014042F9BA: jnz     short loc_14042F9BF
 * 000000014042F9BC: swapgs
 * 000000014042F9BF: lfence
 * 000000014042F9C2: mov     rcx, gs:9828h
 * 000000014042F9CB: test    rcx, rcx
 * 000000014042F9CE: jz      short loc_14042F9EF
 * 000000014042F9D0: rdsspq  rdx
 * 000000014042F9D5: mov     r10, gs:9820h
 * 000000014042F9DE: add     r10, 8
 * 000000014042F9E2: cmp     rdx, r10
 * 000000014042F9E5: jnz     short loc_14042F9EF
 * 000000014042F9E7: rstorssp qword ptr [rcx]
 * 000000014042F9EB: saveprevssp
 * 000000014042F9EF: mov     r10, gs:188h
 * 000000014042F9F8: mov     rcx, gs:188h
 * 000000014042FA01: mov     rcx, [rcx+220h]
 * 000000014042FA08: mov     rcx, [rcx+9E0h]
 * 000000014042FA0F: mov     gs:858h, rcx
 * 000000014042FA18: mov     cx, gs:850h
 * 000000014042FA21: mov     gs:852h, cx
 * 000000014042FA2A: mov     cx, gs:860h
 * 000000014042FA33: mov     gs:854h, cx
 * 000000014042FA3C: movzx   eax, word ptr gs:866h
 * 000000014042FA45: cmp     gs:864h, ax
 * 000000014042FA4E: jz      short loc_14042FA62
 * 000000014042FA50: mov     gs:864h, ax
 * 000000014042FA59: mov     ecx, 48h ; 'H'
 * 000000014042FA5E: xor     edx, edx
 * 000000014042FA60: wrmsr
 * 000000014042FA62: movzx   edx, word ptr gs:860h
 * 000000014042FA6B: test    edx, 8
 * 000000014042FA71: jz      short loc_14042FA8A
 * 000000014042FA73: mov     eax, 1
 * 000000014042FA78: xor     edx, edx
 * 000000014042FA7A: mov     ecx, 49h ; 'I'
 * 000000014042FA7F: wrmsr
 * 000000014042FA81: movzx   edx, word ptr gs:860h
 * 000000014042FA8A: test    edx, 2
 * 000000014042FA90: jz      loc_14042FBCD
 * 000000014042FA96: call    loc_14042FBA9
 * 000000014042FA9B: add     rsp, 8
 * 000000014042FA9F: call    loc_14042FBB2
 * 000000014042FAA4: add     rsp, 8
 * 000000014042FAA8: call    loc_14042FA9B
 * 000000014042FAAD: add     rsp, 8
 * 000000014042FAB1: call    loc_14042FAA4
 * 000000014042FAB6: add     rsp, 8
 * 000000014042FABA: call    loc_14042FAAD
 * 000000014042FABF: add     rsp, 8
 * 000000014042FAC3: call    loc_14042FAB6
 * 000000014042FAC8: add     rsp, 8
 * 000000014042FACC: call    loc_14042FABF
 * 000000014042FAD1: add     rsp, 8
 * 000000014042FAD5: call    loc_14042FAC8
 * 000000014042FADA: add     rsp, 8
 * 000000014042FADE: call    loc_14042FAD1
 * 000000014042FAE3: add     rsp, 8
 * 000000014042FAE7: call    loc_14042FADA
 * 000000014042FAEC: add     rsp, 8
 * 000000014042FAF0: call    loc_14042FAE3
 * 000000014042FAF5: add     rsp, 8
 * 000000014042FAF9: call    loc_14042FAEC
 * 000000014042FAFE: add     rsp, 8
 * 000000014042FB02: call    loc_14042FAF5
 * 000000014042FB07: add     rsp, 8
 * 000000014042FB0B: call    loc_14042FAFE
 * 000000014042FB10: add     rsp, 8
 * 000000014042FB14: call    loc_14042FB07
 * 000000014042FB19: add     rsp, 8
 * 000000014042FB1D: call    loc_14042FB10
 * 000000014042FB22: add     rsp, 8
 * 000000014042FB26: call    loc_14042FB19
 * 000000014042FB2B: add     rsp, 8
 * 000000014042FB2F: call    loc_14042FB22
 * 000000014042FB34: add     rsp, 8
 * 000000014042FB38: call    loc_14042FB2B
 * 000000014042FB3D: add     rsp, 8
 * 000000014042FB41: call    loc_14042FB34
 * 000000014042FB46: add     rsp, 8
 * 000000014042FB4A: call    loc_14042FB3D
 * 000000014042FB4F: add     rsp, 8
 * 000000014042FB53: call    loc_14042FB46
 * 000000014042FB58: add     rsp, 8
 * 000000014042FB5C: call    loc_14042FB4F
 * 000000014042FB61: add     rsp, 8
 * 000000014042FB65: call    loc_14042FB58
 * 000000014042FB6A: add     rsp, 8
 * 000000014042FB6E: call    loc_14042FB61
 * 000000014042FB73: add     rsp, 8
 * 000000014042FB77: call    loc_14042FB6A
 * 000000014042FB7C: add     rsp, 8
 * 000000014042FB80: call    loc_14042FB73
 * 000000014042FB85: add     rsp, 8
 * 000000014042FB89: call    loc_14042FB7C
 * 000000014042FB8E: add     rsp, 8
 * 000000014042FB92: call    loc_14042FB85
 * 000000014042FB97: add     rsp, 8
 * 000000014042FB9B: call    loc_14042FB8E
 * 000000014042FBA0: add     rsp, 8
 * 000000014042FBA4: call    loc_14042FB97
 * 000000014042FBA9: add     rsp, 8
 * 000000014042FBAD: call    loc_14042FBA0
 * 000000014042FBB2: add     rsp, 8
 * 000000014042FBB6: mov     eax, 0DADAh
 * 000000014042FBBB: test    byte ptr gs:862h, 8
 * 000000014042FBC4: jz      short loc_14042FBCD
 * 000000014042FBC6: mov     al, 20h ; ' '
 * 000000014042FBC8: incsspq rax
 * 000000014042FBCD: test    edx, 200h
 * 000000014042FBD3: jz      short loc_14042FBDA
 * 000000014042FBD5: call    sub_1404357C0
 * 000000014042FBDA: lfence
 * 000000014042FBDD: mov     byte ptr gs:856h, 0
 * 000000014042FBE6: test    byte ptr [r10+3], 3
 * 000000014042FBEB: mov     [rbp+0D8h+var_58], 0
 * 000000014042FBF4: jz      short loc_14042FBFB
 * 000000014042FBF6: call    sub_14041F920
 * 000000014042FBFB: cld
 * 000000014042FBFC: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042FC00: ldmxcsr dword ptr gs:180h
 * 000000014042FC09: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042FC0D: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042FC11: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042FC15: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042FC19: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042FC1D: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042FC21: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042FC28: jz      short loc_14042FC36
 * 000000014042FC2A: test    [rbp+0D8h+arg_8], 1
 * 000000014042FC31: jz      short loc_14042FC36
 * 000000014042FC33: stac
 * 000000014042FC36: mov     eax, [rbp+0E0h]
 * 000000014042FC3C: test    [rbp+0D8h+arg_10], 200h
 * 000000014042FC46: jz      short loc_14042FC49
 * 000000014042FC48: sti
 * 000000014042FC49: mov     ecx, 0C0000005h
 * 000000014042FC4E: mov     edx, 2
 * 000000014042FC53: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042FC5A: mov     r9d, [rbp+0E0h]
 * 000000014042FC61: or      r9d, 3
 * 000000014042FC65: and     r9d, 0FFFFh
 * 000000014042FC6C: test    [rbp+0D8h+arg_8], 1
 * 000000014042FC73: jnz     short loc_14042FC79
 * 000000014042FC75: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014042FC79: xor     r10, r10
 * 000000014042FC7C: call    sub_140434E40
 * 000000014042FC81: nop
 * 000000014042FC82: retn
 */
