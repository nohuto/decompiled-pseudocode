/*
 * XREFs of sub_140293218 @ 0x140293218
 * Callers:
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_140293268 @ 0x140293268 (sub_140293268.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140293218 @ 0x140293218
 * Reason: Hex-Rays returned no pseudocode for 0x140293218
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140293218: sub     rsp, 28h
 * 000000014029321C: movzx   eax, word ptr [rdx+8]
 * 0000000140293220: mov     r10, rdx
 * 0000000140293223: cmp     ax, [rcx+0A10h]
 * 000000014029322A: jnb     short loc_14029325D
 * 000000014029322C: mov     r8, [rcx+rax*8+0A18h]
 * 0000000140293234: add     rcx, 284h
 * 000000014029323B: mov     [rsp+28h+arg_0], r8
 * 0000000140293240: mov     r9d, 1
 * 0000000140293246: lea     r8, [rsp+28h+arg_0]
 * 000000014029324B: lea     rdx, [rcx+rax*2]
 * 000000014029324F: mov     rcx, r10
 * 0000000140293252: call    sub_140293268
 * 0000000140293257: add     rsp, 28h
 * 000000014029325B: retn
 * 000000014029325D: xor     r8d, r8d
 * 0000000140293260: jmp     short loc_140293234
 */
