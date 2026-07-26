/*
 * XREFs of ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerDpcX(struct _KDPC *a1, char *a2, void *a3, void *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  __int64 Clock; // r12
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  KIRQL v8; // r15
  int v9; // ebp
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v12; // rdx
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // bp
  __int64 v16; // rcx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // dl
  char v20; // si
  int v21; // edx
  void **i; // rcx
  char *v23; // rax
  __int64 v24; // rax
  ULONG_PTR v25; // rsi
  unsigned int v26; // edx
  int v27; // ecx
  char v28; // al
  KIRQL v29; // al
  struct _NDIS_M_DRIVER_BLOCK *v30; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v32; // bl
  PVOID v33; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v38; // edx

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2 + 18);
  Clock = 0LL;
  DriverHandle = v4->DriverHandle;
  v8 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v9 = 1;
  if ( !DriverHandle->Ref.Closing )
  {
    ReferenceCount = DriverHandle->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v9 = 2;
    }
    else
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)DriverHandle->Ref.RefCountTracker;
      DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(RefCountTracker);
      v9 = 0;
    }
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( !v9 )
  {
    if ( HIBYTE(dword_1C00EE5E8) )
    {
      LOBYTE(v9) = 1;
      ndisTraceDpcStart(v4, 2u);
      Clock = WmiGetClock(0LL, 0LL);
    }
    v12 = *((_QWORD *)a2 + 18);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 3760) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1880));
      for ( i = (void **)&v4->TimerQueue; ; i = (void **)(v23 + 152) )
      {
        v23 = (char *)*i;
        if ( !*i )
          break;
        if ( v23 == a2 )
        {
          if ( !*((_DWORD *)a2 + 15) )
            *i = (void *)*((_QWORD *)a2 + 19);
          break;
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)a2 + 18) + 1880LL));
    }
    if ( (v4->PnPFlags & 0x1000000) == 0 )
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2 + 16))(0LL, *((_QWORD *)a2 + 17), 0LL, 0LL);
    if ( (_BYTE)v9 )
    {
      v24 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v4, 2u, v24 - Clock);
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
    v14 = (ULONG_PTR)DriverHandle->Ref.RefCountTracker;
    v15 = v13;
    if ( v14 - 2 > 1 )
    {
      if ( v14 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v14, 0LL);
      if ( *(_BYTE *)(v14 + 2) <= 0xBu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v14, 0xBuLL);
      if ( *(_BYTE *)(v14 + 1) )
      {
        if ( *(_BYTE *)(v14 + 1) == 1 )
        {
          v25 = v14 + 712;
          v26 = *(_DWORD *)(v14 + 768);
          v27 = (unsigned __int16)v26 >> 1;
          if ( v26 >> 17 < 0x3FFE && v27 == (v26 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 712));
            *(_DWORD *)(v25 + 56) &= 0x10001u;
          }
          else
          {
            if ( v27 == 0 && (v26 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xBuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 712), 0);
          }
        }
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( v16 && (v17 = *(_BYTE *)(v14 + 3), v18 = 0, v17) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v16 + 2LL * v18) == 11 )
            {
              v28 = *(_BYTE *)(v16 + 2LL * v18 + 1);
              if ( v28 )
                break;
            }
            if ( ++v18 >= v17 )
              goto LABEL_20;
          }
          *(_BYTE *)(v16 + 2LL * v18 + 1) = v28 - 1;
        }
        else
        {
LABEL_20:
          if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xBuLL);
        }
      }
    }
    if ( DriverHandle->Ref.ReferenceCount-- == 1 )
    {
      v20 = 1;
      if ( !DriverHandle->Ref.ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)DriverHandle->Ref.RefCountTracker);
        DriverHandle->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v20 = 0;
    }
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v15);
    if ( v20 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v21,
          20,
          23,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          (char)DriverHandle);
      }
      v29 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v30 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      v32 = v29;
      while ( v30 )
      {
        if ( v30 == DriverHandle )
        {
          v33 = ndisDriverObject;
          *p_NextDriver = DriverHandle->NextDriver;
          ObfDereferenceObject(v33);
          break;
        }
        p_NextDriver = &v30->NextDriver;
        v30 = v30->NextDriver;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
      Buffer = DriverHandle->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        DriverHandle->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = DriverHandle->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        DriverHandle->NdisDriverInfo = 0LL;
      }
      if ( (DriverHandle->Flags & 1) != 0 )
      {
        PendingDeviceList = DriverHandle->PendingDeviceList;
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
      KeSetEvent(&DriverHandle->MiniportsRemovedEvent, 0, 0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v38,
          20,
          24,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          (char)DriverHandle);
      }
    }
  }
}
