/*
 * XREFs of ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006637C
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisFOidRequestComplete @ 0x1C000F660 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C00158E0 (NdisFNetPnPEvent.c)
 *     NdisFIndicateStatus @ 0x1C0022C50 (NdisFIndicateStatus.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C0025CE0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0067A10 (NdisFDevicePnPEventNotify.c)
 *     NdisFDirectOidRequestComplete @ 0x1C00B5E60 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00228F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(struct _NDIS_FILTER_BLOCK *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1->StackExpansionFallback.WorkItemQueued )
  {
    v2 = 0;
    ndisReferenceRefEx(&a1->Ref.SpinLock, 1u, (enum _NDIS_REFERENCE_STATUS *)&v2);
    a1->StackExpansionFallback.WorkItemQueued = 1;
    ExQueueWorkItem(&a1->StackExpansionFallback.WorkItem, NormalWorkQueue);
  }
}
