/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x14086441C
 * Callers:
 *     PoEnableCriticalShutdown @ 0x1408643D4 (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C3CFA8);
  _InterlockedExchange(&dword_140C3CF20, 1);
  return KiSetTimerEx((__int64)&stru_140C3CF28, -300000000LL, 0, 0, (__int64)&dword_140C3CF68);
}
