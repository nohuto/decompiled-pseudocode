/*
 * XREFs of HalpTimerScaleCounter @ 0x1403C4524
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140234100 (EtwpReserveTraceBuffer.c)
 *     KiRetireDpcList @ 0x1402459F0 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C33C0 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C36A0 (KiUpdateTime.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     HalpTimerClockArm @ 0x140337760 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x1403378E0 (HalpSetTimer.c)
 *     HalpTimerMeasureFrequencies @ 0x140379ED8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037A720 (HalpTimerPropagateQpcBiasUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x14038A430 (EtwpLogContextSwapEvent.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE120 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404FE65C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140508E20 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140509020 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x140509C60 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050CAF0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
