/*
 * XREFs of ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D018
 * Callers:
 *     NdisAllocateRWLock @ 0x1C001B1C0 (NdisAllocateRWLock.c)
 *     ndisLwmCreateIrpHandler @ 0x1C00CBD40 (ndisLwmCreateIrpHandler.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C0119E6C (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C011A214 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C011B36C (ndisMiniportQueryDeviceProperty.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FD30 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     ndisWdfOpenConfiguration @ 0x1C012B7D4 (ndisWdfOpenConfiguration.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C013D9D0 (NdisMRegisterWdiMiniportDriver.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0140AD0 (-Initialize@NdisPoll@@QEAAJXZ.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0140DB8 (ndisRegisterScatterGatherDmaForGenericObject.c)
 *     BuildServicePath @ 0x1C0140FF0 (BuildServicePath.c)
 *     CreateKModule @ 0x1C0141180 (CreateKModule.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
