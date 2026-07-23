/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x1405E3F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (ElapsedSeconds + 0x2C8DF3700LL);
}
