/*
 * XREFs of ndisPktMonComponentNotify @ 0x1C0136F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006AB94 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPktMonComponentNotify(__int64 a1)
{
  bool v2; // zf
  char v3; // al
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v5; // [rsp+34h] [rbp-CCh]
  struct _NDIS_OID_REQUEST v6; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v6, 0, 0xF8uLL);
  v2 = *(_DWORD *)(a1 + 48) == 2;
  v4 = 0;
  v5 = 0;
  if ( v2 && ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5808), 0x6Fu) )
  {
    if ( ndisIsMiniportReady((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5808)) )
    {
      v3 = *(_BYTE *)(a1 + 56);
      *(_DWORD *)&v6.NdisReserved[16] |= 8u;
      v4 = 328064;
      LOBYTE(v5) = (v3 & 2) != 0;
      *(_QWORD *)&v6.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v6.NdisReserved[96]);
      v6.PortNumber = 0;
      *(_DWORD *)&v6.NdisReserved[16] |= 0x100000u;
      v6.DATA.QUERY_INFORMATION.InformationBuffer = &v4;
      v6.Header = (NDIS_OBJECT_HEADER)15466902;
      v6.DATA.QUERY_INFORMATION.Oid = 66257;
      v6.RequestType = NdisRequestSetInformation;
      v6.DATA.QUERY_INFORMATION.InformationBufferLength = 6;
      ndisQuerySetMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5808), 0LL, &v6, 0, 0LL);
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5808), 0x6Fu);
  }
}
