/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x14050AB5C
 * Callers:
 *     HalpTimerSelectRoles @ 0x14037A2AC (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x14050CD20 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4570 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    (*(void (__fastcall **)(__int64))(v1 + 136))(InternalData);
  }
  HalpProfilingActive = 0;
}
