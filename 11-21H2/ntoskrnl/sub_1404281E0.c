/*
 * XREFs of sub_1404281E0 @ 0x1404281E0
 * Callers:
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 * Callees:
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404281E0 @ 0x1404281E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404281E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404281E0: sub     rsp, 8
 * 00000001404281E4: mov     ecx, 2
 * 00000001404281E9: mov     cr8, rcx
 * 00000001404281ED: sti
 * 00000001404281EE: mov     al, [rbp-57h]
 * 00000001404281F1: mov     rcx, gs:188h
 * 00000001404281FA: mov     [rcx+186h], al
 * 0000000140428200: call    sub_140428B10
 * 0000000140428205: cli
 * 0000000140428206: add     rsp, 8
 * 000000014042820A: retn
 */
