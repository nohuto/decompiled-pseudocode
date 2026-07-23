/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1403C7B7C
 * Callers:
 *     PopPowerAggregatorStartNextSession @ 0x140877EC4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099377C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140993934 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409941E0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rdx
  __int64 v3; // rax

  v1 = 0;
  v2 = &unk_140D1DAE4;
  v3 = 0LL;
  while ( *v2 != a1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 2;
    if ( (unsigned int)v3 >= 0x37 )
      return v1;
  }
  return *((unsigned int *)&PopMonitorEventMapping + 2 * v3);
}
