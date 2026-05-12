/*
 * XREFs of StorpUninitializePerUnitIoSizeDistribution @ 0x1C00229C8
 * Callers:
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1C0022938 (StorpUninitializePerUnitPerfTelemetry.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x1C0090064 (StorpInitializePerUnitIoSizeDistribution.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninitializePerUnitIoSizeDistribution(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_BYTE *)(a1 + 451) &= ~0x10u;
  v2 = *(void **)(a1 + 2256);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 2256) = 0LL;
  }
  v3 = *(void **)(a1 + 2280);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 2280) = 0LL;
  }
}
