/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x1406177E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(DeferredContext + 424));
}
