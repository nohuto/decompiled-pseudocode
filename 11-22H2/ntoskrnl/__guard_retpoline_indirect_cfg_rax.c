/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140AFA2A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140AFA2A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140AFA2A0
 * Reason: Hex-Rays returned no pseudocode for 0x140AFA2A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AFA2A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140AFA2AA: mov     r11, [r11]
 * 0000000140AFA2AD: test    rax, rax
 * 0000000140AFA2B0: jge     loc_140AFA358
 * 0000000140AFA2B6: test    r11, r11
 * 0000000140AFA2B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140AFA2BB: mov     r10, rax
 * 0000000140AFA2BE: shr     r10, 9
 * 0000000140AFA2C2: mov     r11, [r11+r10*8]
 * 0000000140AFA2C6: mov     r10, rax
 * 0000000140AFA2C9: shr     r10, 3
 * 0000000140AFA2CD: test    al, 0Fh
 * 0000000140AFA2CF: jnz     loc_140AFA341
 * 0000000140AFA2D5: bt      r11, r10
 * 0000000140AFA2D9: jnb     loc_140AFA358
 * 0000000140AFA2DF: nop
 * 0000000140AFA2E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140AFA2EA: mov     r11, [r11]
 * 0000000140AFA2ED: test    r11, r11
 * 0000000140AFA2F0: jz      short loc_140AFA33B
 * 0000000140AFA2F2: mov     r10, rax
 * 0000000140AFA2F5: shr     r10, 10h
 * 0000000140AFA2F9: bt      [r11], r10
 * 0000000140AFA2FD: jnb     short loc_140AFA325
 * 0000000140AFA2FF: call    loc_140AFA320
 * 0000000140AFA304: int     3; Trap to Debugger
 * 0000000140AFA320: mov     [rsp+0], rax
 * 0000000140AFA324: retn
 * 0000000140AFA325: or      byte ptr gs:856h, 1
 * 0000000140AFA32E: test    byte ptr gs:856h, 2
 * 0000000140AFA337: jnz     short loc_140AFA33B
 * 0000000140AFA339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140AFA33B: lfence
 * 0000000140AFA33E: jmp     rax
 * 0000000140AFA341: btr     r10, 0
 * 0000000140AFA346: bt      r11, r10
 * 0000000140AFA34A: jnb     short loc_140AFA358
 * 0000000140AFA34C: or      r10, 1
 * 0000000140AFA350: bt      r11, r10
 * 0000000140AFA354: jnb     short loc_140AFA358
 * 0000000140AFA356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140AFA358: mov     rcx, rax
 * 0000000140AFA35B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140AFA365: call    loc_140AFA380
 * 0000000140AFA36A: int     3; Trap to Debugger
 * 0000000140AFA380: mov     [rsp+0], rax
 * 0000000140AFA384: retn
 */
