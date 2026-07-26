/*
 * XREFs of ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C01601F8
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C6D4 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void ndisInitializeWatchdogSubsystem(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
  qword_1C00F5CE0 = (__int64)&g_ndisWatchdogList;
  g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
}
