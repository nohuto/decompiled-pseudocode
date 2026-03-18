/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1407EFDAC
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14036A5FC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestCallbackWorker @ 0x14036A8F0 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
