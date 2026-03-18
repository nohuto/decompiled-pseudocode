/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x1409818D0
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140993FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x140583BC4 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(10, 1);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
