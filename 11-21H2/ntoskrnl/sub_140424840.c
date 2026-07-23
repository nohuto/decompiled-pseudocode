/*
 * XREFs of sub_140424840 @ 0x140424840
 * Callers:
 *     sub_140424520 @ 0x140424520 (sub_140424520.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140424840 @ 0x140424840 (sub_140424840.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140424840 @ 0x140424840
 * Reason: Hex-Rays returned no pseudocode for 0x140424840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424840: sub     rsp, 138h
 * 0000000140424847: lea     rax, [rsp+138h+var_38]
 * 000000014042484F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140424854: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140424859: movaps  [rsp+138h+var_E8], xmm8
 * 000000014042485F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140424865: movaps  [rsp+138h+var_C8], xmm10
 * 000000014042486B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140424870: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140424875: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014042487A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014042487F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140424884: mov     [rax], rbx
 * 0000000140424887: mov     [rax+8], rdi
 * 000000014042488B: mov     [rax+10h], rsi
 * 000000014042488F: mov     [rax+18h], r12
 * 0000000140424893: mov     [rax+20h], r13
 * 0000000140424897: mov     [rax+28h], r14
 * 000000014042489B: mov     [rax+30h], r15
 * 000000014042489F: nop
 * 00000001404248A0: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404248A7: jz      short loc_1404248AC
 * 00000001404248A9: stac
 * 00000001404248AC: mov     ecx, 1
 * 00000001404248B1: mov     cr8, rcx
 * 00000001404248B5: mov     rdx, [rsp+138h+var_138]
 * 00000001404248B9: mov     rcx, [rsp+138h+var_130]
 * 00000001404248BE: mov     rax, [rsp+138h+var_128]
 * 00000001404248C3: call    sub_14042A5E0
 * 00000001404248C8: lea     rcx, [rsp+138h+var_38]
 * 00000001404248D0: movaps  xmm6, [rsp+138h+var_108]
 * 00000001404248D5: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001404248DA: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001404248E0: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001404248E6: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001404248EC: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001404248F1: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001404248F6: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001404248FB: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140424900: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140424905: mov     rbx, [rcx]
 * 0000000140424908: mov     rdi, [rcx+8]
 * 000000014042490C: mov     rsi, [rcx+10h]
 * 0000000140424910: mov     r12, [rcx+18h]
 * 0000000140424914: mov     r13, [rcx+20h]
 * 0000000140424918: mov     r14, [rcx+28h]
 * 000000014042491C: mov     r15, [rcx+30h]
 * 0000000140424920: cli
 * 0000000140424921: test    byte ptr [rbp+0F0h], 1
 * 0000000140424928: jz      loc_140424C16
 * 000000014042492E: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140424935: jz      short loc_14042493A
 * 0000000140424937: stac
 * 000000014042493A: mov     rcx, gs:188h
 * 0000000140424943: test    byte ptr [rcx+0C2h], 3
 * 000000014042494A: jz      short loc_140424967
 * 000000014042494C: mov     ecx, 1
 * 0000000140424951: mov     cr8, rcx
 * 0000000140424955: sti
 * 0000000140424956: call    sub_140425700
 * 000000014042495B: cli
 * 000000014042495C: mov     ecx, 0
 * 0000000140424961: mov     cr8, rcx
 * 0000000140424965: jmp     short loc_14042493A
 * 0000000140424967: test    byte ptr gs:86Ch, 2
 * 0000000140424970: jz      short loc_140424979
 * 0000000140424972: xor     ecx, ecx
 * 0000000140424974: call    sub_14020D230
 * 0000000140424979: mov     rcx, gs:188h
 * 0000000140424982: test    dword ptr [rcx], 8000000h
 * 0000000140424988: jz      short loc_14042498F
 * 000000014042498A: call    sub_1404206B0
 * 000000014042498F: mov     rcx, gs:188h
 * 0000000140424998: test    dword ptr [rcx], 10000h
 * 000000014042499E: jz      short loc_1404249B4
 * 00000001404249A0: test    byte ptr [rcx+2], 1
 * 00000001404249A4: jz      short loc_1404249B4
 * 00000001404249A6: call    sub_140571820
 * 00000001404249AB: mov     rcx, gs:188h
 * 00000001404249B4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404249B8: cmp     word ptr [rbp+80h], 0
 * 00000001404249C0: jz      short loc_1404249C7
 * 00000001404249C2: call    sub_14041F8A0
 * 00000001404249C7: mov     rcx, gs:188h
 * 00000001404249D0: bt      dword ptr [rcx+74h], 16h
 * 00000001404249D5: jnb     short loc_140424A01
 * 00000001404249D7: xor     ecx, ecx
 * 00000001404249D9: rdsspq  rcx
 * 00000001404249DE: mov     r8, gs:9828h
 * 00000001404249E7: add     r8, 8
 * 00000001404249EB: cmp     rcx, r8
 * 00000001404249EE: jnz     short loc_140424A01
 * 00000001404249F0: mov     rcx, gs:9820h
 * 00000001404249F9: rstorssp qword ptr [rcx]
 * 00000001404249FD: saveprevssp
 * 0000000140424A01: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140424A05: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140424A09: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140424A0D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140424A11: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140424A15: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140424A19: mov     r11, [rbp-20h]
 * 0000000140424A1D: mov     r10, [rbp-28h]
 * 0000000140424A21: mov     r9, [rbp-30h]
 * 0000000140424A25: mov     r8, [rbp-38h]
 * 0000000140424A29: mov     byte ptr gs:856h, 0
 * 0000000140424A32: movzx   eax, word ptr gs:86Ah
 * 0000000140424A3B: cmp     gs:864h, ax
 * 0000000140424A44: jz      short loc_140424A58
 * 0000000140424A46: mov     gs:864h, ax
 * 0000000140424A4F: mov     ecx, 48h ; 'H'
 * 0000000140424A54: xor     edx, edx
 * 0000000140424A56: wrmsr
 * 0000000140424A58: btr     word ptr gs:860h, 2
 * 0000000140424A63: jnb     short loc_140424A73
 * 0000000140424A65: mov     eax, 1
 * 0000000140424A6A: xor     edx, edx
 * 0000000140424A6C: mov     ecx, 49h ; 'I'
 * 0000000140424A71: wrmsr
 * 0000000140424A73: btr     word ptr gs:860h, 5
 * 0000000140424A7E: jnb     loc_140424BBB
 * 0000000140424A84: call    loc_140424B97
 * 0000000140424A89: add     rsp, 8
 * 0000000140424A8D: call    loc_140424BA0
 * 0000000140424A92: add     rsp, 8
 * 0000000140424A96: call    loc_140424A89
 * 0000000140424A9B: add     rsp, 8
 * 0000000140424A9F: call    loc_140424A92
 * 0000000140424AA4: add     rsp, 8
 * 0000000140424AA8: call    loc_140424A9B
 * 0000000140424AAD: add     rsp, 8
 * 0000000140424AB1: call    loc_140424AA4
 * 0000000140424AB6: add     rsp, 8
 * 0000000140424ABA: call    loc_140424AAD
 * 0000000140424ABF: add     rsp, 8
 * 0000000140424AC3: call    loc_140424AB6
 * 0000000140424AC8: add     rsp, 8
 * 0000000140424ACC: call    loc_140424ABF
 * 0000000140424AD1: add     rsp, 8
 * 0000000140424AD5: call    loc_140424AC8
 * 0000000140424ADA: add     rsp, 8
 * 0000000140424ADE: call    loc_140424AD1
 * 0000000140424AE3: add     rsp, 8
 * 0000000140424AE7: call    loc_140424ADA
 * 0000000140424AEC: add     rsp, 8
 * 0000000140424AF0: call    loc_140424AE3
 * 0000000140424AF5: add     rsp, 8
 * 0000000140424AF9: call    loc_140424AEC
 * 0000000140424AFE: add     rsp, 8
 * 0000000140424B02: call    loc_140424AF5
 * 0000000140424B07: add     rsp, 8
 * 0000000140424B0B: call    loc_140424AFE
 * 0000000140424B10: add     rsp, 8
 * 0000000140424B14: call    loc_140424B07
 * 0000000140424B19: add     rsp, 8
 * 0000000140424B1D: call    loc_140424B10
 * 0000000140424B22: add     rsp, 8
 * 0000000140424B26: call    loc_140424B19
 * 0000000140424B2B: add     rsp, 8
 * 0000000140424B2F: call    loc_140424B22
 * 0000000140424B34: add     rsp, 8
 * 0000000140424B38: call    loc_140424B2B
 * 0000000140424B3D: add     rsp, 8
 * 0000000140424B41: call    loc_140424B34
 * 0000000140424B46: add     rsp, 8
 * 0000000140424B4A: call    loc_140424B3D
 * 0000000140424B4F: add     rsp, 8
 * 0000000140424B53: call    loc_140424B46
 * 0000000140424B58: add     rsp, 8
 * 0000000140424B5C: call    loc_140424B4F
 * 0000000140424B61: add     rsp, 8
 * 0000000140424B65: call    loc_140424B58
 * 0000000140424B6A: add     rsp, 8
 * 0000000140424B6E: call    loc_140424B61
 * 0000000140424B73: add     rsp, 8
 * 0000000140424B77: call    loc_140424B6A
 * 0000000140424B7C: add     rsp, 8
 * 0000000140424B80: call    loc_140424B73
 * 0000000140424B85: add     rsp, 8
 * 0000000140424B89: call    loc_140424B7C
 * 0000000140424B8E: add     rsp, 8
 * 0000000140424B92: call    loc_140424B85
 * 0000000140424B97: add     rsp, 8
 * 0000000140424B9B: call    loc_140424B8E
 * 0000000140424BA0: add     rsp, 8
 * 0000000140424BA4: mov     eax, 0DADAh
 * 0000000140424BA9: test    byte ptr gs:862h, 8
 * 0000000140424BB2: jz      short loc_140424BBB
 * 0000000140424BB4: mov     al, 20h ; ' '
 * 0000000140424BB6: incsspq rax
 * 0000000140424BBB: test    word ptr gs:860h, 80h
 * 0000000140424BC6: jz      short loc_140424BD4
 * 0000000140424BC8: xor     eax, eax
 * 0000000140424BCA: xor     edx, edx
 * 0000000140424BCC: mov     ecx, 1
 * 0000000140424BD1: div     rcx
 * 0000000140424BD4: mov     rdx, [rbp-40h]
 * 0000000140424BD8: mov     rcx, [rbp-48h]
 * 0000000140424BDC: mov     rax, [rbp-50h]
 * 0000000140424BE0: mov     rsp, rbp
 * 0000000140424BE3: mov     rbp, [rbp+0D8h]
 * 0000000140424BEA: add     rsp, 0E8h
 * 0000000140424BF1: test    cs:byte_140E01840, 1
 * 0000000140424BF8: jz      short loc_140424BFF
 * 0000000140424BFA: jmp     sub_140AB6B80
 * 0000000140424BFF: test    word ptr gs:860h, 100h
 * 0000000140424C0A: jz      short loc_140424C11
 * 0000000140424C0C: verw    [rsp-1E8h+arg_200]
 * 0000000140424C11: swapgs
 * 0000000140424C14: iretq
 * 0000000140424C16: ldmxcsr dword ptr [rbp-54h]
 * 0000000140424C1A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140424C1E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140424C22: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140424C26: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140424C2A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140424C2E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140424C32: mov     r11, [rbp-20h]
 * 0000000140424C36: mov     r10, [rbp-28h]
 * 0000000140424C3A: mov     r9, [rbp-30h]
 * 0000000140424C3E: mov     r8, [rbp-38h]
 * 0000000140424C42: mov     rdx, [rbp-40h]
 * 0000000140424C46: mov     rcx, [rbp-48h]
 * 0000000140424C4A: mov     rax, [rbp-50h]
 * 0000000140424C4E: mov     rsp, rbp
 * 0000000140424C51: mov     rbp, [rbp+0D8h]
 * 0000000140424C58: add     rsp, 0E8h
 * 0000000140424C5F: iretq
 */
