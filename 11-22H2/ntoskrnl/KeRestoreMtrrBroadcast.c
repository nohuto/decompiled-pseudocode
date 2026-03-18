/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140A8F8CC
 * Callers:
 *     PnprWakeProcessors @ 0x140A9E0DC (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F3A0 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140B631C0 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14039A940 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C41970 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
