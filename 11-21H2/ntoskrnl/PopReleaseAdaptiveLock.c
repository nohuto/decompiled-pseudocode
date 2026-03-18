/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1407EF120
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopSessionConnectionChange @ 0x1407ED88C (PopSessionConnectionChange.c)
 *     PopSetDisplayStatus @ 0x140809408 (PopSetDisplayStatus.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14080A454 (PopIsLockConsoleTimeoutActive.c)
 *     PopSystemIdleEventHandler @ 0x14080C220 (PopSystemIdleEventHandler.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140828BC0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099C730 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099C8F8 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099CAD0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099CB50 (PopAdaptiveWnfCallback.c)
 *     PopSessionWinlogonNotification @ 0x14099CBC8 (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x14099CCC4 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x14099CDDC (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  char v0; // bl
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  GUID v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140C1F3B8;
  PopAdpmLockThread = 0LL;
  *(_WORD *)((char *)&v5 + 1) = 0;
  BYTE3(v5) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, &v7);
    v4 = v1;
    v6 = 7LL;
    v5 = 0LL;
    PopDispatchStateCallout(&v5, &v4);
  }
}
