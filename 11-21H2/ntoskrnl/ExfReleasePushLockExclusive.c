/*
 * XREFs of ExfReleasePushLockExclusive @ 0x140359EF0
 * Callers:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 * Callees:
 *     sub_140359F70 @ 0x140359F70 (sub_140359F70.c)
 */

/*
 * Hex-Rays decompilation failed for ExfReleasePushLockExclusive @ 0x140359EF0
 * Reason: Hex-Rays returned no pseudocode for 0x140359EF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140359EF0: sub     rsp, 28h
 * 0000000140359EF4: xor     edx, edx
 * 0000000140359EF6: lea     eax, [rdx+1]
 * 0000000140359EF9: lock cmpxchg [rcx], rdx
 * 0000000140359EFE: jnz     short loc_140359F06
 * 0000000140359F00: add     rsp, 28h
 * 0000000140359F04: retn
 * 0000000140359F06: or      r9, 0FFFFFFFFFFFFFFFFh
 * 0000000140359F0A: mov     r8, rax
 * 0000000140359F0D: and     r8d, 6
 * 0000000140359F11: mov     edx, 3
 * 0000000140359F16: cmp     r8, 2
 * 0000000140359F1A: cmovnz  rdx, r9
 * 0000000140359F1E: add     rdx, rax
 * 0000000140359F21: lock cmpxchg [rcx], rdx
 * 0000000140359F26: jnz     short loc_140359F06
 * 0000000140359F28: cmp     r8, 2
 * 0000000140359F2C: jnz     short loc_140359F00
 * 0000000140359F2E: call    sub_140359F70
 * 0000000140359F33: jmp     short loc_140359F00
 */
