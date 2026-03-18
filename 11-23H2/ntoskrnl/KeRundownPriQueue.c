/*
 * XREFs of KeRundownPriQueue @ 0x14057EA50
 * Callers:
 *     ExpWorkQueueDestroy @ 0x140A00AC4 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140252030 (KiAcquireKobjectLockSafe.c)
 *     KeRundownQueueCommon @ 0x14028C934 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14028CD8C (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

__int64 __fastcall KeRundownPriQueue(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = 4;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  LOBYTE(v6) = 1;
  KeRundownQueueCommon(a1, (volatile signed __int32 **)(a1 + 672), (_DWORD *)(a1 + 536), 0x20u, v6);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
}
