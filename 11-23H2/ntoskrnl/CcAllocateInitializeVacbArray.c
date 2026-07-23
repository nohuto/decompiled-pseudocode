/*
 * XREFs of CcAllocateInitializeVacbArray @ 0x1403C3750
 * Callers:
 *     CcGetVirtualAddress @ 0x140265080 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x1403A09F0 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

char *CcAllocateInitializeVacbArray()
{
  KIRQL v0; // al
  char *PoolWithTag; // rax
  char *v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  KIRQL v6; // al

  v0 = KeAcquireQueuedSpinLock(4uLL);
  if ( (unsigned int)CcVacbArraysAllocated >= 0x500 )
  {
    KeReleaseQueuedSpinLock(4uLL, v0);
    return 0LL;
  }
  else
  {
    ++CcVacbArraysAllocated;
    KeReleaseQueuedSpinLock(4uLL, v0);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x20000uLL, 0x61566343u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = PoolWithTag + 48;
      v4 = 3276LL;
      do
      {
        *v3 = v2;
        v3 += 5;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v6 = KeAcquireQueuedSpinLock(4uLL);
      --CcVacbArraysAllocated;
      KeReleaseQueuedSpinLock(4uLL, v6);
    }
    return v2;
  }
}
