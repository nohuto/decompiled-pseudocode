/*
 * XREFs of CsTerminate @ 0x1C000D8D8
 * Callers:
 *     CiDriverUnload @ 0x1C000D870 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000F200 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0005668 (CiFreeMemory.c)
 *     WppCleanupKm @ 0x1C000D9C0 (WppCleanupKm.c)
 *     CiNdisCleanupThrottle @ 0x1C000DD24 (CiNdisCleanupThrottle.c)
 *     CiSchedulerTerminate @ 0x1C000DE30 (CiSchedulerTerminate.c)
 */

__int64 CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  if ( CiKernelExtensionRegistration )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || (v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
  CiNdisCleanupThrottle();
  if ( CiLoggerContext )
  {
    EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  return WppCleanupKm();
}
