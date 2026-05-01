/*
 * XREFs of CrmStateRoutineSebLevel @ 0x18004B9F0
 * Callers:
 *     CrmComparisonRoutineSebLevel @ 0x1800428B0 (CrmComparisonRoutineSebLevel.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180047310 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x18006DF30 (CrmStateMonitorDelayedInternetLossCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateRoutineSebLevel(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
    return (a1[2] >> 1) & 1;
  return result;
}
