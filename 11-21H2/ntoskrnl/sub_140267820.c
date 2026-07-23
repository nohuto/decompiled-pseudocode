/*
 * XREFs of sub_140267820 @ 0x140267820
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_1402682BC @ 0x1402682BC (sub_1402682BC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140267820()
{
  __int64 result; // rax
  int v1; // ebp
  unsigned int v2; // ebx
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r15
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = 0;
  v2 = 0;
  if ( word_140D05000 )
  {
    do
    {
      v3 = 0;
      v4 = (unsigned __int64)v2 << 9;
      do
      {
        while ( *(_WORD *)(v4 + qword_140C530C8) > 2u )
        {
          v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C530C8 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          sub_1402682BC(&v5->Next + 1, 3LL);
          ExFreePoolWithTag(v6, 0);
        }
        ++v3;
        v4 += 64LL;
      }
      while ( v3 < 8 );
      result = (unsigned __int16)word_140D05000;
      ++v2;
    }
    while ( v2 < (unsigned __int16)word_140D05000 );
    if ( v1 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C53080, &LockHandle);
      dword_140C530C0 -= v1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)dword_140D06B08;
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= result;
            if ( v10 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
  }
  return result;
}
