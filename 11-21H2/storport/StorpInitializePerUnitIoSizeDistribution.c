/*
 * XREFs of StorpInitializePerUnitIoSizeDistribution @ 0x1C0090064
 * Callers:
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00873B0 (StorpInitializePerUnitPerfTelemetry.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C008F190 (RaUnitStorageDataCollectionIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1C00229C8 (StorpUninitializePerUnitIoSizeDistribution.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall StorpInitializePerUnitIoSizeDistribution(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx
  __int64 Pool; // rax
  void *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( (_DWORD)dword_1C00797E4 && g_RaidNumberProcessors )
  {
    v3 = *(void **)(a1 + 2256);
    if ( v3 )
    {
      memset(v3, 0, (unsigned int)dword_1C00797E4);
    }
    else
    {
      Pool = RaidAllocatePool(72LL, (unsigned int)dword_1C00797E4, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2256) = Pool;
      if ( !Pool )
        goto LABEL_9;
    }
    v5 = *(void **)(a1 + 2280);
    if ( v5 )
    {
      memset(v5, 0, (unsigned int)dword_1C00797DC);
    }
    else
    {
      v6 = RaidAllocatePool(72LL, (unsigned int)dword_1C00797DC, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2280) = v6;
      if ( !v6 )
      {
LABEL_9:
        StorpUninitializePerUnitIoSizeDistribution(a1);
        return (unsigned int)-1073741801;
      }
    }
    *(_BYTE *)(a1 + 451) |= 0x10u;
  }
  return v1;
}
