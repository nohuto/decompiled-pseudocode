/*
 * XREFs of HalpTimerMeasureAllProcessorFrequencies @ 0x14050CFCC
 * Callers:
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14039AE10 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

ULONG_PTR HalpTimerMeasureAllProcessorFrequencies()
{
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  Context[0] = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context[1] = 0LL;
  v2 = 5;
  return KeIpiGenericCall(HalpTimerMeasureProcessorsWorker, (ULONG_PTR)Context);
}
