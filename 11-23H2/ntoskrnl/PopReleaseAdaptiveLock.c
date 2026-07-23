/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1407EC218
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 *     PopSessionConnectionChange @ 0x1407EBC54 (PopSessionConnectionChange.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140824F50 (PopAdaptivePowerSettingCallback.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878BC0 (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1408853A8 (PopSetDisplayStatus.c)
 *     PopSystemIdleEventHandler @ 0x140885750 (PopSystemIdleEventHandler.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099B8F0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099BAC4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099BB98 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099BC20 (PopAdaptiveWnfCallback.c)
 *     PopUserPresentOverride @ 0x14099BD50 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x1406831FC (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  char v0; // bl
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  GUID v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140C39C58;
  PopAdpmLockThread = 0LL;
  *(_WORD *)((char *)&v5 + 1) = 0;
  BYTE3(v5) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, (__int64)&v7);
    v4 = v1;
    v6 = 7LL;
    v5 = 0LL;
    PopDispatchStateCallout(&v5, (__int64)&v4);
  }
}
