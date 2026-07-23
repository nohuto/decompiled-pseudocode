/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x14036E150
 * Callers:
 *     DifPoFxCompleteDevicePowerNotRequiredWrapper @ 0x1405E92F0 (DifPoFxCompleteDevicePowerNotRequiredWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x14028C0AC (PopFxQueueWorkOrder.c)
 *     PopFxAddLogEntry @ 0x140312914 (PopFxAddLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 40), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 17, 1LL);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 360));
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      PopFxQueueWorkOrder(BugCheckParameter2 + 304, BugCheckParameter2);
    result = KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 360));
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v3 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  else if ( (int)result < 0 )
  {
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
