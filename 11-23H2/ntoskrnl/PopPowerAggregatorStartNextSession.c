/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x140877EC4
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140877E80 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993860 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C7B7C (PopGetMonitorReasonFromPowerEventId.c)
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, int a2)
{
  __int64 MonitorReasonFromPowerEventId; // rax

  PopReleaseRwLock(&PopPowerAggregatorLock);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  PopSleepstudyStartNextSession(a1, MonitorReasonFromPowerEventId & 0xFFFFFF);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
