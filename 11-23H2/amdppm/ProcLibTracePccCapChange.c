/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C0004100
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002461C (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004138 (ProcLibTraceProcessorSpecificEvent.c)
 */

__int64 __fastcall ProcLibTracePccCapChange(int a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(
           a1,
           (unsigned int)&PPM_ETW_PCC_CAP_CHANGE,
           (unsigned int)&PPM_ETW_PCC_CAP_CHANGE_HV,
           4,
           (__int64)&v3);
}
