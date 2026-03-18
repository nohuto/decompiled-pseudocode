/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x140382D04
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E204 (KiConfigureSchedulingInformation.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeLocalSharedReadyQueue(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 35968);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 35968) = 0LL;
  }
}
