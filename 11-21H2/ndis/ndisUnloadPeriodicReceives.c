/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C0157260
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00063A0 (NdisAcquireRWLockWrite.c)
 *     NdisFreeNetBufferListPool @ 0x1C0017450 (NdisFreeNetBufferListPool.c)
 *     NdisFreeRWLock @ 0x1C0024000 (NdisFreeRWLock.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_1C00EC340);
      memset(&Lookaside, 0, 0x100uLL);
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( qword_1C00EC288 )
  {
    ExFreePoolWithTag(qword_1C00EC288, 0);
    qword_1C00EC288 = 0LL;
  }
  if ( qword_1C00EC280 )
  {
    ExFreePoolWithTag(qword_1C00EC280, 0);
    qword_1C00EC280 = 0LL;
  }
  if ( qword_1C00EC278 )
  {
    ExFreePoolWithTag(qword_1C00EC278, 0);
    qword_1C00EC278 = 0LL;
  }
  if ( qword_1C00EC270 )
  {
    ExFreePoolWithTag(qword_1C00EC270, 0);
    qword_1C00EC270 = 0LL;
  }
}
