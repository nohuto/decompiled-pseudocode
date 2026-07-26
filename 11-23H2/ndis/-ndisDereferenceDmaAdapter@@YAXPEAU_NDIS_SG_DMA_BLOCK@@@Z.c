/*
 * XREFs of ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4
 * Callers:
 *     ndisFreeSharedMemoryInternal @ 0x1C005DAF8 (ndisFreeSharedMemoryInternal.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005DD00 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F62C (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00CD320 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     NdisFreeSharedMemory @ 0x1C00CE150 (NdisFreeSharedMemory.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00CE410 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135BE0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136198 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D48 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     NdisMAllocateMapRegisters @ 0x1C0153F90 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C01545C0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C01546D0 (NdisMFreeMapRegisters.c)
 * Callees:
 *     ndisDereferenceDmaAdapterForGenericObject @ 0x1C005D9E0 (ndisDereferenceDmaAdapterForGenericObject.c)
 *     ndisDereferenceDmaAdapterForMiniport @ 0x1C005DA30 (ndisDereferenceDmaAdapterForMiniport.c)
 */

void __fastcall ndisDereferenceDmaAdapter(struct _NDIS_SG_DMA_BLOCK *a1)
{
  if ( a1->Miniport )
  {
    ndisDereferenceDmaAdapterForMiniport(a1);
  }
  else if ( a1->GenericObject )
  {
    ndisDereferenceDmaAdapterForGenericObject(a1);
  }
}
