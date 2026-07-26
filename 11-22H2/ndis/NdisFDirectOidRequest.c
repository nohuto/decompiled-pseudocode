/*
 * XREFs of NdisFDirectOidRequest @ 0x1C00B5810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0028F44 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?IsOidRequestDirectOid@@YAEK@Z @ 0x1C00B52B8 (-IsOidRequestDirectOid@@YAEK@Z.c)
 */

NDIS_STATUS __stdcall NdisFDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  NDIS_STATUS v4; // edi
  __int64 v6; // [rsp+30h] [rbp-18h]

  v4 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)NdisFilterHandle,
      OidRequest);
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
    return -1073741811;
  if ( !OidRequest->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
    OidRequest->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 304LL) )
  {
    if ( IsOidRequestDirectOid(OidRequest->DATA.QUERY_INFORMATION.Oid) )
    {
      *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x200040u;
      *(_QWORD *)&OidRequest->NdisReserved[32] = NdisFilterHandle;
      v4 = ndisDoDirectOidRequest(
             OidRequest,
             *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
             (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
             0LL);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = v4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)OidRequest,
      v6);
  }
  return v4;
}
