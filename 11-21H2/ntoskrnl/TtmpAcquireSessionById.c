/*
 * XREFs of TtmpAcquireSessionById @ 0x1409A5200
 * Callers:
 *     TtmNotifyConsoleUserPresent @ 0x1409A447C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4510 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A4584 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A4620 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A47BC (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A49BC (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A4A48 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A4AE0 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4B90 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A573C (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A6100 (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
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
