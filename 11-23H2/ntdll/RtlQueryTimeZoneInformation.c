/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x18005E100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryTimeZoneInformation(void *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
