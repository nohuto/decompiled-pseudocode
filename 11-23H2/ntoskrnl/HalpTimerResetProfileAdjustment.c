/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1403342B0
 * Callers:
 *     HalpTimerNotifyProcessorFreeze @ 0x140334270 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x14041A680 (HalProcessorIdle.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE120 (HalCalibratePerformanceCounter.c)
 * Callees:
 *     <none>
 */

__int64 HalpTimerResetProfileAdjustment()
{
  __int64 result; // rax
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  result = v1 & 0x200;
  if ( HalpProfileData )
    *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
