/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x140383354
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E7A4 (KiConfigureSchedulingInformation.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
