/*
 * XREFs of StorpInitializePerUnitIoSizeDistribution @ 0x1C00AABB0
 * Callers:
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00A34A4 (StorpInitializePerUnitPerfTelemetry.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C00A98DC (RaUnitStorageDataCollectionIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1C0021D34 (StorpUninitializePerUnitIoSizeDistribution.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall StorpInitializePerUnitIoSizeDistribution(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx
  __int64 Pool; // rax
  void *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( (_DWORD)dword_1C0092584 && g_RaidNumberProcessors )
  {
    v3 = *(void **)(a1 + 2304);
    if ( v3 )
    {
      memset_0(v3, 0, (unsigned int)dword_1C0092584);
    }
    else
    {
      Pool = RaidAllocatePool(72LL, (unsigned int)dword_1C0092584, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2304) = Pool;
      if ( !Pool )
        goto LABEL_9;
    }
    v5 = *(void **)(a1 + 2328);
    if ( v5 )
    {
      memset_0(v5, 0, (unsigned int)dword_1C009257C);
    }
    else
    {
      v6 = RaidAllocatePool(72LL, (unsigned int)dword_1C009257C, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2328) = v6;
      if ( !v6 )
      {
LABEL_9:
        v1 = -1073741801;
        StorpUninitializePerUnitIoSizeDistribution(a1);
        return v1;
      }
    }
    *(_BYTE *)(a1 + 451) |= 0x10u;
  }
  return v1;
}
