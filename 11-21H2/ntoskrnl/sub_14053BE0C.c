/*
 * XREFs of sub_14053BE0C @ 0x14053BE0C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140538C04 @ 0x140538C04 (sub_140538C04.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053C304 @ 0x14053C304 (sub_14053C304.c)
 *     sub_14053C908 @ 0x14053C908 (sub_14053C908.c)
 *     sub_14053CFF4 @ 0x14053CFF4 (sub_14053CFF4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14053BE0C(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rax
  PVOID PoolWithTag; // r14
  PVOID v9; // rax
  void *v10; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 504) + 8LL);
  v6 = sub_14053C304(a1, v5);
  if ( v6 )
  {
    *(_QWORD *)(a2 + 592) = v6;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 288LL * (unsigned int)dword_140C097B4, 0x754E6343u);
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x640uLL, 0x6D566343u);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)sub_14053C908(a1, v9, PoolWithTag, a2) )
      {
        if ( !(unsigned __int8)sub_14053CFF4(a1, *(_QWORD *)(a2 + 504), v10) )
        {
          v4 = v10;
          v10 = (void *)sub_14053C304(a1, v5);
        }
        *(_QWORD *)(a2 + 592) = v10;
        if ( v4 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
          sub_140538C04((__int64)v4);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = *((_QWORD *)CurrentPrcb + 4375);
                v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
                *(_DWORD *)(v14 + 20) &= v15;
                if ( v16 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          sub_14053BFB8(v4);
        }
        return 0LL;
      }
      sub_14053BFB8(v10);
      ExFreePoolWithTag(PoolWithTag, 0x754E6343u);
    }
  }
  return 3221225626LL;
}
