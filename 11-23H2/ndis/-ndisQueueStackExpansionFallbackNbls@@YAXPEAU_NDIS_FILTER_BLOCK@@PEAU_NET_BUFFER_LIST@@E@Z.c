/*
 * XREFs of ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0004520 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0004B10 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012040 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0013054 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0013430 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025150 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032620 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0037100 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003DA66 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E330 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC50 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006637C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisQueueStackExpansionFallbackNbls(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  _QWORD **v6; // rcx
  _QWORD *i; // rdx
  KIRQL v8; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, a1->NblTracker, 0xA0uLL, 1LL, 0);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  v6 = (_QWORD **)((char *)&a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete
                 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL));
  for ( i = *v6; i; i = (_QWORD *)*i )
    v6 = (_QWORD **)i;
  *v6 = &a2->Link.Alignment;
  ndisQueueStackExpansionFallbackWorkItem(a1);
  v8 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
}
