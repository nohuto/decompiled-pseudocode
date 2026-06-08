/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C0006E88
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C00362A0 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003DF0 (ProcLibTraceProcessorSpecificEvent.c)
 */

char __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(
           a1,
           (__int64)&PPM_ETW_PCC_CAP_CHANGE,
           (__int64)&PPM_ETW_PCC_CAP_CHANGE_HV,
           4,
           (__int64)&v3);
}
