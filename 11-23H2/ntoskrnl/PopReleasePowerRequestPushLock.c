/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1407A6D2C
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BB08 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BBB0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032BD78 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
