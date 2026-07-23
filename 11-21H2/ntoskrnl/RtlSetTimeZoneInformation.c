/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1409BA700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_1409BA71C(TimeZoneInformation);
}
