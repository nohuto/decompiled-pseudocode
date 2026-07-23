/*
 * XREFs of sub_140640A9C @ 0x140640A9C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140640A9C()
{
  __int64 v0; // r12
  unsigned __int64 v1; // rdi
  unsigned __int8 v2; // al
  struct _KPRCB *v3; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // edi
  _QWORD *PoolWithTag; // rsi
  _QWORD *v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  int v17; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v21; // r8
  int v22; // eax
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
  while ( 1 )
  {
    v15 = dword_140C11484;
    if ( (_DWORD)dword_140C11484 != dword_140C11488 )
      break;
    if ( (_DWORD)dword_140C11484 == dword_140C11480 )
    {
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
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v6 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v6 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v1 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v2 = KeGetCurrentIrql();
        if ( v2 <= 0xFu && LockHandle.OldIrql <= 0xFu && v2 >= 2u )
        {
          v3 = KeGetCurrentPrcb();
          v4 = *((_QWORD *)v3 + 4375);
          v5 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
          *(_DWORD *)(v4 + 20) &= v5;
          if ( v6 )
            sub_140418E4C((__int64)v3);
        }
      }
    }
    __writecr8(v1);
    v7 = v15 + 8;
    if ( v15 + 8 >= v15 )
    {
      if ( v7 > dword_140C11480 )
        v7 = dword_140C11480;
    }
    else
    {
      v7 = dword_140C11480;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v7, 0x73417845u);
    if ( !PoolWithTag )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
    if ( v15 == (_DWORD)dword_140C11484 )
    {
      v9 = qword_140C11490;
      if ( qword_140C11490 )
        memmove(PoolWithTag, qword_140C11490, 16LL * v15);
      memset(&PoolWithTag[2 * v15], 0, 16LL * (v7 - v15));
      if ( !qword_140C11490 )
      {
        PoolWithTag[1] = 1LL;
        *PoolWithTag = -1LL;
        ++dword_140C11488;
      }
      qword_140C11490 = PoolWithTag;
      PoolWithTag = v9;
      LODWORD(dword_140C11484) = v7;
      if ( !v9 )
        continue;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = *((_QWORD *)v12 + 4375);
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v6 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v6 )
            sub_140418E4C((__int64)v12);
        }
      }
    }
    __writecr8(v10);
    sub_140348B40((ULONG_PTR)PoolWithTag);
    KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
  }
  v16 = qword_140C11490;
  v17 = 0;
  if ( (_DWORD)dword_140C11484 )
  {
    while ( *v16 )
    {
      v16 += 2;
      if ( ++v17 >= (unsigned int)dword_140C11484 )
        goto LABEL_44;
    }
    v16[1] = 1LL;
    *v16 = v0;
  }
LABEL_44:
  ++dword_140C11488;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v6 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v28;
        if ( v6 )
          sub_140418E4C((__int64)v26);
      }
    }
  }
  __writecr8(v24);
  return (unsigned int)(v17 + 1);
}
