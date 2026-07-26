/*
 * XREFs of ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00148DC
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0068354 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A30C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C00993A0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00B06AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 */

void __fastcall ndisMAbortRequests(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rcx
  _LIST_ENTRY **v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  _OWORD *v8; // rdi
  __int128 v9; // xmm0
  unsigned int v10; // r8d
  char *v11; // rdx
  __int128 v12; // xmm1
  _OWORD *v13; // rdi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  struct _NDIS_REQUEST *PendingRequest; // r14
  __int128 v19; // xmm0
  unsigned int v20; // r8d
  char *v21; // rdx
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  _OWORD *v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+78h] [rbp-8h]
  int v28; // [rsp+7Ch] [rbp-4h]
  struct _NDIS_OID_REQUEST *v29; // [rsp+A0h] [rbp+20h] BYREF

  v22 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->WSyncFlags &= ~2u;
    if ( a1->PendingOidRequest || a1->OidRequestList.Flink != &a1->OidRequestList )
    {
      *((_QWORD *)&v22 + 1) = &v22;
      p_OidRequestList = &a1->OidRequestList;
      *(_QWORD *)&v22 = &v22;
      while ( p_OidRequestList->Flink != p_OidRequestList )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x41u,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            a1);
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList
          || (v4 = Flink->Flink, Flink->Flink->Blink != Flink)
          || (p_OidRequestList->Flink = v4,
              v4->Blink = p_OidRequestList,
              v5 = (_LIST_ENTRY **)*((_QWORD *)&v22 + 1),
              **((__int128 ***)&v22 + 1) != &v22) )
        {
LABEL_29:
          __fastfail(3u);
        }
        Flink->Blink = (_LIST_ENTRY *)*((_QWORD *)&v22 + 1);
        Flink->Flink = (_LIST_ENTRY *)&v22;
        *v5 = Flink;
        *((_QWORD *)&v22 + 1) = Flink;
      }
      if ( (__int128 *)v22 != &v22 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        while ( 1 )
        {
          v6 = v22;
          if ( (__int128 *)v22 == &v22 )
            break;
          if ( *(__int128 **)(v22 + 8) != &v22 )
            goto LABEL_29;
          v7 = *(_QWORD *)v22;
          if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != (_QWORD)v22 )
            goto LABEL_29;
          v25 = 0LL;
          *(_QWORD *)&v22 = v7;
          v8 = (_OWORD *)(v6 - 72);
          *(_QWORD *)(v7 + 8) = &v22;
          v26 = v8;
          v27 = -1073676276;
          v28 = 1;
          v24 = 0LL;
          v23 = a1;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0x42u,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              (char)a1,
              v8);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxd_EtwWriteTransfer();
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v9 = *v8;
          v11 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v10 = ndisAbortedRequestsIndex;
          *(_OWORD *)v11 = v9;
          *((_OWORD *)v11 + 1) = v8[1];
          *((_OWORD *)v11 + 2) = v8[2];
          *((_OWORD *)v11 + 3) = v8[3];
          *((_OWORD *)v11 + 4) = v8[4];
          *((_OWORD *)v11 + 5) = v8[5];
          *((_OWORD *)v11 + 6) = v8[6];
          v11 += 128;
          v12 = v8[7];
          v13 = v8 + 8;
          *((_OWORD *)v11 - 1) = v12;
          *(_OWORD *)v11 = *v13;
          *((_OWORD *)v11 + 1) = v13[1];
          *((_OWORD *)v11 + 2) = v13[2];
          *((_OWORD *)v11 + 3) = v13[3];
          *((_OWORD *)v11 + 4) = v13[4];
          *((_OWORD *)v11 + 5) = v13[5];
          *((_OWORD *)v11 + 6) = v13[6];
          *((_QWORD *)v11 + 14) = *((_QWORD *)v13 + 14);
          if ( v10 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v23, v14, v15, v16);
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
        v19 = *(_OWORD *)&PendingOidRequest->Header.Type;
        v29 = 0LL;
        v21 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v20 = ndisAbortedRequestsIndex;
        *(_OWORD *)v21 = v19;
        *((_OWORD *)v21 + 1) = *(_OWORD *)&PendingOidRequest->RequestId;
        *((_OWORD *)v21 + 2) = *(_OWORD *)&PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
        *((_OWORD *)v21 + 3) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.InputBufferLength;
        *((_OWORD *)v21 + 4) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead;
        *((_OWORD *)v21 + 5) = *(_OWORD *)&PendingOidRequest->NdisReserved[8];
        *((_OWORD *)v21 + 6) = *(_OWORD *)&PendingOidRequest->NdisReserved[24];
        v21 += 128;
        *((_OWORD *)v21 - 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[40];
        *(_OWORD *)v21 = *(_OWORD *)&PendingOidRequest->NdisReserved[56];
        *((_OWORD *)v21 + 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[72];
        *((_OWORD *)v21 + 2) = *(_OWORD *)&PendingOidRequest->NdisReserved[88];
        *((_OWORD *)v21 + 3) = *(_OWORD *)&PendingOidRequest->NdisReserved[104];
        *((_OWORD *)v21 + 4) = *(_OWORD *)&PendingOidRequest->NdisReserved[120];
        *((_OWORD *)v21 + 5) = *(_OWORD *)&PendingOidRequest->MiniportReserved[8];
        *((_OWORD *)v21 + 6) = *(_OWORD *)&PendingOidRequest->SourceReserved[8];
        *((_QWORD *)v21 + 14) = *(_QWORD *)&PendingOidRequest[1].Header.Type;
        if ( v20 == 16 )
          ndisAbortedRequestsIndex = 0;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( a1->MajorNdisVersion < 6u )
        {
          ndisCompleteLegacyRequest(a1, -1073676276, PendingRequest);
        }
        else if ( (*(_DWORD *)&PendingOidRequest->NdisReserved[16] & 0x8000000) == 0
               || (ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)a1, PendingOidRequest, 0, &v29),
                   (PendingOidRequest = v29) != 0LL) )
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
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
}
