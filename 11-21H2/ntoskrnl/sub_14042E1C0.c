/*
 * XREFs of sub_14042E1C0 @ 0x14042E1C0
 * Callers:
 *     sub_140AB5440 @ 0x140AB5440 (sub_140AB5440.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042E1C0 @ 0x14042E1C0
 * Reason: Hex-Rays returned no pseudocode for 0x14042E1C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042E1C0: sub     rsp, 8
 * 000000014042E1C4: push    rbp
 * 000000014042E1C5: sub     rsp, 158h
 * 000000014042E1CC: lea     rbp, [rsp+80h]
 * 000000014042E1D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014042E1D8: mov     [rbp+0E8h+var_138], rax
 * 000000014042E1DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014042E1E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042E1E4: mov     [rbp+0E8h+var_120], r8
 * 000000014042E1E8: mov     [rbp+0E8h+var_118], r9
 * 000000014042E1EC: mov     [rbp+0E8h+var_110], r10
 * 000000014042E1F0: mov     [rbp+0E8h+var_108], r11
 * 000000014042E1F4: test    [rbp+0E8h+arg_0], 1
 * 000000014042E1FB: jnz     short loc_14042E237
 * 000000014042E1FD: xor     edx, edx
 * 000000014042E1FF: rdsspq  rdx
 * 000000014042E204: mov     [rbp+0E8h+var_90], rdx
 * 000000014042E208: lfence
 * 000000014042E20B: test    word ptr gs:860h, 1
 * 000000014042E216: jnz     short loc_14042E220
 * 000000014042E218: lfence
 * 000000014042E21B: jmp     loc_14042E47F
 * 000000014042E220: movzx   eax, word ptr gs:864h
 * 000000014042E229: mov     ecx, 48h ; 'H'
 * 000000014042E22E: xor     edx, edx
 * 000000014042E230: wrmsr
 * 000000014042E232: jmp     loc_14042E47F
 * 000000014042E237: test    cs:byte_140E01840, 1
 * 000000014042E23E: jnz     short loc_14042E243
 * 000000014042E240: swapgs
 * 000000014042E243: lfence
 * 000000014042E246: mov     rcx, gs:9828h
 * 000000014042E24F: test    rcx, rcx
 * 000000014042E252: jz      short loc_14042E273
 * 000000014042E254: rdsspq  rdx
 * 000000014042E259: mov     r10, gs:9820h
 * 000000014042E262: add     r10, 8
 * 000000014042E266: cmp     rdx, r10
 * 000000014042E269: jnz     short loc_14042E273
 * 000000014042E26B: rstorssp qword ptr [rcx]
 * 000000014042E26F: saveprevssp
 * 000000014042E273: mov     r10, gs:188h
 * 000000014042E27C: mov     rcx, gs:188h
 * 000000014042E285: mov     rcx, [rcx+220h]
 * 000000014042E28C: mov     rcx, [rcx+9E0h]
 * 000000014042E293: mov     gs:858h, rcx
 * 000000014042E29C: mov     cx, gs:850h
 * 000000014042E2A5: mov     gs:852h, cx
 * 000000014042E2AE: mov     cx, gs:860h
 * 000000014042E2B7: mov     gs:854h, cx
 * 000000014042E2C0: movzx   eax, word ptr gs:866h
 * 000000014042E2C9: cmp     gs:864h, ax
 * 000000014042E2D2: jz      short loc_14042E2E6
 * 000000014042E2D4: mov     gs:864h, ax
 * 000000014042E2DD: mov     ecx, 48h ; 'H'
 * 000000014042E2E2: xor     edx, edx
 * 000000014042E2E4: wrmsr
 * 000000014042E2E6: movzx   edx, word ptr gs:860h
 * 000000014042E2EF: test    edx, 8
 * 000000014042E2F5: jz      short loc_14042E30E
 * 000000014042E2F7: mov     eax, 1
 * 000000014042E2FC: xor     edx, edx
 * 000000014042E2FE: mov     ecx, 49h ; 'I'
 * 000000014042E303: wrmsr
 * 000000014042E305: movzx   edx, word ptr gs:860h
 * 000000014042E30E: test    edx, 2
 * 000000014042E314: jz      loc_14042E451
 * 000000014042E31A: call    loc_14042E42D
 * 000000014042E31F: add     rsp, 8
 * 000000014042E323: call    loc_14042E436
 * 000000014042E328: add     rsp, 8
 * 000000014042E32C: call    loc_14042E31F
 * 000000014042E331: add     rsp, 8
 * 000000014042E335: call    loc_14042E328
 * 000000014042E33A: add     rsp, 8
 * 000000014042E33E: call    loc_14042E331
 * 000000014042E343: add     rsp, 8
 * 000000014042E347: call    loc_14042E33A
 * 000000014042E34C: add     rsp, 8
 * 000000014042E350: call    loc_14042E343
 * 000000014042E355: add     rsp, 8
 * 000000014042E359: call    loc_14042E34C
 * 000000014042E35E: add     rsp, 8
 * 000000014042E362: call    loc_14042E355
 * 000000014042E367: add     rsp, 8
 * 000000014042E36B: call    loc_14042E35E
 * 000000014042E370: add     rsp, 8
 * 000000014042E374: call    loc_14042E367
 * 000000014042E379: add     rsp, 8
 * 000000014042E37D: call    loc_14042E370
 * 000000014042E382: add     rsp, 8
 * 000000014042E386: call    loc_14042E379
 * 000000014042E38B: add     rsp, 8
 * 000000014042E38F: call    loc_14042E382
 * 000000014042E394: add     rsp, 8
 * 000000014042E398: call    loc_14042E38B
 * 000000014042E39D: add     rsp, 8
 * 000000014042E3A1: call    loc_14042E394
 * 000000014042E3A6: add     rsp, 8
 * 000000014042E3AA: call    loc_14042E39D
 * 000000014042E3AF: add     rsp, 8
 * 000000014042E3B3: call    loc_14042E3A6
 * 000000014042E3B8: add     rsp, 8
 * 000000014042E3BC: call    loc_14042E3AF
 * 000000014042E3C1: add     rsp, 8
 * 000000014042E3C5: call    loc_14042E3B8
 * 000000014042E3CA: add     rsp, 8
 * 000000014042E3CE: call    loc_14042E3C1
 * 000000014042E3D3: add     rsp, 8
 * 000000014042E3D7: call    loc_14042E3CA
 * 000000014042E3DC: add     rsp, 8
 * 000000014042E3E0: call    loc_14042E3D3
 * 000000014042E3E5: add     rsp, 8
 * 000000014042E3E9: call    loc_14042E3DC
 * 000000014042E3EE: add     rsp, 8
 * 000000014042E3F2: call    loc_14042E3E5
 * 000000014042E3F7: add     rsp, 8
 * 000000014042E3FB: call    loc_14042E3EE
 * 000000014042E400: add     rsp, 8
 * 000000014042E404: call    loc_14042E3F7
 * 000000014042E409: add     rsp, 8
 * 000000014042E40D: call    loc_14042E400
 * 000000014042E412: add     rsp, 8
 * 000000014042E416: call    loc_14042E409
 * 000000014042E41B: add     rsp, 8
 * 000000014042E41F: call    loc_14042E412
 * 000000014042E424: add     rsp, 8
 * 000000014042E428: call    loc_14042E41B
 * 000000014042E42D: add     rsp, 8
 * 000000014042E431: call    loc_14042E424
 * 000000014042E436: add     rsp, 8
 * 000000014042E43A: mov     eax, 0DADAh
 * 000000014042E43F: test    byte ptr gs:862h, 8
 * 000000014042E448: jz      short loc_14042E451
 * 000000014042E44A: mov     al, 20h ; ' '
 * 000000014042E44C: incsspq rax
 * 000000014042E451: test    edx, 200h
 * 000000014042E457: jz      short loc_14042E45E
 * 000000014042E459: call    sub_1404357C0
 * 000000014042E45E: lfence
 * 000000014042E461: mov     byte ptr gs:856h, 0
 * 000000014042E46A: test    byte ptr [r10+3], 3
 * 000000014042E46F: mov     [rbp+0E8h+var_68], 0
 * 000000014042E478: jz      short loc_14042E47F
 * 000000014042E47A: call    sub_14041F920
 * 000000014042E47F: cld
 * 000000014042E480: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042E484: ldmxcsr dword ptr gs:180h
 * 000000014042E48D: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042E491: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042E495: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042E499: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042E49D: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042E4A1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042E4A5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042E4AC: jz      short loc_14042E4BA
 * 000000014042E4AE: test    [rbp+0E8h+arg_0], 1
 * 000000014042E4B5: jz      short loc_14042E4BA
 * 000000014042E4B7: stac
 * 000000014042E4BA: test    [rbp+0E8h+arg_8], 200h
 * 000000014042E4C4: jz      short loc_14042E4C7
 * 000000014042E4C6: sti
 * 000000014042E4C7: mov     ecx, 10000002h
 * 000000014042E4CC: xor     edx, edx
 * 000000014042E4CE: mov     r8, [rbp+0E8h]
 * 000000014042E4D5: call    sub_140434E40
 * 000000014042E4DA: nop
 * 000000014042E4DB: cli
 * 000000014042E4DC: test    [rbp+0E8h+arg_0], 1
 * 000000014042E4E3: jz      loc_14042E7D1
 * 000000014042E4E9: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042E4F0: jz      short loc_14042E4F5
 * 000000014042E4F2: stac
 * 000000014042E4F5: mov     rcx, gs:188h
 * 000000014042E4FE: test    byte ptr [rcx+0C2h], 3
 * 000000014042E505: jz      short loc_14042E522
 * 000000014042E507: mov     ecx, 1
 * 000000014042E50C: mov     cr8, rcx
 * 000000014042E510: sti
 * 000000014042E511: call    sub_140425700
 * 000000014042E516: cli
 * 000000014042E517: mov     ecx, 0
 * 000000014042E51C: mov     cr8, rcx
 * 000000014042E520: jmp     short loc_14042E4F5
 * 000000014042E522: test    byte ptr gs:86Ch, 2
 * 000000014042E52B: jz      short loc_14042E534
 * 000000014042E52D: xor     ecx, ecx
 * 000000014042E52F: call    sub_14020D230
 * 000000014042E534: mov     rcx, gs:188h
 * 000000014042E53D: test    dword ptr [rcx], 8000000h
 * 000000014042E543: jz      short loc_14042E54A
 * 000000014042E545: call    sub_1404206B0
 * 000000014042E54A: mov     rcx, gs:188h
 * 000000014042E553: test    dword ptr [rcx], 10000h
 * 000000014042E559: jz      short loc_14042E56F
 * 000000014042E55B: test    byte ptr [rcx+2], 1
 * 000000014042E55F: jz      short loc_14042E56F
 * 000000014042E561: call    sub_140571820
 * 000000014042E566: mov     rcx, gs:188h
 * 000000014042E56F: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042E573: cmp     [rbp+0E8h+var_68], 0
 * 000000014042E57B: jz      short loc_14042E582
 * 000000014042E57D: call    sub_14041F8A0
 * 000000014042E582: mov     rcx, gs:188h
 * 000000014042E58B: bt      dword ptr [rcx+74h], 16h
 * 000000014042E590: jnb     short loc_14042E5BC
 * 000000014042E592: xor     ecx, ecx
 * 000000014042E594: rdsspq  rcx
 * 000000014042E599: mov     r8, gs:9828h
 * 000000014042E5A2: add     r8, 8
 * 000000014042E5A6: cmp     rcx, r8
 * 000000014042E5A9: jnz     short loc_14042E5BC
 * 000000014042E5AB: mov     rcx, gs:9820h
 * 000000014042E5B4: rstorssp qword ptr [rcx]
 * 000000014042E5B8: saveprevssp
 * 000000014042E5BC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042E5C0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042E5C4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042E5C8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042E5CC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042E5D0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042E5D4: mov     r11, [rbp+0E8h+var_108]
 * 000000014042E5D8: mov     r10, [rbp+0E8h+var_110]
 * 000000014042E5DC: mov     r9, [rbp+0E8h+var_118]
 * 000000014042E5E0: mov     r8, [rbp+0E8h+var_120]
 * 000000014042E5E4: mov     byte ptr gs:856h, 0
 * 000000014042E5ED: movzx   eax, word ptr gs:86Ah
 * 000000014042E5F6: cmp     gs:864h, ax
 * 000000014042E5FF: jz      short loc_14042E613
 * 000000014042E601: mov     gs:864h, ax
 * 000000014042E60A: mov     ecx, 48h ; 'H'
 * 000000014042E60F: xor     edx, edx
 * 000000014042E611: wrmsr
 * 000000014042E613: btr     word ptr gs:860h, 2
 * 000000014042E61E: jnb     short loc_14042E62E
 * 000000014042E620: mov     eax, 1
 * 000000014042E625: xor     edx, edx
 * 000000014042E627: mov     ecx, 49h ; 'I'
 * 000000014042E62C: wrmsr
 * 000000014042E62E: btr     word ptr gs:860h, 5
 * 000000014042E639: jnb     loc_14042E776
 * 000000014042E63F: call    loc_14042E752
 * 000000014042E644: add     rsp, 8
 * 000000014042E648: call    loc_14042E75B
 * 000000014042E64D: add     rsp, 8
 * 000000014042E651: call    loc_14042E644
 * 000000014042E656: add     rsp, 8
 * 000000014042E65A: call    loc_14042E64D
 * 000000014042E65F: add     rsp, 8
 * 000000014042E663: call    loc_14042E656
 * 000000014042E668: add     rsp, 8
 * 000000014042E66C: call    loc_14042E65F
 * 000000014042E671: add     rsp, 8
 * 000000014042E675: call    loc_14042E668
 * 000000014042E67A: add     rsp, 8
 * 000000014042E67E: call    loc_14042E671
 * 000000014042E683: add     rsp, 8
 * 000000014042E687: call    loc_14042E67A
 * 000000014042E68C: add     rsp, 8
 * 000000014042E690: call    loc_14042E683
 * 000000014042E695: add     rsp, 8
 * 000000014042E699: call    loc_14042E68C
 * 000000014042E69E: add     rsp, 8
 * 000000014042E6A2: call    loc_14042E695
 * 000000014042E6A7: add     rsp, 8
 * 000000014042E6AB: call    loc_14042E69E
 * 000000014042E6B0: add     rsp, 8
 * 000000014042E6B4: call    loc_14042E6A7
 * 000000014042E6B9: add     rsp, 8
 * 000000014042E6BD: call    loc_14042E6B0
 * 000000014042E6C2: add     rsp, 8
 * 000000014042E6C6: call    loc_14042E6B9
 * 000000014042E6CB: add     rsp, 8
 * 000000014042E6CF: call    loc_14042E6C2
 * 000000014042E6D4: add     rsp, 8
 * 000000014042E6D8: call    loc_14042E6CB
 * 000000014042E6DD: add     rsp, 8
 * 000000014042E6E1: call    loc_14042E6D4
 * 000000014042E6E6: add     rsp, 8
 * 000000014042E6EA: call    loc_14042E6DD
 * 000000014042E6EF: add     rsp, 8
 * 000000014042E6F3: call    loc_14042E6E6
 * 000000014042E6F8: add     rsp, 8
 * 000000014042E6FC: call    loc_14042E6EF
 * 000000014042E701: add     rsp, 8
 * 000000014042E705: call    loc_14042E6F8
 * 000000014042E70A: add     rsp, 8
 * 000000014042E70E: call    loc_14042E701
 * 000000014042E713: add     rsp, 8
 * 000000014042E717: call    loc_14042E70A
 * 000000014042E71C: add     rsp, 8
 * 000000014042E720: call    loc_14042E713
 * 000000014042E725: add     rsp, 8
 * 000000014042E729: call    loc_14042E71C
 * 000000014042E72E: add     rsp, 8
 * 000000014042E732: call    loc_14042E725
 * 000000014042E737: add     rsp, 8
 * 000000014042E73B: call    loc_14042E72E
 * 000000014042E740: add     rsp, 8
 * 000000014042E744: call    loc_14042E737
 * 000000014042E749: add     rsp, 8
 * 000000014042E74D: call    loc_14042E740
 * 000000014042E752: add     rsp, 8
 * 000000014042E756: call    loc_14042E749
 * 000000014042E75B: add     rsp, 8
 * 000000014042E75F: mov     eax, 0DADAh
 * 000000014042E764: test    byte ptr gs:862h, 8
 * 000000014042E76D: jz      short loc_14042E776
 * 000000014042E76F: mov     al, 20h ; ' '
 * 000000014042E771: incsspq rax
 * 000000014042E776: test    word ptr gs:860h, 80h
 * 000000014042E781: jz      short loc_14042E78F
 * 000000014042E783: xor     eax, eax
 * 000000014042E785: xor     edx, edx
 * 000000014042E787: mov     ecx, 1
 * 000000014042E78C: div     rcx
 * 000000014042E78F: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E793: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E797: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E79B: mov     rsp, rbp
 * 000000014042E79E: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E7A5: add     rsp, 0E8h
 * 000000014042E7AC: test    cs:byte_140E01840, 1
 * 000000014042E7B3: jz      short loc_14042E7BA
 * 000000014042E7B5: jmp     sub_140AB6B80
 * 000000014042E7BA: test    word ptr gs:860h, 100h
 * 000000014042E7C5: jz      short loc_14042E7CC
 * 000000014042E7C7: verw    [rsp+arg_18]
 * 000000014042E7CC: swapgs
 * 000000014042E7CF: iretq
 * 000000014042E7D1: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042E7D5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042E7D9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042E7DD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042E7E1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042E7E5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042E7E9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042E7ED: mov     r11, [rbp+0E8h+var_108]
 * 000000014042E7F1: mov     r10, [rbp+0E8h+var_110]
 * 000000014042E7F5: mov     r9, [rbp+0E8h+var_118]
 * 000000014042E7F9: mov     r8, [rbp+0E8h+var_120]
 * 000000014042E7FD: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E801: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E805: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E809: mov     rsp, rbp
 * 000000014042E80C: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E813: add     rsp, 0E8h
 * 000000014042E81A: iretq
 */
