/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14056C938
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1409922E8 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EA068 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
