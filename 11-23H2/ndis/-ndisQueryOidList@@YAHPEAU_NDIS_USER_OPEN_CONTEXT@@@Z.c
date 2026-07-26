/*
 * XREFs of ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002D1E8
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EE0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x1C002C1CC (-ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C002D8F4 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisQueryOidList(struct _NDIS_USER_OPEN_CONTEXT *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  struct _NDIS_CO_VC_PTR_BLOCK *v3; // rdx
  unsigned __int8 v4; // r9
  unsigned int v5; // edi
  struct _GUID *v7; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v8; // [rsp+28h] [rbp-D8h]
  __int64 v9; // [rsp+30h] [rbp-D0h]
  unsigned int v10; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v12[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OID_REQUEST v13; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v12[0] = 0;
  v10 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = (struct _NDIS_FILTER_BLOCK *)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids);
  }
  memset(&v13, 0, 0xF8uLL);
  *(_DWORD *)&v13.NdisReserved[16] |= 8u;
  *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  v13.PortNumber = 0;
  v13.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v13.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  v13.Header = (NDIS_OBJECT_HEADER)15466902;
  v13.DATA.QUERY_INFORMATION.Oid = 65793;
  v13.RequestType = NdisRequestQueryStatistics;
  v5 = ndisQuerySetMiniportEx2(v2, v3, &v13, v4, (struct _NDIS_FILTER_BLOCK *)v7, v8, 0x2020444Eu, &P, v12, &v10);
  if ( !v5 )
    v5 = ndisSplitStatisticsOids(a1, (unsigned int *)P, v10 >> 2);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v9);
  }
  return v5;
}
