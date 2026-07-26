/*
 * XREFs of ?ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C006F7A0
 * Callers:
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C007095C (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisIovAddSwitchToList(struct _NDIS_MINIPORT_BLOCK *a1, _LIST_ENTRY *a2)
{
  unsigned int v3; // esi
  _LIST_ENTRY *Flink; // rax
  unsigned int Flink_high; // edx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rax
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Flink = a1->NicSwitchList.Flink;
  if ( Flink == &a1->NicSwitchList )
  {
LABEL_6:
    Blink = Flink->Blink;
    v8 = Blink->Flink;
    if ( Blink->Flink->Blink != Blink )
      __fastfail(3u);
    a2->Flink = v8;
    a2->Blink = Blink;
    v8->Blink = a2;
    Blink->Flink = a2;
    ++a1->NumSwitches;
  }
  else
  {
    Flink_high = HIDWORD(a2[2].Flink);
    while ( HIDWORD(Flink[2].Flink) != Flink_high )
    {
      if ( HIDWORD(Flink[2].Flink) <= Flink_high )
      {
        Flink = Flink->Flink;
        if ( Flink != &a1->NicSwitchList )
          continue;
      }
      goto LABEL_6;
    }
    v3 = -1073741270;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v3;
}
