/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00133DC
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0007760 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000FA10 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010C40 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00126D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C00148F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003C1A4 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0048350 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ?UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0013440 (-UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VI.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 8LL * a3 + 3200);
  v5 = *(unsigned int *)(v4 + 144);
  v6 = *(_QWORD *)(v4 + 136) + 112 * v5;
  *(_DWORD *)(v4 + 144) = (v5 + 1) & (*(_DWORD *)(v4 + 128) - 1);
  return VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v6, a1, a2);
}
