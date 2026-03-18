/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x140510200
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050EEA0 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x14050EF60 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3Passive @ 0x1405102B0 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140512F30 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140513720 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140514EBC (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     HalpContinueProcessingWaitQueue @ 0x14050FBE4 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140510254 (IoFreeAdapterChannelV3Internal.c)
 */

void __fastcall IoFreeAdapterChannelV3(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 520);
  if ( KeGetCurrentIrql() == 2 && v2 )
  {
    if ( *(_BYTE *)(a1 + 224) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 480), CriticalWorkQueue);
  }
  else
  {
    IoFreeAdapterChannelV3Internal(a1);
    HalpContinueProcessingWaitQueue(a1);
  }
}
