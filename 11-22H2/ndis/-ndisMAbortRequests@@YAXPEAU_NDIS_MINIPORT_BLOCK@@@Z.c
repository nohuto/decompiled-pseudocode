/*
 * XREFs of ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014684
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C006D714 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008968 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00093D0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C0027264 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C009F370 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall ndisMAbortRequests(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rcx
  _LIST_ENTRY **v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int128 *v8; // rcx
  __int128 *v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int128 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  struct _NDIS_REQUEST *PendingRequest; // r14
  __int128 v20; // xmm0
  unsigned int v21; // r8d
  char *v22; // rdx
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int128 *v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+78h] [rbp-8h]
  int v29; // [rsp+7Ch] [rbp-4h]
  struct _NDIS_OID_REQUEST *v30; // [rsp+A0h] [rbp+20h] BYREF

  v23 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->WSyncFlags &= ~2u;
    p_OidRequestList = &a1->OidRequestList;
    if ( a1->PendingOidRequest || p_OidRequestList->Flink != p_OidRequestList )
    {
      *((_QWORD *)&v23 + 1) = &v23;
      *(_QWORD *)&v23 = &v23;
      while ( p_OidRequestList->Flink != p_OidRequestList )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x41u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList
          || (v4 = Flink->Flink, Flink->Flink->Blink != Flink)
          || (p_OidRequestList->Flink = v4,
              v4->Blink = p_OidRequestList,
              v5 = (_LIST_ENTRY **)*((_QWORD *)&v23 + 1),
              **((__int128 ***)&v23 + 1) != &v23) )
        {
LABEL_29:
          __fastfail(3u);
        }
        Flink->Blink = (_LIST_ENTRY *)*((_QWORD *)&v23 + 1);
        Flink->Flink = (_LIST_ENTRY *)&v23;
        *v5 = Flink;
        *((_QWORD *)&v23 + 1) = Flink;
      }
      if ( (__int128 *)v23 != &v23 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        while ( 1 )
        {
          v6 = v23;
          if ( (__int128 *)v23 == &v23 )
            break;
          if ( *(__int128 **)(v23 + 8) != &v23 )
            goto LABEL_29;
          v7 = *(_QWORD *)v23;
          if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != (_QWORD)v23 )
            goto LABEL_29;
          v26 = 0LL;
          v8 = &v23;
          *(_QWORD *)&v23 = v7;
          v9 = (__int128 *)(v6 - 72);
          *(_QWORD *)(v7 + 8) = &v23;
          v27 = v9;
          v28 = -1073676276;
          v29 = 1;
          v25 = 0LL;
          v24 = a1;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0x42u,
              (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
              (char)a1,
              v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxq_EtwWriteTransfer(
              (__int64)v8,
              (__int64)&AbortingRequestEx,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              *((_DWORD *)v9 + 8));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = v9[1];
          *((_OWORD *)v12 + 2) = v9[2];
          *((_OWORD *)v12 + 3) = v9[3];
          *((_OWORD *)v12 + 4) = v9[4];
          *((_OWORD *)v12 + 5) = v9[5];
          *((_OWORD *)v12 + 6) = v9[6];
          v12 += 128;
          v13 = v9[7];
          v14 = v9 + 8;
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *v14;
          *((_OWORD *)v12 + 1) = v14[1];
          *((_OWORD *)v12 + 2) = v14[2];
          *((_OWORD *)v12 + 3) = v14[3];
          *((_OWORD *)v12 + 4) = v14[4];
          *((_OWORD *)v12 + 5) = v14[5];
          *((_OWORD *)v12 + 6) = v14[6];
          *((_QWORD *)v12 + 14) = *((_QWORD *)v14 + 14);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v24, v15, v16, v17);
        }
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      PendingOidRequest = a1->PendingOidRequest;
      if ( PendingOidRequest )
      {
        a1->PendingOidRequest = 0LL;
        PendingRequest = a1->PendingRequest;
        a1->PendingRequest = 0LL;
        v20 = *(_OWORD *)&PendingOidRequest->Header.Type;
        v30 = 0LL;
        v22 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v21 = ndisAbortedRequestsIndex;
        *(_OWORD *)v22 = v20;
        *((_OWORD *)v22 + 1) = *(_OWORD *)&PendingOidRequest->RequestId;
        *((_OWORD *)v22 + 2) = *(_OWORD *)&PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
        *((_OWORD *)v22 + 3) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.InputBufferLength;
        *((_OWORD *)v22 + 4) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead;
        *((_OWORD *)v22 + 5) = *(_OWORD *)&PendingOidRequest->NdisReserved[8];
        *((_OWORD *)v22 + 6) = *(_OWORD *)&PendingOidRequest->NdisReserved[24];
        v22 += 128;
        *((_OWORD *)v22 - 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[40];
        *(_OWORD *)v22 = *(_OWORD *)&PendingOidRequest->NdisReserved[56];
        *((_OWORD *)v22 + 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[72];
        *((_OWORD *)v22 + 2) = *(_OWORD *)&PendingOidRequest->NdisReserved[88];
        *((_OWORD *)v22 + 3) = *(_OWORD *)&PendingOidRequest->NdisReserved[104];
        *((_OWORD *)v22 + 4) = *(_OWORD *)&PendingOidRequest->NdisReserved[120];
        *((_OWORD *)v22 + 5) = *(_OWORD *)&PendingOidRequest->MiniportReserved[8];
        *((_OWORD *)v22 + 6) = *(_OWORD *)&PendingOidRequest->SourceReserved[8];
        *((_QWORD *)v22 + 14) = *(_QWORD *)&PendingOidRequest[1].Header.Type;
        if ( v21 == 16 )
          ndisAbortedRequestsIndex = 0;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( a1->MajorNdisVersion < 6u )
        {
          ndisCompleteLegacyRequest(a1, -1073676276, PendingRequest);
        }
        else if ( (*(_DWORD *)&PendingOidRequest->NdisReserved[16] & 0x8000000) == 0
               || (ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)a1, PendingOidRequest, 0, &v30),
                   (PendingOidRequest = v30) != 0LL) )
        {
          ndisMOidRequestCompleteInternal(a1, PendingOidRequest, -1073676276, PendingOidRequest);
        }
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x43u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
