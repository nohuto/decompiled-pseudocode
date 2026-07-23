/*
 * XREFs of PopWatchdogDpc @ 0x1403D6BF0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140370590 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  LARGE_INTEGER v8; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  PerformanceCounter.QuadPart = 0LL;
  *(LARGE_INTEGER *)(a2 + 344) = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 208) && !*(_BYTE *)(a2 + 21) )
  {
    v8.QuadPart = 0LL;
    *(_BYTE *)(a2 + 21) = 1;
    *(LARGE_INTEGER *)(a2 + 352) = RtlGetInterruptTimePrecise(&v8);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), RealTimeWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
