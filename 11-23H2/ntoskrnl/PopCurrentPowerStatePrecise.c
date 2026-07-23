/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140873A08
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 *     PopValidateRTCWake @ 0x140AA1344 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6730 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1407A6F38 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140873A3C (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
