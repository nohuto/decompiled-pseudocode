/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x14060AE7C
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x14060AABC (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryUpgradeResource @ 0x14061005C (ExpTryUpgradeResource.c)
 */

char ExpTryConvertSharedToExclusiveLite()
{
  __int64 CurrentThread; // rbx
  char v1; // di
  unsigned int v2; // ecx
  ULONG_PTR *v3; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = (__int64)KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&CmpRegistryLock + 12, &LockHandle);
  v1 = ExpTryUpgradeResource(&CmpRegistryLock);
  if ( v1 )
  {
    v2 = (CurrentThread & 3) != 0 ? 0 : *(unsigned __int8 *)(CurrentThread + 1120);
    v3 = ExpFindCurrentThread((__int64)&CmpRegistryLock, CurrentThread, (__int64)&LockHandle, 0, 0, v2);
    if ( v3 != &CmpRegistryLock + 6 )
    {
      *((_OWORD *)&CmpRegistryLock + 3) = *(_OWORD *)v3;
      *((_DWORD *)&CmpRegistryLock + 14) = _mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&CmpRegistryLock + 3), 8)) & 7 | 8;
      *(_OWORD *)v3 = 0LL;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v1;
}
