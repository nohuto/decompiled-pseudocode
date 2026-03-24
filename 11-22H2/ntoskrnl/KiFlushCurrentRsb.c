/*
 * XREFs of KiFlushCurrentRsb @ 0x140434F00
 * Callers:
 *     KiProcessNMI @ 0x14020EA80 (KiProcessNMI.c)
 *     KiUpdateSpeculationControl @ 0x1403259E0 (KiUpdateSpeculationControl.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140460180 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x140460380 (KiFlushRsbTarget.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x14056C090 (KiHandleMcheck.c)
 *     KeFlushRsb @ 0x140573A84 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140434F00
 * Reason: Hex-Rays returned no pseudocode for 0x140434F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434F00: sub     rsp, 8
 * 0000000140434F04: pushfq
 * 0000000140434F05: cli
 * 0000000140434F06: call    loc_140435019
 * 0000000140434F0B: add     rsp, 8
 * 0000000140434F0F: call    loc_140435022
 * 0000000140434F14: add     rsp, 8
 * 0000000140434F18: call    loc_140434F0B
 * 0000000140434F1D: add     rsp, 8
 * 0000000140434F21: call    loc_140434F14
 * 0000000140434F26: add     rsp, 8
 * 0000000140434F2A: call    loc_140434F1D
 * 0000000140434F2F: add     rsp, 8
 * 0000000140434F33: call    loc_140434F26
 * 0000000140434F38: add     rsp, 8
 * 0000000140434F3C: call    loc_140434F2F
 * 0000000140434F41: add     rsp, 8
 * 0000000140434F45: call    loc_140434F38
 * 0000000140434F4A: add     rsp, 8
 * 0000000140434F4E: call    loc_140434F41
 * 0000000140434F53: add     rsp, 8
 * 0000000140434F57: call    loc_140434F4A
 * 0000000140434F5C: add     rsp, 8
 * 0000000140434F60: call    loc_140434F53
 * 0000000140434F65: add     rsp, 8
 * 0000000140434F69: call    loc_140434F5C
 * 0000000140434F6E: add     rsp, 8
 * 0000000140434F72: call    loc_140434F65
 * 0000000140434F77: add     rsp, 8
 * 0000000140434F7B: call    loc_140434F6E
 * 0000000140434F80: add     rsp, 8
 * 0000000140434F84: call    loc_140434F77
 * 0000000140434F89: add     rsp, 8
 * 0000000140434F8D: call    loc_140434F80
 * 0000000140434F92: add     rsp, 8
 * 0000000140434F96: call    loc_140434F89
 * 0000000140434F9B: add     rsp, 8
 * 0000000140434F9F: call    loc_140434F92
 * 0000000140434FA4: add     rsp, 8
 * 0000000140434FA8: call    loc_140434F9B
 * 0000000140434FAD: add     rsp, 8
 * 0000000140434FB1: call    loc_140434FA4
 * 0000000140434FB6: add     rsp, 8
 * 0000000140434FBA: call    loc_140434FAD
 * 0000000140434FBF: add     rsp, 8
 * 0000000140434FC3: call    loc_140434FB6
 * 0000000140434FC8: add     rsp, 8
 * 0000000140434FCC: call    loc_140434FBF
 * 0000000140434FD1: add     rsp, 8
 * 0000000140434FD5: call    loc_140434FC8
 * 0000000140434FDA: add     rsp, 8
 * 0000000140434FDE: call    loc_140434FD1
 * 0000000140434FE3: add     rsp, 8
 * 0000000140434FE7: call    loc_140434FDA
 * 0000000140434FEC: add     rsp, 8
 * 0000000140434FF0: call    loc_140434FE3
 * 0000000140434FF5: add     rsp, 8
 * 0000000140434FF9: call    loc_140434FEC
 * 0000000140434FFE: add     rsp, 8
 * 0000000140435002: call    loc_140434FF5
 * 0000000140435007: add     rsp, 8
 * 000000014043500B: call    loc_140434FFE
 * 0000000140435010: add     rsp, 8
 * 0000000140435014: call    loc_140435007
 * 0000000140435019: add     rsp, 8
 * 000000014043501D: call    loc_140435010
 * 0000000140435022: add     rsp, 8
 * 0000000140435026: mov     eax, 0DADAh
 * 000000014043502B: test    byte ptr gs:862h, 8
 * 0000000140435034: jz      short loc_14043503D
 * 0000000140435036: mov     al, 20h ; ' '
 * 0000000140435038: incsspq rax
 * 000000014043503D: lfence
 * 0000000140435040: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140435046: jnb     short loc_140435049
 * 0000000140435048: sti
 * 0000000140435049: add     rsp, 10h
 * 000000014043504D: retn
 */
