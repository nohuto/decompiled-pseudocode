/*
 * XREFs of PopWatchdogInit @ 0x140B73F7C
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C39EA8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C3CEE0.Header.Lock = 8LL;
  stru_140C3CEE0.Header.WaitListHead.Blink = &stru_140C3CEE0.Header.WaitListHead;
  stru_140C3CEE0.Header.WaitListHead.Flink = &stru_140C3CEE0.Header.WaitListHead;
  qword_140C3CEB8 = (__int64)PopPowerActionWatchdog;
  qword_140C3C938 = 0LL;
  qword_140C3CE98 = 0LL;
  stru_140C3CEE0.DueTime.QuadPart = 0LL;
  stru_140C3CEE0.Period = 0;
  stru_140C3CEE0.Processor = 0;
  dword_140C3CEA0 = 275;
  qword_140C3CEC0 = 0LL;
  qword_140C3CED8 = 0LL;
  qword_140C3CEB0 = 0LL;
  byte_140C3CF20 = 1;
  return PopReleasePolicyLock();
}
