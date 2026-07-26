/*
 * XREFs of ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C00A5730
 * Callers:
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016EBC (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0024960 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A0310 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _LIST_ENTRY *a2,
        unsigned int a3,
        char a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  unsigned int v6; // r15d
  struct _NDIS_FILTER_BLOCK *v7; // rbx
  bool v8; // r13
  unsigned int v10; // r12d
  struct _WORK_QUEUE_ITEM *Pool2; // rsi
  UCHAR Type; // al
  struct _NDIS_FILTER_BLOCK *RequestHandle; // rdi
  int v14; // ebx
  __int64 p_PnPRef; // rbp
  char v16; // al
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY **p_Blink; // rdi
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY **v22; // rbx
  _DWORD v24[4]; // [rsp+40h] [rbp-38h] BYREF

  v4 = a1;
  v6 = a3;
  v7 = 0LL;
  v8 = 0;
  v10 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
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
    Type = v4->Header.Type;
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v4;
  }
  else
  {
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v4->Next.RequestHandle;
    Type = RequestHandle->Header.Type;
    if ( RequestHandle->Header.Type == 5 )
    {
      while ( 1 )
      {
        v24[0] = 0;
        v8 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)v24);
        if ( v8 )
          break;
        RequestHandle = (struct _NDIS_FILTER_BLOCK *)RequestHandle->NextRequestHandle;
        if ( RequestHandle->Header.Type != 5 )
          goto LABEL_17;
      }
      v14 = 1;
      if ( v6 > 1 )
      {
        while ( 1 )
        {
          v24[0] = 0;
          v8 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)v24);
          if ( !v8 )
            break;
          if ( ++v14 >= v6 )
            goto LABEL_17;
        }
        for ( ; v14; --v14 )
          ndisDereferenceRef(&RequestHandle->PnPRef.SpinLock, 0xFu);
      }
LABEL_17:
      Type = RequestHandle->Header.Type;
      v7 = RequestHandle;
      v4 = a1;
      if ( RequestHandle->Header.Type != 5 )
        v7 = 0LL;
    }
  }
  if ( Type != 17 )
    RequestHandle = 0LL;
  if ( v7 )
  {
    if ( !v8 )
      goto LABEL_45;
    v24[0] = 0;
    p_PnPRef = (__int64)&v7->PnPRef;
    v16 = ndisReferenceRefEx(&v7->PnPRef.SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)v24);
  }
  else
  {
    v16 = ndisReferenceMiniport(v4, 0x47u);
    p_PnPRef = 312LL;
  }
  if ( v16 )
  {
    if ( v7 )
    {
      Pool2[1].Parameter = v7;
      KeAcquireSpinLockAtDpcLevel(&v7->Lock);
      v7->LockThread = KeGetCurrentThread();
      while ( 1 )
      {
        Flink = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( Flink->Blink != a2 )
          goto LABEL_41;
        v18 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink )
          goto LABEL_41;
        a2->Flink = v18;
        p_Blink = &Flink[-5].Blink;
        v18->Blink = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v7, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink) )
          ExFreePoolWithTag(p_Blink, 0);
      }
      v7->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v7->Lock);
    }
    else
    {
      Pool2[1].Parameter = RequestHandle;
      while ( 1 )
      {
        v20 = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( v20->Blink != a2 || (v21 = v20->Flink, v20->Flink->Blink != v20) )
LABEL_41:
          __fastfail(3u);
        a2->Flink = v21;
        v22 = &v20[-5].Blink;
        v21->Blink = a2;
        if ( (unsigned int)ndisMQueueOidRequest(
                             (struct _NDIS_MINIPORT_BLOCK *)RequestHandle,
                             (struct _NDIS_OID_REQUEST *)&v20[-5].Blink) )
          ExFreePoolWithTag(v22, 0);
      }
    }
    RtlGetCallersAddress((PVOID *)&Pool2[1].List.Flink, (PVOID *)&Pool2[1].List.Blink);
    Pool2->Parameter = Pool2;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_46;
  }
  if ( v8 && v6 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)p_PnPRef, 0xFu);
      --v6;
    }
    while ( v6 );
  }
LABEL_45:
  ExFreePoolWithTag(Pool2, 0);
LABEL_46:
  LOBYTE(v4) = (_BYTE)a1;
LABEL_47:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v4,
      (char)a2,
      v10);
  return v10;
}
