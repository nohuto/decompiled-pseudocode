/*
 * XREFs of ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000A6A0
 * Callers:
 *     ndisIfGetMiniportStatistics @ 0x1C010DA50 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C013F3F8 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_NSI_REFTAG a2,
        enum _NDIS_MP_REFTAG a3)
{
  char v4; // r13
  unsigned __int8 v5; // r12
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // rbp
  KIRQL v8; // si
  _REFERENCE_EX *p_Ref; // r15
  KIRQL v10; // bl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v13; // bl
  struct _NDIS_MINIPORT_BLOCK *i; // rax
  bool v15; // zf
  char v16; // si
  int v17; // edx
  KIRQL v18; // bp
  NDIS_REFCOUNT_HANDLE__ *v19; // rcx
  unsigned int v20; // ecx
  KIRQL v21; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  KIRQL v23; // al
  ULONG_PTR v24; // r8
  KIRQL v25; // bp
  __int64 v26; // r10
  unsigned __int8 v27; // r9
  unsigned __int8 v28; // al
  _BYTE *v29; // rdx
  char v31; // cl
  ULONG_PTR v32; // rbx
  unsigned int v33; // r9d
  int v34; // edx
  struct _NDIS_M_DRIVER_BLOCK *v35; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v41; // edx
  struct _NDIS_M_DRIVER_BLOCK *v42; // [rsp+48h] [rbp-40h]
  KIRQL v43; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v7 = ndisMiniDriverList;
  v8 = v6;
  v42 = ndisMiniDriverList;
  while ( v7 )
  {
    p_Ref = &v7->Ref;
    v10 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
    if ( !v7->Ref.Closing )
    {
      ReferenceCount = v7->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v7->Ref.RefCountTracker;
        v7->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker);
        KeReleaseSpinLock(&v7->Ref.SpinLock, v10);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
        v43 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
        v13 = v43;
        for ( i = v7->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( i == a1 )
          {
            v4 = 1;
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            v15 = (a1->Flags & 0x80200020) == 0;
            a1->MiniportThread = KeGetCurrentThread();
            if ( v15
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v16 = 1;
              v18 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
              if ( !a1->Ref.Closing )
              {
                v19 = a1->RefCountTracker;
                if ( v19 )
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v19);
                v20 = a1->Ref.ReferenceCount;
                a1->Ref.ReferenceCount = v20 + 1;
                if ( v20 != -1 )
                {
LABEL_16:
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v17) = 4;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v17,
                      20,
                      12,
                      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                      (char)a1,
                      a1->Ref.ReferenceCount);
                  }
                  KeReleaseSpinLock(&a1->Ref.SpinLock, v18);
                  if ( v16 )
                  {
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->NsiRefCountTracker);
                    ++a1->NsiOpenReferences;
                    v5 = 1;
                  }
                  v7 = v42;
                  v13 = v43;
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
            break;
          }
        }
        KeReleaseSpinLock(&p_Ref->SpinLock, v13);
        v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v7->NextDriver;
        v8 = v21;
        v23 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v24 = (ULONG_PTR)p_Ref->RefCountTracker;
        v25 = v23;
        if ( v24 - 2 > 1 )
        {
          if ( v24 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v24, 0LL);
          if ( *(_BYTE *)(v24 + 2) <= 7u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v24, 7uLL);
          if ( *(_BYTE *)(v24 + 1) )
          {
            if ( *(_BYTE *)(v24 + 1) == 1 )
            {
              v32 = v24 + 456;
              v33 = *(_DWORD *)(v24 + 512);
              if ( v33 >> 17 < 0x3FFE && (unsigned __int16)v33 >> 1 == (v33 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 456));
                *(_DWORD *)(v32 + 56) &= 0x10001u;
              }
              else
              {
                if ( (unsigned __int16)v33 >> 1 == 0 && (v33 & 1) == 0 )
LABEL_66:
                  ndisBugCheckEx(0x1EuLL, 0LL, v24, 7uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 456), 0);
              }
            }
          }
          else
          {
            v26 = *(_QWORD *)(v24 + 8);
            if ( v26 && (v27 = *(_BYTE *)(v24 + 3), v28 = 0, v27) )
            {
              while ( 1 )
              {
                v29 = (_BYTE *)(v26 + 2LL * v28);
                if ( *v29 == 7 )
                {
                  v31 = v29[1];
                  if ( v31 )
                    break;
                }
                if ( ++v28 >= v27 )
                  goto LABEL_31;
              }
              v29[1] = v31 - 1;
            }
            else
            {
LABEL_31:
              if ( !_bittestandreset((signed __int32 *)(v24 + 16), 7u) )
                goto LABEL_66;
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
          KeReleaseSpinLock(&p_Ref->SpinLock, v25);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v34,
              20,
              23,
              (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
              (char)v42);
          }
          v35 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v35 != v42 )
            {
              p_NextDriver = &v35->NextDriver;
              v35 = v35->NextDriver;
              if ( !v35 )
                goto LABEL_55;
            }
            *p_NextDriver = v42->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_55:
          Buffer = v42->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v42->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v42->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v42->NdisDriverInfo = 0LL;
          }
          if ( (v42->Flags & 1) != 0 )
          {
            PendingDeviceList = v42->PendingDeviceList;
            if ( PendingDeviceList )
            {
              do
              {
                Next = PendingDeviceList->Next;
                ExFreePoolWithTag(PendingDeviceList, 0);
                PendingDeviceList = Next;
              }
              while ( Next );
            }
          }
          KeSetEvent(&v42->MiniportsRemovedEvent, 0, 0);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v41) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v41,
              20,
              24,
              (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
              (char)v42);
          }
        }
        else
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v25);
        }
        goto LABEL_34;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    KeReleaseSpinLock(&v7->Ref.SpinLock, v10);
    NextDriver = v7->NextDriver;
LABEL_34:
    v42 = NextDriver;
    v7 = NextDriver;
    if ( v4 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  return v5;
}
