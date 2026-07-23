/*
 * XREFs of KiFlushCurrentRsb @ 0x140435900
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     KiUpdateSpeculationControl @ 0x140325E50 (KiUpdateSpeculationControl.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140460BE0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x140460DE0 (KiFlushRsbTarget.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x14056C6B0 (KiHandleMcheck.c)
 *     KeFlushRsb @ 0x140573F24 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140435900
 * Reason: Hex-Rays returned no pseudocode for 0x140435900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140435900: sub     rsp, 8
 * 0000000140435904: pushfq
 * 0000000140435905: cli
 * 0000000140435906: call    loc_140435A19
 * 000000014043590B: add     rsp, 8
 * 000000014043590F: call    loc_140435A22
 * 0000000140435914: add     rsp, 8
 * 0000000140435918: call    loc_14043590B
 * 000000014043591D: add     rsp, 8
 * 0000000140435921: call    loc_140435914
 * 0000000140435926: add     rsp, 8
 * 000000014043592A: call    loc_14043591D
 * 000000014043592F: add     rsp, 8
 * 0000000140435933: call    loc_140435926
 * 0000000140435938: add     rsp, 8
 * 000000014043593C: call    loc_14043592F
 * 0000000140435941: add     rsp, 8
 * 0000000140435945: call    loc_140435938
 * 000000014043594A: add     rsp, 8
 * 000000014043594E: call    loc_140435941
 * 0000000140435953: add     rsp, 8
 * 0000000140435957: call    loc_14043594A
 * 000000014043595C: add     rsp, 8
 * 0000000140435960: call    loc_140435953
 * 0000000140435965: add     rsp, 8
 * 0000000140435969: call    loc_14043595C
 * 000000014043596E: add     rsp, 8
 * 0000000140435972: call    loc_140435965
 * 0000000140435977: add     rsp, 8
 * 000000014043597B: call    loc_14043596E
 * 0000000140435980: add     rsp, 8
 * 0000000140435984: call    loc_140435977
 * 0000000140435989: add     rsp, 8
 * 000000014043598D: call    loc_140435980
 * 0000000140435992: add     rsp, 8
 * 0000000140435996: call    loc_140435989
 * 000000014043599B: add     rsp, 8
 * 000000014043599F: call    loc_140435992
 * 00000001404359A4: add     rsp, 8
 * 00000001404359A8: call    loc_14043599B
 * 00000001404359AD: add     rsp, 8
 * 00000001404359B1: call    loc_1404359A4
 * 00000001404359B6: add     rsp, 8
 * 00000001404359BA: call    loc_1404359AD
 * 00000001404359BF: add     rsp, 8
 * 00000001404359C3: call    loc_1404359B6
 * 00000001404359C8: add     rsp, 8
 * 00000001404359CC: call    loc_1404359BF
 * 00000001404359D1: add     rsp, 8
 * 00000001404359D5: call    loc_1404359C8
 * 00000001404359DA: add     rsp, 8
 * 00000001404359DE: call    loc_1404359D1
 * 00000001404359E3: add     rsp, 8
 * 00000001404359E7: call    loc_1404359DA
 * 00000001404359EC: add     rsp, 8
 * 00000001404359F0: call    loc_1404359E3
 * 00000001404359F5: add     rsp, 8
 * 00000001404359F9: call    loc_1404359EC
 * 00000001404359FE: add     rsp, 8
 * 0000000140435A02: call    loc_1404359F5
 * 0000000140435A07: add     rsp, 8
 * 0000000140435A0B: call    loc_1404359FE
 * 0000000140435A10: add     rsp, 8
 * 0000000140435A14: call    loc_140435A07
 * 0000000140435A19: add     rsp, 8
 * 0000000140435A1D: call    loc_140435A10
 * 0000000140435A22: add     rsp, 8
 * 0000000140435A26: mov     eax, 0DADAh
 * 0000000140435A2B: test    byte ptr gs:862h, 8
 * 0000000140435A34: jz      short loc_140435A3D
 * 0000000140435A36: mov     al, 20h ; ' '
 * 0000000140435A38: incsspq rax
 * 0000000140435A3D: lfence
 * 0000000140435A40: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140435A46: jnb     short loc_140435A49
 * 0000000140435A48: sti
 * 0000000140435A49: add     rsp, 10h
 * 0000000140435A4D: retn
 */
