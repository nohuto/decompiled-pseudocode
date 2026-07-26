/*
 * XREFs of ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015FB8
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00160EC (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019FF0 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00216DC (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x1C0022AE0 (NdisIfAddIfStackEntry.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0104890 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C01049B0 (NdisIfDeregisterInterface.c)
 */

void __fastcall ndisFilterAttachCleanUp(_NDIS_FILTER_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2, char a3)
{
  _NET_LUID_LH v5; // rbx
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  _NDIS_FILTER_BLOCK *HigherFilter; // rax
  _NDIS_FILTER_BLOCK *v8; // rcx
  _NDIS_FILTER_BLOCK *v9; // rax
  KIRQL v10; // dl
  _NDIS_FILTER_BLOCK *v11; // rcx
  KIRQL v12; // dl
  _NDIS_FILTER_BLOCK *v13; // rax
  NET_IFINDEX IfIndex; // edx
  KIRQL v15; // al
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  KIRQL v17; // bl
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( a3 )
  {
    v5.Value = (ULONG64)this->IfBlock->NetLuid;
    NdisIfDeregisterInterface(this->IfIndex);
    NdisIfFreeNetLuidIndex(*((NET_IFTYPE *)&v5.Info + 3), (v5.Value >> 24) & 0xFFFFFF);
    this->IfBlock = 0LL;
    this->IfIndex = 0;
  }
  if ( a2 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    LowerFilter = this->LowerFilter;
    HigherFilter = this->HigherFilter;
    if ( LowerFilter )
      LowerFilter->HigherFilter = HigherFilter;
    else
      a2->LowestFilter = HigherFilter;
    v8 = this->HigherFilter;
    v9 = this->LowerFilter;
    if ( v8 )
      v8->LowerFilter = v9;
    else
      a2->HighestFilter = v9;
    v10 = NewIrql;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v10);
    v11 = this->HigherFilter;
    if ( v11 )
    {
      v13 = this->LowerFilter;
      if ( v13 )
        IfIndex = v13->IfIndex;
      else
        IfIndex = this->Miniport->IfIndex;
      NdisIfAddIfStackEntry(v11->IfIndex, IfIndex);
      v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      Miniport = this->Miniport;
      v17 = v15;
      NewIrql = v15;
      ndisIfUpdateFilterIfStack(Miniport);
      KeReleaseSpinLock(&ndisIfListLock, v17);
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    ndisSetupLwfMiniportHandlers(a2);
    v12 = NewIrql;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v12);
  }
  ndisDereferenceFilter(this, (enum _NDIS_LWF_REFTAG)255);
}
