/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C000D390
 * Callers:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00090A0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x1C000D610 (WPP_RECORDER_SF_qDDqq.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v5; // ebp
  char v6; // r15
  _BYTE *v9; // rbx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  _BYTE *Pool2; // rax
  UCHAR Revision; // al
  __int16 v16; // cx
  bool v17; // cf
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT InformationBufferLength; // r9d
  PVOID InformationBuffer; // rax
  UINT BytesWritten; // ecx
  UINT BytesNeeded; // edx
  __int128 v23; // xmm0
  int v24; // ecx
  USHORT Size; // dx
  __int64 v27; // rcx

  v5 = 0;
  v6 = 0;
  v9 = 0LL;
  v10 = *(_DWORD *)&OidRequest->NdisReserved[16] & 0x20;
  if ( !v10 )
  {
    v11 = *(unsigned __int8 *)SourceHandle;
    if ( (unsigned __int8)v11 > 0x15u || (v12 = 2359328, !_bittest(&v12, v11)) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0xAu,
          (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
          SourceHandle);
      v5 = -1073741811;
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)SourceHandle == 18 || v10 )
  {
    v27 = *((_QWORD *)SourceHandle + 3);
    if ( *(_BYTE *)(v27 + 56) <= 6u && (*(_BYTE *)(v27 + 56) != 6 || *(_BYTE *)(v27 + 57) < 0x32u) )
      goto LABEL_10;
  }
  else if ( *(_BYTE *)SourceHandle == 5 )
  {
    v13 = *((_QWORD *)SourceHandle + 2);
    if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x32u) )
      goto LABEL_10;
  }
  v6 = 1;
LABEL_10:
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 248LL, PoolTag);
  v9 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = -106;
    if ( !v6 )
    {
      Revision = 1;
      v16 = 236;
      goto LABEL_13;
    }
    Revision = OidRequest->Header.Revision;
    if ( Revision == 1 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_25:
        v16 = Size;
LABEL_13:
        *((_WORD *)v9 + 1) = v16;
        v9[1] = Revision;
        v17 = OidRequest->Header.Revision < 2u;
        RequestType = OidRequest->RequestType;
        *((_DWORD *)v9 + 2) = OidRequest->PortNumber;
        *((_QWORD *)v9 + 2) = OidRequest->RequestId;
        *((_DWORD *)v9 + 3) = OidRequest->Timeout;
        *((_QWORD *)v9 + 3) = OidRequest->RequestHandle;
        v9[232] = OidRequest->SupportedRevision;
        *((_DWORD *)v9 + 1) = RequestType;
        if ( !v17 || (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x4000) != 0 )
        {
          *((_DWORD *)v9 + 60) = OidRequest[1].Header;
          *((_DWORD *)v9 + 61) = OidRequest[1].RequestType;
        }
        InformationBufferLength = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( RequestType == NdisRequestMethod )
        {
          *((_DWORD *)v9 + 16) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
          *((_DWORD *)v9 + 17) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
          *((_DWORD *)v9 + 15) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 12) = InformationBufferLength;
        }
        *((_DWORD *)v9 + 8) = OidRequest->DATA.QUERY_INFORMATION.Oid;
        InformationBuffer = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
        BytesWritten = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
        BytesNeeded = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
        *((_DWORD *)v9 + 14) = BytesNeeded;
        *((_QWORD *)v9 + 5) = InformationBuffer;
        *((_DWORD *)v9 + 12) = InformationBufferLength;
        *((_DWORD *)v9 + 13) = BytesWritten;
        v23 = *(_OWORD *)&OidRequest->NdisReserved[96];
        v24 = (*((_DWORD *)v9 + 22) ^ *(_DWORD *)&OidRequest->NdisReserved[16]) & 0x31888084;
        *((_DWORD *)v9 + 38) = *(_DWORD *)&OidRequest->NdisReserved[80];
        LOBYTE(InformationBuffer) = OidRequest->NdisReserved[72];
        *((_DWORD *)v9 + 22) = *((_DWORD *)v9 + 22) ^ v24 | 0x4000;
        v9[144] = (_BYTE)InformationBuffer;
        *((_QWORD *)v9 + 12) = OidRequest;
        *(_OWORD *)(v9 + 168) = v23;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            BytesNeeded,
            (_DWORD)OidRequest + 32,
            InformationBufferLength);
        goto LABEL_20;
      }
    }
    else if ( Revision == 2 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_25;
    }
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)OidRequest, 0LL);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
      OidRequest);
  v5 = -1073741670;
LABEL_20:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
