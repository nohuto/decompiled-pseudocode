/*
 * XREFs of ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C011711C
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EC0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C3C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisMDoMiniportOp(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        NDIS_OID a3,
        void *a4,
        UINT a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // eax
  struct _NDIS_OID_REQUEST v15; // [rsp+30h] [rbp-D0h] BYREF

  v11 = 0;
  memset(&v15, 0, 0xF8uLL);
  v12 = *(_DWORD *)&v15.NdisReserved[16];
  if ( a2 )
  {
    v12 = *(_DWORD *)&v15.NdisReserved[16] | 0x80;
    *(_DWORD *)&v15.NdisReserved[16] |= 0x80u;
  }
  else
  {
    v15.RequestType = NdisRequestSetInformation;
  }
  v15.DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  *(_QWORD *)&v15.NdisReserved[32] = &ndisIntReqGeneric;
  v15.Header = (NDIS_OBJECT_HEADER)15466902;
  v15.DATA.QUERY_INFORMATION.Oid = a3;
  v15.DATA.QUERY_INFORMATION.InformationBuffer = a4;
  if ( a7 )
    *(_DWORD *)&v15.NdisReserved[16] = v12 | 0x8000;
  v13 = ndisQuerySetMiniport(a1, 0LL, &v15, 0, 0LL);
  if ( v13 )
  {
    v11 = a6;
    if ( v13 != -1 )
      return a6 + 1;
  }
  return v11;
}
