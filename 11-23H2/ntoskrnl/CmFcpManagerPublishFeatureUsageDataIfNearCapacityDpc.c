/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x140419DB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14037459C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedAnd((volatile signed __int32 *)DeferredContext + 437, 0xFFFFFFFD);
  _m_prefetchw(DeferredContext + 1748);
  if ( (_InterlockedOr((volatile signed __int32 *)DeferredContext + 437, 1u) & 1) == 0 )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)DeferredContext + 51);
}
