/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140AF9420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140AF9500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140AF9580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140AF9420
 * Reason: Hex-Rays returned no pseudocode for 0x140AF9420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF9420: sub     rsp, 18h
 * 0000000140AF9424: mov     [rsp+18h+var_18], rax
 * 0000000140AF9428: mov     [rsp+18h+var_10], r11
 * 0000000140AF942D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140AF9437: mov     r11, [r11]
 * 0000000140AF943A: test    r11, r11
 * 0000000140AF943D: jz      short loc_140AF948F
 * 0000000140AF943F: mov     rax, r10
 * 0000000140AF9442: shr     rax, 10h
 * 0000000140AF9446: bt      [r11], rax
 * 0000000140AF944A: jnb     short loc_140AF945B
 * 0000000140AF944C: mov     rax, [rsp+18h+var_18]
 * 0000000140AF9450: mov     r11, [rsp+18h+var_10]
 * 0000000140AF9455: add     rsp, 18h
 * 0000000140AF9459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140AF945B: or      byte ptr gs:856h, 1
 * 0000000140AF9464: test    byte ptr gs:856h, 2
 * 0000000140AF946D: jnz     short loc_140AF948F
 * 0000000140AF946F: call    __guard_retpoline_exit
 * 0000000140AF9474: mov     r11, (offset xmmword_140D1EAD0+4)
 * 0000000140AF947E: mov     r11d, [r11]
 * 0000000140AF9481: test    r11d, 2
 * 0000000140AF9488: jz      short loc_140AF948F
 * 0000000140AF948A: call    __guard_retpoline_import_r10_log_event
 * 0000000140AF948F: lfence
 * 0000000140AF9492: mov     rax, [rsp+18h+var_18]
 * 0000000140AF9496: mov     r11, [rsp+18h+var_10]
 * 0000000140AF949B: add     rsp, 18h
 * 0000000140AF949F: jmp     r10
 */
