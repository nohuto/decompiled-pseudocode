/*
 * XREFs of IpmiLibpDelay @ 0x140652EC8
 * Callers:
 *     IpmiLibpKcsSpinRegister @ 0x14065355C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 */

void __fastcall IpmiLibpDelay(LARGE_INTEGER a1, ULONG a2)
{
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval = a1;
  if ( (dword_140C10CC0 & 4) != 0 || a2 < 0x32 )
  {
    KeStallExecutionProcessor(a2);
  }
  else
  {
    Interval.QuadPart = (int)(-10 * a2);
    KeDelayExecutionThread(0, 0, &Interval);
  }
}
