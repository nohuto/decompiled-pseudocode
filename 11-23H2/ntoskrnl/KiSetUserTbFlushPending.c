/*
 * XREFs of KiSetUserTbFlushPending @ 0x1404204F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x140334C80 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140339FF0 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x1403571C0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x14038CE00 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x14038CF48 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403BE500 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140A9FAA0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
