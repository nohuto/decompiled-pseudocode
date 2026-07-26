/*
 * XREFs of NdisFOidRequest @ 0x1C000A650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000D140 (WPP_RECORDER_SF_qDd.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094EF0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v2; // r8d
  PNDIS_OID_REQUEST v3; // rbx
  NDIS_STATUS v5; // esi
  NDIS_OID Oid; // ebp
  __int64 v7; // rcx
  NDIS_STATUS v8; // eax
  unsigned int v10; // eax
  int v11; // ecx
  char v12; // [rsp+30h] [rbp-D8h]
  char v13; // [rsp+30h] [rbp-D8h]
  char v14; // [rsp+30h] [rbp-D8h]
  char v15[4]; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+C0h] [rbp-48h]

  v3 = OidRequest;
  v5 = -1073741823;
  if ( OidRequest->Header.Type == 0x96 && OidRequest->Header.Size >= 0xECu )
  {
    if ( OidRequest->Header.Revision )
    {
      Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v15 = OidRequest->DATA.QUERY_INFORMATION.Oid;
        v12 = (char)OidRequest;
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          49,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)NdisFilterHandle,
          v12,
          v15[0]);
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
        v3->SupportedRevision = 1;
      if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) && Oid - 65798 > 1 && Oid != 65812 )
      {
        if ( v3->RequestType == NdisRequestSetInformation && v3->DATA.QUERY_INFORMATION.Oid == 66058 )
        {
          if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
          {
            v16 = *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
            memset(&StatusIndication, 0, sizeof(StatusIndication));
            StatusIndication.SourceHandle = (void *)*((_QWORD *)NdisFilterHandle + 4);
            StatusIndication.StatusBuffer = &v16;
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.StatusCode = 1073807384;
            StatusIndication.StatusBufferSize = 4;
            NdisMIndicateStatusEx(StatusIndication.SourceHandle, &StatusIndication);
            v5 = 0;
          }
          else
          {
            v5 = -1073676267;
          }
        }
        else
        {
          *(_DWORD *)&v3->NdisReserved[16] |= 0x40u;
          *(_QWORD *)&v3->NdisReserved[32] = NdisFilterHandle;
          v7 = *(_QWORD *)&v3->NdisReserved[96];
          v18 = 0LL;
          if ( !v7 )
            v7 = *(_QWORD *)&v3->NdisReserved[104] - *((_QWORD *)&v18 + 1);
          if ( !v7 )
            EtwActivityIdControl(3u, (LPGUID)&v3->NdisReserved[96]);
          if ( v3->RequestType == NdisRequestSetInformation
            && (*(_DWORD *)&v3->NdisReserved[16] & 0x4000) == 0
            && (v10 = v3->DATA.QUERY_INFORMATION.Oid + 50265846, v10 <= 5)
            && (v11 = 43, _bittest(&v11, v10)) )
          {
            v8 = ndisOidPMAddRemove(
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   v3);
          }
          else
          {
            v8 = ndisQueueOidRequest(
                   v3,
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   0LL);
          }
          v5 = v8;
        }
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          v2,
          50,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)v3,
          Oid,
          v5);
      }
      return v5;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = (char)OidRequest;
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          48,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)NdisFilterHandle,
          v13);
      }
      return -1071448020;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = (char)OidRequest;
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        47,
        (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
        (char)NdisFilterHandle,
        v14);
    }
    return -1073741811;
  }
}
