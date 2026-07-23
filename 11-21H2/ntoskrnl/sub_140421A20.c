/*
 * XREFs of sub_140421A20 @ 0x140421A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140421A20 @ 0x140421A20
 * Reason: Hex-Rays returned no pseudocode for 0x140421A20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421A20: mov     rdx, rsp
 * 0000000140421A23: mov     rcx, gs:8B58h
 * 0000000140421A2C: lea     rax, [rcx-6000h]
 * 0000000140421A33: cmp     rax, rsp
 * 0000000140421A36: ja      short loc_140421A3D
 * 0000000140421A38: cmp     rsp, rcx
 * 0000000140421A3B: jb      short loc_140421A49
 * 0000000140421A3D: cmp     cs:dword_140C31E20, 0
 * 0000000140421A44: jnz     short loc_140421A49
 * 0000000140421A46: mov     rsp, rcx
 * 0000000140421A49: sub     rsp, 20h
 * 0000000140421A4D: mov     [rsp+20h+var_10], rdx
 * 0000000140421A52: call    sub_140421380
 * 0000000140421A57: mov     rsp, [rsp+20h+var_10]
 * 0000000140421A5C: mov     rcx, rsi
 * 0000000140421A5F: call    HalPerformEndOfInterrupt
 * 0000000140421A64: mov     rcx, gs:20h
 * 0000000140421A6D: cmp     byte ptr [rcx+20h], 1
 * 0000000140421A71: ja      short loc_140421AED
 * 0000000140421A73: rdtsc
 * 0000000140421A75: shl     rdx, 20h
 * 0000000140421A79: or      rax, rdx
 * 0000000140421A7C: sub     rax, [rcx+8180h]
 * 0000000140421A83: add     [rcx+8278h], rax
 * 0000000140421A8A: add     [rcx+8180h], rax
 * 0000000140421A91: mov     r8, rax
 * 0000000140421A94: mov     rax, [rcx+8]
 * 0000000140421A98: test    byte ptr [rax+2], 72h
 * 0000000140421A9C: jz      short loc_140421AB1
 * 0000000140421A9E: xor     edx, edx
 * 0000000140421AA0: call    sub_1402ECA00
 * 0000000140421AA5: mov     rcx, gs:20h
 * 0000000140421AAE: inc     byte ptr [rcx+20h]
 * 0000000140421AB1: mov     dl, [rcx+6]
 * 0000000140421AB4: and     byte ptr [rcx+6], 0
 * 0000000140421AB8: cmp     byte ptr [rcx+7], 0
 * 0000000140421ABC: jnz     short loc_140421AED
 * 0000000140421ABE: test    dl, dl
 * 0000000140421AC0: jz      short loc_140421AED
 * 0000000140421AC2: cmp     byte ptr [rbp-57h], 2
 * 0000000140421AC6: jnb     short loc_140421AD3
 * 0000000140421AC8: and     byte ptr [rcx+20h], 0
 * 0000000140421ACC: call    sub_1404281E0
 * 0000000140421AD1: jmp     short loc_140421AF0
 * 0000000140421AD3: mov     ecx, 2
 * 0000000140421AD8: call    cs:off_140015970
 * 0000000140421ADF: nop     dword ptr [rax+rax+00h]
 * 0000000140421AE4: mov     rcx, gs:20h
 * 0000000140421AED: dec     byte ptr [rcx+20h]
 * 0000000140421AF0: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421AF4: cmp     cs:dword_140D06B08, 0
 * 0000000140421AFB: jz      short loc_140421B04
 * 0000000140421AFD: call    sub_140569E70
 * 0000000140421B02: jmp     short loc_140421B08
 * 0000000140421B04: mov     cr8, rcx
 * 0000000140421B08: mov     rsi, [rbp+0D0h]
 * 0000000140421B0F: test    byte ptr [rbp+0F0h], 1
 * 0000000140421B16: jz      loc_140421E04
 * 0000000140421B1C: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140421B23: jz      short loc_140421B28
 * 0000000140421B25: stac
 * 0000000140421B28: mov     rcx, gs:188h
 * 0000000140421B31: test    byte ptr [rcx+0C2h], 3
 * 0000000140421B38: jz      short loc_140421B55
 * 0000000140421B3A: mov     ecx, 1
 * 0000000140421B3F: mov     cr8, rcx
 * 0000000140421B43: sti
 * 0000000140421B44: call    sub_140425700
 * 0000000140421B49: cli
 * 0000000140421B4A: mov     ecx, 0
 * 0000000140421B4F: mov     cr8, rcx
 * 0000000140421B53: jmp     short loc_140421B28
 * 0000000140421B55: test    byte ptr gs:86Ch, 2
 * 0000000140421B5E: jz      short loc_140421B67
 * 0000000140421B60: xor     ecx, ecx
 * 0000000140421B62: call    sub_14020D230
 * 0000000140421B67: mov     rcx, gs:188h
 * 0000000140421B70: test    dword ptr [rcx], 8000000h
 * 0000000140421B76: jz      short loc_140421B7D
 * 0000000140421B78: call    sub_1404206B0
 * 0000000140421B7D: mov     rcx, gs:188h
 * 0000000140421B86: test    dword ptr [rcx], 10000h
 * 0000000140421B8C: jz      short loc_140421BA2
 * 0000000140421B8E: test    byte ptr [rcx+2], 1
 * 0000000140421B92: jz      short loc_140421BA2
 * 0000000140421B94: call    sub_140571820
 * 0000000140421B99: mov     rcx, gs:188h
 * 0000000140421BA2: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421BA6: cmp     word ptr [rbp+80h], 0
 * 0000000140421BAE: jz      short loc_140421BB5
 * 0000000140421BB0: call    sub_14041F8A0
 * 0000000140421BB5: mov     rcx, gs:188h
 * 0000000140421BBE: bt      dword ptr [rcx+74h], 16h
 * 0000000140421BC3: jnb     short loc_140421BEF
 * 0000000140421BC5: xor     ecx, ecx
 * 0000000140421BC7: rdsspq  rcx
 * 0000000140421BCC: mov     r8, gs:9828h
 * 0000000140421BD5: add     r8, 8
 * 0000000140421BD9: cmp     rcx, r8
 * 0000000140421BDC: jnz     short loc_140421BEF
 * 0000000140421BDE: mov     rcx, gs:9820h
 * 0000000140421BE7: rstorssp qword ptr [rcx]
 * 0000000140421BEB: saveprevssp
 * 0000000140421BEF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421BF3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421BF7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421BFB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421BFF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421C03: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421C07: mov     r11, [rbp-20h]
 * 0000000140421C0B: mov     r10, [rbp-28h]
 * 0000000140421C0F: mov     r9, [rbp-30h]
 * 0000000140421C13: mov     r8, [rbp-38h]
 * 0000000140421C17: mov     byte ptr gs:856h, 0
 * 0000000140421C20: movzx   eax, word ptr gs:86Ah
 * 0000000140421C29: cmp     gs:864h, ax
 * 0000000140421C32: jz      short loc_140421C46
 * 0000000140421C34: mov     gs:864h, ax
 * 0000000140421C3D: mov     ecx, 48h ; 'H'
 * 0000000140421C42: xor     edx, edx
 * 0000000140421C44: wrmsr
 * 0000000140421C46: btr     word ptr gs:860h, 2
 * 0000000140421C51: jnb     short loc_140421C61
 * 0000000140421C53: mov     eax, 1
 * 0000000140421C58: xor     edx, edx
 * 0000000140421C5A: mov     ecx, 49h ; 'I'
 * 0000000140421C5F: wrmsr
 * 0000000140421C61: btr     word ptr gs:860h, 5
 * 0000000140421C6C: jnb     loc_140421DA9
 * 0000000140421C72: call    loc_140421D85
 * 0000000140421C77: add     rsp, 8
 * 0000000140421C7B: call    loc_140421D8E
 * 0000000140421C80: add     rsp, 8
 * 0000000140421C84: call    loc_140421C77
 * 0000000140421C89: add     rsp, 8
 * 0000000140421C8D: call    loc_140421C80
 * 0000000140421C92: add     rsp, 8
 * 0000000140421C96: call    loc_140421C89
 * 0000000140421C9B: add     rsp, 8
 * 0000000140421C9F: call    loc_140421C92
 * 0000000140421CA4: add     rsp, 8
 * 0000000140421CA8: call    loc_140421C9B
 * 0000000140421CAD: add     rsp, 8
 * 0000000140421CB1: call    loc_140421CA4
 * 0000000140421CB6: add     rsp, 8
 * 0000000140421CBA: call    loc_140421CAD
 * 0000000140421CBF: add     rsp, 8
 * 0000000140421CC3: call    loc_140421CB6
 * 0000000140421CC8: add     rsp, 8
 * 0000000140421CCC: call    loc_140421CBF
 * 0000000140421CD1: add     rsp, 8
 * 0000000140421CD5: call    loc_140421CC8
 * 0000000140421CDA: add     rsp, 8
 * 0000000140421CDE: call    loc_140421CD1
 * 0000000140421CE3: add     rsp, 8
 * 0000000140421CE7: call    loc_140421CDA
 * 0000000140421CEC: add     rsp, 8
 * 0000000140421CF0: call    loc_140421CE3
 * 0000000140421CF5: add     rsp, 8
 * 0000000140421CF9: call    loc_140421CEC
 * 0000000140421CFE: add     rsp, 8
 * 0000000140421D02: call    loc_140421CF5
 * 0000000140421D07: add     rsp, 8
 * 0000000140421D0B: call    loc_140421CFE
 * 0000000140421D10: add     rsp, 8
 * 0000000140421D14: call    loc_140421D07
 * 0000000140421D19: add     rsp, 8
 * 0000000140421D1D: call    loc_140421D10
 * 0000000140421D22: add     rsp, 8
 * 0000000140421D26: call    loc_140421D19
 * 0000000140421D2B: add     rsp, 8
 * 0000000140421D2F: call    loc_140421D22
 * 0000000140421D34: add     rsp, 8
 * 0000000140421D38: call    loc_140421D2B
 * 0000000140421D3D: add     rsp, 8
 * 0000000140421D41: call    loc_140421D34
 * 0000000140421D46: add     rsp, 8
 * 0000000140421D4A: call    loc_140421D3D
 * 0000000140421D4F: add     rsp, 8
 * 0000000140421D53: call    loc_140421D46
 * 0000000140421D58: add     rsp, 8
 * 0000000140421D5C: call    loc_140421D4F
 * 0000000140421D61: add     rsp, 8
 * 0000000140421D65: call    loc_140421D58
 * 0000000140421D6A: add     rsp, 8
 * 0000000140421D6E: call    loc_140421D61
 * 0000000140421D73: add     rsp, 8
 * 0000000140421D77: call    loc_140421D6A
 * 0000000140421D7C: add     rsp, 8
 * 0000000140421D80: call    loc_140421D73
 * 0000000140421D85: add     rsp, 8
 * 0000000140421D89: call    loc_140421D7C
 * 0000000140421D8E: add     rsp, 8
 * 0000000140421D92: mov     eax, 0DADAh
 * 0000000140421D97: test    byte ptr gs:862h, 8
 * 0000000140421DA0: jz      short loc_140421DA9
 * 0000000140421DA2: mov     al, 20h ; ' '
 * 0000000140421DA4: incsspq rax
 * 0000000140421DA9: test    word ptr gs:860h, 80h
 * 0000000140421DB4: jz      short loc_140421DC2
 * 0000000140421DB6: xor     eax, eax
 * 0000000140421DB8: xor     edx, edx
 * 0000000140421DBA: mov     ecx, 1
 * 0000000140421DBF: div     rcx
 * 0000000140421DC2: mov     rdx, [rbp-40h]
 * 0000000140421DC6: mov     rcx, [rbp-48h]
 * 0000000140421DCA: mov     rax, [rbp-50h]
 * 0000000140421DCE: mov     rsp, rbp
 * 0000000140421DD1: mov     rbp, [rbp+0D8h]
 * 0000000140421DD8: add     rsp, 0E8h
 * 0000000140421DDF: test    cs:byte_140E01840, 1
 * 0000000140421DE6: jz      short loc_140421DED
 * 0000000140421DE8: jmp     sub_140AB6B80
 * 0000000140421DED: test    word ptr gs:860h, 100h
 * 0000000140421DF8: jz      short loc_140421DFF
 * 0000000140421DFA: verw    [rsp-1C8h+arg_1E0]
 * 0000000140421DFF: swapgs
 * 0000000140421E02: iretq
 * 0000000140421E04: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421E08: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421E0C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421E10: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421E14: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421E18: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421E1C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421E20: mov     r11, [rbp-20h]
 * 0000000140421E24: mov     r10, [rbp-28h]
 * 0000000140421E28: mov     r9, [rbp-30h]
 * 0000000140421E2C: mov     r8, [rbp-38h]
 * 0000000140421E30: mov     rdx, [rbp-40h]
 * 0000000140421E34: mov     rcx, [rbp-48h]
 * 0000000140421E38: mov     rax, [rbp-50h]
 * 0000000140421E3C: mov     rsp, rbp
 * 0000000140421E3F: mov     rbp, [rbp+0D8h]
 * 0000000140421E46: add     rsp, 0E8h
 * 0000000140421E4D: iretq
 */
