/*
 * XREFs of ndisSriovInterfaceQueryProbedBars @ 0x1C0123B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceQueryProbedBars(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v9, 0, 0xF8uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x61u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32LL, 1869169742);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 524672;
    Pool2[1] = 8;
    memset(&v9, 0, 0xF8uLL);
    *(_DWORD *)&v9.NdisReserved[16] |= 8u;
    v9.RequestType = NdisRequestQueryInformation;
    v9.PortNumber = 0;
    *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
    v9.Header = (NDIS_OBJECT_HEADER)15466902;
    v9.DATA.QUERY_INFORMATION.Oid = 66136;
    v9.DATA.QUERY_INFORMATION.InformationBuffer = v5;
    v9.DATA.QUERY_INFORMATION.InformationBufferLength = 32;
    v6 = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
    if ( !v6 )
    {
      v7 = v5[1];
      *(_OWORD *)a2 = *(_OWORD *)((char *)v5 + v7);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)((char *)v5 + v7 + 16);
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x62u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)a1,
      v6);
  return v6;
}
