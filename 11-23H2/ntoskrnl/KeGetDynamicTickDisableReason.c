/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14056F8F8
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098EB88 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EEA1C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
