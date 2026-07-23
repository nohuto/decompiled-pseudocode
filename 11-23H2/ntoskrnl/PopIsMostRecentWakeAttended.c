/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140AA0EEC
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993BE0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x14058EAD0 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058ED48 (PopWakeInfoDereference.c)
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
