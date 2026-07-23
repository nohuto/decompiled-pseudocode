/*
 * XREFs of KiHandleMcheck @ 0x14056C6B0
 * Callers:
 *     KxMcheckAbort @ 0x1404312C0 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x140505C10 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14056C6B0
 * Reason: Hex-Rays returned no pseudocode for 0x14056C6B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014056C6B0: sub     rsp, 28h
 * 000000014056C6B4: call    HalHandleMcheck
 * 000000014056C6B9: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014056C6C0: bt      rax, 29h ; ')'
 * 000000014056C6C5: jnb     short loc_14056C6CC
 * 000000014056C6C7: call    KiFlushCurrentRsb
 * 000000014056C6CC: lfence
 * 000000014056C6CF: add     rsp, 28h
 * 000000014056C6D3: retn
 */
