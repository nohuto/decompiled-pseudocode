/*
 * XREFs of sub_140420C10 @ 0x140420C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140420C10 @ 0x140420C10
 * Reason: Hex-Rays returned no pseudocode for 0x140420C10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140420C10: mov     rdx, rsp
 * 0000000140420C13: mov     rcx, gs:8B58h
 * 0000000140420C1C: lea     rax, [rcx-6000h]
 * 0000000140420C23: cmp     rax, rsp
 * 0000000140420C26: ja      short loc_140420C2D
 * 0000000140420C28: cmp     rsp, rcx
 * 0000000140420C2B: jb      short loc_140420C39
 * 0000000140420C2D: cmp     cs:dword_140C31E20, 0
 * 0000000140420C34: jnz     short loc_140420C39
 * 0000000140420C36: mov     rsp, rcx
 * 0000000140420C39: sub     rsp, 20h
 * 0000000140420C3D: mov     [rsp+20h+var_10], rdx
 * 0000000140420C42: call    sub_140421050
 * 0000000140420C47: mov     rsp, [rsp+20h+var_10]
 * 0000000140420C4C: mov     rcx, rsi
 * 0000000140420C4F: call    HalPerformEndOfInterrupt
 * 0000000140420C54: mov     rcx, gs:20h
 * 0000000140420C5D: cmp     byte ptr [rcx+20h], 1
 * 0000000140420C61: ja      short loc_140420CDD
 * 0000000140420C63: rdtsc
 * 0000000140420C65: shl     rdx, 20h
 * 0000000140420C69: or      rax, rdx
 * 0000000140420C6C: sub     rax, [rcx+8180h]
 * 0000000140420C73: add     [rcx+8278h], rax
 * 0000000140420C7A: add     [rcx+8180h], rax
 * 0000000140420C81: mov     r8, rax
 * 0000000140420C84: mov     rax, [rcx+8]
 * 0000000140420C88: test    byte ptr [rax+2], 72h
 * 0000000140420C8C: jz      short loc_140420CA1
 * 0000000140420C8E: xor     edx, edx
 * 0000000140420C90: call    sub_1402ECA00
 * 0000000140420C95: mov     rcx, gs:20h
 * 0000000140420C9E: inc     byte ptr [rcx+20h]
 * 0000000140420CA1: mov     dl, [rcx+6]
 * 0000000140420CA4: and     byte ptr [rcx+6], 0
 * 0000000140420CA8: cmp     byte ptr [rcx+7], 0
 * 0000000140420CAC: jnz     short loc_140420CDD
 * 0000000140420CAE: test    dl, dl
 * 0000000140420CB0: jz      short loc_140420CDD
 * 0000000140420CB2: cmp     byte ptr [rbp-57h], 2
 * 0000000140420CB6: jnb     short loc_140420CC3
 * 0000000140420CB8: and     byte ptr [rcx+20h], 0
 * 0000000140420CBC: call    sub_1404281E0
 * 0000000140420CC1: jmp     short loc_140420CE0
 * 0000000140420CC3: mov     ecx, 2
 * 0000000140420CC8: call    cs:off_140015970
 * 0000000140420CCF: nop     dword ptr [rax+rax+00h]
 * 0000000140420CD4: mov     rcx, gs:20h
 * 0000000140420CDD: dec     byte ptr [rcx+20h]
 * 0000000140420CE0: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420CE4: cmp     cs:dword_140D06B08, 0
 * 0000000140420CEB: jz      short loc_140420CF4
 * 0000000140420CED: call    sub_140569E70
 * 0000000140420CF2: jmp     short loc_140420CF8
 * 0000000140420CF4: mov     cr8, rcx
 * 0000000140420CF8: mov     rsi, [rbp+0D0h]
 * 0000000140420CFF: test    byte ptr [rbp+0F0h], 1
 * 0000000140420D06: jz      loc_140420FF4
 * 0000000140420D0C: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140420D13: jz      short loc_140420D18
 * 0000000140420D15: stac
 * 0000000140420D18: mov     rcx, gs:188h
 * 0000000140420D21: test    byte ptr [rcx+0C2h], 3
 * 0000000140420D28: jz      short loc_140420D45
 * 0000000140420D2A: mov     ecx, 1
 * 0000000140420D2F: mov     cr8, rcx
 * 0000000140420D33: sti
 * 0000000140420D34: call    sub_140425700
 * 0000000140420D39: cli
 * 0000000140420D3A: mov     ecx, 0
 * 0000000140420D3F: mov     cr8, rcx
 * 0000000140420D43: jmp     short loc_140420D18
 * 0000000140420D45: test    byte ptr gs:86Ch, 2
 * 0000000140420D4E: jz      short loc_140420D57
 * 0000000140420D50: xor     ecx, ecx
 * 0000000140420D52: call    sub_14020D230
 * 0000000140420D57: mov     rcx, gs:188h
 * 0000000140420D60: test    dword ptr [rcx], 8000000h
 * 0000000140420D66: jz      short loc_140420D6D
 * 0000000140420D68: call    sub_1404206B0
 * 0000000140420D6D: mov     rcx, gs:188h
 * 0000000140420D76: test    dword ptr [rcx], 10000h
 * 0000000140420D7C: jz      short loc_140420D92
 * 0000000140420D7E: test    byte ptr [rcx+2], 1
 * 0000000140420D82: jz      short loc_140420D92
 * 0000000140420D84: call    sub_140571820
 * 0000000140420D89: mov     rcx, gs:188h
 * 0000000140420D92: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420D96: cmp     word ptr [rbp+80h], 0
 * 0000000140420D9E: jz      short loc_140420DA5
 * 0000000140420DA0: call    sub_14041F8A0
 * 0000000140420DA5: mov     rcx, gs:188h
 * 0000000140420DAE: bt      dword ptr [rcx+74h], 16h
 * 0000000140420DB3: jnb     short loc_140420DDF
 * 0000000140420DB5: xor     ecx, ecx
 * 0000000140420DB7: rdsspq  rcx
 * 0000000140420DBC: mov     r8, gs:9828h
 * 0000000140420DC5: add     r8, 8
 * 0000000140420DC9: cmp     rcx, r8
 * 0000000140420DCC: jnz     short loc_140420DDF
 * 0000000140420DCE: mov     rcx, gs:9820h
 * 0000000140420DD7: rstorssp qword ptr [rcx]
 * 0000000140420DDB: saveprevssp
 * 0000000140420DDF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420DE3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420DE7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420DEB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420DEF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420DF3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420DF7: mov     r11, [rbp-20h]
 * 0000000140420DFB: mov     r10, [rbp-28h]
 * 0000000140420DFF: mov     r9, [rbp-30h]
 * 0000000140420E03: mov     r8, [rbp-38h]
 * 0000000140420E07: mov     byte ptr gs:856h, 0
 * 0000000140420E10: movzx   eax, word ptr gs:86Ah
 * 0000000140420E19: cmp     gs:864h, ax
 * 0000000140420E22: jz      short loc_140420E36
 * 0000000140420E24: mov     gs:864h, ax
 * 0000000140420E2D: mov     ecx, 48h ; 'H'
 * 0000000140420E32: xor     edx, edx
 * 0000000140420E34: wrmsr
 * 0000000140420E36: btr     word ptr gs:860h, 2
 * 0000000140420E41: jnb     short loc_140420E51
 * 0000000140420E43: mov     eax, 1
 * 0000000140420E48: xor     edx, edx
 * 0000000140420E4A: mov     ecx, 49h ; 'I'
 * 0000000140420E4F: wrmsr
 * 0000000140420E51: btr     word ptr gs:860h, 5
 * 0000000140420E5C: jnb     loc_140420F99
 * 0000000140420E62: call    loc_140420F75
 * 0000000140420E67: add     rsp, 8
 * 0000000140420E6B: call    loc_140420F7E
 * 0000000140420E70: add     rsp, 8
 * 0000000140420E74: call    loc_140420E67
 * 0000000140420E79: add     rsp, 8
 * 0000000140420E7D: call    loc_140420E70
 * 0000000140420E82: add     rsp, 8
 * 0000000140420E86: call    loc_140420E79
 * 0000000140420E8B: add     rsp, 8
 * 0000000140420E8F: call    loc_140420E82
 * 0000000140420E94: add     rsp, 8
 * 0000000140420E98: call    loc_140420E8B
 * 0000000140420E9D: add     rsp, 8
 * 0000000140420EA1: call    loc_140420E94
 * 0000000140420EA6: add     rsp, 8
 * 0000000140420EAA: call    loc_140420E9D
 * 0000000140420EAF: add     rsp, 8
 * 0000000140420EB3: call    loc_140420EA6
 * 0000000140420EB8: add     rsp, 8
 * 0000000140420EBC: call    loc_140420EAF
 * 0000000140420EC1: add     rsp, 8
 * 0000000140420EC5: call    loc_140420EB8
 * 0000000140420ECA: add     rsp, 8
 * 0000000140420ECE: call    loc_140420EC1
 * 0000000140420ED3: add     rsp, 8
 * 0000000140420ED7: call    loc_140420ECA
 * 0000000140420EDC: add     rsp, 8
 * 0000000140420EE0: call    loc_140420ED3
 * 0000000140420EE5: add     rsp, 8
 * 0000000140420EE9: call    loc_140420EDC
 * 0000000140420EEE: add     rsp, 8
 * 0000000140420EF2: call    loc_140420EE5
 * 0000000140420EF7: add     rsp, 8
 * 0000000140420EFB: call    loc_140420EEE
 * 0000000140420F00: add     rsp, 8
 * 0000000140420F04: call    loc_140420EF7
 * 0000000140420F09: add     rsp, 8
 * 0000000140420F0D: call    loc_140420F00
 * 0000000140420F12: add     rsp, 8
 * 0000000140420F16: call    loc_140420F09
 * 0000000140420F1B: add     rsp, 8
 * 0000000140420F1F: call    loc_140420F12
 * 0000000140420F24: add     rsp, 8
 * 0000000140420F28: call    loc_140420F1B
 * 0000000140420F2D: add     rsp, 8
 * 0000000140420F31: call    loc_140420F24
 * 0000000140420F36: add     rsp, 8
 * 0000000140420F3A: call    loc_140420F2D
 * 0000000140420F3F: add     rsp, 8
 * 0000000140420F43: call    loc_140420F36
 * 0000000140420F48: add     rsp, 8
 * 0000000140420F4C: call    loc_140420F3F
 * 0000000140420F51: add     rsp, 8
 * 0000000140420F55: call    loc_140420F48
 * 0000000140420F5A: add     rsp, 8
 * 0000000140420F5E: call    loc_140420F51
 * 0000000140420F63: add     rsp, 8
 * 0000000140420F67: call    loc_140420F5A
 * 0000000140420F6C: add     rsp, 8
 * 0000000140420F70: call    loc_140420F63
 * 0000000140420F75: add     rsp, 8
 * 0000000140420F79: call    loc_140420F6C
 * 0000000140420F7E: add     rsp, 8
 * 0000000140420F82: mov     eax, 0DADAh
 * 0000000140420F87: test    byte ptr gs:862h, 8
 * 0000000140420F90: jz      short loc_140420F99
 * 0000000140420F92: mov     al, 20h ; ' '
 * 0000000140420F94: incsspq rax
 * 0000000140420F99: test    word ptr gs:860h, 80h
 * 0000000140420FA4: jz      short loc_140420FB2
 * 0000000140420FA6: xor     eax, eax
 * 0000000140420FA8: xor     edx, edx
 * 0000000140420FAA: mov     ecx, 1
 * 0000000140420FAF: div     rcx
 * 0000000140420FB2: mov     rdx, [rbp-40h]
 * 0000000140420FB6: mov     rcx, [rbp-48h]
 * 0000000140420FBA: mov     rax, [rbp-50h]
 * 0000000140420FBE: mov     rsp, rbp
 * 0000000140420FC1: mov     rbp, [rbp+0D8h]
 * 0000000140420FC8: add     rsp, 0E8h
 * 0000000140420FCF: test    cs:byte_140E01840, 1
 * 0000000140420FD6: jz      short loc_140420FDD
 * 0000000140420FD8: jmp     sub_140AB6B80
 * 0000000140420FDD: test    word ptr gs:860h, 100h
 * 0000000140420FE8: jz      short loc_140420FEF
 * 0000000140420FEA: verw    [rsp-1C8h+arg_1E0]
 * 0000000140420FEF: swapgs
 * 0000000140420FF2: iretq
 * 0000000140420FF4: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420FF8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420FFC: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421000: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421004: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421008: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042100C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421010: mov     r11, [rbp-20h]
 * 0000000140421014: mov     r10, [rbp-28h]
 * 0000000140421018: mov     r9, [rbp-30h]
 * 000000014042101C: mov     r8, [rbp-38h]
 * 0000000140421020: mov     rdx, [rbp-40h]
 * 0000000140421024: mov     rcx, [rbp-48h]
 * 0000000140421028: mov     rax, [rbp-50h]
 * 000000014042102C: mov     rsp, rbp
 * 000000014042102F: mov     rbp, [rbp+0D8h]
 * 0000000140421036: add     rsp, 0E8h
 * 000000014042103D: iretq
 */
