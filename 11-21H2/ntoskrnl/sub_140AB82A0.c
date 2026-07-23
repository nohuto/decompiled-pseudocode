/*
 * XREFs of sub_140AB82A0 @ 0x140AB82A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB82A0 @ 0x140AB82A0 (sub_140AB82A0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB82A0 @ 0x140AB82A0
 * Reason: Hex-Rays returned no pseudocode for 0x140AB82A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB82A0: mov     r11, offset qword_140E01900
 * 0000000140AB82AA: mov     r11, [r11]
 * 0000000140AB82AD: test    rax, rax
 * 0000000140AB82B0: jge     loc_140AB8358
 * 0000000140AB82B6: test    r11, r11
 * 0000000140AB82B9: jz      short loc_140AB82E0
 * 0000000140AB82BB: mov     r10, rax
 * 0000000140AB82BE: shr     r10, 9
 * 0000000140AB82C2: mov     r11, [r11+r10*8]
 * 0000000140AB82C6: mov     r10, rax
 * 0000000140AB82C9: shr     r10, 3
 * 0000000140AB82CD: test    al, 0Fh
 * 0000000140AB82CF: jnz     loc_140AB8341
 * 0000000140AB82D5: bt      r11, r10
 * 0000000140AB82D9: jnb     loc_140AB8358
 * 0000000140AB82DF: nop
 * 0000000140AB82E0: mov     r11, offset qword_140D07220
 * 0000000140AB82EA: mov     r11, [r11]
 * 0000000140AB82ED: test    r11, r11
 * 0000000140AB82F0: jz      short loc_140AB833B
 * 0000000140AB82F2: mov     r10, rax
 * 0000000140AB82F5: shr     r10, 10h
 * 0000000140AB82F9: bt      [r11], r10
 * 0000000140AB82FD: jnb     short loc_140AB8325
 * 0000000140AB82FF: call    loc_140AB8320
 * 0000000140AB8304: int     3; Trap to Debugger
 * 0000000140AB8320: mov     [rsp+0], rax
 * 0000000140AB8324: retn
 * 0000000140AB8325: or      byte ptr gs:856h, 1
 * 0000000140AB832E: test    byte ptr gs:856h, 2
 * 0000000140AB8337: jnz     short loc_140AB833B
 * 0000000140AB8339: jmp     short sub_140AB83A0
 * 0000000140AB833B: lfence
 * 0000000140AB833E: jmp     rax
 * 0000000140AB8341: btr     r10, 0
 * 0000000140AB8346: bt      r11, r10
 * 0000000140AB834A: jnb     short loc_140AB8358
 * 0000000140AB834C: or      r10, 1
 * 0000000140AB8350: bt      r11, r10
 * 0000000140AB8354: jnb     short loc_140AB8358
 * 0000000140AB8356: jmp     short loc_140AB82E0
 * 0000000140AB8358: mov     rcx, rax
 * 0000000140AB835B: mov     rax, offset sub_14042A530
 * 0000000140AB8365: call    loc_140AB8380
 * 0000000140AB836A: int     3; Trap to Debugger
 * 0000000140AB8380: mov     [rsp+0], rax
 * 0000000140AB8384: retn
 */
