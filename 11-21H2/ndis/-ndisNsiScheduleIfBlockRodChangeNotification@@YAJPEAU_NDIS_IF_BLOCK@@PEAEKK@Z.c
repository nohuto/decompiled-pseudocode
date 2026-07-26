/*
 * XREFs of ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0025E0C
 * Callers:
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0019740 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0088580 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025EFC (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(
        struct _NDIS_IF_BLOCK *a1,
        unsigned __int8 *a2,
        int a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  struct _NDIS_WORK_ITEM *v10; // rsi
  KIRQL v11; // bl

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 104LL, 1769423950);
  v10 = (struct _NDIS_WORK_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = Pool2;
    *(_QWORD *)(Pool2 + 80) = a1;
    *(_QWORD *)(Pool2 + 8) = &ndisNsiQueuedIfBlockRodChangeNotification;
    *(_QWORD *)(Pool2 + 88) = a2;
    *(_DWORD *)(Pool2 + 96) = a3;
    *(_DWORD *)(Pool2 + 100) = a4;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->RefCountTracker, 0xAu);
    ++a1->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v11);
    ndisScheduleWorkItemInternal(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
