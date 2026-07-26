/*
 * XREFs of ndis5QueuedMiniportDpcWorkItem @ 0x1C00C7000
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisMDpc @ 0x1C00C70AC (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00C72C0 (ndisMDpcX.c)
 */

void __fastcall ndis5QueuedMiniportDpcWorkItem(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rbp
  KIRQL v3; // si
  __int64 v4; // rcx

  Interrupt = a1->Interrupt;
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->Flags &= ~0x2000000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  if ( (a1->Flags & 0x40000) != 0 )
    ndisMDpcX(v4, Interrupt);
  else
    ndisMDpc(v4, Interrupt);
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceMiniport(a1, 0x4Eu);
}
