/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140AFA420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140AFA500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140AFA580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140AFA420
 * Reason: Hex-Rays returned no pseudocode for 0x140AFA420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AFA420: sub     rsp, 18h
 * 0000000140AFA424: mov     [rsp+18h+var_18], rax
 * 0000000140AFA428: mov     [rsp+18h+var_10], r11
 * 0000000140AFA42D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140AFA437: mov     r11, [r11]
 * 0000000140AFA43A: test    r11, r11
 * 0000000140AFA43D: jz      short loc_140AFA48F
 * 0000000140AFA43F: mov     rax, r10
 * 0000000140AFA442: shr     rax, 10h
 * 0000000140AFA446: bt      [r11], rax
 * 0000000140AFA44A: jnb     short loc_140AFA45B
 * 0000000140AFA44C: mov     rax, [rsp+18h+var_18]
 * 0000000140AFA450: mov     r11, [rsp+18h+var_10]
 * 0000000140AFA455: add     rsp, 18h
 * 0000000140AFA459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140AFA45B: or      byte ptr gs:856h, 1
 * 0000000140AFA464: test    byte ptr gs:856h, 2
 * 0000000140AFA46D: jnz     short loc_140AFA48F
 * 0000000140AFA46F: call    __guard_retpoline_exit
 * 0000000140AFA474: mov     r11, (offset xmmword_140D1EAD0+4)
 * 0000000140AFA47E: mov     r11d, [r11]
 * 0000000140AFA481: test    r11d, 2
 * 0000000140AFA488: jz      short loc_140AFA48F
 * 0000000140AFA48A: call    __guard_retpoline_import_r10_log_event
 * 0000000140AFA48F: lfence
 * 0000000140AFA492: mov     rax, [rsp+18h+var_18]
 * 0000000140AFA496: mov     r11, [rsp+18h+var_10]
 * 0000000140AFA49B: add     rsp, 18h
 * 0000000140AFA49F: jmp     r10
 */
