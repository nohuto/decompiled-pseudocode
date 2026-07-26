/*
 * XREFs of NdisMInitializeScatterGatherDma @ 0x1C00C5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00CD300 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 */

NDIS_STATUS __stdcall NdisMInitializeScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        BOOLEAN Dma64BitAddresses,
        ULONG MaximumPhysicalMapping)
{
  return ndisMInitializeScatterGatherDmaInternal(
           (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
           *((PDEVICE_OBJECT *)MiniportAdapterHandle + 479),
           Dma64BitAddresses,
           0,
           2u,
           MaximumPhysicalMapping);
}
