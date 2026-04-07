/*
 * XREFs of ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x180003DD8
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180003D18 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800AA274 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CAnimationClock::_SetTimeToNextFrame(
        CAnimationClock *this,
        const union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 && a2->QuadPart )
  {
    *a3 = *a2;
  }
  else if ( !QueryPerformanceCounter(a3) )
  {
    return (unsigned int)ResultFromKnownLastError();
  }
  return v3;
}
