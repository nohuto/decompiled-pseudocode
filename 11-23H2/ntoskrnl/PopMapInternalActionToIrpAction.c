/*
 * XREFs of PopMapInternalActionToIrpAction @ 0x1405871F4
 * Callers:
 *     PopRequestPowerIrp @ 0x14028F230 (PopRequestPowerIrp.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopNotifyDevice @ 0x140AA72CC (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopMapInternalActionToIrpAction(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  result = 7LL;
  if ( a1 == 7 )
  {
    if ( a3 )
      return 3 - (unsigned int)(a2 != 5);
  }
  else
  {
    if ( a2 == 5 )
      return 3;
    return a1;
  }
  return result;
}
