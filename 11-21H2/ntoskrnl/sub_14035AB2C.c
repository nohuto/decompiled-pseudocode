/*
 * XREFs of sub_14035AB2C @ 0x14035AB2C
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_14035AA74 @ 0x14035AA74 (sub_14035AA74.c)
 *     sub_14074B82C @ 0x14074B82C (sub_14074B82C.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407D5884 @ 0x1407D5884 (sub_1407D5884.c)
 *     sub_1407F7428 @ 0x1407F7428 (sub_1407F7428.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035AB2C(_QWORD *a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  char v7; // r14
  unsigned int v9; // edx
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // r13
  char v20; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  unsigned __int64 v25; // rdi
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  __int64 v28; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = a1[6];
  v28 = a1[4];
  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 >= *(_DWORD *)(v4 + 8) )
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
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !a4 || (v20 = 1, a3) )
      v20 = 0;
    result = sub_1402F6750(v28, a1[5], -(__int64)(a2 != 0), 0LL, v20);
    if ( !(_DWORD)result )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
      if ( a2 )
        ++*(_DWORD *)(v4 + 20);
      else
        ++*(_DWORD *)(v4 + 16);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)dword_140D06B08;
      v25 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = *((_QWORD *)v26 + 4375);
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = ((unsigned int)result & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= result;
            if ( v17 )
              result = sub_140418E4C(v26);
          }
        }
      }
      __writecr8(v25);
    }
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      return sub_1402AFC00((ULONG_PTR)(a1 + 44));
    }
  }
  else
  {
    v10 = *(_QWORD **)(v4 + 32);
    if ( v10 )
      *(_QWORD *)(v4 + 32) = *v10;
    v11 = v10[1];
    *(_DWORD *)(v4 + 12) = v9 + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(v14);
          v7 = a4;
        }
      }
    }
    __writecr8(v12);
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      sub_1402AFC00((ULONG_PTR)(a1 + 44));
    }
    return sub_1402F6750(v28, a1[5], -(__int64)(a2 != 0), v11, v7);
  }
  return result;
}
