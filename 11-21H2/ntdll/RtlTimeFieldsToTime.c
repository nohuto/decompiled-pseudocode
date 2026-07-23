/*
 * XREFs of RtlTimeFieldsToTime @ 0x18005DF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time, 0LL);
}
