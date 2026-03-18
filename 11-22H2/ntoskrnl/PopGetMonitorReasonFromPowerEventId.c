/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1403C733C
 * Callers:
 *     PopPowerAggregatorStartNextSession @ 0x140878154 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099362C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409937E4 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
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
