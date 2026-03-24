/*
 * XREFs of KiHandleMcheck @ 0x14056C090
 * Callers:
 *     KxMcheckAbort @ 0x1404308C0 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1405057D0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14056C090
 * Reason: Hex-Rays returned no pseudocode for 0x14056C090
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014056C090: sub     rsp, 28h
 * 000000014056C094: call    HalHandleMcheck
 * 000000014056C099: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014056C0A0: bt      rax, 29h ; ')'
 * 000000014056C0A5: jnb     short loc_14056C0AC
 * 000000014056C0A7: call    KiFlushCurrentRsb
 * 000000014056C0AC: lfence
 * 000000014056C0AF: add     rsp, 28h
 * 000000014056C0B3: retn
 */
