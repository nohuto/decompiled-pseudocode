/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x1C00BCA30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00BD180 (NdisCmOpenAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  __int64 Open; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  char v7; // r13
  __int64 v8; // rdi
  KSPIN_LOCK *p_Lock; // rcx
  NDIS_STATUS v10; // edi
  __int64 v11; // r12
  _NDIS_AF_LIST *CallMgrAfList; // rdi
  __int64 Pool2; // rax
  KIRQL v14; // dl
  KSPIN_LOCK *v15; // rcx
  __int64 v16; // rbx
  unsigned int NdisMajorVersion; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  KIRQL v29; // al
  int (__fastcall *CmOpenAfHandler)(void *, CO_ADDRESS_FAMILY *, void *, void **); // rax
  void *MiniportAdapterContext; // rcx
  NDIS_STATUS v32; // eax
  KSPIN_LOCK *v33; // rbx
  KIRQL v34; // dl
  char v36; // [rsp+30h] [rbp-18h]
  KIRQL NewIrql; // [rsp+90h] [rbp+48h] BYREF
  PCO_ADDRESS_FAMILY v38; // [rsp+98h] [rbp+50h]
  NDIS_HANDLE v39; // [rsp+A0h] [rbp+58h]
  char v40; // [rsp+A8h] [rbp+60h]

  v39 = ClientAfContext;
  v38 = AddressFamily;
  *NdisAfHandle = 0LL;
  Open = 0LL;
  v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v7 = 0;
  v8 = *((_QWORD *)NdisBindingHandle + 3);
  v40 = 0;
  v36 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    p_Lock = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
LABEL_3:
    KeReleaseSpinLock(p_Lock, NewIrql);
    v10 = -1073676286;
    goto LABEL_35;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xFu);
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)NdisBindingHandle + 94, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, NewIrql);
  if ( v6->MajorNdisVersion < 5u
    || (v6->Flags & 0x20000) == 0
    || *(_BYTE *)(v8 + 56) < 6u
    || (v11 = v8 + 472, *(_BYTE *)(v8 + 472) != 0xA6) )
  {
    v10 = -1073676284;
    goto LABEL_35;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &NewIrql);
  CallMgrAfList = v6->CallMgrAfList;
  if ( !CallMgrAfList )
  {
LABEL_11:
    v6->MiniportThread = 0LL;
LABEL_18:
    KeReleaseSpinLock(&v6->Lock, NewIrql);
    v10 = -1073741823;
    goto LABEL_35;
  }
  while ( CallMgrAfList->AddressFamily.AddressFamily != v38->AddressFamily )
  {
    CallMgrAfList = CallMgrAfList->NextAf;
    if ( !CallMgrAfList )
      goto LABEL_11;
  }
  Open = (__int64)CallMgrAfList->Open;
  if ( Open )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Open + 232));
    if ( (*(_DWORD *)(Open + 224) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Open + 232));
      v6->MiniportThread = 0LL;
      p_Lock = &v6->Lock;
      goto LABEL_3;
    }
    ndisMReferenceOpen(Open, 0x10u);
    _InterlockedAdd((volatile signed __int32 *)(Open + 376), 1u);
    v40 = 1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Open + 232));
    goto LABEL_20;
  }
  if ( (v6->PnPFlags & 0x4000) != 0 )
  {
    v6->MiniportThread = 0LL;
    goto LABEL_18;
  }
  ndisReferenceMiniportNoCheck(v6, 0x51u);
  v36 = 1;
LABEL_20:
  Pool2 = ExAllocatePool2(64LL, 600LL, 1868776526);
  v14 = NewIrql;
  v15 = &v6->Lock;
  v16 = Pool2;
  if ( Pool2 )
  {
    Open = (__int64)CallMgrAfList->Open;
    *(_DWORD *)(Pool2 + 12) = 1;
    *(_QWORD *)(Pool2 + 16) = v6;
    *(_QWORD *)(Pool2 + 368) = NdisBindingHandle;
    *(_QWORD *)(Pool2 + 40) = Open;
    *(_DWORD *)(Pool2 + 8) = Open == 0;
    *(_QWORD *)(Pool2 + 376) = v39;
    NdisMajorVersion = CallMgrAfList->NdisMajorVersion;
    v6->MiniportThread = 0LL;
    *(_DWORD *)(v16 + 392) = NdisMajorVersion;
    *(_DWORD *)(v16 + 396) = 6;
    KeReleaseSpinLock(v15, v14);
    KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 384));
    if ( *(_DWORD *)(v16 + 392) >= 6u )
      *(_QWORD *)(v16 + 32) = &CallMgrAfList->CallMgrChars;
    else
      *(_QWORD *)(v16 + 24) = &CallMgrAfList->CmChars;
    v18 = *(_QWORD *)(v11 + 8);
    v19 = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v16 + 208) = *(_OWORD *)v11;
    v20 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v16 + 224) = v19;
    v21 = *(_OWORD *)(v11 + 48);
    *(_OWORD *)(v16 + 240) = v20;
    v22 = *(_OWORD *)(v11 + 64);
    *(_OWORD *)(v16 + 256) = v21;
    v23 = *(_OWORD *)(v11 + 80);
    *(_OWORD *)(v16 + 272) = v22;
    v24 = *(_OWORD *)(v11 + 96);
    *(_OWORD *)(v16 + 288) = v23;
    v25 = *(_OWORD *)(v11 + 128);
    *(_OWORD *)(v16 + 304) = v24;
    *(_OWORD *)(v16 + 320) = *(_OWORD *)(v11 + 112);
    v26 = *(_OWORD *)(v11 + 144);
    *((_QWORD *)NdisBindingHandle + 131) = v18;
    *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v11 + 16);
    v27 = *(_QWORD *)(v11 + 32);
    *(_OWORD *)(v16 + 336) = v25;
    *((_QWORD *)NdisBindingHandle + 144) = v27;
    v28 = *(_QWORD *)(v11 + 24);
    *(_OWORD *)(v16 + 352) = v26;
    *((_QWORD *)NdisBindingHandle + 145) = v28;
    v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 384));
    *(_DWORD *)(v16 + 8) |= 0x40000000u;
    NewIrql = v29;
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 384), v29);
    if ( CallMgrAfList->NdisMajorVersion >= 6 )
      CmOpenAfHandler = CallMgrAfList->CallMgrChars.CmOpenAfHandler;
    else
      CmOpenAfHandler = CallMgrAfList->CmChars.CmOpenAfHandler;
    if ( Open )
      MiniportAdapterContext = *(void **)(Open + 32);
    else
      MiniportAdapterContext = v6->MiniportAdapterContext;
    v32 = CmOpenAfHandler(MiniportAdapterContext, (CO_ADDRESS_FAMILY *)v38, (void *)v16, (void **)(v16 + 48));
    v10 = v32;
    if ( v32 != 259 )
    {
      NdisCmOpenAddressFamilyComplete(v32, (NDIS_HANDLE)v16, *(NDIS_HANDLE *)(v16 + 48));
      v10 = 259;
    }
    v36 = 0;
    v7 = 0;
    v40 = 0;
  }
  else
  {
    v6->MiniportThread = 0LL;
    KeReleaseSpinLock(v15, v14);
    v10 = -1073741670;
  }
LABEL_35:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v7 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &NewIrql);
    _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
    ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xFu);
    v6->MiniportThread = 0LL;
    v33 = &v6->Lock;
    KeReleaseSpinLock(&v6->Lock, NewIrql);
  }
  else
  {
    v33 = &v6->Lock;
  }
  if ( Open && v40 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &NewIrql);
    _InterlockedDecrement((volatile signed __int32 *)(Open + 376));
    ndisMDereferenceOpenLocked(Open, 0x10u);
    v34 = NewIrql;
    v6->MiniportThread = 0LL;
    KeReleaseSpinLock(v33, v34);
  }
  if ( v36 )
    ndisDereferenceMiniport(v6, 0x51u);
  return v10;
}
