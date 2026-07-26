/*
 * XREFs of ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B42F0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025EFC (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

char __fastcall ndisIfScheduleTimestampCapabilityChangeNotification(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL a2)
{
  char v4; // bl
  struct _NDIS_IF_BLOCK *v5; // rsi
  struct _NDIS_WORK_ITEM *Pool2; // rax
  struct _NDIS_WORK_ITEM *v7; // r14
  KIRQL v8; // bl
  unsigned __int8 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ndisMReferenceIfBlock(a1, 0x1Au);
  if ( v5 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, a2);
    Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
    v7 = Pool2;
    if ( Pool2 )
    {
      Pool2->Context = v5;
      Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisNsiQueuedTimestampingChangeNotification;
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5->RefCountTracker, 0xAu);
      ++v5->Ref;
      KeReleaseSpinLock(&ndisIfListLock, v8);
      ndisScheduleWorkItemInternal(v7);
      v4 = 1;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v10);
    ndisMDereferenceIfBlock(a1, MPIFREF_TIMESTAMPING);
  }
  return v4;
}
