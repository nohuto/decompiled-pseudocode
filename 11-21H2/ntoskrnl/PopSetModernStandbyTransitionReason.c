/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x14039A8F4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  __int64 InterruptTimePrecise; // rbp
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  LARGE_INTEGER v10; // [rsp+40h] [rbp+18h] BYREF

  v10.QuadPart = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v10);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140C09758 != a1 )
  {
    byte_140C09758 = a1;
    if ( a1 )
    {
      dword_140C0975C = a2;
    }
    else
    {
      dword_140C09760 = a2;
      qword_140C09768 = InterruptTimePrecise;
    }
  }
  KxReleaseSpinLock(&PopModernStandbyTransitionInfo);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
