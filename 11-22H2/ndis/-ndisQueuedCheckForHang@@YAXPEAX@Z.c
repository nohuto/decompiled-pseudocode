/*
 * XREFs of ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C0007E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??1MiniportSpinLock@@QEAA@XZ @ 0x1C003CE24 (--1MiniportSpinLock@@QEAA@XZ.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EE2E (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F700 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007126C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C6F4 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  unsigned int v4; // ebx
  int v5; // ebx
  unsigned int WSyncFlags; // eax
  int v7; // edx
  KIRQL v8; // r15
  unsigned int PnPFlags; // ecx
  signed int v10; // r8d
  unsigned __int8 MajorNdisVersion; // dl
  ULONG v12; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 v14; // rbx
  KIRQL v15; // al
  int v16; // edx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v18; // bp
  __int64 v19; // rcx
  unsigned __int8 v20; // r11
  unsigned __int8 v21; // dl
  unsigned int v22; // ebx
  int v23; // edx
  KIRQL v24; // dl
  KIRQL v25; // bl
  int v26; // edx
  unsigned __int16 CFHangXTicks; // cx
  NDIS_REFCOUNT_HANDLE__ *v28; // rbx
  unsigned int v29; // edx
  int v30; // ecx
  char v31; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  struct _NDIS_MINIPORT_BLOCK *v33; // [rsp+40h] [rbp-38h] BYREF
  KIRQL NewIrql; // [rsp+48h] [rbp-30h]
  LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  v2 = 1;
  if ( !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync(a1, 1LL, 49LL, 0LL, 0) )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v25 = KfRaiseIrql(2u);
      v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
      if ( v25 != 2 )
        KeLowerIrql(v25);
    }
    else
    {
      v3 = ndisMInvokeCheckForHang(a1);
    }
    v4 = v3 != 0 ? 2 : 0;
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1LL, 49LL);
    if ( v3 )
    {
LABEL_54:
      ndisMResetMiniportInternal(a1, v4);
    }
    else if ( (a1->Flags & 0x1000) == 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        if ( v5 )
        {
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v33 = a1;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->LockThread = KeGetCurrentThread();
        WSyncFlags = a1->WSyncFlags;
        if ( (WSyncFlags & 1) == 0 )
        {
          MiniportSpinLock::~MiniportSpinLock((MiniportSpinLock *)&v33);
          goto LABEL_13;
        }
        if ( (WSyncFlags & 2) == 0 )
          break;
        MiniportSpinLock::~MiniportSpinLock((MiniportSpinLock *)&v33);
        if ( ++v5 >= 2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 3;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v26,
              17,
              10,
              (struct _GUID *)&WPP_bbcca2468c6c34318e9f260dcf80966e_Traceguids,
              (char)a1,
              (char)a1->PendingOidRequest);
          }
          v4 = 1;
          goto LABEL_54;
        }
      }
      CFHangXTicks = a1->CFHangXTicks;
      if ( CFHangXTicks )
        a1->CFHangXTicks = CFHangXTicks - 1;
      else
        a1->WSyncFlags = WSyncFlags | 2;
      if ( NewIrql == 254 )
      {
        a1->LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      }
      else if ( NewIrql != 255 )
      {
        v24 = NewIrql;
        a1->LockThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v24);
      }
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_13:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    if ( (a1->Flags & 0x80000000) != 0 )
      goto LABEL_22;
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x20080000) != 0 )
      goto LABEL_22;
    v10 = 1000 * a1->CheckForHangSeconds;
    MajorNdisVersion = a1->MajorNdisVersion;
    v12 = v10 / 5;
    DriverHandle = a1->DriverHandle;
    if ( MajorNdisVersion < 6u )
    {
      if ( !DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler
        || !DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
      {
        goto LABEL_22;
      }
    }
    else
    {
      if ( !DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
        || !DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
      {
        goto LABEL_22;
      }
      if ( MajorNdisVersion > 6u || a1->MinorNdisVersion >= 0x1Eu )
        v12 = 4000;
    }
    a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
    v14 = -10000LL * v10;
    KeClearEvent(&a1->CFHCompletedEvent);
    KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v14, 0, v12, &a1->WakeUpDpcTimer.Dpc);
LABEL_22:
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      20,
      25,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1);
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v18 = v15;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *((_BYTE *)RefCountTracker + 2) <= 0x53u )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, 0x53uLL);
    if ( *((_BYTE *)RefCountTracker + 1) )
    {
      if ( *((_BYTE *)RefCountTracker + 1) == 1 )
      {
        v28 = RefCountTracker + 1330;
        v29 = *((_DWORD *)RefCountTracker + 1344);
        v30 = (unsigned __int16)v29 >> 1;
        if ( v29 >> 17 < 0x3FFE && v30 == (v29 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
          *((_DWORD *)v28 + 14) &= 0x10001u;
        }
        else
        {
          if ( v30 == 0 && (v29 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1330), 0);
        }
      }
    }
    else
    {
      v19 = *((_QWORD *)RefCountTracker + 1);
      if ( v19 && (v20 = *((_BYTE *)RefCountTracker + 3), v21 = 0, v20) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v19 + 2LL * v21) == 83 )
          {
            v31 = *(_BYTE *)(v19 + 2LL * v21 + 1);
            if ( v31 )
              break;
          }
          if ( ++v21 >= v20 )
            goto LABEL_34;
        }
        *(_BYTE *)(v19 + 2LL * v21 + 1) = v31 - 1;
      }
      else
      {
LABEL_34:
        if ( !_bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
      }
    }
  }
  v22 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v22;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      20,
      14,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v18);
  if ( !v22 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      20,
      26,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1);
  }
}
