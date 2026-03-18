/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1407F02A8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
