/*
 * XREFs of sub_1402D1304 @ 0x1402D1304
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     sub_14025E4A4 @ 0x14025E4A4 (sub_14025E4A4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402D1708 @ 0x1402D1708 (sub_1402D1708.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403DC824 @ 0x1403DC824 (sub_1403DC824.c)
 *     sub_1403DDD24 @ 0x1403DDD24 (sub_1403DDD24.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407460A4 @ 0x1407460A4 (sub_1407460A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1402D1304(_QWORD *a1, __int64 **a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 *i; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *PoolWithTag; // rax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rax
  __int64 *j; // rax
  __int64 *v23; // r14
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  char v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v4 = a1[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = a1[1];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)qword_140C49B30; i != &qword_140C49B30; i = (__int64 *)*i )
  {
    v7 = i - 2;
    if ( *(i - 1) == v5 )
    {
      ++*((_DWORD *)v7 + 1);
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
            v19 = *((_QWORD *)CurrentPrcb + 4375);
            v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            *(_DWORD *)(v19 + 20) &= v20;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
LABEL_63:
      *a2 = v7;
      return 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(v10);
      }
    }
  }
  __writecr8(v8);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xA20uLL, 0x6D566343u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ++*((_DWORD *)PoolWithTag + 1);
  PoolWithTag[1] = v5;
  *(_DWORD *)PoolWithTag = 169870072;
  v21 = PoolWithTag + 26;
  v21[1] = v21;
  *v21 = v21;
  *((_DWORD *)v7 + 51) = _InterlockedIncrement(&dword_140CE1C08);
  memset(v7 + 30, 0, 0x498uLL);
  if ( *(_DWORD *)(v5 + 72) != 20 && !v7[28] && !v7[29] )
    sub_1407460A4(a1, v7 + 28);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( j = (__int64 *)qword_140C49B30; ; j = (__int64 *)*j )
  {
    if ( j == &qword_140C49B30 )
    {
      v24 = (_QWORD *)qword_140C49B38;
      v25 = v7 + 2;
      if ( *(__int64 **)qword_140C49B38 != &qword_140C49B30 )
        __fastfail(3u);
      *v25 = &qword_140C49B30;
      v7[3] = (__int64)v24;
      *v24 = v25;
      qword_140C49B38 = (__int64)(v7 + 2);
      _InterlockedIncrement64(&qword_140C498C8);
      if ( *(_DWORD *)(v7[1] + 72) == 20 || v7[28] || v7[29] )
      {
        v31 = 0;
      }
      else
      {
        ++*((_DWORD *)v7 + 1);
        v31 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v35 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v34 = *((_QWORD *)v37 + 4375);
            v33 = (unsigned int)LockHandle.OldIrql + 1;
            v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v38 & *(_DWORD *)(v34 + 20)) == 0;
            v32 = (unsigned int)v38 & *(_DWORD *)(v34 + 20);
            *(_DWORD *)(v34 + 20) = v32;
            if ( v13 )
              sub_140418E4C(v37);
          }
        }
      }
      __writecr8(v35);
      if ( v31 )
        sub_14025E4A4(v7, a1);
      if ( !dword_140C54C5C )
        sub_1403DC824(v33, v32);
      if ( !byte_140C54C94 )
        byte_140C54C94 = (int)sub_1403DDD24(
                                qword_1400133F8,
                                v32,
                                &unk_140C03820,
                                &unk_140C03820,
                                LockHandle.LockQueue.Next,
                                LockHandle.LockQueue.Lock) >= 0;
      if ( (dword_140C49C0C & 1) != 0 )
        sub_1402D1708(&unk_140C03820, qword_140014F30, v34, v7 + 28);
      goto LABEL_63;
    }
    v23 = j - 2;
    if ( *(j - 1) == v5 )
      break;
  }
  ++*((_DWORD *)v23 + 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v26 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = *((_QWORD *)v28 + 4375);
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
        *(_DWORD *)(v29 + 20) &= v30;
        if ( v13 )
          sub_140418E4C(v28);
      }
    }
  }
  __writecr8(v26);
  ExFreePoolWithTag(v7, 0x6D566343u);
  *a2 = v23;
  return 0LL;
}
