/*
 * XREFs of ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DF90
 * Callers:
 *     ndisIfGetMiniportStatistics @ 0x1C0102D90 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C013372C (ndisIfQuerySetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  unsigned __int8 v4; // r13
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbp
  KIRQL v7; // si
  _REFERENCE_EX *p_Ref; // r15
  KIRQL v9; // bl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  char v12; // bl
  KIRQL v13; // r12
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rax
  bool v15; // zf
  char v16; // si
  KIRQL v17; // bp
  NDIS_REFCOUNT_HANDLE__ *v18; // rcx
  unsigned int v19; // ecx
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  KIRQL v22; // al
  ULONG_PTR v23; // r8
  KIRQL v24; // bp
  __int64 v25; // r10
  unsigned __int8 v26; // r9
  unsigned __int8 v27; // al
  _BYTE *v28; // rdx
  char v30; // cl
  ULONG_PTR v31; // rbx
  unsigned int v32; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v33; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v39; // [rsp+30h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v40; // [rsp+40h] [rbp-48h]
  char v43; // [rsp+A8h] [rbp+20h]

  v43 = 0;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v6 = ndisMiniDriverList;
  v7 = v5;
  v40 = ndisMiniDriverList;
  while ( v6 )
  {
    p_Ref = &v6->Ref;
    v9 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
    if ( v6->Ref.Closing )
      goto LABEL_67;
    ReferenceCount = v6->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_67:
      KeReleaseSpinLock(&v6->Ref.SpinLock, v9);
      NextDriver = v6->NextDriver;
      v12 = v43;
      goto LABEL_34;
    }
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v6->Ref.RefCountTracker;
    v6->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag(RefCountTracker, 7u);
    KeReleaseSpinLock(&v6->Ref.SpinLock, v9);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    v12 = v43;
    v13 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
    MiniportQueue = v6->MiniportQueue;
    if ( !v43 )
    {
      while ( 1 )
      {
        if ( !MiniportQueue )
          goto LABEL_23;
        if ( MiniportQueue == a1 )
          break;
        MiniportQueue = MiniportQueue->NextMiniport;
        v43 = v12;
        if ( v12 )
          goto LABEL_23;
      }
      v12 = 1;
      v43 = 1;
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      v15 = (a1->Flags & 0x80200020) == 0;
      a1->MiniportThread = KeGetCurrentThread();
      if ( v15
        && (a1->PnPFlags & 0x1084110) == 0
        && a1->PnPDeviceState == NdisPnPDeviceStarted
        && a1->CurrentDevicePowerState == PowerDeviceD0 )
      {
        v16 = 1;
        v17 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
        if ( !a1->Ref.Closing )
        {
          v18 = a1->RefCountTracker;
          if ( v18 )
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v18, a3);
          v19 = a1->Ref.ReferenceCount;
          a1->Ref.ReferenceCount = v19 + 1;
          if ( v19 != -1 )
          {
LABEL_16:
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v39) = a1->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xCu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)a1,
                v39);
            }
            KeReleaseSpinLock(&a1->Ref.SpinLock, v17);
            if ( v16 )
            {
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->NsiRefCountTracker, a2);
              ++a1->NsiOpenReferences;
              v4 = 1;
            }
            v12 = 1;
            v6 = v40;
            goto LABEL_21;
          }
          a1->Ref.ReferenceCount = -1;
        }
        v16 = 0;
        goto LABEL_16;
      }
LABEL_21:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
LABEL_23:
    KeReleaseSpinLock(&p_Ref->SpinLock, v13);
    v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v6->NextDriver;
    v7 = v20;
    v22 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v23 = (ULONG_PTR)p_Ref->RefCountTracker;
    v24 = v22;
    if ( v23 - 2 > 1 )
    {
      if ( v23 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v23, 0LL);
      if ( *(_BYTE *)(v23 + 2) <= 7u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v23, 7uLL);
      if ( *(_BYTE *)(v23 + 1) )
      {
        if ( *(_BYTE *)(v23 + 1) == 1 )
        {
          v31 = v23 + 456;
          v32 = *(_DWORD *)(v23 + 512);
          if ( v32 >> 17 < 0x3FFE && (unsigned __int16)v32 >> 1 == (v32 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 456));
            *(_DWORD *)(v31 + 56) &= 0x10001u;
            v12 = v43;
          }
          else
          {
            if ( (unsigned __int16)v32 >> 1 == 0 && (v32 & 1) == 0 )
LABEL_68:
              ndisBugCheckEx(0x1EuLL, 0LL, v23, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 456), 0);
            v12 = v43;
          }
        }
      }
      else
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( v25 && (v26 = *(_BYTE *)(v23 + 3), v27 = 0, v26) )
        {
          while ( 1 )
          {
            v28 = (_BYTE *)(v25 + 2LL * v27);
            if ( *v28 == 7 )
            {
              v30 = v28[1];
              if ( v30 )
                break;
            }
            if ( ++v27 >= v26 )
              goto LABEL_31;
          }
          v28[1] = v30 - 1;
        }
        else
        {
LABEL_31:
          if ( !_bittestandreset((signed __int32 *)(v23 + 16), 7u) )
            goto LABEL_68;
        }
      }
    }
    v15 = p_Ref->ReferenceCount-- == 1;
    if ( v15 )
    {
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&p_Ref->SpinLock, v24);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x17u,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          v40);
      v33 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v33 != v40 )
        {
          p_NextDriver = &v33->NextDriver;
          v33 = v33->NextDriver;
          if ( !v33 )
            goto LABEL_56;
        }
        *p_NextDriver = v40->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_56:
      Buffer = v40->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v40->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v40->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v40->NdisDriverInfo = 0LL;
      }
      if ( (v40->Flags & 1) != 0 )
      {
        PendingDeviceList = v40->PendingDeviceList;
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
          v12 = v43;
        }
      }
      KeSetEvent(&v40->MiniportsRemovedEvent, 0, 0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x18u,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          v40);
    }
    else
    {
      KeReleaseSpinLock(&p_Ref->SpinLock, v24);
    }
LABEL_34:
    v40 = NextDriver;
    v6 = NextDriver;
    if ( v12 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
  return v4;
}
