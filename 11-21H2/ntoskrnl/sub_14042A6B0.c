/*
 * XREFs of sub_14042A6B0 @ 0x14042A6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_14042A6B0 @ 0x14042A6B0 (sub_14042A6B0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042A6B0 @ 0x14042A6B0
 * Reason: Hex-Rays returned no pseudocode for 0x14042A6B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042A6B0: sub     rsp, 28h
 * 000000014042A6B4: xor     eax, eax
 * 000000014042A6B6: xorps   xmm0, xmm0
 * 000000014042A6B9: mov     [rbp-48h], eax
 * 000000014042A6BC: mov     [rbp-40h], eax
 * 000000014042A6BF: mov     [rbp-38h], eax
 * 000000014042A6C2: mov     [rbp-30h], eax
 * 000000014042A6C5: mov     [rbp-28h], eax
 * 000000014042A6C8: mov     [rbp-20h], eax
 * 000000014042A6CB: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014042A6CF: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014042A6D3: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014042A6D7: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014042A6DB: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014042A6DF: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014042A6E3: call    sub_1409B35D0
 * 000000014042A6E8: mov     [rbp-50h], rax
 * 000000014042A6EC: mov     rbx, [rbp+0C0h]
 * 000000014042A6F3: mov     rdi, [rbp+0C8h]
 * 000000014042A6FA: mov     rsi, [rbp+0D0h]
 * 000000014042A701: cli
 * 000000014042A702: xor     ecx, ecx
 * 000000014042A704: rdsspq  rcx
 * 000000014042A709: test    rcx, rcx
 * 000000014042A70C: jz      short loc_14042A718
 * 000000014042A70E: mov     ecx, 1
 * 000000014042A713: incsspq rcx
 * 000000014042A718: test    byte ptr [rbp+0F0h], 1
 * 000000014042A71F: jz      loc_14042AA0D
 * 000000014042A725: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042A72C: jz      short loc_14042A731
 * 000000014042A72E: stac
 * 000000014042A731: mov     rcx, gs:188h
 * 000000014042A73A: test    byte ptr [rcx+0C2h], 3
 * 000000014042A741: jz      short loc_14042A75E
 * 000000014042A743: mov     ecx, 1
 * 000000014042A748: mov     cr8, rcx
 * 000000014042A74C: sti
 * 000000014042A74D: call    sub_140425700
 * 000000014042A752: cli
 * 000000014042A753: mov     ecx, 0
 * 000000014042A758: mov     cr8, rcx
 * 000000014042A75C: jmp     short loc_14042A731
 * 000000014042A75E: test    byte ptr gs:86Ch, 2
 * 000000014042A767: jz      short loc_14042A770
 * 000000014042A769: xor     ecx, ecx
 * 000000014042A76B: call    sub_14020D230
 * 000000014042A770: mov     rcx, gs:188h
 * 000000014042A779: test    dword ptr [rcx], 8000000h
 * 000000014042A77F: jz      short loc_14042A786
 * 000000014042A781: call    sub_1404206B0
 * 000000014042A786: mov     rcx, gs:188h
 * 000000014042A78F: test    dword ptr [rcx], 10000h
 * 000000014042A795: jz      short loc_14042A7AB
 * 000000014042A797: test    byte ptr [rcx+2], 1
 * 000000014042A79B: jz      short loc_14042A7AB
 * 000000014042A79D: call    sub_140571820
 * 000000014042A7A2: mov     rcx, gs:188h
 * 000000014042A7AB: ldmxcsr dword ptr [rbp-54h]
 * 000000014042A7AF: cmp     word ptr [rbp+80h], 0
 * 000000014042A7B7: jz      short loc_14042A7BE
 * 000000014042A7B9: call    sub_14041F8A0
 * 000000014042A7BE: mov     rcx, gs:188h
 * 000000014042A7C7: bt      dword ptr [rcx+74h], 16h
 * 000000014042A7CC: jnb     short loc_14042A7F8
 * 000000014042A7CE: xor     ecx, ecx
 * 000000014042A7D0: rdsspq  rcx
 * 000000014042A7D5: mov     r8, gs:9828h
 * 000000014042A7DE: add     r8, 8
 * 000000014042A7E2: cmp     rcx, r8
 * 000000014042A7E5: jnz     short loc_14042A7F8
 * 000000014042A7E7: mov     rcx, gs:9820h
 * 000000014042A7F0: rstorssp qword ptr [rcx]
 * 000000014042A7F4: saveprevssp
 * 000000014042A7F8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042A7FC: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042A800: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042A804: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042A808: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042A80C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042A810: mov     r11, [rbp-20h]
 * 000000014042A814: mov     r10, [rbp-28h]
 * 000000014042A818: mov     r9, [rbp-30h]
 * 000000014042A81C: mov     r8, [rbp-38h]
 * 000000014042A820: mov     byte ptr gs:856h, 0
 * 000000014042A829: movzx   eax, word ptr gs:86Ah
 * 000000014042A832: cmp     gs:864h, ax
 * 000000014042A83B: jz      short loc_14042A84F
 * 000000014042A83D: mov     gs:864h, ax
 * 000000014042A846: mov     ecx, 48h ; 'H'
 * 000000014042A84B: xor     edx, edx
 * 000000014042A84D: wrmsr
 * 000000014042A84F: btr     word ptr gs:860h, 2
 * 000000014042A85A: jnb     short loc_14042A86A
 * 000000014042A85C: mov     eax, 1
 * 000000014042A861: xor     edx, edx
 * 000000014042A863: mov     ecx, 49h ; 'I'
 * 000000014042A868: wrmsr
 * 000000014042A86A: btr     word ptr gs:860h, 5
 * 000000014042A875: jnb     loc_14042A9B2
 * 000000014042A87B: call    loc_14042A98E
 * 000000014042A880: add     rsp, 8
 * 000000014042A884: call    loc_14042A997
 * 000000014042A889: add     rsp, 8
 * 000000014042A88D: call    loc_14042A880
 * 000000014042A892: add     rsp, 8
 * 000000014042A896: call    loc_14042A889
 * 000000014042A89B: add     rsp, 8
 * 000000014042A89F: call    loc_14042A892
 * 000000014042A8A4: add     rsp, 8
 * 000000014042A8A8: call    loc_14042A89B
 * 000000014042A8AD: add     rsp, 8
 * 000000014042A8B1: call    loc_14042A8A4
 * 000000014042A8B6: add     rsp, 8
 * 000000014042A8BA: call    loc_14042A8AD
 * 000000014042A8BF: add     rsp, 8
 * 000000014042A8C3: call    loc_14042A8B6
 * 000000014042A8C8: add     rsp, 8
 * 000000014042A8CC: call    loc_14042A8BF
 * 000000014042A8D1: add     rsp, 8
 * 000000014042A8D5: call    loc_14042A8C8
 * 000000014042A8DA: add     rsp, 8
 * 000000014042A8DE: call    loc_14042A8D1
 * 000000014042A8E3: add     rsp, 8
 * 000000014042A8E7: call    loc_14042A8DA
 * 000000014042A8EC: add     rsp, 8
 * 000000014042A8F0: call    loc_14042A8E3
 * 000000014042A8F5: add     rsp, 8
 * 000000014042A8F9: call    loc_14042A8EC
 * 000000014042A8FE: add     rsp, 8
 * 000000014042A902: call    loc_14042A8F5
 * 000000014042A907: add     rsp, 8
 * 000000014042A90B: call    loc_14042A8FE
 * 000000014042A910: add     rsp, 8
 * 000000014042A914: call    loc_14042A907
 * 000000014042A919: add     rsp, 8
 * 000000014042A91D: call    loc_14042A910
 * 000000014042A922: add     rsp, 8
 * 000000014042A926: call    loc_14042A919
 * 000000014042A92B: add     rsp, 8
 * 000000014042A92F: call    loc_14042A922
 * 000000014042A934: add     rsp, 8
 * 000000014042A938: call    loc_14042A92B
 * 000000014042A93D: add     rsp, 8
 * 000000014042A941: call    loc_14042A934
 * 000000014042A946: add     rsp, 8
 * 000000014042A94A: call    loc_14042A93D
 * 000000014042A94F: add     rsp, 8
 * 000000014042A953: call    loc_14042A946
 * 000000014042A958: add     rsp, 8
 * 000000014042A95C: call    loc_14042A94F
 * 000000014042A961: add     rsp, 8
 * 000000014042A965: call    loc_14042A958
 * 000000014042A96A: add     rsp, 8
 * 000000014042A96E: call    loc_14042A961
 * 000000014042A973: add     rsp, 8
 * 000000014042A977: call    loc_14042A96A
 * 000000014042A97C: add     rsp, 8
 * 000000014042A980: call    loc_14042A973
 * 000000014042A985: add     rsp, 8
 * 000000014042A989: call    loc_14042A97C
 * 000000014042A98E: add     rsp, 8
 * 000000014042A992: call    loc_14042A985
 * 000000014042A997: add     rsp, 8
 * 000000014042A99B: mov     eax, 0DADAh
 * 000000014042A9A0: test    byte ptr gs:862h, 8
 * 000000014042A9A9: jz      short loc_14042A9B2
 * 000000014042A9AB: mov     al, 20h ; ' '
 * 000000014042A9AD: incsspq rax
 * 000000014042A9B2: test    word ptr gs:860h, 80h
 * 000000014042A9BD: jz      short loc_14042A9CB
 * 000000014042A9BF: xor     eax, eax
 * 000000014042A9C1: xor     edx, edx
 * 000000014042A9C3: mov     ecx, 1
 * 000000014042A9C8: div     rcx
 * 000000014042A9CB: mov     rdx, [rbp-40h]
 * 000000014042A9CF: mov     rcx, [rbp-48h]
 * 000000014042A9D3: mov     rax, [rbp-50h]
 * 000000014042A9D7: mov     rsp, rbp
 * 000000014042A9DA: mov     rbp, [rbp+0D8h]
 * 000000014042A9E1: add     rsp, 0E8h
 * 000000014042A9E8: test    cs:byte_140E01840, 1
 * 000000014042A9EF: jz      short loc_14042A9F6
 * 000000014042A9F1: jmp     sub_140AB6B80
 * 000000014042A9F6: test    word ptr gs:860h, 100h
 * 000000014042AA01: jz      short loc_14042AA08
 * 000000014042AA03: verw    [rsp-1E8h+arg_200]
 * 000000014042AA08: swapgs
 * 000000014042AA0B: iretq
 * 000000014042AA0D: ldmxcsr dword ptr [rbp-54h]
 * 000000014042AA11: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042AA15: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042AA19: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042AA1D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042AA21: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042AA25: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042AA29: mov     r11, [rbp-20h]
 * 000000014042AA2D: mov     r10, [rbp-28h]
 * 000000014042AA31: mov     r9, [rbp-30h]
 * 000000014042AA35: mov     r8, [rbp-38h]
 * 000000014042AA39: mov     rdx, [rbp-40h]
 * 000000014042AA3D: mov     rcx, [rbp-48h]
 * 000000014042AA41: mov     rax, [rbp-50h]
 * 000000014042AA45: mov     rsp, rbp
 * 000000014042AA48: mov     rbp, [rbp+0D8h]
 * 000000014042AA4F: add     rsp, 0E8h
 * 000000014042AA56: iretq
 */
