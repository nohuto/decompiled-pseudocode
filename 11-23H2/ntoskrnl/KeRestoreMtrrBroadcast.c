/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140A8F8CC
 * Callers:
 *     PnprWakeProcessors @ 0x140A9E01C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F2E0 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140B5F650 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14039AC30 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C418F0 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
