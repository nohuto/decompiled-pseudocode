/*
 * XREFs of KiSetUserTbFlushPending @ 0x140420160
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x1403349F0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140339D60 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140357020 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x14038CC20 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x14038CD68 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403BE320 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140A9FC30 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
