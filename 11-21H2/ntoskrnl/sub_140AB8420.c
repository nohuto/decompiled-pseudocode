/*
 * XREFs of sub_140AB8420 @ 0x140AB8420
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB8500 @ 0x140AB8500 (sub_140AB8500.c)
 *     sub_140AB8580 @ 0x140AB8580 (sub_140AB8580.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB8420 @ 0x140AB8420
 * Reason: Hex-Rays returned no pseudocode for 0x140AB8420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB8420: sub     rsp, 18h
 * 0000000140AB8424: mov     [rsp+18h+var_18], rax
 * 0000000140AB8428: mov     [rsp+18h+var_10], r11
 * 0000000140AB842D: mov     r11, offset qword_140D07220
 * 0000000140AB8437: mov     r11, [r11]
 * 0000000140AB843A: test    r11, r11
 * 0000000140AB843D: jz      short loc_140AB848F
 * 0000000140AB843F: mov     rax, r10
 * 0000000140AB8442: shr     rax, 10h
 * 0000000140AB8446: bt      [r11], rax
 * 0000000140AB844A: jnb     short loc_140AB845B
 * 0000000140AB844C: mov     rax, [rsp+18h+var_18]
 * 0000000140AB8450: mov     r11, [rsp+18h+var_10]
 * 0000000140AB8455: add     rsp, 18h
 * 0000000140AB8459: jmp     short loc_140AB84C0
 * 0000000140AB845B: or      byte ptr gs:856h, 1
 * 0000000140AB8464: test    byte ptr gs:856h, 2
 * 0000000140AB846D: jnz     short loc_140AB848F
 * 0000000140AB846F: call    sub_140AB8580
 * 0000000140AB8474: mov     r11, (offset xmmword_140D06910+4)
 * 0000000140AB847E: mov     r11d, [r11]
 * 0000000140AB8481: test    r11d, 2
 * 0000000140AB8488: jz      short loc_140AB848F
 * 0000000140AB848A: call    sub_140AB8500
 * 0000000140AB848F: lfence
 * 0000000140AB8492: mov     rax, [rsp+18h+var_18]
 * 0000000140AB8496: mov     r11, [rsp+18h+var_10]
 * 0000000140AB849B: add     rsp, 18h
 * 0000000140AB849F: jmp     r10
 */
