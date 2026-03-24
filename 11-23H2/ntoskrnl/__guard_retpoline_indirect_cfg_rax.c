/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140AF92A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140AF92A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140AF92A0
 * Reason: Hex-Rays returned no pseudocode for 0x140AF92A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF92A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140AF92AA: mov     r11, [r11]
 * 0000000140AF92AD: test    rax, rax
 * 0000000140AF92B0: jge     loc_140AF9358
 * 0000000140AF92B6: test    r11, r11
 * 0000000140AF92B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140AF92BB: mov     r10, rax
 * 0000000140AF92BE: shr     r10, 9
 * 0000000140AF92C2: mov     r11, [r11+r10*8]
 * 0000000140AF92C6: mov     r10, rax
 * 0000000140AF92C9: shr     r10, 3
 * 0000000140AF92CD: test    al, 0Fh
 * 0000000140AF92CF: jnz     loc_140AF9341
 * 0000000140AF92D5: bt      r11, r10
 * 0000000140AF92D9: jnb     loc_140AF9358
 * 0000000140AF92DF: nop
 * 0000000140AF92E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140AF92EA: mov     r11, [r11]
 * 0000000140AF92ED: test    r11, r11
 * 0000000140AF92F0: jz      short loc_140AF933B
 * 0000000140AF92F2: mov     r10, rax
 * 0000000140AF92F5: shr     r10, 10h
 * 0000000140AF92F9: bt      [r11], r10
 * 0000000140AF92FD: jnb     short loc_140AF9325
 * 0000000140AF92FF: call    loc_140AF9320
 * 0000000140AF9304: int     3; Trap to Debugger
 * 0000000140AF9320: mov     [rsp+0], rax
 * 0000000140AF9324: retn
 * 0000000140AF9325: or      byte ptr gs:856h, 1
 * 0000000140AF932E: test    byte ptr gs:856h, 2
 * 0000000140AF9337: jnz     short loc_140AF933B
 * 0000000140AF9339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140AF933B: lfence
 * 0000000140AF933E: jmp     rax
 * 0000000140AF9341: btr     r10, 0
 * 0000000140AF9346: bt      r11, r10
 * 0000000140AF934A: jnb     short loc_140AF9358
 * 0000000140AF934C: or      r10, 1
 * 0000000140AF9350: bt      r11, r10
 * 0000000140AF9354: jnb     short loc_140AF9358
 * 0000000140AF9356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140AF9358: mov     rcx, rax
 * 0000000140AF935B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140AF9365: call    loc_140AF9380
 * 0000000140AF936A: int     3; Trap to Debugger
 * 0000000140AF9380: mov     [rsp+0], rax
 * 0000000140AF9384: retn
 */
