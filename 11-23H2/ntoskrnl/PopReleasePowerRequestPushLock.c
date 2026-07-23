/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1407A6F1C
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BD98 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BE40 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
