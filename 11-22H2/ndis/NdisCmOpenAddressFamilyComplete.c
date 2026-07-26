/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x1C00BD180
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C00BCA30 (NdisClOpenAddressFamilyEx.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00BC9B0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C00C12F0 (NdisCoRequestComplete.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  __int64 v5; // rbp
  __int64 v8; // rax
  KIRQL v9; // dl
  NDIS_HANDLE v10; // r8
  NDIS_HANDLE v11; // rdx
  KIRQL v12; // al
  KSPIN_LOCK *v13; // rcx
  void *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  NDIS_STATUS v17; // eax
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v8 = *((_QWORD *)NdisAfHandle + 5);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x51u);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0xFu);
  }
  else
  {
    *(_QWORD *)NdisAfHandle = *(_QWORD *)(v5 + 1024);
    *(_QWORD *)(v5 + 1024) = NdisAfHandle;
  }
  v9 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v9);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v11 = NdisAfHandle;
    if ( Status )
      v11 = 0LL;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v11,
      (unsigned int)Status);
  }
  else
  {
    v10 = NdisAfHandle;
    if ( Status )
      v10 = 0LL;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v10);
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v13 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( !*((_BYTE *)NdisAfHandle + 592) )
  {
    KeReleaseSpinLock(v13, v12);
    if ( !Status )
      return;
    goto LABEL_27;
  }
  v14 = (void *)*((_QWORD *)NdisAfHandle + 73);
  *((_BYTE *)NdisAfHandle + 592) = 0;
  KeReleaseSpinLock(v13, v12);
  v15 = *((_DWORD *)NdisAfHandle + 99);
  if ( Status )
  {
    if ( v15 >= 6 )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v14);
LABEL_27:
    ExFreePoolWithTag(NdisAfHandle, 0);
    return;
  }
  v16 = *((_QWORD *)NdisAfHandle + 47);
  if ( v15 >= 6 )
    v17 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v16);
  else
    v17 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v16, 0LL, 0LL, v14);
  if ( v17 != 259 )
  {
    if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v17);
    else
      NdisCoRequestComplete(v17, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
  }
}
