/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140508FD4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A96600 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x140509E44 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 11 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}
