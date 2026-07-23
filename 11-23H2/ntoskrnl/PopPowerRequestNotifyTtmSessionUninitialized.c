/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409819CC
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x1405840B4 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03598, Executive, 0, 0, 0LL);
}
