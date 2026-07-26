/*
 * XREFs of ?ndisWaitWakeIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0082D20
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisWaitWakeIoCompletion(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  bool v3; // zf
  KIRQL v5; // dl
  bool WaitWakeCancelInProgress; // cf
  unsigned int v7; // ebx
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2->PendingReturned == 0;
  NewIrql = 0;
  if ( !v3 )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a3, &NewIrql);
  v5 = NewIrql;
  WaitWakeCancelInProgress = a3->WaitWakeCancelInProgress;
  a3->WaitWakeIoCompletionRoutineRan = 1;
  a3->MiniportThread = 0LL;
  v7 = WaitWakeCancelInProgress ? 0xC0000016 : 0;
  KeReleaseSpinLock(&a3->Lock, v5);
  return v7;
}
