/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14060BAE4
 * Callers:
 *     PopFreeWakeSource @ 0x1409874D8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
