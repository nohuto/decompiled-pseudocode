/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1407A6ED4
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BB08 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BBB0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032BD78 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x1407A6790 (PopPowerRequestDelete.c)
 *     PopUpdatePdcSystemIdleState @ 0x1407A6FFC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7654 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408552E0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408553A0 (PopWnfAudioCallback.c)
 *     PopDiagTraceControlCallback @ 0x1408629E0 (PopDiagTraceControlCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140862EA4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140981560 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140981644 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140981708 (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981750 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409817CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140981814 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x1409818D0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140981900 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x1409819DC (PopPowerRequestSpecialRequestSet.c)
 *     PopGetPowerRequestListInfo @ 0x140984250 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerRequestLock, 0LL);
}
