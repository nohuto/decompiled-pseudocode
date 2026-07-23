/*
 * XREFs of sub_14042C600 @ 0x14042C600
 * Callers:
 *     sub_140AB5100 @ 0x140AB5100 (sub_140AB5100.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042C600 @ 0x14042C600 (sub_14042C600.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042C600 @ 0x14042C600
 * Reason: Hex-Rays returned no pseudocode for 0x14042C600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C600: sub     rsp, 8
 * 000000014042C604: push    rbp
 * 000000014042C605: sub     rsp, 158h
 * 000000014042C60C: lea     rbp, [rsp+80h]
 * 000000014042C614: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C618: mov     [rbp+0E8h+var_138], rax
 * 000000014042C61C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C620: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C624: mov     [rbp+0E8h+var_120], r8
 * 000000014042C628: mov     [rbp+0E8h+var_118], r9
 * 000000014042C62C: mov     [rbp+0E8h+var_110], r10
 * 000000014042C630: mov     [rbp+0E8h+var_108], r11
 * 000000014042C634: test    [rbp+0E8h+arg_0], 1
 * 000000014042C63B: jnz     short loc_14042C677
 * 000000014042C63D: xor     edx, edx
 * 000000014042C63F: rdsspq  rdx
 * 000000014042C644: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C648: lfence
 * 000000014042C64B: test    word ptr gs:860h, 1
 * 000000014042C656: jnz     short loc_14042C660
 * 000000014042C658: lfence
 * 000000014042C65B: jmp     loc_14042C8BF
 * 000000014042C660: movzx   eax, word ptr gs:864h
 * 000000014042C669: mov     ecx, 48h ; 'H'
 * 000000014042C66E: xor     edx, edx
 * 000000014042C670: wrmsr
 * 000000014042C672: jmp     loc_14042C8BF
 * 000000014042C677: test    cs:byte_140E01840, 1
 * 000000014042C67E: jnz     short loc_14042C683
 * 000000014042C680: swapgs
 * 000000014042C683: lfence
 * 000000014042C686: mov     rcx, gs:9828h
 * 000000014042C68F: test    rcx, rcx
 * 000000014042C692: jz      short loc_14042C6B3
 * 000000014042C694: rdsspq  rdx
 * 000000014042C699: mov     r10, gs:9820h
 * 000000014042C6A2: add     r10, 8
 * 000000014042C6A6: cmp     rdx, r10
 * 000000014042C6A9: jnz     short loc_14042C6B3
 * 000000014042C6AB: rstorssp qword ptr [rcx]
 * 000000014042C6AF: saveprevssp
 * 000000014042C6B3: mov     r10, gs:188h
 * 000000014042C6BC: mov     rcx, gs:188h
 * 000000014042C6C5: mov     rcx, [rcx+220h]
 * 000000014042C6CC: mov     rcx, [rcx+9E0h]
 * 000000014042C6D3: mov     gs:858h, rcx
 * 000000014042C6DC: mov     cx, gs:850h
 * 000000014042C6E5: mov     gs:852h, cx
 * 000000014042C6EE: mov     cx, gs:860h
 * 000000014042C6F7: mov     gs:854h, cx
 * 000000014042C700: movzx   eax, word ptr gs:866h
 * 000000014042C709: cmp     gs:864h, ax
 * 000000014042C712: jz      short loc_14042C726
 * 000000014042C714: mov     gs:864h, ax
 * 000000014042C71D: mov     ecx, 48h ; 'H'
 * 000000014042C722: xor     edx, edx
 * 000000014042C724: wrmsr
 * 000000014042C726: movzx   edx, word ptr gs:860h
 * 000000014042C72F: test    edx, 8
 * 000000014042C735: jz      short loc_14042C74E
 * 000000014042C737: mov     eax, 1
 * 000000014042C73C: xor     edx, edx
 * 000000014042C73E: mov     ecx, 49h ; 'I'
 * 000000014042C743: wrmsr
 * 000000014042C745: movzx   edx, word ptr gs:860h
 * 000000014042C74E: test    edx, 2
 * 000000014042C754: jz      loc_14042C891
 * 000000014042C75A: call    loc_14042C86D
 * 000000014042C75F: add     rsp, 8
 * 000000014042C763: call    loc_14042C876
 * 000000014042C768: add     rsp, 8
 * 000000014042C76C: call    loc_14042C75F
 * 000000014042C771: add     rsp, 8
 * 000000014042C775: call    loc_14042C768
 * 000000014042C77A: add     rsp, 8
 * 000000014042C77E: call    loc_14042C771
 * 000000014042C783: add     rsp, 8
 * 000000014042C787: call    loc_14042C77A
 * 000000014042C78C: add     rsp, 8
 * 000000014042C790: call    loc_14042C783
 * 000000014042C795: add     rsp, 8
 * 000000014042C799: call    loc_14042C78C
 * 000000014042C79E: add     rsp, 8
 * 000000014042C7A2: call    loc_14042C795
 * 000000014042C7A7: add     rsp, 8
 * 000000014042C7AB: call    loc_14042C79E
 * 000000014042C7B0: add     rsp, 8
 * 000000014042C7B4: call    loc_14042C7A7
 * 000000014042C7B9: add     rsp, 8
 * 000000014042C7BD: call    loc_14042C7B0
 * 000000014042C7C2: add     rsp, 8
 * 000000014042C7C6: call    loc_14042C7B9
 * 000000014042C7CB: add     rsp, 8
 * 000000014042C7CF: call    loc_14042C7C2
 * 000000014042C7D4: add     rsp, 8
 * 000000014042C7D8: call    loc_14042C7CB
 * 000000014042C7DD: add     rsp, 8
 * 000000014042C7E1: call    loc_14042C7D4
 * 000000014042C7E6: add     rsp, 8
 * 000000014042C7EA: call    loc_14042C7DD
 * 000000014042C7EF: add     rsp, 8
 * 000000014042C7F3: call    loc_14042C7E6
 * 000000014042C7F8: add     rsp, 8
 * 000000014042C7FC: call    loc_14042C7EF
 * 000000014042C801: add     rsp, 8
 * 000000014042C805: call    loc_14042C7F8
 * 000000014042C80A: add     rsp, 8
 * 000000014042C80E: call    loc_14042C801
 * 000000014042C813: add     rsp, 8
 * 000000014042C817: call    loc_14042C80A
 * 000000014042C81C: add     rsp, 8
 * 000000014042C820: call    loc_14042C813
 * 000000014042C825: add     rsp, 8
 * 000000014042C829: call    loc_14042C81C
 * 000000014042C82E: add     rsp, 8
 * 000000014042C832: call    loc_14042C825
 * 000000014042C837: add     rsp, 8
 * 000000014042C83B: call    loc_14042C82E
 * 000000014042C840: add     rsp, 8
 * 000000014042C844: call    loc_14042C837
 * 000000014042C849: add     rsp, 8
 * 000000014042C84D: call    loc_14042C840
 * 000000014042C852: add     rsp, 8
 * 000000014042C856: call    loc_14042C849
 * 000000014042C85B: add     rsp, 8
 * 000000014042C85F: call    loc_14042C852
 * 000000014042C864: add     rsp, 8
 * 000000014042C868: call    loc_14042C85B
 * 000000014042C86D: add     rsp, 8
 * 000000014042C871: call    loc_14042C864
 * 000000014042C876: add     rsp, 8
 * 000000014042C87A: mov     eax, 0DADAh
 * 000000014042C87F: test    byte ptr gs:862h, 8
 * 000000014042C888: jz      short loc_14042C891
 * 000000014042C88A: mov     al, 20h ; ' '
 * 000000014042C88C: incsspq rax
 * 000000014042C891: test    edx, 200h
 * 000000014042C897: jz      short loc_14042C89E
 * 000000014042C899: call    sub_1404357C0
 * 000000014042C89E: lfence
 * 000000014042C8A1: mov     byte ptr gs:856h, 0
 * 000000014042C8AA: test    byte ptr [r10+3], 3
 * 000000014042C8AF: mov     [rbp+0E8h+var_68], 0
 * 000000014042C8B8: jz      short loc_14042C8BF
 * 000000014042C8BA: call    sub_14041F920
 * 000000014042C8BF: cld
 * 000000014042C8C0: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042C8C4: ldmxcsr dword ptr gs:180h
 * 000000014042C8CD: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042C8D1: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042C8D5: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042C8D9: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042C8DD: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042C8E1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042C8E5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042C8EC: jz      short loc_14042C8FA
 * 000000014042C8EE: test    [rbp+0E8h+arg_0], 1
 * 000000014042C8F5: jz      short loc_14042C8FA
 * 000000014042C8F7: stac
 * 000000014042C8FA: test    [rbp+0E8h+arg_8], 200h
 * 000000014042C904: jz      short loc_14042C907
 * 000000014042C906: sti
 * 000000014042C907: mov     ecx, 10000003h
 * 000000014042C90C: xor     edx, edx
 * 000000014042C90E: mov     r8, [rbp+0E8h]
 * 000000014042C915: call    sub_140434E40
 * 000000014042C91A: nop
 * 000000014042C91B: retn
 */
