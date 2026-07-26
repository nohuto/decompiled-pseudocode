/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x1C0138748
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C01189B0 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  const UNICODE_STRING *pModifiedInstanceName; // rdx
  ULONG v6; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v11[248]; // [rsp+148h] [rbp+48h] BYREF

  memset(v11, 0, 0xF0uLL);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  v10[1] = 0;
  v10[0] = 16253312;
  memset(&v9, 0, 0xF8uLL);
  *(_DWORD *)&v9.NdisReserved[16] |= 8u;
  *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v9.NdisReserved[96]);
  v9.PortNumber = 0;
  v9.DATA.QUERY_INFORMATION.InformationBuffer = v10;
  v9.Header = (NDIS_OBJECT_HEADER)15466902;
  v9.DATA.QUERY_INFORMATION.Oid = -66846206;
  v9.RequestType = NdisRequestQueryStatistics;
  v9.DATA.QUERY_INFORMATION.InformationBufferLength = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v4, 0LL, &v9, 0, 0LL) )
    return -1073741823;
  pModifiedInstanceName = v4->pModifiedInstanceName;
  v6 = *(_DWORD *)(a1 + 20);
  Data.Data = v11;
  Data.Size = 240;
  if ( !pModifiedInstanceName )
    pModifiedInstanceName = v4->pAdapterInstanceName;
  return PcwAddInstance(a2, pModifiedInstanceName, v6, 1u, &Data);
}
