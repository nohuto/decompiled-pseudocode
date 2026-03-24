/*
 * XREFs of KiHandleMcheck @ 0x1405696B0
 * Callers:
 *     KxMcheckAbort @ 0x140431540 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1404359C0 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1405095D0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x1405696B0
 * Reason: Hex-Rays returned no pseudocode for 0x1405696B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405696B0: sub     rsp, 28h
 * 00000001405696B4: call    HalHandleMcheck
 * 00000001405696B9: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001405696C0: bt      rax, 29h ; ')'
 * 00000001405696C5: jnb     short loc_1405696CC
 * 00000001405696C7: call    KiFlushCurrentRsb
 * 00000001405696CC: lfence
 * 00000001405696CF: add     rsp, 28h
 * 00000001405696D3: retn
 */
