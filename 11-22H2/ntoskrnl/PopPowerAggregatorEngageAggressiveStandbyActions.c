/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1409937E4 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140864D18 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x14087828C (PopPdcEngagePhases.c)
 *     PopNetCheckAdaptiveCsState @ 0x1409966E4 (PopNetCheckAdaptiveCsState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  PopAcquirePolicyLock(a1);
  if ( dword_140C3D958 )
  {
    if ( (unsigned int)PopNetCheckAdaptiveCsState() != 1 )
      goto LABEL_7;
    v1 = 7;
  }
  else
  {
    v1 = 1;
  }
  PopNetSetConnectivityConstraint(v1);
  if ( dword_140C3D95C == 1 )
    PopAggressiveStandbyAppliedActions ^= ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 1;
LABEL_7:
  v4 = ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 4;
  PopAggressiveStandbyAppliedActions ^= v4;
  PopReleasePolicyLock(v2, v4, v3);
  return PopPdcEngagePhases();
}
