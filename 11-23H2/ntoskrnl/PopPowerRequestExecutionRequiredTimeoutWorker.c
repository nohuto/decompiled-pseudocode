/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981610
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408554C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void PopPowerRequestExecutionRequiredTimeoutWorker()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3F588);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
