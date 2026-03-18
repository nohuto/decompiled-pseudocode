/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14099596C
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopPdcEngagePhases @ 0x1408093DC (PopPdcEngagePhases.c)
 *     PopNetSetConnectivityConstraint @ 0x140864194 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x140998544 (PopNetCheckOpportunisticDs.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 v3; // rdx

  PopAcquirePolicyLock(a1);
  if ( dword_140C23318 )
  {
    if ( !(unsigned __int8)PopNetCheckOpportunisticDs() )
      goto LABEL_7;
    v1 = 7;
  }
  else
  {
    v1 = 1;
  }
  PopNetSetConnectivityConstraint(v1);
  if ( dword_140C2331C == 1 )
    PopAggressiveStandbyAppliedActions ^= ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 1;
LABEL_7:
  v3 = ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 2;
  PopAggressiveStandbyAppliedActions ^= v3;
  PopReleasePolicyLock(v2, v3);
  return PopPdcEngagePhases();
}
