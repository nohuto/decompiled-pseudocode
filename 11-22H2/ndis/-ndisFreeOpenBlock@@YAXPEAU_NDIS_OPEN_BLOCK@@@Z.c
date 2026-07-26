/*
 * XREFs of ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00151FC
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FD30 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C00215E0 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0022890 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __fastcall ndisFreeOpenBlock(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v2 = (void *)P[87];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[87] = 0LL;
  }
  v3 = (void *)P[88];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    P[88] = 0LL;
  }
  NdisNblTrackerDeregisterComponent(P[73]);
  NdisFreeRefCount(P[74]);
  v4 = P[90];
  P[74] = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)P[60];
  P[90] = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    P[60] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
