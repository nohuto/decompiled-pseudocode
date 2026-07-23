/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x140510750
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050F3F0 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x14050F4B0 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3Passive @ 0x140510800 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140513480 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140513C70 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14051540C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     HalpContinueProcessingWaitQueue @ 0x140510134 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1405107A4 (IoFreeAdapterChannelV3Internal.c)
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
