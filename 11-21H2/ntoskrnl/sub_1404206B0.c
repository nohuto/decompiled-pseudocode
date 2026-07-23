/*
 * XREFs of sub_1404206B0 @ 0x1404206B0
 * Callers:
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 *     sub_14041FF90 @ 0x14041FF90 (sub_14041FF90.c)
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140424840 @ 0x140424840 (sub_140424840.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042A6B0 @ 0x14042A6B0 (sub_14042A6B0.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404206B0 @ 0x1404206B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404206B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404206B0: sub     rsp, 138h
 * 00000001404206B7: lea     rax, [rsp+138h+var_38]
 * 00000001404206BF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404206C4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404206C9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404206CF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404206D5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404206DB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001404206E0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001404206E5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001404206EA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001404206EF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001404206F4: mov     [rax], rbx
 * 00000001404206F7: mov     [rax+8], rdi
 * 00000001404206FB: mov     [rax+10h], rsi
 * 00000001404206FF: mov     [rax+18h], r12
 * 0000000140420703: mov     [rax+20h], r13
 * 0000000140420707: mov     [rax+28h], r14
 * 000000014042070B: mov     [rax+30h], r15
 * 000000014042070F: mov     ecx, 1
 * 0000000140420714: mov     cr8, rcx
 * 0000000140420718: sti
 * 0000000140420719: mov     rcx, gs:188h
 * 0000000140420722: mov     rcx, [rcx+668h]
 * 0000000140420729: mov     [rsp+138h+var_118], 1
 * 0000000140420732: mov     r9d, [rcx+30h]
 * 0000000140420736: mov     r8, rcx
 * 0000000140420739: mov     rdx, rsp
 * 000000014042073C: lea     rcx, [rbp-80h]
 * 0000000140420740: call    sub_14041F500
 * 0000000140420745: cli
 * 0000000140420746: mov     ecx, 0
 * 000000014042074B: mov     cr8, rcx
 * 000000014042074F: mov     rcx, gs:188h
 * 0000000140420758: lock btr dword ptr [rcx], 1Bh
 * 000000014042075D: lea     rcx, [rsp+138h+var_38]
 * 0000000140420765: movaps  xmm6, [rsp+138h+var_108]
 * 000000014042076A: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014042076F: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140420775: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014042077B: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140420781: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140420786: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014042078B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140420790: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140420795: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014042079A: mov     rbx, [rcx]
 * 000000014042079D: mov     rdi, [rcx+8]
 * 00000001404207A1: mov     rsi, [rcx+10h]
 * 00000001404207A5: mov     r12, [rcx+18h]
 * 00000001404207A9: mov     r13, [rcx+20h]
 * 00000001404207AD: mov     r14, [rcx+28h]
 * 00000001404207B1: mov     r15, [rcx+30h]
 * 00000001404207B5: test    byte ptr gs:86Ch, 2
 * 00000001404207BE: jz      short loc_1404207C7
 * 00000001404207C0: xor     ecx, ecx
 * 00000001404207C2: call    sub_14020D230
 * 00000001404207C7: xor     ecx, ecx
 * 00000001404207C9: rdsspq  rcx
 * 00000001404207CE: test    rcx, rcx
 * 00000001404207D1: jz      short loc_1404207DD
 * 00000001404207D3: mov     ecx, 1
 * 00000001404207D8: incsspq rcx
 * 00000001404207DD: test    byte ptr [rbp+0F0h], 1
 * 00000001404207E4: jz      loc_140420A7D
 * 00000001404207EA: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404207F1: jz      short loc_1404207F6
 * 00000001404207F3: stac
 * 00000001404207F6: mov     rcx, gs:188h
 * 00000001404207FF: test    dword ptr [rcx], 10000h
 * 0000000140420805: jz      short loc_14042081B
 * 0000000140420807: test    byte ptr [rcx+2], 1
 * 000000014042080B: jz      short loc_14042081B
 * 000000014042080D: call    sub_140571820
 * 0000000140420812: mov     rcx, gs:188h
 * 000000014042081B: ldmxcsr dword ptr [rbp-54h]
 * 000000014042081F: cmp     word ptr [rbp+80h], 0
 * 0000000140420827: jz      short loc_14042082E
 * 0000000140420829: call    sub_14041F8A0
 * 000000014042082E: mov     rcx, gs:188h
 * 0000000140420837: bt      dword ptr [rcx+74h], 16h
 * 000000014042083C: jnb     short loc_140420868
 * 000000014042083E: xor     ecx, ecx
 * 0000000140420840: rdsspq  rcx
 * 0000000140420845: mov     r8, gs:9828h
 * 000000014042084E: add     r8, 8
 * 0000000140420852: cmp     rcx, r8
 * 0000000140420855: jnz     short loc_140420868
 * 0000000140420857: mov     rcx, gs:9820h
 * 0000000140420860: rstorssp qword ptr [rcx]
 * 0000000140420864: saveprevssp
 * 0000000140420868: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042086C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420870: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420874: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420878: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042087C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420880: mov     r11, [rbp-20h]
 * 0000000140420884: mov     r10, [rbp-28h]
 * 0000000140420888: mov     r9, [rbp-30h]
 * 000000014042088C: mov     r8, [rbp-38h]
 * 0000000140420890: mov     byte ptr gs:856h, 0
 * 0000000140420899: movzx   eax, word ptr gs:86Ah
 * 00000001404208A2: cmp     gs:864h, ax
 * 00000001404208AB: jz      short loc_1404208BF
 * 00000001404208AD: mov     gs:864h, ax
 * 00000001404208B6: mov     ecx, 48h ; 'H'
 * 00000001404208BB: xor     edx, edx
 * 00000001404208BD: wrmsr
 * 00000001404208BF: btr     word ptr gs:860h, 2
 * 00000001404208CA: jnb     short loc_1404208DA
 * 00000001404208CC: mov     eax, 1
 * 00000001404208D1: xor     edx, edx
 * 00000001404208D3: mov     ecx, 49h ; 'I'
 * 00000001404208D8: wrmsr
 * 00000001404208DA: btr     word ptr gs:860h, 5
 * 00000001404208E5: jnb     loc_140420A22
 * 00000001404208EB: call    loc_1404209FE
 * 00000001404208F0: add     rsp, 8
 * 00000001404208F4: call    loc_140420A07
 * 00000001404208F9: add     rsp, 8
 * 00000001404208FD: call    loc_1404208F0
 * 0000000140420902: add     rsp, 8
 * 0000000140420906: call    loc_1404208F9
 * 000000014042090B: add     rsp, 8
 * 000000014042090F: call    loc_140420902
 * 0000000140420914: add     rsp, 8
 * 0000000140420918: call    loc_14042090B
 * 000000014042091D: add     rsp, 8
 * 0000000140420921: call    loc_140420914
 * 0000000140420926: add     rsp, 8
 * 000000014042092A: call    loc_14042091D
 * 000000014042092F: add     rsp, 8
 * 0000000140420933: call    loc_140420926
 * 0000000140420938: add     rsp, 8
 * 000000014042093C: call    loc_14042092F
 * 0000000140420941: add     rsp, 8
 * 0000000140420945: call    loc_140420938
 * 000000014042094A: add     rsp, 8
 * 000000014042094E: call    loc_140420941
 * 0000000140420953: add     rsp, 8
 * 0000000140420957: call    loc_14042094A
 * 000000014042095C: add     rsp, 8
 * 0000000140420960: call    loc_140420953
 * 0000000140420965: add     rsp, 8
 * 0000000140420969: call    loc_14042095C
 * 000000014042096E: add     rsp, 8
 * 0000000140420972: call    loc_140420965
 * 0000000140420977: add     rsp, 8
 * 000000014042097B: call    loc_14042096E
 * 0000000140420980: add     rsp, 8
 * 0000000140420984: call    loc_140420977
 * 0000000140420989: add     rsp, 8
 * 000000014042098D: call    loc_140420980
 * 0000000140420992: add     rsp, 8
 * 0000000140420996: call    loc_140420989
 * 000000014042099B: add     rsp, 8
 * 000000014042099F: call    loc_140420992
 * 00000001404209A4: add     rsp, 8
 * 00000001404209A8: call    loc_14042099B
 * 00000001404209AD: add     rsp, 8
 * 00000001404209B1: call    loc_1404209A4
 * 00000001404209B6: add     rsp, 8
 * 00000001404209BA: call    loc_1404209AD
 * 00000001404209BF: add     rsp, 8
 * 00000001404209C3: call    loc_1404209B6
 * 00000001404209C8: add     rsp, 8
 * 00000001404209CC: call    loc_1404209BF
 * 00000001404209D1: add     rsp, 8
 * 00000001404209D5: call    loc_1404209C8
 * 00000001404209DA: add     rsp, 8
 * 00000001404209DE: call    loc_1404209D1
 * 00000001404209E3: add     rsp, 8
 * 00000001404209E7: call    loc_1404209DA
 * 00000001404209EC: add     rsp, 8
 * 00000001404209F0: call    loc_1404209E3
 * 00000001404209F5: add     rsp, 8
 * 00000001404209F9: call    loc_1404209EC
 * 00000001404209FE: add     rsp, 8
 * 0000000140420A02: call    loc_1404209F5
 * 0000000140420A07: add     rsp, 8
 * 0000000140420A0B: mov     eax, 0DADAh
 * 0000000140420A10: test    byte ptr gs:862h, 8
 * 0000000140420A19: jz      short loc_140420A22
 * 0000000140420A1B: mov     al, 20h ; ' '
 * 0000000140420A1D: incsspq rax
 * 0000000140420A22: test    word ptr gs:860h, 80h
 * 0000000140420A2D: jz      short loc_140420A3B
 * 0000000140420A2F: xor     eax, eax
 * 0000000140420A31: xor     edx, edx
 * 0000000140420A33: mov     ecx, 1
 * 0000000140420A38: div     rcx
 * 0000000140420A3B: mov     rdx, [rbp-40h]
 * 0000000140420A3F: mov     rcx, [rbp-48h]
 * 0000000140420A43: mov     rax, [rbp-50h]
 * 0000000140420A47: mov     rsp, rbp
 * 0000000140420A4A: mov     rbp, [rbp+0D8h]
 * 0000000140420A51: add     rsp, 0E8h
 * 0000000140420A58: test    cs:byte_140E01840, 1
 * 0000000140420A5F: jz      short loc_140420A66
 * 0000000140420A61: jmp     sub_140AB6B80
 * 0000000140420A66: test    word ptr gs:860h, 100h
 * 0000000140420A71: jz      short loc_140420A78
 * 0000000140420A73: verw    [rsp-1E8h+arg_200]
 * 0000000140420A78: swapgs
 * 0000000140420A7B: iretq
 * 0000000140420A7D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420A81: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420A85: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420A89: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420A8D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420A91: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420A95: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420A99: mov     r11, [rbp-20h]
 * 0000000140420A9D: mov     r10, [rbp-28h]
 * 0000000140420AA1: mov     r9, [rbp-30h]
 * 0000000140420AA5: mov     r8, [rbp-38h]
 * 0000000140420AA9: mov     rdx, [rbp-40h]
 * 0000000140420AAD: mov     rcx, [rbp-48h]
 * 0000000140420AB1: mov     rax, [rbp-50h]
 * 0000000140420AB5: mov     rsp, rbp
 * 0000000140420AB8: mov     rbp, [rbp+0D8h]
 * 0000000140420ABF: add     rsp, 0E8h
 * 0000000140420AC6: iretq
 * 0000000140420AC8: retn
 */
