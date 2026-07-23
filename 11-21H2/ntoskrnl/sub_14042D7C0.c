/*
 * XREFs of sub_14042D7C0 @ 0x14042D7C0
 * Callers:
 *     sub_140AB5340 @ 0x140AB5340 (sub_140AB5340.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042D7C0 @ 0x14042D7C0 (sub_14042D7C0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042D7C0 @ 0x14042D7C0
 * Reason: Hex-Rays returned no pseudocode for 0x14042D7C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D7C0: sub     rsp, 8
 * 000000014042D7C4: push    rbp
 * 000000014042D7C5: sub     rsp, 158h
 * 000000014042D7CC: lea     rbp, [rsp+80h]
 * 000000014042D7D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D7D8: mov     [rbp+0E8h+var_138], rax
 * 000000014042D7DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D7E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D7E4: mov     [rbp+0E8h+var_120], r8
 * 000000014042D7E8: mov     [rbp+0E8h+var_118], r9
 * 000000014042D7EC: mov     [rbp+0E8h+var_110], r10
 * 000000014042D7F0: mov     [rbp+0E8h+var_108], r11
 * 000000014042D7F4: test    [rbp+0E8h+arg_0], 1
 * 000000014042D7FB: jnz     short loc_14042D837
 * 000000014042D7FD: xor     edx, edx
 * 000000014042D7FF: rdsspq  rdx
 * 000000014042D804: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D808: lfence
 * 000000014042D80B: test    word ptr gs:860h, 1
 * 000000014042D816: jnz     short loc_14042D820
 * 000000014042D818: lfence
 * 000000014042D81B: jmp     loc_14042DA7F
 * 000000014042D820: movzx   eax, word ptr gs:864h
 * 000000014042D829: mov     ecx, 48h ; 'H'
 * 000000014042D82E: xor     edx, edx
 * 000000014042D830: wrmsr
 * 000000014042D832: jmp     loc_14042DA7F
 * 000000014042D837: test    cs:byte_140E01840, 1
 * 000000014042D83E: jnz     short loc_14042D843
 * 000000014042D840: swapgs
 * 000000014042D843: lfence
 * 000000014042D846: mov     rcx, gs:9828h
 * 000000014042D84F: test    rcx, rcx
 * 000000014042D852: jz      short loc_14042D873
 * 000000014042D854: rdsspq  rdx
 * 000000014042D859: mov     r10, gs:9820h
 * 000000014042D862: add     r10, 8
 * 000000014042D866: cmp     rdx, r10
 * 000000014042D869: jnz     short loc_14042D873
 * 000000014042D86B: rstorssp qword ptr [rcx]
 * 000000014042D86F: saveprevssp
 * 000000014042D873: mov     r10, gs:188h
 * 000000014042D87C: mov     rcx, gs:188h
 * 000000014042D885: mov     rcx, [rcx+220h]
 * 000000014042D88C: mov     rcx, [rcx+9E0h]
 * 000000014042D893: mov     gs:858h, rcx
 * 000000014042D89C: mov     cx, gs:850h
 * 000000014042D8A5: mov     gs:852h, cx
 * 000000014042D8AE: mov     cx, gs:860h
 * 000000014042D8B7: mov     gs:854h, cx
 * 000000014042D8C0: movzx   eax, word ptr gs:866h
 * 000000014042D8C9: cmp     gs:864h, ax
 * 000000014042D8D2: jz      short loc_14042D8E6
 * 000000014042D8D4: mov     gs:864h, ax
 * 000000014042D8DD: mov     ecx, 48h ; 'H'
 * 000000014042D8E2: xor     edx, edx
 * 000000014042D8E4: wrmsr
 * 000000014042D8E6: movzx   edx, word ptr gs:860h
 * 000000014042D8EF: test    edx, 8
 * 000000014042D8F5: jz      short loc_14042D90E
 * 000000014042D8F7: mov     eax, 1
 * 000000014042D8FC: xor     edx, edx
 * 000000014042D8FE: mov     ecx, 49h ; 'I'
 * 000000014042D903: wrmsr
 * 000000014042D905: movzx   edx, word ptr gs:860h
 * 000000014042D90E: test    edx, 2
 * 000000014042D914: jz      loc_14042DA51
 * 000000014042D91A: call    loc_14042DA2D
 * 000000014042D91F: add     rsp, 8
 * 000000014042D923: call    loc_14042DA36
 * 000000014042D928: add     rsp, 8
 * 000000014042D92C: call    loc_14042D91F
 * 000000014042D931: add     rsp, 8
 * 000000014042D935: call    loc_14042D928
 * 000000014042D93A: add     rsp, 8
 * 000000014042D93E: call    loc_14042D931
 * 000000014042D943: add     rsp, 8
 * 000000014042D947: call    loc_14042D93A
 * 000000014042D94C: add     rsp, 8
 * 000000014042D950: call    loc_14042D943
 * 000000014042D955: add     rsp, 8
 * 000000014042D959: call    loc_14042D94C
 * 000000014042D95E: add     rsp, 8
 * 000000014042D962: call    loc_14042D955
 * 000000014042D967: add     rsp, 8
 * 000000014042D96B: call    loc_14042D95E
 * 000000014042D970: add     rsp, 8
 * 000000014042D974: call    loc_14042D967
 * 000000014042D979: add     rsp, 8
 * 000000014042D97D: call    loc_14042D970
 * 000000014042D982: add     rsp, 8
 * 000000014042D986: call    loc_14042D979
 * 000000014042D98B: add     rsp, 8
 * 000000014042D98F: call    loc_14042D982
 * 000000014042D994: add     rsp, 8
 * 000000014042D998: call    loc_14042D98B
 * 000000014042D99D: add     rsp, 8
 * 000000014042D9A1: call    loc_14042D994
 * 000000014042D9A6: add     rsp, 8
 * 000000014042D9AA: call    loc_14042D99D
 * 000000014042D9AF: add     rsp, 8
 * 000000014042D9B3: call    loc_14042D9A6
 * 000000014042D9B8: add     rsp, 8
 * 000000014042D9BC: call    loc_14042D9AF
 * 000000014042D9C1: add     rsp, 8
 * 000000014042D9C5: call    loc_14042D9B8
 * 000000014042D9CA: add     rsp, 8
 * 000000014042D9CE: call    loc_14042D9C1
 * 000000014042D9D3: add     rsp, 8
 * 000000014042D9D7: call    loc_14042D9CA
 * 000000014042D9DC: add     rsp, 8
 * 000000014042D9E0: call    loc_14042D9D3
 * 000000014042D9E5: add     rsp, 8
 * 000000014042D9E9: call    loc_14042D9DC
 * 000000014042D9EE: add     rsp, 8
 * 000000014042D9F2: call    loc_14042D9E5
 * 000000014042D9F7: add     rsp, 8
 * 000000014042D9FB: call    loc_14042D9EE
 * 000000014042DA00: add     rsp, 8
 * 000000014042DA04: call    loc_14042D9F7
 * 000000014042DA09: add     rsp, 8
 * 000000014042DA0D: call    loc_14042DA00
 * 000000014042DA12: add     rsp, 8
 * 000000014042DA16: call    loc_14042DA09
 * 000000014042DA1B: add     rsp, 8
 * 000000014042DA1F: call    loc_14042DA12
 * 000000014042DA24: add     rsp, 8
 * 000000014042DA28: call    loc_14042DA1B
 * 000000014042DA2D: add     rsp, 8
 * 000000014042DA31: call    loc_14042DA24
 * 000000014042DA36: add     rsp, 8
 * 000000014042DA3A: mov     eax, 0DADAh
 * 000000014042DA3F: test    byte ptr gs:862h, 8
 * 000000014042DA48: jz      short loc_14042DA51
 * 000000014042DA4A: mov     al, 20h ; ' '
 * 000000014042DA4C: incsspq rax
 * 000000014042DA51: test    edx, 200h
 * 000000014042DA57: jz      short loc_14042DA5E
 * 000000014042DA59: call    sub_1404357C0
 * 000000014042DA5E: lfence
 * 000000014042DA61: mov     byte ptr gs:856h, 0
 * 000000014042DA6A: test    byte ptr [r10+3], 3
 * 000000014042DA6F: mov     [rbp+0E8h+var_68], 0
 * 000000014042DA78: jz      short loc_14042DA7F
 * 000000014042DA7A: call    sub_14041F920
 * 000000014042DA7F: cld
 * 000000014042DA80: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042DA84: ldmxcsr dword ptr gs:180h
 * 000000014042DA8D: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042DA91: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042DA95: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042DA99: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042DA9D: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042DAA1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042DAA5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042DAAC: jz      short loc_14042DABA
 * 000000014042DAAE: test    [rbp+0E8h+arg_0], 1
 * 000000014042DAB5: jz      short loc_14042DABA
 * 000000014042DAB7: stac
 * 000000014042DABA: test    [rbp+0E8h+arg_8], 200h
 * 000000014042DAC4: jz      short loc_14042DAC7
 * 000000014042DAC6: sti
 * 000000014042DAC7: mov     ecx, 0C0000095h
 * 000000014042DACC: xor     edx, edx
 * 000000014042DACE: mov     r8, [rbp+0E8h]
 * 000000014042DAD5: dec     r8
 * 000000014042DAD8: call    sub_140434E40
 * 000000014042DADD: nop
 * 000000014042DADE: retn
 */
