/*
 * XREFs of sub_140430BC0 @ 0x140430BC0
 * Callers:
 *     sub_140AB5940 @ 0x140AB5940 (sub_140AB5940.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140430BC0 @ 0x140430BC0 (sub_140430BC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140430BC0 @ 0x140430BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140430BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140430BC0: push    rbp
 * 0000000140430BC1: sub     rsp, 158h
 * 0000000140430BC8: lea     rbp, [rsp+80h]
 * 0000000140430BD0: mov     [rbp+0D8h+var_12D], 1
 * 0000000140430BD4: mov     [rbp+0D8h+var_128], rax
 * 0000000140430BD8: mov     [rbp+0D8h+var_120], rcx
 * 0000000140430BDC: mov     [rbp+0D8h+var_118], rdx
 * 0000000140430BE0: mov     [rbp+0D8h+var_110], r8
 * 0000000140430BE4: mov     [rbp+0D8h+var_108], r9
 * 0000000140430BE8: mov     [rbp+0D8h+var_100], r10
 * 0000000140430BEC: mov     [rbp+0D8h+var_F8], r11
 * 0000000140430BF0: test    [rbp+0D8h+arg_8], 1
 * 0000000140430BF7: jnz     short loc_140430C33
 * 0000000140430BF9: xor     edx, edx
 * 0000000140430BFB: rdsspq  rdx
 * 0000000140430C00: mov     [rbp+0D8h+var_80], rdx
 * 0000000140430C04: lfence
 * 0000000140430C07: test    word ptr gs:860h, 1
 * 0000000140430C12: jnz     short loc_140430C1C
 * 0000000140430C14: lfence
 * 0000000140430C17: jmp     loc_140430E7B
 * 0000000140430C1C: movzx   eax, word ptr gs:864h
 * 0000000140430C25: mov     ecx, 48h ; 'H'
 * 0000000140430C2A: xor     edx, edx
 * 0000000140430C2C: wrmsr
 * 0000000140430C2E: jmp     loc_140430E7B
 * 0000000140430C33: test    cs:byte_140E01840, 1
 * 0000000140430C3A: jnz     short loc_140430C3F
 * 0000000140430C3C: swapgs
 * 0000000140430C3F: lfence
 * 0000000140430C42: mov     rcx, gs:9828h
 * 0000000140430C4B: test    rcx, rcx
 * 0000000140430C4E: jz      short loc_140430C6F
 * 0000000140430C50: rdsspq  rdx
 * 0000000140430C55: mov     r10, gs:9820h
 * 0000000140430C5E: add     r10, 8
 * 0000000140430C62: cmp     rdx, r10
 * 0000000140430C65: jnz     short loc_140430C6F
 * 0000000140430C67: rstorssp qword ptr [rcx]
 * 0000000140430C6B: saveprevssp
 * 0000000140430C6F: mov     r10, gs:188h
 * 0000000140430C78: mov     rcx, gs:188h
 * 0000000140430C81: mov     rcx, [rcx+220h]
 * 0000000140430C88: mov     rcx, [rcx+9E0h]
 * 0000000140430C8F: mov     gs:858h, rcx
 * 0000000140430C98: mov     cx, gs:850h
 * 0000000140430CA1: mov     gs:852h, cx
 * 0000000140430CAA: mov     cx, gs:860h
 * 0000000140430CB3: mov     gs:854h, cx
 * 0000000140430CBC: movzx   eax, word ptr gs:866h
 * 0000000140430CC5: cmp     gs:864h, ax
 * 0000000140430CCE: jz      short loc_140430CE2
 * 0000000140430CD0: mov     gs:864h, ax
 * 0000000140430CD9: mov     ecx, 48h ; 'H'
 * 0000000140430CDE: xor     edx, edx
 * 0000000140430CE0: wrmsr
 * 0000000140430CE2: movzx   edx, word ptr gs:860h
 * 0000000140430CEB: test    edx, 8
 * 0000000140430CF1: jz      short loc_140430D0A
 * 0000000140430CF3: mov     eax, 1
 * 0000000140430CF8: xor     edx, edx
 * 0000000140430CFA: mov     ecx, 49h ; 'I'
 * 0000000140430CFF: wrmsr
 * 0000000140430D01: movzx   edx, word ptr gs:860h
 * 0000000140430D0A: test    edx, 2
 * 0000000140430D10: jz      loc_140430E4D
 * 0000000140430D16: call    loc_140430E29
 * 0000000140430D1B: add     rsp, 8
 * 0000000140430D1F: call    loc_140430E32
 * 0000000140430D24: add     rsp, 8
 * 0000000140430D28: call    loc_140430D1B
 * 0000000140430D2D: add     rsp, 8
 * 0000000140430D31: call    loc_140430D24
 * 0000000140430D36: add     rsp, 8
 * 0000000140430D3A: call    loc_140430D2D
 * 0000000140430D3F: add     rsp, 8
 * 0000000140430D43: call    loc_140430D36
 * 0000000140430D48: add     rsp, 8
 * 0000000140430D4C: call    loc_140430D3F
 * 0000000140430D51: add     rsp, 8
 * 0000000140430D55: call    loc_140430D48
 * 0000000140430D5A: add     rsp, 8
 * 0000000140430D5E: call    loc_140430D51
 * 0000000140430D63: add     rsp, 8
 * 0000000140430D67: call    loc_140430D5A
 * 0000000140430D6C: add     rsp, 8
 * 0000000140430D70: call    loc_140430D63
 * 0000000140430D75: add     rsp, 8
 * 0000000140430D79: call    loc_140430D6C
 * 0000000140430D7E: add     rsp, 8
 * 0000000140430D82: call    loc_140430D75
 * 0000000140430D87: add     rsp, 8
 * 0000000140430D8B: call    loc_140430D7E
 * 0000000140430D90: add     rsp, 8
 * 0000000140430D94: call    loc_140430D87
 * 0000000140430D99: add     rsp, 8
 * 0000000140430D9D: call    loc_140430D90
 * 0000000140430DA2: add     rsp, 8
 * 0000000140430DA6: call    loc_140430D99
 * 0000000140430DAB: add     rsp, 8
 * 0000000140430DAF: call    loc_140430DA2
 * 0000000140430DB4: add     rsp, 8
 * 0000000140430DB8: call    loc_140430DAB
 * 0000000140430DBD: add     rsp, 8
 * 0000000140430DC1: call    loc_140430DB4
 * 0000000140430DC6: add     rsp, 8
 * 0000000140430DCA: call    loc_140430DBD
 * 0000000140430DCF: add     rsp, 8
 * 0000000140430DD3: call    loc_140430DC6
 * 0000000140430DD8: add     rsp, 8
 * 0000000140430DDC: call    loc_140430DCF
 * 0000000140430DE1: add     rsp, 8
 * 0000000140430DE5: call    loc_140430DD8
 * 0000000140430DEA: add     rsp, 8
 * 0000000140430DEE: call    loc_140430DE1
 * 0000000140430DF3: add     rsp, 8
 * 0000000140430DF7: call    loc_140430DEA
 * 0000000140430DFC: add     rsp, 8
 * 0000000140430E00: call    loc_140430DF3
 * 0000000140430E05: add     rsp, 8
 * 0000000140430E09: call    loc_140430DFC
 * 0000000140430E0E: add     rsp, 8
 * 0000000140430E12: call    loc_140430E05
 * 0000000140430E17: add     rsp, 8
 * 0000000140430E1B: call    loc_140430E0E
 * 0000000140430E20: add     rsp, 8
 * 0000000140430E24: call    loc_140430E17
 * 0000000140430E29: add     rsp, 8
 * 0000000140430E2D: call    loc_140430E20
 * 0000000140430E32: add     rsp, 8
 * 0000000140430E36: mov     eax, 0DADAh
 * 0000000140430E3B: test    byte ptr gs:862h, 8
 * 0000000140430E44: jz      short loc_140430E4D
 * 0000000140430E46: mov     al, 20h ; ' '
 * 0000000140430E48: incsspq rax
 * 0000000140430E4D: test    edx, 200h
 * 0000000140430E53: jz      short loc_140430E5A
 * 0000000140430E55: call    sub_1404357C0
 * 0000000140430E5A: lfence
 * 0000000140430E5D: mov     byte ptr gs:856h, 0
 * 0000000140430E66: test    byte ptr [r10+3], 3
 * 0000000140430E6B: mov     [rbp+0D8h+var_58], 0
 * 0000000140430E74: jz      short loc_140430E7B
 * 0000000140430E76: call    sub_14041F920
 * 0000000140430E7B: cld
 * 0000000140430E7C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140430E80: ldmxcsr dword ptr gs:180h
 * 0000000140430E89: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140430E8D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140430E91: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140430E95: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140430E99: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140430E9D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140430EA1: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140430EA8: jz      short loc_140430EB6
 * 0000000140430EAA: test    [rbp+0D8h+arg_8], 1
 * 0000000140430EB1: jz      short loc_140430EB6
 * 0000000140430EB3: stac
 * 0000000140430EB6: mov     eax, [rbp+0E0h]
 * 0000000140430EBC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140430EC6: jz      short loc_140430EC9
 * 0000000140430EC8: sti
 * 0000000140430EC9: mov     ecx, 80000002h
 * 0000000140430ECE: xor     edx, edx
 * 0000000140430ED0: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140430ED7: call    sub_140434E40
 * 0000000140430EDC: nop
 * 0000000140430EDD: retn
 */
