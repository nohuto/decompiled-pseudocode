/*
 * XREFs of ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0029760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0015420 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1FB0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2098 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
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
  void **i; // rcx
  char *v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // rsi
  unsigned int v25; // edx
  int v26; // ecx
  char v27; // al
  KIRQL v28; // al
  struct _NDIS_M_DRIVER_BLOCK *v29; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v31; // bl
  PVOID v32; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx

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
      NdisReferenceWithTag(RefCountTracker, 0xBu);
      v9 = 0;
    }
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( !v9 )
  {
    if ( HIBYTE(dword_1C00F76B0) )
    {
      LOBYTE(v9) = 1;
      ndisTraceDpcStart(v4, 2u);
      Clock = WmiGetClock(0LL, 0LL);
    }
    v12 = *((_QWORD *)a2 + 18);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 3760) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1880));
      for ( i = (void **)&v4->TimerQueue; ; i = (void **)(v22 + 152) )
      {
        v22 = (char *)*i;
        if ( !*i )
          break;
        if ( v22 == a2 )
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
      v23 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v4, 2u, v23 - Clock);
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
          v24 = v14 + 712;
          v25 = *(_DWORD *)(v14 + 768);
          v26 = (unsigned __int16)v25 >> 1;
          if ( v25 >> 17 < 0x3FFE && v26 == (v25 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 712));
            *(_DWORD *)(v24 + 56) &= 0x10001u;
          }
          else
          {
            if ( v26 == 0 && (v25 & 1) == 0 )
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
              v27 = *(_BYTE *)(v16 + 2LL * v18 + 1);
              if ( v27 )
                break;
            }
            if ( ++v18 >= v17 )
              goto LABEL_20;
          }
          *(_BYTE *)(v16 + 2LL * v18 + 1) = v27 - 1;
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
        NdisFreeRefCount(DriverHandle->Ref.RefCountTracker);
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
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x17u,
          (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
          DriverHandle);
      v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v29 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      v31 = v28;
      while ( v29 )
      {
        if ( v29 == DriverHandle )
        {
          v32 = ndisDriverObject;
          *p_NextDriver = DriverHandle->NextDriver;
          ObfDereferenceObject(v32);
          break;
        }
        p_NextDriver = &v29->NextDriver;
        v29 = v29->NextDriver;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v31);
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
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x18u,
          (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
          DriverHandle);
    }
  }
}
