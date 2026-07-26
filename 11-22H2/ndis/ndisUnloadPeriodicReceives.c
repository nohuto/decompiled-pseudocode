/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C0164330
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0003310 (NdisAcquireRWLockWrite.c)
 *     NdisFreeNetBufferListPool @ 0x1C0015A40 (NdisFreeNetBufferListPool.c)
 *     NdisFreeRWLock @ 0x1C0022850 (NdisFreeRWLock.c)
 *     memset @ 0x1C0038580 (memset.c)
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
      ExDeleteNPagedLookasideList(&stru_1C00F5300);
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
  if ( qword_1C00F5248 )
  {
    ExFreePoolWithTag(qword_1C00F5248, 0);
    qword_1C00F5248 = 0LL;
  }
  if ( qword_1C00F5240 )
  {
    ExFreePoolWithTag(qword_1C00F5240, 0);
    qword_1C00F5240 = 0LL;
  }
  if ( qword_1C00F5238 )
  {
    ExFreePoolWithTag(qword_1C00F5238, 0);
    qword_1C00F5238 = 0LL;
  }
  if ( qword_1C00F5230 )
  {
    ExFreePoolWithTag(qword_1C00F5230, 0);
    qword_1C00F5230 = 0LL;
  }
}
