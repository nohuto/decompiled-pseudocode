/*
 * XREFs of KiGetClockIntervalOneShot @ 0x14022F670
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x14022F3E8 (KiSetClockIntervalOneShot.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return (KeMinimumIncrement - (int)a2 + (int)a1 - 1) / (unsigned int)KeMinimumIncrement * KeMinimumIncrement;
  return v2;
}
