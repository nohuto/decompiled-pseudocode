/*
 * XREFs of sub_140433B00 @ 0x140433B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140433B00 @ 0x140433B00 (sub_140433B00.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140433B00 @ 0x140433B00
 * Reason: Hex-Rays returned no pseudocode for 0x140433B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433B00: swapgs
 * 0000000140433B03: mov     gs:10h, rsp
 * 0000000140433B0C: mov     rsp, gs:1A8h
 * 0000000140433B15: push    2Bh ; '+'
 * 0000000140433B17: push    qword ptr gs:10h
 * 0000000140433B1F: push    r11
 * 0000000140433B21: push    23h ; '#'
 * 0000000140433B23: push    rcx
 * 0000000140433B24: cmp     qword ptr gs:9828h, 0
 * 0000000140433B2E: jz      short loc_140433B34
 * 0000000140433B30: setssbsy
 * 0000000140433B34: swapgs
 * 0000000140433B37: lfence
 * 0000000140433B3A: sub     rsp, 8
 * 0000000140433B3E: push    rbp
 * 0000000140433B3F: sub     rsp, 158h
 * 0000000140433B46: lea     rbp, [rsp+190h+var_110]
 * 0000000140433B4E: mov     byte ptr [rbp-55h], 1
 * 0000000140433B52: mov     [rbp-50h], rax
 * 0000000140433B56: mov     [rbp-48h], rcx
 * 0000000140433B5A: mov     [rbp-40h], rdx
 * 0000000140433B5E: mov     [rbp-38h], r8
 * 0000000140433B62: mov     [rbp-30h], r9
 * 0000000140433B66: mov     [rbp-28h], r10
 * 0000000140433B6A: mov     [rbp-20h], r11
 * 0000000140433B6E: test    byte ptr [rbp+0F0h], 1
 * 0000000140433B75: jnz     short loc_140433BB1
 * 0000000140433B77: xor     edx, edx
 * 0000000140433B79: rdsspq  rdx
 * 0000000140433B7E: mov     [rbp+58h], rdx
 * 0000000140433B82: lfence
 * 0000000140433B85: test    word ptr gs:860h, 1
 * 0000000140433B90: jnz     short loc_140433B9A
 * 0000000140433B92: lfence
 * 0000000140433B95: jmp     loc_140433DF9
 * 0000000140433B9A: movzx   eax, word ptr gs:864h
 * 0000000140433BA3: mov     ecx, 48h ; 'H'
 * 0000000140433BA8: xor     edx, edx
 * 0000000140433BAA: wrmsr
 * 0000000140433BAC: jmp     loc_140433DF9
 * 0000000140433BB1: test    cs:byte_140E01840, 1
 * 0000000140433BB8: jnz     short loc_140433BBD
 * 0000000140433BBA: swapgs
 * 0000000140433BBD: lfence
 * 0000000140433BC0: mov     rcx, gs:9828h
 * 0000000140433BC9: test    rcx, rcx
 * 0000000140433BCC: jz      short loc_140433BED
 * 0000000140433BCE: rdsspq  rdx
 * 0000000140433BD3: mov     r10, gs:9820h
 * 0000000140433BDC: add     r10, 8
 * 0000000140433BE0: cmp     rdx, r10
 * 0000000140433BE3: jnz     short loc_140433BED
 * 0000000140433BE5: rstorssp qword ptr [rcx]
 * 0000000140433BE9: saveprevssp
 * 0000000140433BED: mov     r10, gs:188h
 * 0000000140433BF6: mov     rcx, gs:188h
 * 0000000140433BFF: mov     rcx, [rcx+220h]
 * 0000000140433C06: mov     rcx, [rcx+9E0h]
 * 0000000140433C0D: mov     gs:858h, rcx
 * 0000000140433C16: mov     cx, gs:850h
 * 0000000140433C1F: mov     gs:852h, cx
 * 0000000140433C28: mov     cx, gs:860h
 * 0000000140433C31: mov     gs:854h, cx
 * 0000000140433C3A: movzx   eax, word ptr gs:866h
 * 0000000140433C43: cmp     gs:864h, ax
 * 0000000140433C4C: jz      short loc_140433C60
 * 0000000140433C4E: mov     gs:864h, ax
 * 0000000140433C57: mov     ecx, 48h ; 'H'
 * 0000000140433C5C: xor     edx, edx
 * 0000000140433C5E: wrmsr
 * 0000000140433C60: movzx   edx, word ptr gs:860h
 * 0000000140433C69: test    edx, 8
 * 0000000140433C6F: jz      short loc_140433C88
 * 0000000140433C71: mov     eax, 1
 * 0000000140433C76: xor     edx, edx
 * 0000000140433C78: mov     ecx, 49h ; 'I'
 * 0000000140433C7D: wrmsr
 * 0000000140433C7F: movzx   edx, word ptr gs:860h
 * 0000000140433C88: test    edx, 2
 * 0000000140433C8E: jz      loc_140433DCB
 * 0000000140433C94: call    loc_140433DA7
 * 0000000140433C99: add     rsp, 8
 * 0000000140433C9D: call    loc_140433DB0
 * 0000000140433CA2: add     rsp, 8
 * 0000000140433CA6: call    loc_140433C99
 * 0000000140433CAB: add     rsp, 8
 * 0000000140433CAF: call    loc_140433CA2
 * 0000000140433CB4: add     rsp, 8
 * 0000000140433CB8: call    loc_140433CAB
 * 0000000140433CBD: add     rsp, 8
 * 0000000140433CC1: call    loc_140433CB4
 * 0000000140433CC6: add     rsp, 8
 * 0000000140433CCA: call    loc_140433CBD
 * 0000000140433CCF: add     rsp, 8
 * 0000000140433CD3: call    loc_140433CC6
 * 0000000140433CD8: add     rsp, 8
 * 0000000140433CDC: call    loc_140433CCF
 * 0000000140433CE1: add     rsp, 8
 * 0000000140433CE5: call    loc_140433CD8
 * 0000000140433CEA: add     rsp, 8
 * 0000000140433CEE: call    loc_140433CE1
 * 0000000140433CF3: add     rsp, 8
 * 0000000140433CF7: call    loc_140433CEA
 * 0000000140433CFC: add     rsp, 8
 * 0000000140433D00: call    loc_140433CF3
 * 0000000140433D05: add     rsp, 8
 * 0000000140433D09: call    loc_140433CFC
 * 0000000140433D0E: add     rsp, 8
 * 0000000140433D12: call    loc_140433D05
 * 0000000140433D17: add     rsp, 8
 * 0000000140433D1B: call    loc_140433D0E
 * 0000000140433D20: add     rsp, 8
 * 0000000140433D24: call    loc_140433D17
 * 0000000140433D29: add     rsp, 8
 * 0000000140433D2D: call    loc_140433D20
 * 0000000140433D32: add     rsp, 8
 * 0000000140433D36: call    loc_140433D29
 * 0000000140433D3B: add     rsp, 8
 * 0000000140433D3F: call    loc_140433D32
 * 0000000140433D44: add     rsp, 8
 * 0000000140433D48: call    loc_140433D3B
 * 0000000140433D4D: add     rsp, 8
 * 0000000140433D51: call    loc_140433D44
 * 0000000140433D56: add     rsp, 8
 * 0000000140433D5A: call    loc_140433D4D
 * 0000000140433D5F: add     rsp, 8
 * 0000000140433D63: call    loc_140433D56
 * 0000000140433D68: add     rsp, 8
 * 0000000140433D6C: call    loc_140433D5F
 * 0000000140433D71: add     rsp, 8
 * 0000000140433D75: call    loc_140433D68
 * 0000000140433D7A: add     rsp, 8
 * 0000000140433D7E: call    loc_140433D71
 * 0000000140433D83: add     rsp, 8
 * 0000000140433D87: call    loc_140433D7A
 * 0000000140433D8C: add     rsp, 8
 * 0000000140433D90: call    loc_140433D83
 * 0000000140433D95: add     rsp, 8
 * 0000000140433D99: call    loc_140433D8C
 * 0000000140433D9E: add     rsp, 8
 * 0000000140433DA2: call    loc_140433D95
 * 0000000140433DA7: add     rsp, 8
 * 0000000140433DAB: call    loc_140433D9E
 * 0000000140433DB0: add     rsp, 8
 * 0000000140433DB4: mov     eax, 0DADAh
 * 0000000140433DB9: test    byte ptr gs:862h, 8
 * 0000000140433DC2: jz      short loc_140433DCB
 * 0000000140433DC4: mov     al, 20h ; ' '
 * 0000000140433DC6: incsspq rax
 * 0000000140433DCB: test    edx, 200h
 * 0000000140433DD1: jz      short loc_140433DD8
 * 0000000140433DD3: call    sub_1404357C0
 * 0000000140433DD8: lfence
 * 0000000140433DDB: mov     byte ptr gs:856h, 0
 * 0000000140433DE4: test    byte ptr [r10+3], 3
 * 0000000140433DE9: mov     word ptr [rbp+80h], 0
 * 0000000140433DF2: jz      short loc_140433DF9
 * 0000000140433DF4: call    sub_14041F920
 * 0000000140433DF9: cld
 * 0000000140433DFA: stmxcsr dword ptr [rbp-54h]
 * 0000000140433DFE: ldmxcsr dword ptr gs:180h
 * 0000000140433E07: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433E0B: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140433E0F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433E13: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433E17: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433E1B: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433E1F: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140433E26: jz      short loc_140433E34
 * 0000000140433E28: test    byte ptr [rbp+0F0h], 1
 * 0000000140433E2F: jz      short loc_140433E34
 * 0000000140433E31: stac
 * 0000000140433E34: sub     qword ptr [rbp+0E8h], 2
 * 0000000140433E3C: and     dword ptr [rbp+0ECh], 0
 * 0000000140433E43: sti
 * 0000000140433E44: mov     ecx, 0C000001Dh
 * 0000000140433E49: xor     edx, edx
 * 0000000140433E4B: mov     r8, [rbp+0E8h]
 * 0000000140433E52: call    sub_140434E40
 * 0000000140433E57: nop
 * 0000000140433E58: retn
 */
