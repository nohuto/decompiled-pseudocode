/*
 * XREFs of ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFReturnNetBufferLists @ 0x1C0006A00 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0007F50 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000ABC0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000DB60 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015B40 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00160EC (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C005FD70 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00B03F0 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(struct _NDIS_FILTER_BLOCK *a1)
{
  __int128 v2; // xmm0
  KIRQL v3; // dl
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  struct _NET_BUFFER_LIST *v6; // rbx
  char *v7; // rbx
  char *v8; // rax
  void *v9; // r14
  struct _KEVENT *v10; // rdi
  struct _NDIS_STATUS_INDICATION *v11; // rdx
  KIRQL v12; // dl
  char *v13; // r14
  char *v14; // rbx
  struct _KEVENT *v15; // rdi
  PNET_BUFFER_LIST v16; // rdi
  char *v17; // rax
  struct _KEVENT *v18; // rbx
  struct _NET_BUFFER_LIST *v19; // rbx
  struct _NET_BUFFER_LIST *v20; // rbx
  char v21; // [rsp+30h] [rbp-39h]
  _QWORD Parameter[3]; // [rsp+40h] [rbp-29h] BYREF
  PNET_BUFFER_LIST v23; // [rsp+58h] [rbp-11h]
  __int128 v24; // [rsp+60h] [rbp-9h]
  PVOID P[2]; // [rsp+70h] [rbp+7h]
  PNET_BUFFER_LIST NetBufferList[2]; // [rsp+80h] [rbp+17h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+90h] [rbp+27h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF

  NewIrql = 0;
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  v2 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest;
  v3 = NewIrql;
  v4 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents;
  a1->StackExpansionFallback.WorkItemQueued = 0;
  v21 = v2;
  v24 = v2;
  v5 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications;
  *(_OWORD *)NetBufferList = v4;
  *(_OWORD *)P = v5;
  *(_QWORD *)&v5 = a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents = 0LL;
  a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete = 0LL;
  a1->LockThread = 0LL;
  NetBufferLists = (PNET_BUFFER_LIST)v5;
  KeReleaseSpinLock(&a1->Lock, v3);
  Parameter[1] = a1;
  if ( v21 )
    ndisFDoOidRequestInternal(a1);
  if ( BYTE1(v24) )
    ndisFOidRequestCompleteInternal(a1);
  v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)&v24 + 1);
  if ( *((_QWORD *)&v24 + 1) )
  {
    do
    {
      v23 = v6;
      v6 = (struct _NET_BUFFER_LIST *)v6->ProtocolReserved[1];
      ndisFDirectOidRequestCompleteInternal(Parameter);
    }
    while ( v6 );
    *((_QWORD *)&v24 + 1) = 0LL;
  }
  v7 = (char *)P[0];
  if ( P[0] )
  {
    do
    {
      v8 = v7 + 80;
      v9 = v7;
      v10 = (struct _KEVENT *)*((_QWORD *)v7 + 11);
      v11 = (struct _NDIS_STATUS_INDICATION *)v7;
      v7 = (char *)*((_QWORD *)v7 + 10);
      *((_QWORD *)v8 + 1) = 0LL;
      ndisFIndicateStatusInternal(a1, v11);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
      }
      else
      {
        ndisDereferenceRef(&a1->PnPRef.SpinLock, 1u);
        ExFreePoolWithTag(v9, 0);
      }
    }
    while ( v7 );
    P[0] = 0LL;
  }
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->StackExpansionFallback.PendingWork.StatusIndications )
    a1->StatusIndicationsQueued = 0;
  v12 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  v13 = (char *)P[1];
  while ( v13 )
  {
    v14 = v13 + 32;
    v23 = (PNET_BUFFER_LIST)v13;
    v15 = (struct _KEVENT *)*((_QWORD *)v13 + 4);
    v13 = (char *)*((_QWORD *)v13 + 7);
    *(_QWORD *)v14 = 0LL;
    ndisFNetPnPEventInternal(Parameter);
    *((_DWORD *)v14 + 2) = Parameter[0];
    KeSetEvent(v15, 0, 0);
  }
  v16 = NetBufferList[0];
  while ( v16 )
  {
    v17 = (char *)&v16->ParentNetBufferList + 4;
    v23 = v16;
    v18 = *(struct _KEVENT **)((char *)&v16->NdisPoolHandle + 4);
    v16 = *(_NET_BUFFER_LIST **)((char *)&v16->ParentNetBufferList + 4);
    *((_QWORD *)v17 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter);
    KeSetEvent(v18, 0, 0);
  }
  v19 = NetBufferList[1];
  if ( NetBufferList[1] )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(NetBufferList[1], 160LL, (unsigned __int64)a1->NblTracker, 0x91u, 0);
    NdisFSendNetBufferListsComplete(a1, v19, 0);
  }
  v20 = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(NetBufferLists, 160LL, (unsigned __int64)a1->NblTracker, 0x8Bu, 0);
    NdisFReturnNetBufferLists(a1, v20, 0);
  }
  ndisDereferenceFilter(a1, 1u);
}
