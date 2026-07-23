/*
 * XREFs of sub_140425E60 @ 0x140425E60
 * Callers:
 *     sub_140AB60C0 @ 0x140AB60C0 (sub_140AB60C0.c)
 * Callees:
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140425E60 @ 0x140425E60
 * Reason: Hex-Rays returned no pseudocode for 0x140425E60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425E60: push    2
 * 0000000140425E62: push    rbp
 * 0000000140425E63: push    rsi
 * 0000000140425E64: sub     rsp, 150h
 * 0000000140425E6B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425E73: mov     byte ptr [rbp-55h], 0
 * 0000000140425E77: mov     [rbp-50h], rax
 * 0000000140425E7B: mov     [rbp-48h], rcx
 * 0000000140425E7F: mov     [rbp-40h], rdx
 * 0000000140425E83: mov     [rbp-38h], r8
 * 0000000140425E87: mov     [rbp-30h], r9
 * 0000000140425E8B: mov     [rbp-28h], r10
 * 0000000140425E8F: mov     [rbp-20h], r11
 * 0000000140425E93: test    byte ptr [rbp+0F0h], 1
 * 0000000140425E9A: jnz     short loc_140425ED6
 * 0000000140425E9C: xor     edx, edx
 * 0000000140425E9E: rdsspq  rdx
 * 0000000140425EA3: mov     [rbp+58h], rdx
 * 0000000140425EA7: lfence
 * 0000000140425EAA: test    word ptr gs:860h, 1
 * 0000000140425EB5: jnz     short loc_140425EBF
 * 0000000140425EB7: lfence
 * 0000000140425EBA: jmp     loc_14042611E
 * 0000000140425EBF: movzx   eax, word ptr gs:864h
 * 0000000140425EC8: mov     ecx, 48h ; 'H'
 * 0000000140425ECD: xor     edx, edx
 * 0000000140425ECF: wrmsr
 * 0000000140425ED1: jmp     loc_14042611E
 * 0000000140425ED6: test    cs:byte_140E01840, 1
 * 0000000140425EDD: jnz     short loc_140425EE2
 * 0000000140425EDF: swapgs
 * 0000000140425EE2: lfence
 * 0000000140425EE5: mov     rcx, gs:9828h
 * 0000000140425EEE: test    rcx, rcx
 * 0000000140425EF1: jz      short loc_140425F12
 * 0000000140425EF3: rdsspq  rdx
 * 0000000140425EF8: mov     r10, gs:9820h
 * 0000000140425F01: add     r10, 8
 * 0000000140425F05: cmp     rdx, r10
 * 0000000140425F08: jnz     short loc_140425F12
 * 0000000140425F0A: rstorssp qword ptr [rcx]
 * 0000000140425F0E: saveprevssp
 * 0000000140425F12: mov     r10, gs:188h
 * 0000000140425F1B: mov     rcx, gs:188h
 * 0000000140425F24: mov     rcx, [rcx+220h]
 * 0000000140425F2B: mov     rcx, [rcx+9E0h]
 * 0000000140425F32: mov     gs:858h, rcx
 * 0000000140425F3B: mov     cx, gs:850h
 * 0000000140425F44: mov     gs:852h, cx
 * 0000000140425F4D: mov     cx, gs:860h
 * 0000000140425F56: mov     gs:854h, cx
 * 0000000140425F5F: movzx   eax, word ptr gs:866h
 * 0000000140425F68: cmp     gs:864h, ax
 * 0000000140425F71: jz      short loc_140425F85
 * 0000000140425F73: mov     gs:864h, ax
 * 0000000140425F7C: mov     ecx, 48h ; 'H'
 * 0000000140425F81: xor     edx, edx
 * 0000000140425F83: wrmsr
 * 0000000140425F85: movzx   edx, word ptr gs:860h
 * 0000000140425F8E: test    edx, 8
 * 0000000140425F94: jz      short loc_140425FAD
 * 0000000140425F96: mov     eax, 1
 * 0000000140425F9B: xor     edx, edx
 * 0000000140425F9D: mov     ecx, 49h ; 'I'
 * 0000000140425FA2: wrmsr
 * 0000000140425FA4: movzx   edx, word ptr gs:860h
 * 0000000140425FAD: test    edx, 2
 * 0000000140425FB3: jz      loc_1404260F0
 * 0000000140425FB9: call    loc_1404260CC
 * 0000000140425FBE: add     rsp, 8
 * 0000000140425FC2: call    loc_1404260D5
 * 0000000140425FC7: add     rsp, 8
 * 0000000140425FCB: call    loc_140425FBE
 * 0000000140425FD0: add     rsp, 8
 * 0000000140425FD4: call    loc_140425FC7
 * 0000000140425FD9: add     rsp, 8
 * 0000000140425FDD: call    loc_140425FD0
 * 0000000140425FE2: add     rsp, 8
 * 0000000140425FE6: call    loc_140425FD9
 * 0000000140425FEB: add     rsp, 8
 * 0000000140425FEF: call    loc_140425FE2
 * 0000000140425FF4: add     rsp, 8
 * 0000000140425FF8: call    loc_140425FEB
 * 0000000140425FFD: add     rsp, 8
 * 0000000140426001: call    loc_140425FF4
 * 0000000140426006: add     rsp, 8
 * 000000014042600A: call    loc_140425FFD
 * 000000014042600F: add     rsp, 8
 * 0000000140426013: call    loc_140426006
 * 0000000140426018: add     rsp, 8
 * 000000014042601C: call    loc_14042600F
 * 0000000140426021: add     rsp, 8
 * 0000000140426025: call    loc_140426018
 * 000000014042602A: add     rsp, 8
 * 000000014042602E: call    loc_140426021
 * 0000000140426033: add     rsp, 8
 * 0000000140426037: call    loc_14042602A
 * 000000014042603C: add     rsp, 8
 * 0000000140426040: call    loc_140426033
 * 0000000140426045: add     rsp, 8
 * 0000000140426049: call    loc_14042603C
 * 000000014042604E: add     rsp, 8
 * 0000000140426052: call    loc_140426045
 * 0000000140426057: add     rsp, 8
 * 000000014042605B: call    loc_14042604E
 * 0000000140426060: add     rsp, 8
 * 0000000140426064: call    loc_140426057
 * 0000000140426069: add     rsp, 8
 * 000000014042606D: call    loc_140426060
 * 0000000140426072: add     rsp, 8
 * 0000000140426076: call    loc_140426069
 * 000000014042607B: add     rsp, 8
 * 000000014042607F: call    loc_140426072
 * 0000000140426084: add     rsp, 8
 * 0000000140426088: call    loc_14042607B
 * 000000014042608D: add     rsp, 8
 * 0000000140426091: call    loc_140426084
 * 0000000140426096: add     rsp, 8
 * 000000014042609A: call    loc_14042608D
 * 000000014042609F: add     rsp, 8
 * 00000001404260A3: call    loc_140426096
 * 00000001404260A8: add     rsp, 8
 * 00000001404260AC: call    loc_14042609F
 * 00000001404260B1: add     rsp, 8
 * 00000001404260B5: call    loc_1404260A8
 * 00000001404260BA: add     rsp, 8
 * 00000001404260BE: call    loc_1404260B1
 * 00000001404260C3: add     rsp, 8
 * 00000001404260C7: call    loc_1404260BA
 * 00000001404260CC: add     rsp, 8
 * 00000001404260D0: call    loc_1404260C3
 * 00000001404260D5: add     rsp, 8
 * 00000001404260D9: mov     eax, 0DADAh
 * 00000001404260DE: test    byte ptr gs:862h, 8
 * 00000001404260E7: jz      short loc_1404260F0
 * 00000001404260E9: mov     al, 20h ; ' '
 * 00000001404260EB: incsspq rax
 * 00000001404260F0: test    edx, 200h
 * 00000001404260F6: jz      short loc_1404260FD
 * 00000001404260F8: call    sub_1404357C0
 * 00000001404260FD: lfence
 * 0000000140426100: mov     byte ptr gs:856h, 0
 * 0000000140426109: test    byte ptr [r10+3], 3
 * 000000014042610E: mov     word ptr [rbp+80h], 0
 * 0000000140426117: jz      short loc_14042611E
 * 0000000140426119: call    sub_14041F920
 * 000000014042611E: cld
 * 000000014042611F: stmxcsr dword ptr [rbp-54h]
 * 0000000140426123: ldmxcsr dword ptr gs:180h
 * 000000014042612C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140426130: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140426134: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140426138: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014042613C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140426140: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140426144: cmp     byte ptr gs:82DAh, 0
 * 000000014042614D: jz      short loc_140426154
 * 000000014042614F: call    sub_1403B4940
 * 0000000140426154: lea     rax, loc_140429887
 * 000000014042615B: cmp     rax, [rbp+0E8h]
 * 0000000140426162: jnb     short loc_14042617D
 * 0000000140426164: lea     rax, loc_1404298A0
 * 000000014042616B: cmp     rax, [rbp+0E8h]
 * 0000000140426172: jb      short loc_14042617D
 * 0000000140426174: lea     rcx, [rbp-80h]
 * 0000000140426178: call    sub_1402F2540
 * 000000014042617D: xor     esi, esi
 * 000000014042617F: inc     dword ptr gs:82C0h
 * 0000000140426187: jmp     sub_140426C70
 */
