/*
 * XREFs of ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00C79FC
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C006ED80 (ndisCpuHotAddHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisDmaAddCpuNotify(KIRQL a1)
{
  KIRQL v1; // al
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  KIRQL v3; // di
  unsigned int PnPDeviceState; // eax
  int v5; // ecx
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v2 = ndisMiniportList;
  v3 = v1;
  NewIrql = v1;
  while ( v2 )
  {
    PnPDeviceState = v2->PnPDeviceState;
    if ( PnPDeviceState > 5 || (v5 = 41, !_bittest(&v5, PnPDeviceState)) )
    {
      if ( ndisReferenceMiniport(v2, 0x43u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v3);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
        v6 = NewIrql;
        v2->MiniportThread = 0LL;
        KeReleaseSpinLock(&v2->Lock, v6);
        v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        NewIrql = v3;
        ndisDereferenceMiniport(v2, 0x43u);
      }
    }
    v2 = v2->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v3);
  return 0LL;
}
