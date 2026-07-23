/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14069F4D4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD604 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x14035471C (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x140779B0C (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  PRKEVENT v7; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  v7 = Event + 60;
  if ( a2 )
    --v7->Header.LockNV;
  if ( !v7->Header.LockNV )
  {
    if ( _interlockedbittestandreset(&Event[64].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[64].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[23].Header.Lock && ((__int64)Event[45].Header.WaitListHead.Flink & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Event[64].Header.Lock, 0x1Du)
        && (Event[64].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}
