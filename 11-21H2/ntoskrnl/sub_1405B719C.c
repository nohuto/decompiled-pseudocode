/*
 * XREFs of sub_1405B719C @ 0x1405B719C
 * Callers:
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 * Callees:
 *     sub_1402682BC @ 0x1402682BC (sub_1402682BC.c)
 *     sub_14026A5DC @ 0x14026A5DC (sub_14026A5DC.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY sub_1405B719C()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  PSLIST_ENTRY result; // rax
  PVOID v4; // rax
  void *v5; // rbx
  int v6; // edi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0;
  v1 = __rdtsc() >> 4;
  v2 = 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  do
  {
    LODWORD(v1) = v1 & 7;
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C530C8 + ((v2 + (unsigned int)v1) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
    ++v0;
  }
  while ( v0 < 8 );
  if ( (unsigned int)dword_140C530C0 >= 0x80 )
    return 0LL;
  v4 = sub_1402828F0(64, 0x28uLL, 0x6D55694Du);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  if ( !(unsigned int)sub_14026A5DC((__int64)v4 + 8, 3u, 0) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C53080, &LockHandle);
  if ( (unsigned int)dword_140C530C0 >= 0x80 )
    v6 = 1;
  else
    ++dword_140C530C0;
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
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v6 )
  {
    sub_1402682BC((__int64)v5 + 8, 3LL);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)v5;
}
