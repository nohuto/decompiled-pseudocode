/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981810
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void PopPowerRequestExecutionRequiredTimeoutWorker()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3F5A8);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
