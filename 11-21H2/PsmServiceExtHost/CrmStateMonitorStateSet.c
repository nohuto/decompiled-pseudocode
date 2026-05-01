/*
 * XREFs of CrmStateMonitorStateSet @ 0x18002E9A4
 * Callers:
 *     CrmStateMonitorGPUUsageCSCallback @ 0x18003B700 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x18003DF10 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x18003E2A0 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x180042A30 (CrmStateMonitorAcDcDisplayCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180042C90 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x180042F10 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180043110 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmSuspendNotification @ 0x180044A60 (CrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x180044D3C (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x180045A9C (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180046CD0 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180047160 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x1800473D0 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x18004C450 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x18004CB70 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x18004CC50 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18004D210 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18004D390 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x18004D5C0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x18004DAC0 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x18006DE30 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedInternetLossTimerCallback @ 0x18006E000 (CrmStateMonitorDelayedInternetLossTimerCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x18006E0B0 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x18006E0E0 (CrmStateMonitorDelayedInternetLossCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x18006E640 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmStateMonitorLogDataGet @ 0x18002EEE0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002EFA0 (CrmLogStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 1);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  }
  CrmStateMonitorLogDataGet(a1, v10, a2);
  memcpy_0(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *(unsigned int *)a1, a2);
  if ( !a4 )
  {
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
  }
  return CrmLogStateMonitorStateSet(a1, v10);
}
