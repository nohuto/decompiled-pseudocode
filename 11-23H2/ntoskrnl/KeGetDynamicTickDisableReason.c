/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14056FE38
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098ED88 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EECAC (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
