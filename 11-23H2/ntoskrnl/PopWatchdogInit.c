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
  qword_140C39F18 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C3D220.Header.Lock = 8LL;
  stru_140C3D220.Header.WaitListHead.Blink = &stru_140C3D220.Header.WaitListHead;
  stru_140C3D220.Header.WaitListHead.Flink = &stru_140C3D220.Header.WaitListHead;
  qword_140C3D1F8 = (__int64)PopPowerActionWatchdog;
  qword_140C3C9B8 = 0LL;
  qword_140C3D1D8 = 0LL;
  stru_140C3D220.DueTime.QuadPart = 0LL;
  stru_140C3D220.Period = 0;
  stru_140C3D220.Processor = 0;
  dword_140C3D1E0 = 275;
  qword_140C3D200 = 0LL;
  qword_140C3D218 = 0LL;
  qword_140C3D1F0 = 0LL;
  byte_140C3D260 = 1;
  return PopReleasePolicyLock();
}
