/*
 * XREFs of IoFreeAdapterChannel @ 0x140456A00
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x140457ED8 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404584D6 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalCancelAdapterChannel @ 0x140511600 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1405116C0 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1405157F0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140515FD0 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140517830 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV2 @ 0x1404585B4 (IoFreeAdapterChannelV2.c)
 *     IoFreeAdapterChannelV3 @ 0x1405127BC (IoFreeAdapterChannelV3.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
