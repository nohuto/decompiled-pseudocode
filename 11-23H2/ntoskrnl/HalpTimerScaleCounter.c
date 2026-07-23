/*
 * XREFs of HalpTimerScaleCounter @ 0x1403C4704
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3650 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C3930 (KiUpdateTime.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     HalpTimerClockArm @ 0x1403379F0 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x140337B70 (HalpSetTimer.c)
 *     HalpTimerMeasureFrequencies @ 0x14037A078 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037A8C0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x14038A610 (EtwpLogContextSwapEvent.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE670 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404FEBAC (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140509370 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140509570 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x14050A1B0 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050D040 (HalpTimerMeasureProcessorsWorker.c)
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
