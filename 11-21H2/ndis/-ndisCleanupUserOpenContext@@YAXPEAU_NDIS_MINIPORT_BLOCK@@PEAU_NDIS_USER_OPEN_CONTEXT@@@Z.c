/*
 * XREFs of ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C00630E8
 * Callers:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00631E8 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCleanupUserOpenContext(struct _NDIS_MINIPORT_BLOCK *a1, _BYTE *P)
{
  _ULONG_REFERENCE *p_Ref; // rbp
  KIRQL v5; // al
  bool v6; // zf
  KIRQL v7; // dl
  void (__fastcall **BusInterface)(_QWORD); // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  p_Ref = &a1->Ref;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  v6 = P[24] == 0;
  NewIrql = v5;
  if ( v6 )
    --a1->NumUserOpens;
  else
    --a1->NumAdminOpens;
  KeReleaseSpinLock(&p_Ref->SpinLock, v5);
  ExFreePoolWithTag(P, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v7 = NewIrql;
  --a1->UserModeOpenReferences;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x56u);
  if ( (a1->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a1->BusInterface;
    if ( BusInterface )
      BusInterface[5](BusInterface[1]);
  }
}
