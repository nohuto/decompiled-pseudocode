/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140981AD0
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409941E0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x1405840B4 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(10, 1);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
