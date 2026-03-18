/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1407A8208
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
