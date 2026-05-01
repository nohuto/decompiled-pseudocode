/*
 * XREFs of CrmStateRoutineSebLevel @ 0x18004BA80
 * Callers:
 *     CrmComparisonRoutineSebLevel @ 0x180042930 (CrmComparisonRoutineSebLevel.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x1800473A0 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x18006E150 (CrmStateMonitorDelayedInternetLossCallback.c)
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
