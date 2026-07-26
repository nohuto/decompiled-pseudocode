/*
 * XREFs of ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0082554
 * Callers:
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisQueryMediaStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+30h] [rbp-128h] BYREF
  struct _NDIS_OID_REQUEST v3; // [rsp+40h] [rbp-118h] BYREF

  LODWORD(v2) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x8Eu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1,
      v2);
  memset(&v3, 0, 0xF8uLL);
  v3.DATA.QUERY_INFORMATION.InformationBuffer = &v2;
  v3.Header = (NDIS_OBJECT_HEADER)15466902;
  *(_QWORD *)&v3.NdisReserved[32] = &ndisIntReqGeneric;
  v3.DATA.QUERY_INFORMATION.Oid = 65812;
  v3.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  ndisQuerySetMiniportEx(a1, 0LL, &v3, 0, 0LL, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x8Fu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
}
