/*
 * XREFs of PopBlockSessionSwitch @ 0x140997DA0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x14059E010 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14059E09C (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993BD4 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1409982E4 (PopScreenOff.c)
 *     PopScreenOn @ 0x140998330 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x14099BC6C (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(&v5, (__int64)&v4);
  }
  return result;
}
