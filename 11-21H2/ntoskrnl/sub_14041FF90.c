/*
 * XREFs of sub_14041FF90 @ 0x14041FF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041FF90 @ 0x14041FF90 (sub_14041FF90.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     sub_140576640 @ 0x140576640 (sub_140576640.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14041FF90 @ 0x14041FF90
 * Reason: Hex-Rays returned no pseudocode for 0x14041FF90
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FF90: sub     rsp, 138h
 * 000000014041FF97: lea     rax, [rsp+138h+var_38]
 * 000000014041FF9F: movaps  [rsp+138h+var_108], xmm6
 * 000000014041FFA4: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041FFA9: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041FFAF: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041FFB5: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041FFBB: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041FFC0: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041FFC5: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041FFCA: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041FFCF: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041FFD4: mov     [rax], rbx
 * 000000014041FFD7: mov     [rax+8], rdi
 * 000000014041FFDB: mov     [rax+10h], rsi
 * 000000014041FFDF: mov     [rax+18h], r12
 * 000000014041FFE3: mov     [rax+20h], r13
 * 000000014041FFE7: mov     [rax+28h], r14
 * 000000014041FFEB: mov     [rax+30h], r15
 * 000000014041FFEF: mov     rax, [rbp+0E8h]
 * 000000014041FFF6: mov     [rbp+50h], rax
 * 000000014041FFFA: mov     [rsp+138h+var_118], r8b
 * 000000014041FFFF: mov     r8, rsp
 * 0000000140420002: lea     r9, [rbp-80h]
 * 0000000140420006: call    sub_140576640
 * 000000014042000B: test    eax, eax
 * 000000014042000D: jnz     loc_1404203EB
 * 0000000140420013: test    byte ptr [rbp+0F0h], 1
 * 000000014042001A: jnz     short loc_14042003C
 * 000000014042001C: mov     rbx, gs:188h
 * 0000000140420025: mov     rdx, [rbp+0B8h]
 * 000000014042002C: mov     [rbx+90h], rdx
 * 0000000140420033: mov     dl, [rbp-58h]
 * 0000000140420036: mov     [rbx+232h], dl
 * 000000014042003C: lea     rcx, [rsp+138h+var_38]
 * 0000000140420044: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140420049: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014042004E: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140420054: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014042005A: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140420060: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140420065: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014042006A: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014042006F: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140420074: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140420079: mov     rbx, [rcx]
 * 000000014042007C: mov     rdi, [rcx+8]
 * 0000000140420080: mov     rsi, [rcx+10h]
 * 0000000140420084: mov     r12, [rcx+18h]
 * 0000000140420088: mov     r13, [rcx+20h]
 * 000000014042008C: mov     r14, [rcx+28h]
 * 0000000140420090: mov     r15, [rcx+30h]
 * 0000000140420094: cli
 * 0000000140420095: xor     ecx, ecx
 * 0000000140420097: rdsspq  rcx
 * 000000014042009C: test    rcx, rcx
 * 000000014042009F: jz      short loc_1404200AB
 * 00000001404200A1: mov     ecx, 1
 * 00000001404200A6: incsspq rcx
 * 00000001404200AB: test    byte ptr [rbp+0F0h], 1
 * 00000001404200B2: jz      loc_1404203A0
 * 00000001404200B8: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404200BF: jz      short loc_1404200C4
 * 00000001404200C1: stac
 * 00000001404200C4: mov     rcx, gs:188h
 * 00000001404200CD: test    byte ptr [rcx+0C2h], 3
 * 00000001404200D4: jz      short loc_1404200F1
 * 00000001404200D6: mov     ecx, 1
 * 00000001404200DB: mov     cr8, rcx
 * 00000001404200DF: sti
 * 00000001404200E0: call    sub_140425700
 * 00000001404200E5: cli
 * 00000001404200E6: mov     ecx, 0
 * 00000001404200EB: mov     cr8, rcx
 * 00000001404200EF: jmp     short loc_1404200C4
 * 00000001404200F1: test    byte ptr gs:86Ch, 2
 * 00000001404200FA: jz      short loc_140420103
 * 00000001404200FC: xor     ecx, ecx
 * 00000001404200FE: call    sub_14020D230
 * 0000000140420103: mov     rcx, gs:188h
 * 000000014042010C: test    dword ptr [rcx], 8000000h
 * 0000000140420112: jz      short loc_140420119
 * 0000000140420114: call    sub_1404206B0
 * 0000000140420119: mov     rcx, gs:188h
 * 0000000140420122: test    dword ptr [rcx], 10000h
 * 0000000140420128: jz      short loc_14042013E
 * 000000014042012A: test    byte ptr [rcx+2], 1
 * 000000014042012E: jz      short loc_14042013E
 * 0000000140420130: call    sub_140571820
 * 0000000140420135: mov     rcx, gs:188h
 * 000000014042013E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420142: cmp     word ptr [rbp+80h], 0
 * 000000014042014A: jz      short loc_140420151
 * 000000014042014C: call    sub_14041F8A0
 * 0000000140420151: mov     rcx, gs:188h
 * 000000014042015A: bt      dword ptr [rcx+74h], 16h
 * 000000014042015F: jnb     short loc_14042018B
 * 0000000140420161: xor     ecx, ecx
 * 0000000140420163: rdsspq  rcx
 * 0000000140420168: mov     r8, gs:9828h
 * 0000000140420171: add     r8, 8
 * 0000000140420175: cmp     rcx, r8
 * 0000000140420178: jnz     short loc_14042018B
 * 000000014042017A: mov     rcx, gs:9820h
 * 0000000140420183: rstorssp qword ptr [rcx]
 * 0000000140420187: saveprevssp
 * 000000014042018B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042018F: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420193: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420197: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042019B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042019F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404201A3: mov     r11, [rbp-20h]
 * 00000001404201A7: mov     r10, [rbp-28h]
 * 00000001404201AB: mov     r9, [rbp-30h]
 * 00000001404201AF: mov     r8, [rbp-38h]
 * 00000001404201B3: mov     byte ptr gs:856h, 0
 * 00000001404201BC: movzx   eax, word ptr gs:86Ah
 * 00000001404201C5: cmp     gs:864h, ax
 * 00000001404201CE: jz      short loc_1404201E2
 * 00000001404201D0: mov     gs:864h, ax
 * 00000001404201D9: mov     ecx, 48h ; 'H'
 * 00000001404201DE: xor     edx, edx
 * 00000001404201E0: wrmsr
 * 00000001404201E2: btr     word ptr gs:860h, 2
 * 00000001404201ED: jnb     short loc_1404201FD
 * 00000001404201EF: mov     eax, 1
 * 00000001404201F4: xor     edx, edx
 * 00000001404201F6: mov     ecx, 49h ; 'I'
 * 00000001404201FB: wrmsr
 * 00000001404201FD: btr     word ptr gs:860h, 5
 * 0000000140420208: jnb     loc_140420345
 * 000000014042020E: call    loc_140420321
 * 0000000140420213: add     rsp, 8
 * 0000000140420217: call    loc_14042032A
 * 000000014042021C: add     rsp, 8
 * 0000000140420220: call    loc_140420213
 * 0000000140420225: add     rsp, 8
 * 0000000140420229: call    loc_14042021C
 * 000000014042022E: add     rsp, 8
 * 0000000140420232: call    loc_140420225
 * 0000000140420237: add     rsp, 8
 * 000000014042023B: call    loc_14042022E
 * 0000000140420240: add     rsp, 8
 * 0000000140420244: call    loc_140420237
 * 0000000140420249: add     rsp, 8
 * 000000014042024D: call    loc_140420240
 * 0000000140420252: add     rsp, 8
 * 0000000140420256: call    loc_140420249
 * 000000014042025B: add     rsp, 8
 * 000000014042025F: call    loc_140420252
 * 0000000140420264: add     rsp, 8
 * 0000000140420268: call    loc_14042025B
 * 000000014042026D: add     rsp, 8
 * 0000000140420271: call    loc_140420264
 * 0000000140420276: add     rsp, 8
 * 000000014042027A: call    loc_14042026D
 * 000000014042027F: add     rsp, 8
 * 0000000140420283: call    loc_140420276
 * 0000000140420288: add     rsp, 8
 * 000000014042028C: call    loc_14042027F
 * 0000000140420291: add     rsp, 8
 * 0000000140420295: call    loc_140420288
 * 000000014042029A: add     rsp, 8
 * 000000014042029E: call    loc_140420291
 * 00000001404202A3: add     rsp, 8
 * 00000001404202A7: call    loc_14042029A
 * 00000001404202AC: add     rsp, 8
 * 00000001404202B0: call    loc_1404202A3
 * 00000001404202B5: add     rsp, 8
 * 00000001404202B9: call    loc_1404202AC
 * 00000001404202BE: add     rsp, 8
 * 00000001404202C2: call    loc_1404202B5
 * 00000001404202C7: add     rsp, 8
 * 00000001404202CB: call    loc_1404202BE
 * 00000001404202D0: add     rsp, 8
 * 00000001404202D4: call    loc_1404202C7
 * 00000001404202D9: add     rsp, 8
 * 00000001404202DD: call    loc_1404202D0
 * 00000001404202E2: add     rsp, 8
 * 00000001404202E6: call    loc_1404202D9
 * 00000001404202EB: add     rsp, 8
 * 00000001404202EF: call    loc_1404202E2
 * 00000001404202F4: add     rsp, 8
 * 00000001404202F8: call    loc_1404202EB
 * 00000001404202FD: add     rsp, 8
 * 0000000140420301: call    loc_1404202F4
 * 0000000140420306: add     rsp, 8
 * 000000014042030A: call    loc_1404202FD
 * 000000014042030F: add     rsp, 8
 * 0000000140420313: call    loc_140420306
 * 0000000140420318: add     rsp, 8
 * 000000014042031C: call    loc_14042030F
 * 0000000140420321: add     rsp, 8
 * 0000000140420325: call    loc_140420318
 * 000000014042032A: add     rsp, 8
 * 000000014042032E: mov     eax, 0DADAh
 * 0000000140420333: test    byte ptr gs:862h, 8
 * 000000014042033C: jz      short loc_140420345
 * 000000014042033E: mov     al, 20h ; ' '
 * 0000000140420340: incsspq rax
 * 0000000140420345: test    word ptr gs:860h, 80h
 * 0000000140420350: jz      short loc_14042035E
 * 0000000140420352: xor     eax, eax
 * 0000000140420354: xor     edx, edx
 * 0000000140420356: mov     ecx, 1
 * 000000014042035B: div     rcx
 * 000000014042035E: mov     rdx, [rbp-40h]
 * 0000000140420362: mov     rcx, [rbp-48h]
 * 0000000140420366: mov     rax, [rbp-50h]
 * 000000014042036A: mov     rsp, rbp
 * 000000014042036D: mov     rbp, [rbp+0D8h]
 * 0000000140420374: add     rsp, 0E8h
 * 000000014042037B: test    cs:byte_140E01840, 1
 * 0000000140420382: jz      short loc_140420389
 * 0000000140420384: jmp     sub_140AB6B80
 * 0000000140420389: test    word ptr gs:860h, 100h
 * 0000000140420394: jz      short loc_14042039B
 * 0000000140420396: verw    [rsp-1E8h+arg_200]
 * 000000014042039B: swapgs
 * 000000014042039E: iretq
 * 00000001404203A0: ldmxcsr dword ptr [rbp-54h]
 * 00000001404203A4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404203A8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404203AC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404203B0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404203B4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404203B8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404203BC: mov     r11, [rbp-20h]
 * 00000001404203C0: mov     r10, [rbp-28h]
 * 00000001404203C4: mov     r9, [rbp-30h]
 * 00000001404203C8: mov     r8, [rbp-38h]
 * 00000001404203CC: mov     rdx, [rbp-40h]
 * 00000001404203D0: mov     rcx, [rbp-48h]
 * 00000001404203D4: mov     rax, [rbp-50h]
 * 00000001404203D8: mov     rsp, rbp
 * 00000001404203DB: mov     rbp, [rbp+0D8h]
 * 00000001404203E2: add     rsp, 0E8h
 * 00000001404203E9: iretq
 * 00000001404203EB: lea     rcx, [rsp+138h+var_38]
 * 00000001404203F3: movaps  xmm6, [rsp+138h+var_108]
 * 00000001404203F8: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001404203FD: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140420403: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140420409: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014042040F: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140420414: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140420419: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014042041E: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140420423: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140420428: mov     rbx, [rcx]
 * 000000014042042B: mov     rdi, [rcx+8]
 * 000000014042042F: mov     rsi, [rcx+10h]
 * 0000000140420433: mov     r12, [rcx+18h]
 * 0000000140420437: mov     r13, [rcx+20h]
 * 000000014042043B: mov     r14, [rcx+28h]
 * 000000014042043F: mov     r15, [rcx+30h]
 * 0000000140420443: add     rsp, 138h
 * 000000014042044A: retn
 */
