/*
 * XREFs of ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C
 * Callers:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00097C0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisFOidRequestComplete @ 0x1C000FC10 (NdisFOidRequestComplete.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0015D48 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisFNetPnPEvent @ 0x1C0015F40 (NdisFNetPnPEvent.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001B994 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisFIndicateStatus @ 0x1C0024440 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00629F0 (NdisFDevicePnPEventNotify.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006CDB8 (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009906C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1C009F6B4 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00AEF10 (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C00AF0B0 (ndisFCancelDirectOidRequestInternal.c)
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1C00AF7E0 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C00B0A70 (NdisFDirectOidRequestComplete.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C013BA20 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C013D594 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_FILTER_SPIN_LOCK(struct _NDIS_FILTER_BLOCK *a1, unsigned __int8 *a2)
{
  *a2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
}
