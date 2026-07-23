/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x14086465C
 * Callers:
 *     PoEnableCriticalShutdown @ 0x140864614 (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C3D148);
  _InterlockedExchange(&dword_140C3D0C0, 1);
  return KiSetTimerEx((__int64)&stru_140C3D0C8, -300000000LL, 0, 0, (__int64)&dword_140C3D108);
}
