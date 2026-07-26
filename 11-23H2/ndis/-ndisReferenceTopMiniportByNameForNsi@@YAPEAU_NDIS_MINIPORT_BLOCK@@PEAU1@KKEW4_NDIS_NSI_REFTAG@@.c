/*
 * XREFs of ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001F100
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F030 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D8D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00228F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0026D84 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        int a3,
        char a4,
        enum _NDIS_NSI_REFTAG a5,
        enum _NDIS_MP_REFTAG a6)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  int v9; // r15d
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // rdi
  KIRQL v12; // si
  bool i; // zf
  KSPIN_LOCK *p_SpinLock; // r12
  KIRQL v15; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v17; // r12d
  char v18; // di
  _NDIS_BIND_PATHS *BindPaths; // rdx
  unsigned int *p_Number; // rax
  KIRQL v21; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  struct _NDIS_M_DRIVER_BLOCK *v24; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h] BYREF
  char v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v6 = 0LL;
  v25 = 1;
  v7 = 0LL;
  v9 = ~a2;
  if ( !a1->BindPaths )
    return 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v11 = ndisMiniDriverList;
  v12 = v10;
  for ( i = ndisMiniDriverList == 0LL; ; i = NextDriver == 0LL )
  {
    v24 = v11;
    if ( i )
      break;
    v26 = 0;
    p_SpinLock = &v11->Ref.SpinLock;
    if ( ndisReferenceRefEx(&v11->Ref.SpinLock, 8u, (enum _NDIS_REFERENCE_STATUS *)&v26) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
      v15 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
      MiniportQueue = v11->MiniportQueue;
      LOBYTE(v26) = v15;
      if ( MiniportQueue )
      {
        v17 = v25;
        v18 = v27;
        do
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( BindPaths
            && BindPaths->Number >= v17
            && ndisEqualUnicodeStringDispatchLevel(a1->BindPaths->Paths, BindPaths->Paths) )
          {
            KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
            MiniportQueue->MiniportThread = KeGetCurrentThread();
            if ( (v9 & MiniportQueue->Flags & 0x80200020) == 0
              && (MiniportQueue->PnPFlags & 0x1084110) == 0
              && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
              && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || v18) )
            {
              if ( ndisReferenceMiniport(MiniportQueue, a6) )
              {
                v7 = v6;
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, a5);
                p_Number = &MiniportQueue->BindPaths->Number;
                v6 = MiniportQueue;
                ++MiniportQueue->NsiOpenReferences;
                v17 = *p_Number;
              }
            }
            MiniportQueue->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
            if ( v7 )
            {
              ndisDereferenceMiniportForNsi(v7, a5, a6);
              v7 = 0LL;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v11 = v24;
        v15 = v26;
        v25 = v17;
        p_SpinLock = &v24->Ref.SpinLock;
      }
      KeReleaseSpinLock(p_SpinLock, v15);
      v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v11->NextDriver;
      v12 = v21;
      ndisDereferenceDriver(v11, 1u, MDRVREF_MPREFT);
    }
    else
    {
      NextDriver = v11->NextDriver;
    }
    v11 = NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  return v6;
}
