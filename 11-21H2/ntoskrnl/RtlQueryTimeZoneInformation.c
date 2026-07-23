/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1409BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406F1774 @ 0x1406F1774 (sub_1406F1774.c)
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_1406F1774((char *)TimeZoneInformation, 0xACuLL);
}
