/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14060B594
 * Callers:
 *     PopFreeWakeSource @ 0x1409872D8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
