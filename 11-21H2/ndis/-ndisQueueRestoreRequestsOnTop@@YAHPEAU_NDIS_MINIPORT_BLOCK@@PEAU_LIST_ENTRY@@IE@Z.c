/*
 * XREFs of ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009F348
 * Callers:
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016CD0 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022EB8 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0025DB0 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A318 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _LIST_ENTRY *a2,
        unsigned int a3,
        char a4)
{
  bool v4; // r13
  struct _NDIS_FILTER_BLOCK *v6; // rbx
  unsigned int v7; // r15d
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  unsigned int v10; // r12d
  struct _WORK_QUEUE_ITEM *Pool2; // rsi
  UCHAR Type; // al
  struct _NDIS_FILTER_BLOCK *RequestHandle; // rdi
  __int64 p_PnPRef; // rbp
  char v15; // al
  int v16; // ebx
  _LIST_ENTRY *v17; // r10
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v19; // rcx
  void *v20; // r10
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY *v22; // rcx
  void *v23; // r9
  _DWORD v25[4]; // [rsp+40h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0;
  v6 = 0LL;
  v7 = a3;
  v9 = a1;
  v10 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a3);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_47;
  }
  if ( a4 )
  {
    Type = v9->Header.Type;
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v9;
  }
  else
  {
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v9->Next.RequestHandle;
    Type = RequestHandle->Header.Type;
    if ( RequestHandle->Header.Type == 5 )
    {
      while ( 1 )
      {
        v25[0] = 0;
        v4 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)v25);
        if ( v4 )
          break;
        RequestHandle = (struct _NDIS_FILTER_BLOCK *)RequestHandle->NextRequestHandle;
        Type = RequestHandle->Header.Type;
        if ( RequestHandle->Header.Type != 5 )
          goto LABEL_10;
      }
      v16 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v25[0] = 0;
          v4 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)v25);
          if ( !v4 )
            break;
          if ( ++v16 >= v7 )
            goto LABEL_21;
        }
        do
        {
          ndisDereferenceRef(&RequestHandle->PnPRef.SpinLock, 0xFu);
          --v16;
        }
        while ( v16 );
LABEL_21:
        v9 = a1;
      }
      Type = RequestHandle->Header.Type;
      if ( RequestHandle->Header.Type != 5 )
      {
LABEL_10:
        v6 = 0LL;
        goto LABEL_11;
      }
      v6 = RequestHandle;
    }
  }
LABEL_11:
  if ( Type != 17 )
    RequestHandle = 0LL;
  if ( v6 )
  {
    if ( !v4 )
      goto LABEL_45;
    v25[0] = 0;
    p_PnPRef = (__int64)&v6->PnPRef;
    v15 = ndisReferenceRefEx(&v6->PnPRef.SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)v25);
  }
  else
  {
    v15 = ndisReferenceMiniport(v9, 0x47u);
    p_PnPRef = 312LL;
  }
  v17 = 0LL;
  if ( v15 )
  {
    if ( v6 )
    {
      Pool2[1].Parameter = v6;
      KeAcquireSpinLockAtDpcLevel(&v6->Lock);
      v6->LockThread = KeGetCurrentThread();
      while ( 1 )
      {
        Flink = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( Flink->Blink != a2 )
          goto LABEL_41;
        v19 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink )
          goto LABEL_41;
        a2->Flink = v19;
        v19->Blink = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v6, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink) )
          ExFreePoolWithTag(v20, 0);
      }
      v6->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v6->Lock);
      v17 = 0LL;
    }
    else
    {
      Pool2[1].Parameter = RequestHandle;
      while ( 1 )
      {
        v21 = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( v21->Blink != a2 || (v22 = v21->Flink, v21->Flink->Blink != v21) )
LABEL_41:
          __fastfail(3u);
        a2->Flink = v22;
        v22->Blink = a2;
        if ( (unsigned int)ndisMQueueOidRequest(
                             (struct _NDIS_MINIPORT_BLOCK *)RequestHandle,
                             (struct _NDIS_OID_REQUEST *)&v21[-5].Blink) )
        {
          ExFreePoolWithTag(v23, 0);
          v17 = 0LL;
        }
      }
    }
    Pool2[1].List.Flink = retaddr;
    Pool2[1].List.Blink = v17;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = v17;
    ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_46;
  }
  if ( v4 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)p_PnPRef, 0xFu);
      --v7;
    }
    while ( v7 );
  }
LABEL_45:
  ExFreePoolWithTag(Pool2, 0);
LABEL_46:
  LOBYTE(v9) = (_BYTE)a1;
LABEL_47:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v9,
      (char)a2,
      v10);
  return v10;
}
