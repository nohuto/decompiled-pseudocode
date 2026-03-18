/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140AA107C
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x14058E5E0 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058E858 (PopWakeInfoDereference.c)
 */

char PopIsMostRecentWakeAttended()
{
  char v0; // bl
  __int64 MostRecentWakeInfo; // rax

  v0 = 1;
  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  if ( MostRecentWakeInfo )
  {
    v0 = *(_BYTE *)(MostRecentWakeInfo + 80);
    PopWakeInfoDereference(MostRecentWakeInfo);
  }
  return v0;
}
