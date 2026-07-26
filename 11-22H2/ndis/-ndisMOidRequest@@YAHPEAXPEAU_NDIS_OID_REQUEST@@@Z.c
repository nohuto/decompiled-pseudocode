/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00086D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x1C0008230 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C240 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024C34 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     NdisMResetMiniport @ 0x1C0071700 (NdisMResetMiniport.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094ED0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

__int64 __fastcall ndisMOidRequest(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v2; // esi
  unsigned __int8 v4; // bl
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v8; // r13
  KIRQL v9; // bl
  __int64 v10; // rdx
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  NDIS_REQUEST_TYPE RequestType; // eax
  unsigned int v13; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x6Bu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      6);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v8 = v6;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_11;
    }
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
    if ( (a1->OpenFlags & 0x8000) == 0 && a1->References )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&a1->RefCountLock);
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->RefCountTracker);
      ++a1->References;
      KeReleaseSpinLock(&a1->RefCountLock, v9);
      v4 = 1;
    }
    KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
  }
LABEL_11:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x14u,
      0x6Cu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      6,
      v4);
  if ( !v4 )
    return (unsigned int)-1073676286;
  MiniportHandle = a1->MiniportHandle;
  if ( (MiniportHandle->DriverVerifyFlags & 0x400) == 0 )
    a2->SupportedRevision = 1;
  RequestType = a2->RequestType;
  if ( RequestType == NdisRequestSetInformation )
  {
    if ( a2->DATA.QUERY_INFORMATION.Oid == 66058 )
    {
      if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
      {
        v17 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v17;
        StatusIndication.SourceHandle = MiniportHandle;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
      }
      else
      {
        v2 = -1073676266;
      }
    }
    else
    {
      if ( a2->DATA.QUERY_INFORMATION.Oid != 66066 )
        goto LABEL_19;
      if ( (a1->ProtocolHandle->Flags & 0x20000000) != 0 )
        NdisMResetMiniport(MiniportHandle);
      else
        v2 = -1073741637;
    }
LABEL_31:
    LOBYTE(v10) = 6;
    ndisMDereferenceOpenUnlocked(a1, v10);
    return v2;
  }
  if ( RequestType == NdisRequestQueryInformation && a2->DATA.QUERY_INFORMATION.Oid == 66059 )
  {
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
    {
      *(_QWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportHandle->MediaSpecificAttributes;
      a2->DATA.QUERY_INFORMATION.BytesWritten = MiniportHandle->MediaSpecificAttributes != 0LL ? 8 : 0;
    }
    else
    {
      v2 = -1073676268;
    }
    goto LABEL_31;
  }
LABEL_19:
  memset(a2->NdisReserved, 0, 0x70uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 0x20u;
  *(_QWORD *)&a2->NdisReserved[32] = a1;
  *(_QWORD *)&a2->NdisReserved[24] = 0LL;
  EtwActivityIdControl(3u, (LPGUID)&a2->NdisReserved[96]);
  if ( a2->RequestType == NdisRequestSetInformation
    && (v15 = a2->DATA.QUERY_INFORMATION.Oid + 50265846, v15 <= 5)
    && (v16 = 43, _bittest(&v16, v15)) )
  {
    v13 = ndisOidPMAddRemove(MiniportHandle, 0LL, a2);
  }
  else
  {
    v13 = ndisQueueOidRequest(a2, MiniportHandle, 0LL, 0LL);
  }
  v2 = v13;
  if ( v13 != 259 )
    goto LABEL_31;
  return v2;
}
