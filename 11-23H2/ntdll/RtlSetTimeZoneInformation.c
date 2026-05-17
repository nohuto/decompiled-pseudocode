/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1800FB190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetTimeZoneInformation(__int64 a1)
{
  return RtlpSetTimeZoneInformationWorker(a1, 172LL);
}
