/*
 * XREFs of ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C002A330
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C0011498 (ndisQueryStatisticsOids.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EE0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E350 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00093A0 (WPP_RECORDER_SF_qDq.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisQueryDeviceOid(
        struct _NDIS_USER_OPEN_CONTEXT *a1,
        struct _NDIS_OID_REQUEST *a2,
        NDIS_OID a3,
        void *a4,
        UINT a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  int v9; // r8d

  v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&a2->NdisReserved[96]);
  a2->PortNumber = 0;
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->DATA.QUERY_INFORMATION.Oid = a3;
  a2->RequestType = NdisRequestQueryStatistics;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v9,
      0x17u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a2,
      a3,
      v5);
  return ndisQuerySetMiniportEx(v5, 0LL, a2, 0, 0LL, 0LL);
}
