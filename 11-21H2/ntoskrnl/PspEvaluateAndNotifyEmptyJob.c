/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140683DF0
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x140683DA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D78E0 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020B10C (PspHardDereferenceSiloWorker.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PspSendReliableJobNotification @ 0x1406A2200 (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FFED4 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  if ( a2 )
    --Event[59].Header.LockNV;
  if ( !Event[59].Header.LockNV )
  {
    if ( _interlockedbittestandreset(&Event[63].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[63].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[23].Header.Lock && (HIDWORD(Event[44].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Event[63].Header.Lock, 0x1Du)
        && (Event[63].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}
