/*
 * XREFs of ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C0027264
 * Callers:
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014684 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0027540 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C003F356 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0040460 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C009F370 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00ACAE4 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00B5D1C (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00093D0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025928 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009F1DC (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        struct _NDIS_OID_REQUEST *a4)
{
  int v4; // esi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rdi
  int v6; // esi
  _ULONG_REFERENCE *p_Ref; // r13
  KIRQL v10; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // dl
  KIRQL v17; // al
  NDIS_REFCOUNT_HANDLE__ *v18; // r8
  KIRQL v19; // si
  __int64 v20; // rcx
  unsigned __int8 v21; // r11
  unsigned __int8 v22; // dl
  int v23; // edi
  KIRQL v24; // dl
  KIRQL v25; // dl
  NDIS_REFCOUNT_HANDLE__ *v26; // rdi
  unsigned int v27; // edx
  int v28; // ecx
  char v29; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h]
  struct _NDIS_MINIPORT_BLOCK *v32; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v35; // [rsp+60h] [rbp-10h]
  int v36; // [rsp+68h] [rbp-8h]
  int v37; // [rsp+6Ch] [rbp-4h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+40h] BYREF

  v4 = *(_DWORD *)&a2->NdisReserved[16];
  AllDirectRequestsCompletedEvent = 0LL;
  v34 = 0LL;
  v6 = v4 & 0x200000;
  NewIrql = 0;
  v35 = a2;
  v36 = a3;
  v33 = 0LL;
  p_Ref = &a1->Ref;
  v32 = a1;
  v37 = (a4 != 0LL) | 2;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v12 = v10;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x4Bu);
  ++p_Ref->ReferenceCount;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&p_Ref->SpinLock, v12);
  if ( a4 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v24 = NewIrql;
    a1->WSyncFlags &= ~1u;
    a1->ProcessedOidRequest = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v24);
  }
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v32, v13, v14, v15);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( v6 )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 && !a1->DirectOidRequestCount )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  else if ( a1->OidRequestList.Flink == &a1->OidRequestList )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 )
    {
      AllDirectRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
    }
  }
  else
  {
    v25 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v25);
    if ( (unsigned int)ndisQueueRequestWorkItem(a1, 0LL, 17) != 259 )
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  }
  v16 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v16);
  if ( AllDirectRequestsCompletedEvent )
    KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x19u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
  v17 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
  v18 = a1->RefCountTracker;
  v19 = v17;
  if ( v18 && (unsigned __int64)v18 - 2 > 1 )
  {
    if ( v18 == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *((_BYTE *)v18 + 2) <= 0x4Bu )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v18, 0x4BuLL);
    if ( *((_BYTE *)v18 + 1) )
    {
      if ( *((_BYTE *)v18 + 1) == 1 )
      {
        v26 = v18 + 1202;
        v27 = *((_DWORD *)v18 + 1216);
        v28 = (unsigned __int16)v27 >> 1;
        if ( v27 >> 17 < 0x3FFE && v28 == (v27 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v18 + 1202));
          *((_DWORD *)v26 + 14) &= 0x10001u;
        }
        else
        {
          if ( v28 == 0 && (v27 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v18, 0x4BuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v18 + 1202), 0);
        }
      }
    }
    else
    {
      v20 = *((_QWORD *)v18 + 1);
      if ( v20 && (v21 = *((_BYTE *)v18 + 3), v22 = 0, v21) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v20 + 2LL * v22) == 75 )
          {
            v29 = *(_BYTE *)(v20 + 2LL * v22 + 1);
            if ( v29 )
              break;
          }
          if ( ++v22 >= v21 )
            goto LABEL_22;
        }
        *(_BYTE *)(v20 + 2LL * v22 + 1) = v29 - 1;
      }
      else
      {
LABEL_22:
        if ( !_bittestandreset((signed __int32 *)v18 + 6, 0xBu) )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v18, 0x4BuLL);
      }
    }
  }
  v23 = p_Ref->ReferenceCount - 1;
  p_Ref->ReferenceCount = v23;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = a1->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v31);
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v19);
  if ( !v23 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x1Au,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
}
