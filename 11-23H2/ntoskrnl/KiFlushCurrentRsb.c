/*
 * XREFs of KiFlushCurrentRsb @ 0x140435500
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     KiUpdateSpeculationControl @ 0x140325BC0 (KiUpdateSpeculationControl.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x1404607E0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x1404609E0 (KiFlushRsbTarget.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x14056BFF0 (KiHandleMcheck.c)
 *     KeFlushRsb @ 0x1405739E4 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140435500
 * Reason: Hex-Rays returned no pseudocode for 0x140435500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140435500: sub     rsp, 8
 * 0000000140435504: pushfq
 * 0000000140435505: cli
 * 0000000140435506: call    loc_140435619
 * 000000014043550B: add     rsp, 8
 * 000000014043550F: call    loc_140435622
 * 0000000140435514: add     rsp, 8
 * 0000000140435518: call    loc_14043550B
 * 000000014043551D: add     rsp, 8
 * 0000000140435521: call    loc_140435514
 * 0000000140435526: add     rsp, 8
 * 000000014043552A: call    loc_14043551D
 * 000000014043552F: add     rsp, 8
 * 0000000140435533: call    loc_140435526
 * 0000000140435538: add     rsp, 8
 * 000000014043553C: call    loc_14043552F
 * 0000000140435541: add     rsp, 8
 * 0000000140435545: call    loc_140435538
 * 000000014043554A: add     rsp, 8
 * 000000014043554E: call    loc_140435541
 * 0000000140435553: add     rsp, 8
 * 0000000140435557: call    loc_14043554A
 * 000000014043555C: add     rsp, 8
 * 0000000140435560: call    loc_140435553
 * 0000000140435565: add     rsp, 8
 * 0000000140435569: call    loc_14043555C
 * 000000014043556E: add     rsp, 8
 * 0000000140435572: call    loc_140435565
 * 0000000140435577: add     rsp, 8
 * 000000014043557B: call    loc_14043556E
 * 0000000140435580: add     rsp, 8
 * 0000000140435584: call    loc_140435577
 * 0000000140435589: add     rsp, 8
 * 000000014043558D: call    loc_140435580
 * 0000000140435592: add     rsp, 8
 * 0000000140435596: call    loc_140435589
 * 000000014043559B: add     rsp, 8
 * 000000014043559F: call    loc_140435592
 * 00000001404355A4: add     rsp, 8
 * 00000001404355A8: call    loc_14043559B
 * 00000001404355AD: add     rsp, 8
 * 00000001404355B1: call    loc_1404355A4
 * 00000001404355B6: add     rsp, 8
 * 00000001404355BA: call    loc_1404355AD
 * 00000001404355BF: add     rsp, 8
 * 00000001404355C3: call    loc_1404355B6
 * 00000001404355C8: add     rsp, 8
 * 00000001404355CC: call    loc_1404355BF
 * 00000001404355D1: add     rsp, 8
 * 00000001404355D5: call    loc_1404355C8
 * 00000001404355DA: add     rsp, 8
 * 00000001404355DE: call    loc_1404355D1
 * 00000001404355E3: add     rsp, 8
 * 00000001404355E7: call    loc_1404355DA
 * 00000001404355EC: add     rsp, 8
 * 00000001404355F0: call    loc_1404355E3
 * 00000001404355F5: add     rsp, 8
 * 00000001404355F9: call    loc_1404355EC
 * 00000001404355FE: add     rsp, 8
 * 0000000140435602: call    loc_1404355F5
 * 0000000140435607: add     rsp, 8
 * 000000014043560B: call    loc_1404355FE
 * 0000000140435610: add     rsp, 8
 * 0000000140435614: call    loc_140435607
 * 0000000140435619: add     rsp, 8
 * 000000014043561D: call    loc_140435610
 * 0000000140435622: add     rsp, 8
 * 0000000140435626: mov     eax, 0DADAh
 * 000000014043562B: test    byte ptr gs:862h, 8
 * 0000000140435634: jz      short loc_14043563D
 * 0000000140435636: mov     al, 20h ; ' '
 * 0000000140435638: incsspq rax
 * 000000014043563D: lfence
 * 0000000140435640: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140435646: jnb     short loc_140435649
 * 0000000140435648: sti
 * 0000000140435649: add     rsp, 10h
 * 000000014043564D: retn
 */
