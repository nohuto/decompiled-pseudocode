/*
 * XREFs of NdisMDirectOidRequestComplete @ 0x1C0029930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMDirectOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r10

  v4 = OidRequest;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    v6 = *(_QWORD *)&OidRequest->NdisReserved[24];
    if ( v6 )
    {
      *(_QWORD *)&OidRequest->NdisReserved[24] = 0LL;
      if ( OidRequest->RequestType == NdisRequestMethod )
      {
        *(_QWORD *)(v6 + 60) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
        *(_DWORD *)(v6 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
        *(_OWORD *)(v6 + 40) = *(_OWORD *)&OidRequest->DATA.METHOD_INFORMATION.InformationBuffer;
      }
      else
      {
        *(_QWORD *)(v6 + 52) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.OutputBufferLength;
        *(_QWORD *)(v6 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)(v6 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      }
      v7 = *(_QWORD *)&OidRequest->NdisReserved[24];
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xBu,
          0xDu,
          (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
          (char)OidRequest,
          OidRequest->RequestHandle);
      if ( v7 )
      {
        *(_BYTE *)(v7 + 232) = v4->SupportedRevision;
        *(_DWORD *)(v7 + 152) = *(_DWORD *)&v4->NdisReserved[80];
      }
      ExFreePoolWithTag(v4, 0);
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x10u,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
    }
    v4 = (PNDIS_OID_REQUEST)v6;
  }
  v8 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v8
                                                                                      + 56))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v8 + 24),
    *((_QWORD *)MiniportAdapterHandle + 660),
    MiniportAdapterHandle,
    v4,
    Status);
}
