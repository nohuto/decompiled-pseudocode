/*
 * XREFs of sub_1409EC2D0 @ 0x1409EC2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1409EC2D0(__int64 a1, unsigned int *a2)
{
  if ( ExAcquireRundownProtectionCacheAwareEx(
         *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
         1u) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)a2 + 135) + 32LL), NormalWorkQueue);
  }
}
