/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1407A70C4
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BD98 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BE40 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x1407A6980 (PopPowerRequestDelete.c)
 *     PopUpdatePdcSystemIdleState @ 0x1407A71EC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7844 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408555E0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1408630E4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140981760 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981810 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140981844 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140981908 (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981950 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409819CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140981A14 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140981AD0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140981B00 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981BDC (PopPowerRequestSpecialRequestSet.c)
 *     PopGetPowerRequestListInfo @ 0x140984450 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
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
