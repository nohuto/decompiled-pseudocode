/*
 * XREFs of sub_140421E60 @ 0x140421E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_1404214D0 @ 0x1404214D0 (sub_1404214D0.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140421E60 @ 0x140421E60
 * Reason: Hex-Rays returned no pseudocode for 0x140421E60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421E60: mov     rdx, rsp
 * 0000000140421E63: mov     rcx, gs:8B58h
 * 0000000140421E6C: lea     rax, [rcx-6000h]
 * 0000000140421E73: cmp     rax, rsp
 * 0000000140421E76: ja      short loc_140421E7D
 * 0000000140421E78: cmp     rsp, rcx
 * 0000000140421E7B: jb      short loc_140421E89
 * 0000000140421E7D: cmp     cs:dword_140C31E20, 0
 * 0000000140421E84: jnz     short loc_140421E89
 * 0000000140421E86: mov     rsp, rcx
 * 0000000140421E89: sub     rsp, 20h
 * 0000000140421E8D: mov     [rsp+20h+var_10], rdx
 * 0000000140421E92: call    sub_1404214D0
 * 0000000140421E97: mov     rsp, [rsp+20h+var_10]
 * 0000000140421E9C: mov     rcx, rsi
 * 0000000140421E9F: call    HalPerformEndOfInterrupt
 * 0000000140421EA4: mov     rcx, gs:20h
 * 0000000140421EAD: cmp     byte ptr [rcx+20h], 1
 * 0000000140421EB1: ja      short loc_140421F2D
 * 0000000140421EB3: rdtsc
 * 0000000140421EB5: shl     rdx, 20h
 * 0000000140421EB9: or      rax, rdx
 * 0000000140421EBC: sub     rax, [rcx+8180h]
 * 0000000140421EC3: add     [rcx+8278h], rax
 * 0000000140421ECA: add     [rcx+8180h], rax
 * 0000000140421ED1: mov     r8, rax
 * 0000000140421ED4: mov     rax, [rcx+8]
 * 0000000140421ED8: test    byte ptr [rax+2], 72h
 * 0000000140421EDC: jz      short loc_140421EF1
 * 0000000140421EDE: xor     edx, edx
 * 0000000140421EE0: call    sub_1402ECA00
 * 0000000140421EE5: mov     rcx, gs:20h
 * 0000000140421EEE: inc     byte ptr [rcx+20h]
 * 0000000140421EF1: mov     dl, [rcx+6]
 * 0000000140421EF4: and     byte ptr [rcx+6], 0
 * 0000000140421EF8: cmp     byte ptr [rcx+7], 0
 * 0000000140421EFC: jnz     short loc_140421F2D
 * 0000000140421EFE: test    dl, dl
 * 0000000140421F00: jz      short loc_140421F2D
 * 0000000140421F02: cmp     byte ptr [rbp-57h], 2
 * 0000000140421F06: jnb     short loc_140421F13
 * 0000000140421F08: and     byte ptr [rcx+20h], 0
 * 0000000140421F0C: call    sub_1404281E0
 * 0000000140421F11: jmp     short loc_140421F30
 * 0000000140421F13: mov     ecx, 2
 * 0000000140421F18: call    cs:off_140015970
 * 0000000140421F1F: nop     dword ptr [rax+rax+00h]
 * 0000000140421F24: mov     rcx, gs:20h
 * 0000000140421F2D: dec     byte ptr [rcx+20h]
 * 0000000140421F30: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421F34: cmp     cs:dword_140D06B08, 0
 * 0000000140421F3B: jz      short loc_140421F44
 * 0000000140421F3D: call    sub_140569E70
 * 0000000140421F42: jmp     short loc_140421F48
 * 0000000140421F44: mov     cr8, rcx
 * 0000000140421F48: mov     rsi, [rbp+0D0h]
 * 0000000140421F4F: test    byte ptr [rbp+0F0h], 1
 * 0000000140421F56: jz      loc_140422244
 * 0000000140421F5C: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140421F63: jz      short loc_140421F68
 * 0000000140421F65: stac
 * 0000000140421F68: mov     rcx, gs:188h
 * 0000000140421F71: test    byte ptr [rcx+0C2h], 3
 * 0000000140421F78: jz      short loc_140421F95
 * 0000000140421F7A: mov     ecx, 1
 * 0000000140421F7F: mov     cr8, rcx
 * 0000000140421F83: sti
 * 0000000140421F84: call    sub_140425700
 * 0000000140421F89: cli
 * 0000000140421F8A: mov     ecx, 0
 * 0000000140421F8F: mov     cr8, rcx
 * 0000000140421F93: jmp     short loc_140421F68
 * 0000000140421F95: test    byte ptr gs:86Ch, 2
 * 0000000140421F9E: jz      short loc_140421FA7
 * 0000000140421FA0: xor     ecx, ecx
 * 0000000140421FA2: call    sub_14020D230
 * 0000000140421FA7: mov     rcx, gs:188h
 * 0000000140421FB0: test    dword ptr [rcx], 8000000h
 * 0000000140421FB6: jz      short loc_140421FBD
 * 0000000140421FB8: call    sub_1404206B0
 * 0000000140421FBD: mov     rcx, gs:188h
 * 0000000140421FC6: test    dword ptr [rcx], 10000h
 * 0000000140421FCC: jz      short loc_140421FE2
 * 0000000140421FCE: test    byte ptr [rcx+2], 1
 * 0000000140421FD2: jz      short loc_140421FE2
 * 0000000140421FD4: call    sub_140571820
 * 0000000140421FD9: mov     rcx, gs:188h
 * 0000000140421FE2: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421FE6: cmp     word ptr [rbp+80h], 0
 * 0000000140421FEE: jz      short loc_140421FF5
 * 0000000140421FF0: call    sub_14041F8A0
 * 0000000140421FF5: mov     rcx, gs:188h
 * 0000000140421FFE: bt      dword ptr [rcx+74h], 16h
 * 0000000140422003: jnb     short loc_14042202F
 * 0000000140422005: xor     ecx, ecx
 * 0000000140422007: rdsspq  rcx
 * 000000014042200C: mov     r8, gs:9828h
 * 0000000140422015: add     r8, 8
 * 0000000140422019: cmp     rcx, r8
 * 000000014042201C: jnz     short loc_14042202F
 * 000000014042201E: mov     rcx, gs:9820h
 * 0000000140422027: rstorssp qword ptr [rcx]
 * 000000014042202B: saveprevssp
 * 000000014042202F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422033: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422037: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042203B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042203F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140422043: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140422047: mov     r11, [rbp-20h]
 * 000000014042204B: mov     r10, [rbp-28h]
 * 000000014042204F: mov     r9, [rbp-30h]
 * 0000000140422053: mov     r8, [rbp-38h]
 * 0000000140422057: mov     byte ptr gs:856h, 0
 * 0000000140422060: movzx   eax, word ptr gs:86Ah
 * 0000000140422069: cmp     gs:864h, ax
 * 0000000140422072: jz      short loc_140422086
 * 0000000140422074: mov     gs:864h, ax
 * 000000014042207D: mov     ecx, 48h ; 'H'
 * 0000000140422082: xor     edx, edx
 * 0000000140422084: wrmsr
 * 0000000140422086: btr     word ptr gs:860h, 2
 * 0000000140422091: jnb     short loc_1404220A1
 * 0000000140422093: mov     eax, 1
 * 0000000140422098: xor     edx, edx
 * 000000014042209A: mov     ecx, 49h ; 'I'
 * 000000014042209F: wrmsr
 * 00000001404220A1: btr     word ptr gs:860h, 5
 * 00000001404220AC: jnb     loc_1404221E9
 * 00000001404220B2: call    loc_1404221C5
 * 00000001404220B7: add     rsp, 8
 * 00000001404220BB: call    loc_1404221CE
 * 00000001404220C0: add     rsp, 8
 * 00000001404220C4: call    loc_1404220B7
 * 00000001404220C9: add     rsp, 8
 * 00000001404220CD: call    loc_1404220C0
 * 00000001404220D2: add     rsp, 8
 * 00000001404220D6: call    loc_1404220C9
 * 00000001404220DB: add     rsp, 8
 * 00000001404220DF: call    loc_1404220D2
 * 00000001404220E4: add     rsp, 8
 * 00000001404220E8: call    loc_1404220DB
 * 00000001404220ED: add     rsp, 8
 * 00000001404220F1: call    loc_1404220E4
 * 00000001404220F6: add     rsp, 8
 * 00000001404220FA: call    loc_1404220ED
 * 00000001404220FF: add     rsp, 8
 * 0000000140422103: call    loc_1404220F6
 * 0000000140422108: add     rsp, 8
 * 000000014042210C: call    loc_1404220FF
 * 0000000140422111: add     rsp, 8
 * 0000000140422115: call    loc_140422108
 * 000000014042211A: add     rsp, 8
 * 000000014042211E: call    loc_140422111
 * 0000000140422123: add     rsp, 8
 * 0000000140422127: call    loc_14042211A
 * 000000014042212C: add     rsp, 8
 * 0000000140422130: call    loc_140422123
 * 0000000140422135: add     rsp, 8
 * 0000000140422139: call    loc_14042212C
 * 000000014042213E: add     rsp, 8
 * 0000000140422142: call    loc_140422135
 * 0000000140422147: add     rsp, 8
 * 000000014042214B: call    loc_14042213E
 * 0000000140422150: add     rsp, 8
 * 0000000140422154: call    loc_140422147
 * 0000000140422159: add     rsp, 8
 * 000000014042215D: call    loc_140422150
 * 0000000140422162: add     rsp, 8
 * 0000000140422166: call    loc_140422159
 * 000000014042216B: add     rsp, 8
 * 000000014042216F: call    loc_140422162
 * 0000000140422174: add     rsp, 8
 * 0000000140422178: call    loc_14042216B
 * 000000014042217D: add     rsp, 8
 * 0000000140422181: call    loc_140422174
 * 0000000140422186: add     rsp, 8
 * 000000014042218A: call    loc_14042217D
 * 000000014042218F: add     rsp, 8
 * 0000000140422193: call    loc_140422186
 * 0000000140422198: add     rsp, 8
 * 000000014042219C: call    loc_14042218F
 * 00000001404221A1: add     rsp, 8
 * 00000001404221A5: call    loc_140422198
 * 00000001404221AA: add     rsp, 8
 * 00000001404221AE: call    loc_1404221A1
 * 00000001404221B3: add     rsp, 8
 * 00000001404221B7: call    loc_1404221AA
 * 00000001404221BC: add     rsp, 8
 * 00000001404221C0: call    loc_1404221B3
 * 00000001404221C5: add     rsp, 8
 * 00000001404221C9: call    loc_1404221BC
 * 00000001404221CE: add     rsp, 8
 * 00000001404221D2: mov     eax, 0DADAh
 * 00000001404221D7: test    byte ptr gs:862h, 8
 * 00000001404221E0: jz      short loc_1404221E9
 * 00000001404221E2: mov     al, 20h ; ' '
 * 00000001404221E4: incsspq rax
 * 00000001404221E9: test    word ptr gs:860h, 80h
 * 00000001404221F4: jz      short loc_140422202
 * 00000001404221F6: xor     eax, eax
 * 00000001404221F8: xor     edx, edx
 * 00000001404221FA: mov     ecx, 1
 * 00000001404221FF: div     rcx
 * 0000000140422202: mov     rdx, [rbp-40h]
 * 0000000140422206: mov     rcx, [rbp-48h]
 * 000000014042220A: mov     rax, [rbp-50h]
 * 000000014042220E: mov     rsp, rbp
 * 0000000140422211: mov     rbp, [rbp+0D8h]
 * 0000000140422218: add     rsp, 0E8h
 * 000000014042221F: test    cs:byte_140E01840, 1
 * 0000000140422226: jz      short loc_14042222D
 * 0000000140422228: jmp     sub_140AB6B80
 * 000000014042222D: test    word ptr gs:860h, 100h
 * 0000000140422238: jz      short loc_14042223F
 * 000000014042223A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042223F: swapgs
 * 0000000140422242: iretq
 * 0000000140422244: ldmxcsr dword ptr [rbp-54h]
 * 0000000140422248: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042224C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422250: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140422254: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140422258: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042225C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140422260: mov     r11, [rbp-20h]
 * 0000000140422264: mov     r10, [rbp-28h]
 * 0000000140422268: mov     r9, [rbp-30h]
 * 000000014042226C: mov     r8, [rbp-38h]
 * 0000000140422270: mov     rdx, [rbp-40h]
 * 0000000140422274: mov     rcx, [rbp-48h]
 * 0000000140422278: mov     rax, [rbp-50h]
 * 000000014042227C: mov     rsp, rbp
 * 000000014042227F: mov     rbp, [rbp+0D8h]
 * 0000000140422286: add     rsp, 0E8h
 * 000000014042228D: iretq
 */
