/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14034C334
 * Callers:
 *     CcCopyReadEx @ 0x140261D60 (CcCopyReadEx.c)
 *     CcApplyLowIoPriorityToThread @ 0x14029BBA8 (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x1402BDD28 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D6E4 (CcBoostLowPriorityWorkerThread.c)
 *     CcMapAndCopyFromCache @ 0x1406F5C10 (CcMapAndCopyFromCache.c)
 *     CcUnmapVacb @ 0x140721E10 (CcUnmapVacb.c)
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v12);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v12);
  OldIrql = v12.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v12.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
