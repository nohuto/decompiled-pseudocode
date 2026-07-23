/*
 * XREFs of RtlSecondsSince1970ToTime @ 0x1403DC160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1970ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (ElapsedSeconds + 0x2B6109100LL);
}
