/*
 * XREFs of sub_140426820 @ 0x140426820
 * Callers:
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140426820 @ 0x140426820
 * Reason: Hex-Rays returned no pseudocode for 0x140426820
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426820: mov     rdx, rsp
 * 0000000140426823: mov     rcx, gs:8B58h
 * 000000014042682C: lea     rax, [rcx-6000h]
 * 0000000140426833: cmp     rax, rsp
 * 0000000140426836: ja      short loc_14042683D
 * 0000000140426838: cmp     rsp, rcx
 * 000000014042683B: jb      short loc_140426849
 * 000000014042683D: cmp     cs:dword_140C31E20, 0
 * 0000000140426844: jnz     short loc_140426849
 * 0000000140426846: mov     rsp, rcx
 * 0000000140426849: sub     rsp, 20h
 * 000000014042684D: mov     [rsp+20h+var_10], rdx
 * 0000000140426852: call    sub_1404270A0
 * 0000000140426857: mov     rsp, [rsp+20h+var_10]
 * 000000014042685C: test    cs:dword_140D0689C, 1000h
 * 0000000140426866: jz      short loc_140426870
 * 0000000140426868: mov     rcx, rsi
 * 000000014042686B: call    HalPerformEndOfInterrupt
 * 0000000140426870: cli
 * 0000000140426871: mov     rcx, gs:20h
 * 000000014042687A: cmp     byte ptr [rcx+20h], 1
 * 000000014042687E: ja      short loc_1404268FA
 * 0000000140426880: rdtsc
 * 0000000140426882: shl     rdx, 20h
 * 0000000140426886: or      rax, rdx
 * 0000000140426889: sub     rax, [rcx+8180h]
 * 0000000140426890: add     [rcx+8278h], rax
 * 0000000140426897: add     [rcx+8180h], rax
 * 000000014042689E: mov     r8, rax
 * 00000001404268A1: mov     rax, [rcx+8]
 * 00000001404268A5: test    byte ptr [rax+2], 72h
 * 00000001404268A9: jz      short loc_1404268BE
 * 00000001404268AB: xor     edx, edx
 * 00000001404268AD: call    sub_1402ECA00
 * 00000001404268B2: mov     rcx, gs:20h
 * 00000001404268BB: inc     byte ptr [rcx+20h]
 * 00000001404268BE: mov     dl, [rcx+6]
 * 00000001404268C1: and     byte ptr [rcx+6], 0
 * 00000001404268C5: cmp     byte ptr [rcx+7], 0
 * 00000001404268C9: jnz     short loc_1404268FA
 * 00000001404268CB: test    dl, dl
 * 00000001404268CD: jz      short loc_1404268FA
 * 00000001404268CF: cmp     byte ptr [rbp-57h], 2
 * 00000001404268D3: jnb     short loc_1404268E0
 * 00000001404268D5: and     byte ptr [rcx+20h], 0
 * 00000001404268D9: call    sub_1404281E0
 * 00000001404268DE: jmp     short loc_1404268FD
 * 00000001404268E0: mov     ecx, 2
 * 00000001404268E5: call    cs:off_140015970
 * 00000001404268EC: nop     dword ptr [rax+rax+00h]
 * 00000001404268F1: mov     rcx, gs:20h
 * 00000001404268FA: dec     byte ptr [rcx+20h]
 * 00000001404268FD: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140426901: cmp     cs:dword_140D06B08, 0
 * 0000000140426908: jz      short loc_140426911
 * 000000014042690A: call    sub_140569E70
 * 000000014042690F: jmp     short loc_140426915
 * 0000000140426911: mov     cr8, rcx
 * 0000000140426915: mov     rsi, [rbp+0D0h]
 * 000000014042691C: cli
 * 000000014042691D: test    byte ptr [rbp+0F0h], 1
 * 0000000140426924: jz      loc_140426C12
 * 000000014042692A: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140426931: jz      short loc_140426936
 * 0000000140426933: stac
 * 0000000140426936: mov     rcx, gs:188h
 * 000000014042693F: test    byte ptr [rcx+0C2h], 3
 * 0000000140426946: jz      short loc_140426963
 * 0000000140426948: mov     ecx, 1
 * 000000014042694D: mov     cr8, rcx
 * 0000000140426951: sti
 * 0000000140426952: call    sub_140425700
 * 0000000140426957: cli
 * 0000000140426958: mov     ecx, 0
 * 000000014042695D: mov     cr8, rcx
 * 0000000140426961: jmp     short loc_140426936
 * 0000000140426963: test    byte ptr gs:86Ch, 2
 * 000000014042696C: jz      short loc_140426975
 * 000000014042696E: xor     ecx, ecx
 * 0000000140426970: call    sub_14020D230
 * 0000000140426975: mov     rcx, gs:188h
 * 000000014042697E: test    dword ptr [rcx], 8000000h
 * 0000000140426984: jz      short loc_14042698B
 * 0000000140426986: call    sub_1404206B0
 * 000000014042698B: mov     rcx, gs:188h
 * 0000000140426994: test    dword ptr [rcx], 10000h
 * 000000014042699A: jz      short loc_1404269B0
 * 000000014042699C: test    byte ptr [rcx+2], 1
 * 00000001404269A0: jz      short loc_1404269B0
 * 00000001404269A2: call    sub_140571820
 * 00000001404269A7: mov     rcx, gs:188h
 * 00000001404269B0: ldmxcsr dword ptr [rbp-54h]
 * 00000001404269B4: cmp     word ptr [rbp+80h], 0
 * 00000001404269BC: jz      short loc_1404269C3
 * 00000001404269BE: call    sub_14041F8A0
 * 00000001404269C3: mov     rcx, gs:188h
 * 00000001404269CC: bt      dword ptr [rcx+74h], 16h
 * 00000001404269D1: jnb     short loc_1404269FD
 * 00000001404269D3: xor     ecx, ecx
 * 00000001404269D5: rdsspq  rcx
 * 00000001404269DA: mov     r8, gs:9828h
 * 00000001404269E3: add     r8, 8
 * 00000001404269E7: cmp     rcx, r8
 * 00000001404269EA: jnz     short loc_1404269FD
 * 00000001404269EC: mov     rcx, gs:9820h
 * 00000001404269F5: rstorssp qword ptr [rcx]
 * 00000001404269F9: saveprevssp
 * 00000001404269FD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426A01: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426A05: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426A09: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426A0D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426A11: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426A15: mov     r11, [rbp-20h]
 * 0000000140426A19: mov     r10, [rbp-28h]
 * 0000000140426A1D: mov     r9, [rbp-30h]
 * 0000000140426A21: mov     r8, [rbp-38h]
 * 0000000140426A25: mov     byte ptr gs:856h, 0
 * 0000000140426A2E: movzx   eax, word ptr gs:86Ah
 * 0000000140426A37: cmp     gs:864h, ax
 * 0000000140426A40: jz      short loc_140426A54
 * 0000000140426A42: mov     gs:864h, ax
 * 0000000140426A4B: mov     ecx, 48h ; 'H'
 * 0000000140426A50: xor     edx, edx
 * 0000000140426A52: wrmsr
 * 0000000140426A54: btr     word ptr gs:860h, 2
 * 0000000140426A5F: jnb     short loc_140426A6F
 * 0000000140426A61: mov     eax, 1
 * 0000000140426A66: xor     edx, edx
 * 0000000140426A68: mov     ecx, 49h ; 'I'
 * 0000000140426A6D: wrmsr
 * 0000000140426A6F: btr     word ptr gs:860h, 5
 * 0000000140426A7A: jnb     loc_140426BB7
 * 0000000140426A80: call    loc_140426B93
 * 0000000140426A85: add     rsp, 8
 * 0000000140426A89: call    loc_140426B9C
 * 0000000140426A8E: add     rsp, 8
 * 0000000140426A92: call    loc_140426A85
 * 0000000140426A97: add     rsp, 8
 * 0000000140426A9B: call    loc_140426A8E
 * 0000000140426AA0: add     rsp, 8
 * 0000000140426AA4: call    loc_140426A97
 * 0000000140426AA9: add     rsp, 8
 * 0000000140426AAD: call    loc_140426AA0
 * 0000000140426AB2: add     rsp, 8
 * 0000000140426AB6: call    loc_140426AA9
 * 0000000140426ABB: add     rsp, 8
 * 0000000140426ABF: call    loc_140426AB2
 * 0000000140426AC4: add     rsp, 8
 * 0000000140426AC8: call    loc_140426ABB
 * 0000000140426ACD: add     rsp, 8
 * 0000000140426AD1: call    loc_140426AC4
 * 0000000140426AD6: add     rsp, 8
 * 0000000140426ADA: call    loc_140426ACD
 * 0000000140426ADF: add     rsp, 8
 * 0000000140426AE3: call    loc_140426AD6
 * 0000000140426AE8: add     rsp, 8
 * 0000000140426AEC: call    loc_140426ADF
 * 0000000140426AF1: add     rsp, 8
 * 0000000140426AF5: call    loc_140426AE8
 * 0000000140426AFA: add     rsp, 8
 * 0000000140426AFE: call    loc_140426AF1
 * 0000000140426B03: add     rsp, 8
 * 0000000140426B07: call    loc_140426AFA
 * 0000000140426B0C: add     rsp, 8
 * 0000000140426B10: call    loc_140426B03
 * 0000000140426B15: add     rsp, 8
 * 0000000140426B19: call    loc_140426B0C
 * 0000000140426B1E: add     rsp, 8
 * 0000000140426B22: call    loc_140426B15
 * 0000000140426B27: add     rsp, 8
 * 0000000140426B2B: call    loc_140426B1E
 * 0000000140426B30: add     rsp, 8
 * 0000000140426B34: call    loc_140426B27
 * 0000000140426B39: add     rsp, 8
 * 0000000140426B3D: call    loc_140426B30
 * 0000000140426B42: add     rsp, 8
 * 0000000140426B46: call    loc_140426B39
 * 0000000140426B4B: add     rsp, 8
 * 0000000140426B4F: call    loc_140426B42
 * 0000000140426B54: add     rsp, 8
 * 0000000140426B58: call    loc_140426B4B
 * 0000000140426B5D: add     rsp, 8
 * 0000000140426B61: call    loc_140426B54
 * 0000000140426B66: add     rsp, 8
 * 0000000140426B6A: call    loc_140426B5D
 * 0000000140426B6F: add     rsp, 8
 * 0000000140426B73: call    loc_140426B66
 * 0000000140426B78: add     rsp, 8
 * 0000000140426B7C: call    loc_140426B6F
 * 0000000140426B81: add     rsp, 8
 * 0000000140426B85: call    loc_140426B78
 * 0000000140426B8A: add     rsp, 8
 * 0000000140426B8E: call    loc_140426B81
 * 0000000140426B93: add     rsp, 8
 * 0000000140426B97: call    loc_140426B8A
 * 0000000140426B9C: add     rsp, 8
 * 0000000140426BA0: mov     eax, 0DADAh
 * 0000000140426BA5: test    byte ptr gs:862h, 8
 * 0000000140426BAE: jz      short loc_140426BB7
 * 0000000140426BB0: mov     al, 20h ; ' '
 * 0000000140426BB2: incsspq rax
 * 0000000140426BB7: test    word ptr gs:860h, 80h
 * 0000000140426BC2: jz      short loc_140426BD0
 * 0000000140426BC4: xor     eax, eax
 * 0000000140426BC6: xor     edx, edx
 * 0000000140426BC8: mov     ecx, 1
 * 0000000140426BCD: div     rcx
 * 0000000140426BD0: mov     rdx, [rbp-40h]
 * 0000000140426BD4: mov     rcx, [rbp-48h]
 * 0000000140426BD8: mov     rax, [rbp-50h]
 * 0000000140426BDC: mov     rsp, rbp
 * 0000000140426BDF: mov     rbp, [rbp+0D8h]
 * 0000000140426BE6: add     rsp, 0E8h
 * 0000000140426BED: test    cs:byte_140E01840, 1
 * 0000000140426BF4: jz      short loc_140426BFB
 * 0000000140426BF6: jmp     sub_140AB6B80
 * 0000000140426BFB: test    word ptr gs:860h, 100h
 * 0000000140426C06: jz      short loc_140426C0D
 * 0000000140426C08: verw    [rsp-1C8h+arg_1E0]
 * 0000000140426C0D: swapgs
 * 0000000140426C10: iretq
 * 0000000140426C12: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426C16: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426C1A: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426C1E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426C22: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426C26: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426C2A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426C2E: mov     r11, [rbp-20h]
 * 0000000140426C32: mov     r10, [rbp-28h]
 * 0000000140426C36: mov     r9, [rbp-30h]
 * 0000000140426C3A: mov     r8, [rbp-38h]
 * 0000000140426C3E: mov     rdx, [rbp-40h]
 * 0000000140426C42: mov     rcx, [rbp-48h]
 * 0000000140426C46: mov     rax, [rbp-50h]
 * 0000000140426C4A: mov     rsp, rbp
 * 0000000140426C4D: mov     rbp, [rbp+0D8h]
 * 0000000140426C54: add     rsp, 0E8h
 * 0000000140426C5B: iretq
 */
