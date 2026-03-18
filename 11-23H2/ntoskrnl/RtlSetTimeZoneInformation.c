/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1409BD7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD7CC (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
