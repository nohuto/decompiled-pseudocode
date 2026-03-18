/*
 * XREFs of TtmpAcquireSessionById @ 0x1409A4F30
 * Callers:
 *     TtmNotifyConsoleUserPresent @ 0x1409A4214 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A42A8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A4324 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A43C0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A4558 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4758 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A47E8 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A4880 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4930 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A5468 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A5E1C (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     TtmIsEnabled @ 0x1407A6090 (TtmIsEnabled.c)
 *     TtmiLogError @ 0x1409A8344 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  *a1 = 0LL;
  if ( TtmIsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1697LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1686LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
