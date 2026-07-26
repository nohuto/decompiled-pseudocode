/*
 * XREFs of ndisDereferenceDmaAdapterForMiniport @ 0x1C005DA10
 * Callers:
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D994 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C00609F4 (PplDestroyLookasideList.c)
 */

void __fastcall ndisDereferenceDmaAdapterForMiniport(PVOID P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  struct _KEVENT *v5; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 1);
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 22, 0xFFFFFFFF) == 1 )
  {
    v3 = *((_QWORD *)P + 5);
    if ( v3 )
    {
      *((_QWORD *)P + 18) = v3;
      (*(void (**)(void))(*(_QWORD *)(v3 + 8) + 8LL))();
      *((_QWORD *)P + 5) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 10);
    if ( v4 )
    {
      PplDestroyLookasideList(v4);
      *((_QWORD *)P + 10) = 0LL;
    }
    v5 = (struct _KEVENT *)*((_QWORD *)P + 12);
    if ( v5 )
      KeSetEvent(v5, 0, 0);
    v1->MiniportSGDmaBlock = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, NewIrql);
}
