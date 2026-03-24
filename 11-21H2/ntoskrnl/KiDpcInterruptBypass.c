/*
 * XREFs of KiDpcInterruptBypass @ 0x1404281E0
 * Callers:
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1404281E0
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
 * 0000000140428200: call    KiDispatchInterrupt
 * 0000000140428205: cli
 * 0000000140428206: add     rsp, 8
 * 000000014042820A: retn
 */
