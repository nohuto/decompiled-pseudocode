/*
 * XREFs of ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136E0C
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C0117C30 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisPcwQueryPcfMatchCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v7; // [rsp+40h] [rbp-C0h] BYREF

  ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
  v6 = 0LL;
  if ( !ReceiveFilterCurrentCapabilities || (ReceiveFilterCurrentCapabilities->EnabledFilterTypes & 2) == 0 )
    return 0LL;
  memset(&v7, 0, 0xF8uLL);
  *(_DWORD *)&v7.NdisReserved[16] |= 8u;
  *(_QWORD *)&v7.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v7.NdisReserved[96]);
  v7.Header = (NDIS_OBJECT_HEADER)15466902;
  v7.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
  v7.DATA.QUERY_INFORMATION.Oid = 66101;
  *(_QWORD *)&v7.RequestType = 2LL;
  v7.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
  v3 = ndisQuerySetMiniport(a1, 0LL, &v7, 0, 0LL);
  v4 = v6;
  if ( v3 )
    return 0LL;
  return v4;
}
