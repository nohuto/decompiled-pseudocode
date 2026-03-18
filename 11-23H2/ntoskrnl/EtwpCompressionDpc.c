/*
 * XREFs of EtwpCompressionDpc @ 0x140602600
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140227B88 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321E00 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 276), DelayedWorkQueue);
}
