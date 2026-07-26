/*
 * XREFs of ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00923B0
 * Callers:
 *     ndisPhysicalNicPcwProviderCallback @ 0x1C0136F00 (ndisPhysicalNicPcwProviderCallback.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136C68 (-ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1C0136EC8 (-ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 */

__int64 __fastcall ndisPcwCollectPhysicalData(struct _PCW_BUFFER *a1)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL v6; // bp

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = ndisMiniportList;
  v6 = v4;
  while ( v5 && v2 >= 0 )
  {
    if ( v5->PnPDeviceState == NdisPnPDeviceStarted
      && v5->PhysicalPerformanceCounters
      && ndisReferenceMiniport(v5, 0x59u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v6);
      ndisPcwUpdatePhysicalMiniportCounters(v5, v3);
      v2 = ndisPcwAddSinglePhysicalInstance(a1, v5);
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v5, 0x59u);
    }
    v5 = v5->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v6);
  return (unsigned int)v2;
}
