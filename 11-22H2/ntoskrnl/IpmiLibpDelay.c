/*
 * XREFs of IpmiLibpDelay @ 0x14067809C
 * Callers:
 *     IpmiLibpKcsSpinRegister @ 0x140678730 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KeStallExecutionProcessor @ 0x1402C3000 (KeStallExecutionProcessor.c)
 */

void __fastcall IpmiLibpDelay(LARGE_INTEGER a1, ULONG a2)
{
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval = a1;
  if ( (dword_140C2CC40 & 4) != 0 || a2 < 0x32 )
  {
    KeStallExecutionProcessor(a2);
  }
  else
  {
    Interval.QuadPart = (int)(-10 * a2);
    KeDelayExecutionThread(0, 0, &Interval);
  }
}
