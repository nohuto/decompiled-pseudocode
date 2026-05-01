/*
 * XREFs of CrmStateMonitorStateSet @ 0x180009B80
 * Callers:
 *     CrmStateMonitorWNFCallback @ 0x180008740 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x1800087B0 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x180008A30 (CrmStateMonitorAcDcDisplayCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x180008B00 (CrmStateMonitorFanNoiseHysteresisTimerCallback.c)
 *     CrmStateMonitorGPUUsageCSCallback @ 0x180008B70 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorSebCallback @ 0x180008C50 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18000AB84 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorFanNoiseHysteresisCallback @ 0x180013BB0 (CrmStateMonitorFanNoiseHysteresisCallback.c)
 *     CrmSuspendNotification @ 0x180040620 (CrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x180040988 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180042AC0 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180042FB4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x1800432A0 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180047310 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x1800473F0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x1800474B0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x1800475C0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180047D80 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x180047E70 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x180048C20 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x18006DC30 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x18006DE00 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x18006DF00 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x18006DF30 (CrmStateMonitorDelayedInternetLossCallback.c)
 *     CrmStateMonitorDelayedInternetLossTimerCallback @ 0x18006E0B0 (CrmStateMonitorDelayedInternetLossTimerCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x18006E6B0 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rdi
  _BYTE v10[112]; // [rsp+20h] [rbp-A8h] BYREF

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
