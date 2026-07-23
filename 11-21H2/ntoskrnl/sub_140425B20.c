/*
 * XREFs of sub_140425B20 @ 0x140425B20
 * Callers:
 *     sub_140AB6040 @ 0x140AB6040 (sub_140AB6040.c)
 * Callees:
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140425B20 @ 0x140425B20
 * Reason: Hex-Rays returned no pseudocode for 0x140425B20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425B20: push    1
 * 0000000140425B22: push    rbp
 * 0000000140425B23: push    rsi
 * 0000000140425B24: sub     rsp, 150h
 * 0000000140425B2B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425B33: mov     byte ptr [rbp-55h], 0
 * 0000000140425B37: mov     [rbp-50h], rax
 * 0000000140425B3B: mov     [rbp-48h], rcx
 * 0000000140425B3F: mov     [rbp-40h], rdx
 * 0000000140425B43: mov     [rbp-38h], r8
 * 0000000140425B47: mov     [rbp-30h], r9
 * 0000000140425B4B: mov     [rbp-28h], r10
 * 0000000140425B4F: mov     [rbp-20h], r11
 * 0000000140425B53: test    byte ptr [rbp+0F0h], 1
 * 0000000140425B5A: jnz     short loc_140425B96
 * 0000000140425B5C: xor     edx, edx
 * 0000000140425B5E: rdsspq  rdx
 * 0000000140425B63: mov     [rbp+58h], rdx
 * 0000000140425B67: lfence
 * 0000000140425B6A: test    word ptr gs:860h, 1
 * 0000000140425B75: jnz     short loc_140425B7F
 * 0000000140425B77: lfence
 * 0000000140425B7A: jmp     loc_140425DDE
 * 0000000140425B7F: movzx   eax, word ptr gs:864h
 * 0000000140425B88: mov     ecx, 48h ; 'H'
 * 0000000140425B8D: xor     edx, edx
 * 0000000140425B8F: wrmsr
 * 0000000140425B91: jmp     loc_140425DDE
 * 0000000140425B96: test    cs:byte_140E01840, 1
 * 0000000140425B9D: jnz     short loc_140425BA2
 * 0000000140425B9F: swapgs
 * 0000000140425BA2: lfence
 * 0000000140425BA5: mov     rcx, gs:9828h
 * 0000000140425BAE: test    rcx, rcx
 * 0000000140425BB1: jz      short loc_140425BD2
 * 0000000140425BB3: rdsspq  rdx
 * 0000000140425BB8: mov     r10, gs:9820h
 * 0000000140425BC1: add     r10, 8
 * 0000000140425BC5: cmp     rdx, r10
 * 0000000140425BC8: jnz     short loc_140425BD2
 * 0000000140425BCA: rstorssp qword ptr [rcx]
 * 0000000140425BCE: saveprevssp
 * 0000000140425BD2: mov     r10, gs:188h
 * 0000000140425BDB: mov     rcx, gs:188h
 * 0000000140425BE4: mov     rcx, [rcx+220h]
 * 0000000140425BEB: mov     rcx, [rcx+9E0h]
 * 0000000140425BF2: mov     gs:858h, rcx
 * 0000000140425BFB: mov     cx, gs:850h
 * 0000000140425C04: mov     gs:852h, cx
 * 0000000140425C0D: mov     cx, gs:860h
 * 0000000140425C16: mov     gs:854h, cx
 * 0000000140425C1F: movzx   eax, word ptr gs:866h
 * 0000000140425C28: cmp     gs:864h, ax
 * 0000000140425C31: jz      short loc_140425C45
 * 0000000140425C33: mov     gs:864h, ax
 * 0000000140425C3C: mov     ecx, 48h ; 'H'
 * 0000000140425C41: xor     edx, edx
 * 0000000140425C43: wrmsr
 * 0000000140425C45: movzx   edx, word ptr gs:860h
 * 0000000140425C4E: test    edx, 8
 * 0000000140425C54: jz      short loc_140425C6D
 * 0000000140425C56: mov     eax, 1
 * 0000000140425C5B: xor     edx, edx
 * 0000000140425C5D: mov     ecx, 49h ; 'I'
 * 0000000140425C62: wrmsr
 * 0000000140425C64: movzx   edx, word ptr gs:860h
 * 0000000140425C6D: test    edx, 2
 * 0000000140425C73: jz      loc_140425DB0
 * 0000000140425C79: call    loc_140425D8C
 * 0000000140425C7E: add     rsp, 8
 * 0000000140425C82: call    loc_140425D95
 * 0000000140425C87: add     rsp, 8
 * 0000000140425C8B: call    loc_140425C7E
 * 0000000140425C90: add     rsp, 8
 * 0000000140425C94: call    loc_140425C87
 * 0000000140425C99: add     rsp, 8
 * 0000000140425C9D: call    loc_140425C90
 * 0000000140425CA2: add     rsp, 8
 * 0000000140425CA6: call    loc_140425C99
 * 0000000140425CAB: add     rsp, 8
 * 0000000140425CAF: call    loc_140425CA2
 * 0000000140425CB4: add     rsp, 8
 * 0000000140425CB8: call    loc_140425CAB
 * 0000000140425CBD: add     rsp, 8
 * 0000000140425CC1: call    loc_140425CB4
 * 0000000140425CC6: add     rsp, 8
 * 0000000140425CCA: call    loc_140425CBD
 * 0000000140425CCF: add     rsp, 8
 * 0000000140425CD3: call    loc_140425CC6
 * 0000000140425CD8: add     rsp, 8
 * 0000000140425CDC: call    loc_140425CCF
 * 0000000140425CE1: add     rsp, 8
 * 0000000140425CE5: call    loc_140425CD8
 * 0000000140425CEA: add     rsp, 8
 * 0000000140425CEE: call    loc_140425CE1
 * 0000000140425CF3: add     rsp, 8
 * 0000000140425CF7: call    loc_140425CEA
 * 0000000140425CFC: add     rsp, 8
 * 0000000140425D00: call    loc_140425CF3
 * 0000000140425D05: add     rsp, 8
 * 0000000140425D09: call    loc_140425CFC
 * 0000000140425D0E: add     rsp, 8
 * 0000000140425D12: call    loc_140425D05
 * 0000000140425D17: add     rsp, 8
 * 0000000140425D1B: call    loc_140425D0E
 * 0000000140425D20: add     rsp, 8
 * 0000000140425D24: call    loc_140425D17
 * 0000000140425D29: add     rsp, 8
 * 0000000140425D2D: call    loc_140425D20
 * 0000000140425D32: add     rsp, 8
 * 0000000140425D36: call    loc_140425D29
 * 0000000140425D3B: add     rsp, 8
 * 0000000140425D3F: call    loc_140425D32
 * 0000000140425D44: add     rsp, 8
 * 0000000140425D48: call    loc_140425D3B
 * 0000000140425D4D: add     rsp, 8
 * 0000000140425D51: call    loc_140425D44
 * 0000000140425D56: add     rsp, 8
 * 0000000140425D5A: call    loc_140425D4D
 * 0000000140425D5F: add     rsp, 8
 * 0000000140425D63: call    loc_140425D56
 * 0000000140425D68: add     rsp, 8
 * 0000000140425D6C: call    loc_140425D5F
 * 0000000140425D71: add     rsp, 8
 * 0000000140425D75: call    loc_140425D68
 * 0000000140425D7A: add     rsp, 8
 * 0000000140425D7E: call    loc_140425D71
 * 0000000140425D83: add     rsp, 8
 * 0000000140425D87: call    loc_140425D7A
 * 0000000140425D8C: add     rsp, 8
 * 0000000140425D90: call    loc_140425D83
 * 0000000140425D95: add     rsp, 8
 * 0000000140425D99: mov     eax, 0DADAh
 * 0000000140425D9E: test    byte ptr gs:862h, 8
 * 0000000140425DA7: jz      short loc_140425DB0
 * 0000000140425DA9: mov     al, 20h ; ' '
 * 0000000140425DAB: incsspq rax
 * 0000000140425DB0: test    edx, 200h
 * 0000000140425DB6: jz      short loc_140425DBD
 * 0000000140425DB8: call    sub_1404357C0
 * 0000000140425DBD: lfence
 * 0000000140425DC0: mov     byte ptr gs:856h, 0
 * 0000000140425DC9: test    byte ptr [r10+3], 3
 * 0000000140425DCE: mov     word ptr [rbp+80h], 0
 * 0000000140425DD7: jz      short loc_140425DDE
 * 0000000140425DD9: call    sub_14041F920
 * 0000000140425DDE: cld
 * 0000000140425DDF: stmxcsr dword ptr [rbp-54h]
 * 0000000140425DE3: ldmxcsr dword ptr gs:180h
 * 0000000140425DEC: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425DF0: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425DF4: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425DF8: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425DFC: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425E00: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425E04: cmp     byte ptr gs:82DAh, 0
 * 0000000140425E0D: jz      short loc_140425E14
 * 0000000140425E0F: call    sub_1403B4940
 * 0000000140425E14: lea     rax, loc_140429887
 * 0000000140425E1B: cmp     rax, [rbp+0E8h]
 * 0000000140425E22: jnb     short loc_140425E3D
 * 0000000140425E24: lea     rax, loc_1404298A0
 * 0000000140425E2B: cmp     rax, [rbp+0E8h]
 * 0000000140425E32: jb      short loc_140425E3D
 * 0000000140425E34: lea     rcx, [rbp-80h]
 * 0000000140425E38: call    sub_1402F2540
 * 0000000140425E3D: xor     esi, esi
 * 0000000140425E3F: inc     dword ptr gs:82C0h
 * 0000000140425E47: jmp     sub_140426C70
 */
