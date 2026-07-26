/*
 * XREFs of NdisReleaseReadWriteLock @ 0x1C0028E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00AC148 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  __int64 v2; // rax
  _NDIS_RW_LOCK_REFCOUNT *v4; // rax
  KIRQL OldIrql; // cl

  switch ( LockState->LockState )
  {
    case 3u:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(&Lock->SpinLock);
      }
      else
      {
        LODWORD(v2) = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors <= 0x40 )
          v4 = &Lock->RefCount[v2];
        else
          v4 = (_NDIS_RW_LOCK_REFCOUNT *)((char *)Lock->RefCount + 4 * v2);
        --v4->RefCount;
      }
      OldIrql = LockState->OldIrql;
      LockState->LockState = 255;
      if ( OldIrql < 2u )
        KeLowerIrql(OldIrql);
      break;
    case 4u:
      LockState->LockState = 255;
      Lock->Context = 0LL;
      KeReleaseSpinLock(&Lock->SpinLock, LockState->OldIrql);
      break;
    case 5u:
      Lock->Context = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&Lock->16);
      LockState->LockState = 255;
      break;
  }
}
