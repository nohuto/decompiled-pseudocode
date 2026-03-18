/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x1408648F8
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409936A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1409966D4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140996894 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C3A288, DelayedWorkQueue);
  return v2;
}
