/*
 * XREFs of ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00AC094
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C0028270 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x1C003ECE4 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00ABF90 (-IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

__int64 __fastcall ndisAcquireWriteLockSharedRefCnt(struct _NDIS_RW_LOCK *a1)
{
  unsigned int v2; // edi
  KSPIN_LOCK *v3; // rcx
  int LockAlreadyHeldByCurrentThread; // ebp

  a1->RefCount[0].cacheLine[12] = 1;
  v2 = 0;
  LockAlreadyHeldByCurrentThread = IsReadLockAlreadyHeldByCurrentThread(a1);
  if ( LockAlreadyHeldByCurrentThread )
  {
    while ( 1 )
    {
      while ( a1->RefCountEx[2] != 1 )
        _mm_pause();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&a1->16);
      if ( a1->RefCountEx[2] == 1 )
        break;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1->16);
    }
    a1->Context = KeGetCurrentThread();
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(v3);
    a1->Context = KeGetCurrentThread();
  }
  a1->RefCount[0].cacheLine[12] = 0;
  LOBYTE(v2) = LockAlreadyHeldByCurrentThread == 0;
  return v2;
}
