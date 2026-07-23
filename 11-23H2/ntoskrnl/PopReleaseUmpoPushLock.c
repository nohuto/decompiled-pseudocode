/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1407A7EC0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D430 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
