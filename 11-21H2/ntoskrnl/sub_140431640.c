/*
 * XREFs of sub_140431640 @ 0x140431640
 * Callers:
 *     sub_140AB5A40 @ 0x140AB5A40 (sub_140AB5A40.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140431640 @ 0x140431640
 * Reason: Hex-Rays returned no pseudocode for 0x140431640
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140431640: sub     rsp, 8
 * 0000000140431644: push    rbp
 * 0000000140431645: sub     rsp, 158h
 * 000000014043164C: lea     rbp, [rsp+80h]
 * 0000000140431654: mov     [rbp+0E8h+var_13D], 1
 * 0000000140431658: mov     [rbp+0E8h+var_138], rax
 * 000000014043165C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140431660: mov     [rbp+0E8h+var_128], rdx
 * 0000000140431664: mov     [rbp+0E8h+var_120], r8
 * 0000000140431668: mov     [rbp+0E8h+var_118], r9
 * 000000014043166C: mov     [rbp+0E8h+var_110], r10
 * 0000000140431670: mov     [rbp+0E8h+var_108], r11
 * 0000000140431674: test    [rbp+0E8h+arg_0], 1
 * 000000014043167B: jnz     short loc_1404316B7
 * 000000014043167D: xor     edx, edx
 * 000000014043167F: rdsspq  rdx
 * 0000000140431684: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431688: lfence
 * 000000014043168B: test    word ptr gs:860h, 1
 * 0000000140431696: jnz     short loc_1404316A0
 * 0000000140431698: lfence
 * 000000014043169B: jmp     loc_1404318FF
 * 00000001404316A0: movzx   eax, word ptr gs:864h
 * 00000001404316A9: mov     ecx, 48h ; 'H'
 * 00000001404316AE: xor     edx, edx
 * 00000001404316B0: wrmsr
 * 00000001404316B2: jmp     loc_1404318FF
 * 00000001404316B7: test    cs:byte_140E01840, 1
 * 00000001404316BE: jnz     short loc_1404316C3
 * 00000001404316C0: swapgs
 * 00000001404316C3: lfence
 * 00000001404316C6: mov     rcx, gs:9828h
 * 00000001404316CF: test    rcx, rcx
 * 00000001404316D2: jz      short loc_1404316F3
 * 00000001404316D4: rdsspq  rdx
 * 00000001404316D9: mov     r10, gs:9820h
 * 00000001404316E2: add     r10, 8
 * 00000001404316E6: cmp     rdx, r10
 * 00000001404316E9: jnz     short loc_1404316F3
 * 00000001404316EB: rstorssp qword ptr [rcx]
 * 00000001404316EF: saveprevssp
 * 00000001404316F3: mov     r10, gs:188h
 * 00000001404316FC: mov     rcx, gs:188h
 * 0000000140431705: mov     rcx, [rcx+220h]
 * 000000014043170C: mov     rcx, [rcx+9E0h]
 * 0000000140431713: mov     gs:858h, rcx
 * 000000014043171C: mov     cx, gs:850h
 * 0000000140431725: mov     gs:852h, cx
 * 000000014043172E: mov     cx, gs:860h
 * 0000000140431737: mov     gs:854h, cx
 * 0000000140431740: movzx   eax, word ptr gs:866h
 * 0000000140431749: cmp     gs:864h, ax
 * 0000000140431752: jz      short loc_140431766
 * 0000000140431754: mov     gs:864h, ax
 * 000000014043175D: mov     ecx, 48h ; 'H'
 * 0000000140431762: xor     edx, edx
 * 0000000140431764: wrmsr
 * 0000000140431766: movzx   edx, word ptr gs:860h
 * 000000014043176F: test    edx, 8
 * 0000000140431775: jz      short loc_14043178E
 * 0000000140431777: mov     eax, 1
 * 000000014043177C: xor     edx, edx
 * 000000014043177E: mov     ecx, 49h ; 'I'
 * 0000000140431783: wrmsr
 * 0000000140431785: movzx   edx, word ptr gs:860h
 * 000000014043178E: test    edx, 2
 * 0000000140431794: jz      loc_1404318D1
 * 000000014043179A: call    loc_1404318AD
 * 000000014043179F: add     rsp, 8
 * 00000001404317A3: call    loc_1404318B6
 * 00000001404317A8: add     rsp, 8
 * 00000001404317AC: call    loc_14043179F
 * 00000001404317B1: add     rsp, 8
 * 00000001404317B5: call    loc_1404317A8
 * 00000001404317BA: add     rsp, 8
 * 00000001404317BE: call    loc_1404317B1
 * 00000001404317C3: add     rsp, 8
 * 00000001404317C7: call    loc_1404317BA
 * 00000001404317CC: add     rsp, 8
 * 00000001404317D0: call    loc_1404317C3
 * 00000001404317D5: add     rsp, 8
 * 00000001404317D9: call    loc_1404317CC
 * 00000001404317DE: add     rsp, 8
 * 00000001404317E2: call    loc_1404317D5
 * 00000001404317E7: add     rsp, 8
 * 00000001404317EB: call    loc_1404317DE
 * 00000001404317F0: add     rsp, 8
 * 00000001404317F4: call    loc_1404317E7
 * 00000001404317F9: add     rsp, 8
 * 00000001404317FD: call    loc_1404317F0
 * 0000000140431802: add     rsp, 8
 * 0000000140431806: call    loc_1404317F9
 * 000000014043180B: add     rsp, 8
 * 000000014043180F: call    loc_140431802
 * 0000000140431814: add     rsp, 8
 * 0000000140431818: call    loc_14043180B
 * 000000014043181D: add     rsp, 8
 * 0000000140431821: call    loc_140431814
 * 0000000140431826: add     rsp, 8
 * 000000014043182A: call    loc_14043181D
 * 000000014043182F: add     rsp, 8
 * 0000000140431833: call    loc_140431826
 * 0000000140431838: add     rsp, 8
 * 000000014043183C: call    loc_14043182F
 * 0000000140431841: add     rsp, 8
 * 0000000140431845: call    loc_140431838
 * 000000014043184A: add     rsp, 8
 * 000000014043184E: call    loc_140431841
 * 0000000140431853: add     rsp, 8
 * 0000000140431857: call    loc_14043184A
 * 000000014043185C: add     rsp, 8
 * 0000000140431860: call    loc_140431853
 * 0000000140431865: add     rsp, 8
 * 0000000140431869: call    loc_14043185C
 * 000000014043186E: add     rsp, 8
 * 0000000140431872: call    loc_140431865
 * 0000000140431877: add     rsp, 8
 * 000000014043187B: call    loc_14043186E
 * 0000000140431880: add     rsp, 8
 * 0000000140431884: call    loc_140431877
 * 0000000140431889: add     rsp, 8
 * 000000014043188D: call    loc_140431880
 * 0000000140431892: add     rsp, 8
 * 0000000140431896: call    loc_140431889
 * 000000014043189B: add     rsp, 8
 * 000000014043189F: call    loc_140431892
 * 00000001404318A4: add     rsp, 8
 * 00000001404318A8: call    loc_14043189B
 * 00000001404318AD: add     rsp, 8
 * 00000001404318B1: call    loc_1404318A4
 * 00000001404318B6: add     rsp, 8
 * 00000001404318BA: mov     eax, 0DADAh
 * 00000001404318BF: test    byte ptr gs:862h, 8
 * 00000001404318C8: jz      short loc_1404318D1
 * 00000001404318CA: mov     al, 20h ; ' '
 * 00000001404318CC: incsspq rax
 * 00000001404318D1: test    edx, 200h
 * 00000001404318D7: jz      short loc_1404318DE
 * 00000001404318D9: call    sub_1404357C0
 * 00000001404318DE: lfence
 * 00000001404318E1: mov     byte ptr gs:856h, 0
 * 00000001404318EA: test    byte ptr [r10+3], 3
 * 00000001404318EF: mov     [rbp+0E8h+var_68], 0
 * 00000001404318F8: jz      short loc_1404318FF
 * 00000001404318FA: call    sub_14041F920
 * 00000001404318FF: cld
 * 0000000140431900: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140431904: ldmxcsr dword ptr gs:180h
 * 000000014043190D: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140431911: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140431915: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140431919: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014043191D: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140431921: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140431925: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014043192C: jz      short loc_14043193A
 * 000000014043192E: test    [rbp+0E8h+arg_0], 1
 * 0000000140431935: jz      short loc_14043193A
 * 0000000140431937: stac
 * 000000014043193A: sub     rsp, 30h
 * 000000014043193E: bt      [rbp+0E8h+arg_8], 9
 * 0000000140431946: jnb     short loc_140431949
 * 0000000140431948: sti
 * 0000000140431949: lea     rcx, [rsp+198h+var_178]; this
 * 000000014043194E: call    ?Process@CPullPin@@AEAAXXZ; CPullPin::Process(void)
 * 0000000140431953: cli
 * 0000000140431954: test    [rbp+0E8h+arg_0], 1
 * 000000014043195B: jz      loc_140431C49
 * 0000000140431961: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140431968: jz      short loc_14043196D
 * 000000014043196A: stac
 * 000000014043196D: mov     rcx, gs:188h
 * 0000000140431976: test    byte ptr [rcx+0C2h], 3
 * 000000014043197D: jz      short loc_14043199A
 * 000000014043197F: mov     ecx, 1
 * 0000000140431984: mov     cr8, rcx
 * 0000000140431988: sti
 * 0000000140431989: call    sub_140425700
 * 000000014043198E: cli
 * 000000014043198F: mov     ecx, 0
 * 0000000140431994: mov     cr8, rcx
 * 0000000140431998: jmp     short loc_14043196D
 * 000000014043199A: test    byte ptr gs:86Ch, 2
 * 00000001404319A3: jz      short loc_1404319AC
 * 00000001404319A5: xor     ecx, ecx
 * 00000001404319A7: call    sub_14020D230
 * 00000001404319AC: mov     rcx, gs:188h
 * 00000001404319B5: test    dword ptr [rcx], 8000000h
 * 00000001404319BB: jz      short loc_1404319C2
 * 00000001404319BD: call    sub_1404206B0
 * 00000001404319C2: mov     rcx, gs:188h
 * 00000001404319CB: test    dword ptr [rcx], 10000h
 * 00000001404319D1: jz      short loc_1404319E7
 * 00000001404319D3: test    byte ptr [rcx+2], 1
 * 00000001404319D7: jz      short loc_1404319E7
 * 00000001404319D9: call    sub_140571820
 * 00000001404319DE: mov     rcx, gs:188h
 * 00000001404319E7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404319EB: cmp     [rbp+0E8h+var_68], 0
 * 00000001404319F3: jz      short loc_1404319FA
 * 00000001404319F5: call    sub_14041F8A0
 * 00000001404319FA: mov     rcx, gs:188h
 * 0000000140431A03: bt      dword ptr [rcx+74h], 16h
 * 0000000140431A08: jnb     short loc_140431A34
 * 0000000140431A0A: xor     ecx, ecx
 * 0000000140431A0C: rdsspq  rcx
 * 0000000140431A11: mov     r8, gs:9828h
 * 0000000140431A1A: add     r8, 8
 * 0000000140431A1E: cmp     rcx, r8
 * 0000000140431A21: jnz     short loc_140431A34
 * 0000000140431A23: mov     rcx, gs:9820h
 * 0000000140431A2C: rstorssp qword ptr [rcx]
 * 0000000140431A30: saveprevssp
 * 0000000140431A34: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140431A38: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140431A3C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431A40: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431A44: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431A48: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140431A4C: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431A50: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431A54: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431A58: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431A5C: mov     byte ptr gs:856h, 0
 * 0000000140431A65: movzx   eax, word ptr gs:86Ah
 * 0000000140431A6E: cmp     gs:864h, ax
 * 0000000140431A77: jz      short loc_140431A8B
 * 0000000140431A79: mov     gs:864h, ax
 * 0000000140431A82: mov     ecx, 48h ; 'H'
 * 0000000140431A87: xor     edx, edx
 * 0000000140431A89: wrmsr
 * 0000000140431A8B: btr     word ptr gs:860h, 2
 * 0000000140431A96: jnb     short loc_140431AA6
 * 0000000140431A98: mov     eax, 1
 * 0000000140431A9D: xor     edx, edx
 * 0000000140431A9F: mov     ecx, 49h ; 'I'
 * 0000000140431AA4: wrmsr
 * 0000000140431AA6: btr     word ptr gs:860h, 5
 * 0000000140431AB1: jnb     loc_140431BEE
 * 0000000140431AB7: call    loc_140431BCA
 * 0000000140431ABC: add     rsp, 8
 * 0000000140431AC0: call    loc_140431BD3
 * 0000000140431AC5: add     rsp, 8
 * 0000000140431AC9: call    loc_140431ABC
 * 0000000140431ACE: add     rsp, 8
 * 0000000140431AD2: call    loc_140431AC5
 * 0000000140431AD7: add     rsp, 8
 * 0000000140431ADB: call    loc_140431ACE
 * 0000000140431AE0: add     rsp, 8
 * 0000000140431AE4: call    loc_140431AD7
 * 0000000140431AE9: add     rsp, 8
 * 0000000140431AED: call    loc_140431AE0
 * 0000000140431AF2: add     rsp, 8
 * 0000000140431AF6: call    loc_140431AE9
 * 0000000140431AFB: add     rsp, 8
 * 0000000140431AFF: call    loc_140431AF2
 * 0000000140431B04: add     rsp, 8
 * 0000000140431B08: call    loc_140431AFB
 * 0000000140431B0D: add     rsp, 8
 * 0000000140431B11: call    loc_140431B04
 * 0000000140431B16: add     rsp, 8
 * 0000000140431B1A: call    loc_140431B0D
 * 0000000140431B1F: add     rsp, 8
 * 0000000140431B23: call    loc_140431B16
 * 0000000140431B28: add     rsp, 8
 * 0000000140431B2C: call    loc_140431B1F
 * 0000000140431B31: add     rsp, 8
 * 0000000140431B35: call    loc_140431B28
 * 0000000140431B3A: add     rsp, 8
 * 0000000140431B3E: call    loc_140431B31
 * 0000000140431B43: add     rsp, 8
 * 0000000140431B47: call    loc_140431B3A
 * 0000000140431B4C: add     rsp, 8
 * 0000000140431B50: call    loc_140431B43
 * 0000000140431B55: add     rsp, 8
 * 0000000140431B59: call    loc_140431B4C
 * 0000000140431B5E: add     rsp, 8
 * 0000000140431B62: call    loc_140431B55
 * 0000000140431B67: add     rsp, 8
 * 0000000140431B6B: call    loc_140431B5E
 * 0000000140431B70: add     rsp, 8
 * 0000000140431B74: call    loc_140431B67
 * 0000000140431B79: add     rsp, 8
 * 0000000140431B7D: call    loc_140431B70
 * 0000000140431B82: add     rsp, 8
 * 0000000140431B86: call    loc_140431B79
 * 0000000140431B8B: add     rsp, 8
 * 0000000140431B8F: call    loc_140431B82
 * 0000000140431B94: add     rsp, 8
 * 0000000140431B98: call    loc_140431B8B
 * 0000000140431B9D: add     rsp, 8
 * 0000000140431BA1: call    loc_140431B94
 * 0000000140431BA6: add     rsp, 8
 * 0000000140431BAA: call    loc_140431B9D
 * 0000000140431BAF: add     rsp, 8
 * 0000000140431BB3: call    loc_140431BA6
 * 0000000140431BB8: add     rsp, 8
 * 0000000140431BBC: call    loc_140431BAF
 * 0000000140431BC1: add     rsp, 8
 * 0000000140431BC5: call    loc_140431BB8
 * 0000000140431BCA: add     rsp, 8
 * 0000000140431BCE: call    loc_140431BC1
 * 0000000140431BD3: add     rsp, 8
 * 0000000140431BD7: mov     eax, 0DADAh
 * 0000000140431BDC: test    byte ptr gs:862h, 8
 * 0000000140431BE5: jz      short loc_140431BEE
 * 0000000140431BE7: mov     al, 20h ; ' '
 * 0000000140431BE9: incsspq rax
 * 0000000140431BEE: test    word ptr gs:860h, 80h
 * 0000000140431BF9: jz      short loc_140431C07
 * 0000000140431BFB: xor     eax, eax
 * 0000000140431BFD: xor     edx, edx
 * 0000000140431BFF: mov     ecx, 1
 * 0000000140431C04: div     rcx
 * 0000000140431C07: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431C0B: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431C0F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431C13: mov     rsp, rbp
 * 0000000140431C16: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431C1D: add     rsp, 0E8h
 * 0000000140431C24: test    cs:byte_140E01840, 1
 * 0000000140431C2B: jz      short loc_140431C32
 * 0000000140431C2D: jmp     sub_140AB6B80
 * 0000000140431C32: test    word ptr gs:860h, 100h
 * 0000000140431C3D: jz      short loc_140431C44
 * 0000000140431C3F: verw    [rsp+arg_18]
 * 0000000140431C44: swapgs
 * 0000000140431C47: iretq
 * 0000000140431C49: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431C4D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140431C51: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140431C55: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431C59: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431C5D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431C61: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140431C65: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431C69: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431C6D: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431C71: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431C75: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431C79: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431C7D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431C81: mov     rsp, rbp
 * 0000000140431C84: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431C8B: add     rsp, 0E8h
 * 0000000140431C92: iretq
 */
