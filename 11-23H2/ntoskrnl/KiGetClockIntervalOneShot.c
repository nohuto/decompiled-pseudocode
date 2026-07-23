/*
 * XREFs of KiGetClockIntervalOneShot @ 0x140340E50
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x140340DD8 (KiSetClockIntervalOneShot.c)
 *     KiRestoreClockTickRate @ 0x140340F90 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057058C (KiSetClockIntervalToMinimumRequested.c)
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
