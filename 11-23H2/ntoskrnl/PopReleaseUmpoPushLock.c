/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1407A7CD0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
