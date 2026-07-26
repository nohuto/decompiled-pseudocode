/*
 * XREFs of NdisFOidRequest @ 0x1C000AFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDd @ 0x1C000B300 (WPP_RECORDER_SF_qDd.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008EF04 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v2; // r8d
  PNDIS_OID_REQUEST v3; // rbx
  NDIS_STATUS v5; // ebp
  NDIS_OID Oid; // esi
  NDIS_REQUEST_TYPE RequestType; // ecx
  int v8; // eax
  NDIS_STATUS v9; // eax
  unsigned int v11; // eax
  int v12; // ecx
  char v13; // [rsp+30h] [rbp-C8h]
  char v14; // [rsp+30h] [rbp-C8h]
  char v15; // [rsp+30h] [rbp-C8h]
  char v16[4]; // [rsp+38h] [rbp-C0h]
  int v17; // [rsp+40h] [rbp-B8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-A8h] BYREF

  v3 = OidRequest;
  v5 = -1073741823;
  if ( OidRequest->Header.Type == 0x96 && OidRequest->Header.Size >= 0xECu )
  {
    if ( OidRequest->Header.Revision )
    {
      Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v16 = OidRequest->DATA.QUERY_INFORMATION.Oid;
        v13 = (char)OidRequest;
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          49,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          (char)NdisFilterHandle,
          v13,
          v16[0]);
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
        v3->SupportedRevision = 1;
      if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) && Oid - 65798 > 1 && Oid != 65812 )
      {
        RequestType = v3->RequestType;
        if ( RequestType == NdisRequestSetInformation && v3->DATA.QUERY_INFORMATION.Oid == 66058 )
        {
          if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
          {
            v17 = *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
            memset(&StatusIndication, 0, sizeof(StatusIndication));
            StatusIndication.SourceHandle = (void *)*((_QWORD *)NdisFilterHandle + 4);
            StatusIndication.StatusBuffer = &v17;
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
          v8 = *(_DWORD *)&v3->NdisReserved[16] | 0x40;
          *(_QWORD *)&v3->NdisReserved[32] = NdisFilterHandle;
          *(_DWORD *)&v3->NdisReserved[16] = v8;
          if ( RequestType == NdisRequestSetInformation
            && (v8 & 0x4000) == 0
            && (v11 = v3->DATA.QUERY_INFORMATION.Oid + 50265846, v11 <= 5)
            && (v12 = 43, _bittest(&v12, v11)) )
          {
            v9 = ndisOidPMAddRemove(
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   v3);
          }
          else
          {
            v9 = ndisQueueOidRequest(
                   v3,
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   0LL);
          }
          v5 = v9;
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
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
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
        v14 = (char)OidRequest;
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          48,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          (char)NdisFilterHandle,
          v14);
      }
      return -1071448020;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = (char)OidRequest;
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        47,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        (char)NdisFilterHandle,
        v15);
    }
    return -1073741811;
  }
}
