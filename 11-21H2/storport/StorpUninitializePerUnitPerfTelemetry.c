/*
 * XREFs of StorpUninitializePerUnitPerfTelemetry @ 0x1C0022938
 * Callers:
 *     RaidUnitFreeResources @ 0x1C0019DC8 (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C001EC20 (StorpInitializeUnitTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00873B0 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1C00229C8 (StorpUninitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall StorpUninitializePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[281];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[281] = 0LL;
  }
  v3 = (void *)a1[284];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[284] = 0LL;
  }
  v4 = (void *)a1[286];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[286] = 0LL;
  }
  return StorpUninitializePerUnitIoSizeDistribution(a1);
}
