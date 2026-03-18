/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409817CC
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x140583BC4 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03598, Executive, 0, 0, 0LL);
}
