/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C000D850
 * Callers:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009D80 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x1C000DA80 (WPP_RECORDER_SF_qDDqq.c)
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
  __int64 v10; // rcx
  _BYTE *Pool2; // rax
  int v12; // r9d
  UCHAR Revision; // al
  __int16 v14; // cx
  bool v15; // cf
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT InformationBufferLength; // r8d
  PVOID InformationBuffer; // rax
  UINT BytesWritten; // edx
  int v20; // ecx
  USHORT Size; // dx
  __int64 v23; // rcx

  v5 = 0;
  v6 = 0;
  v9 = 0LL;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 18 )
      goto LABEL_26;
    if ( ((*(_BYTE *)SourceHandle - 5) & 0xEF) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0xAu,
          (struct _GUID *)&WPP_492abc64950d3d1c0cf6ddade1213689_Traceguids,
          SourceHandle);
      v5 = -1073741811;
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)SourceHandle != 18 && (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v10 = *((_QWORD *)SourceHandle + 2);
      if ( *(_BYTE *)(v10 + 100) <= 6u && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x32u) )
        goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_26:
  v23 = *((_QWORD *)SourceHandle + 3);
  if ( *(_BYTE *)(v23 + 56) <= 6u && (*(_BYTE *)(v23 + 56) != 6 || *(_BYTE *)(v23 + 57) < 0x32u) )
    goto LABEL_10;
LABEL_21:
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
      v14 = 236;
      goto LABEL_13;
    }
    Revision = OidRequest->Header.Revision;
    if ( Revision == 1 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_25:
        v14 = Size;
LABEL_13:
        *((_WORD *)v9 + 1) = v14;
        v9[1] = Revision;
        v15 = OidRequest->Header.Revision < 2u;
        RequestType = OidRequest->RequestType;
        *((_DWORD *)v9 + 2) = OidRequest->PortNumber;
        *((_QWORD *)v9 + 2) = OidRequest->RequestId;
        *((_DWORD *)v9 + 3) = OidRequest->Timeout;
        *((_QWORD *)v9 + 3) = OidRequest->RequestHandle;
        v9[232] = OidRequest->SupportedRevision;
        *((_DWORD *)v9 + 1) = RequestType;
        if ( !v15 || (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x4000) != 0 )
        {
          *((_DWORD *)v9 + 60) = OidRequest[1].Header;
          *((_DWORD *)v9 + 61) = OidRequest[1].RequestType;
        }
        *((_DWORD *)v9 + 8) = OidRequest->DATA.QUERY_INFORMATION.Oid;
        InformationBufferLength = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( RequestType == NdisRequestMethod )
        {
          *((_DWORD *)v9 + 16) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
          *((_DWORD *)v9 + 17) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
          *((_DWORD *)v9 + 15) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 12) = InformationBufferLength;
        }
        InformationBuffer = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
        BytesWritten = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
        *((_DWORD *)v9 + 14) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
        *((_QWORD *)v9 + 5) = InformationBuffer;
        *((_DWORD *)v9 + 12) = InformationBufferLength;
        *((_DWORD *)v9 + 13) = BytesWritten;
        v20 = (*((_DWORD *)v9 + 22) ^ *(_DWORD *)&OidRequest->NdisReserved[16]) & 0x1888084;
        *((_DWORD *)v9 + 38) = *(_DWORD *)&OidRequest->NdisReserved[80];
        LOBYTE(InformationBuffer) = OidRequest->NdisReserved[72];
        *((_DWORD *)v9 + 22) = *((_DWORD *)v9 + 22) ^ v20 | 0x4000;
        v9[144] = (_BYTE)InformationBuffer;
        *((_QWORD *)v9 + 12) = OidRequest;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(*((_QWORD *)WPP_GLOBAL_Control + 8), BytesWritten, InformationBufferLength, v12);
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
      (struct _GUID *)&WPP_492abc64950d3d1c0cf6ddade1213689_Traceguids,
      OidRequest);
  v5 = -1073741670;
LABEL_20:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
