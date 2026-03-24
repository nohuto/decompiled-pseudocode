/*
 * XREFs of KiHandleMcheck @ 0x14056BFF0
 * Callers:
 *     KxMcheckAbort @ 0x140430EC0 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1405056C0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14056BFF0
 * Reason: Hex-Rays returned no pseudocode for 0x14056BFF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014056BFF0: sub     rsp, 28h
 * 000000014056BFF4: call    HalHandleMcheck
 * 000000014056BFF9: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014056C000: bt      rax, 29h ; ')'
 * 000000014056C005: jnb     short loc_14056C00C
 * 000000014056C007: call    KiFlushCurrentRsb
 * 000000014056C00C: lfence
 * 000000014056C00F: add     rsp, 28h
 * 000000014056C013: retn
 */
