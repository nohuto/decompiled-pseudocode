/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x1405102C0
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050EF60 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x14050F020 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3Passive @ 0x140510370 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140512FF0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x1405137E0 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140514F7C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     HalpContinueProcessingWaitQueue @ 0x14050FCA4 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140510314 (IoFreeAdapterChannelV3Internal.c)
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
