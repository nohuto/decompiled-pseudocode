/*
 * XREFs of StorpUninitializePerUnitPerfTelemetry @ 0x1C0021CA4
 * Callers:
 *     RaidUnitFreeResources @ 0x1C001544C (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C002132C (StorpInitializeUnitTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00A34A4 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1C0021D34 (StorpUninitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall StorpUninitializePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[287];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[287] = 0LL;
  }
  v3 = (void *)a1[290];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[290] = 0LL;
  }
  v4 = (void *)a1[292];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[292] = 0LL;
  }
  return StorpUninitializePerUnitIoSizeDistribution(a1);
}
