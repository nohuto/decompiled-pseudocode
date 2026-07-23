/*
 * XREFs of sub_1405696B0 @ 0x1405696B0
 * Callers:
 *     sub_140431540 @ 0x140431540 (sub_140431540.c)
 * Callees:
 *     sub_1404359C0 @ 0x1404359C0 (sub_1404359C0.c)
 *     HalHandleMcheck @ 0x1405095D0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1405696B0 @ 0x1405696B0
 * Reason: Hex-Rays returned no pseudocode for 0x1405696B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405696B0: sub     rsp, 28h
 * 00000001405696B4: call    HalHandleMcheck
 * 00000001405696B9: mov     rax, qword ptr cs:xmmword_140D06920
 * 00000001405696C0: bt      rax, 29h ; ')'
 * 00000001405696C5: jnb     short loc_1405696CC
 * 00000001405696C7: call    sub_1404359C0
 * 00000001405696CC: lfence
 * 00000001405696CF: add     rsp, 28h
 * 00000001405696D3: retn
 */
