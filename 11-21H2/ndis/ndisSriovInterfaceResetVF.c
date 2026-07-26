/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x1C0124090
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  char v7[4]; // [rsp+30h] [rbp-D0h]
  _BYTE v8[6]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v9; // [rsp+50h] [rbp-B0h] BYREF

  memset(&v9.Header.Revision, 0, 0xF7uLL);
  *(_DWORD *)&v8[1] = 0;
  v8[5] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x65u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  *(_DWORD *)v8 = 393600;
  *(_WORD *)&v8[4] = a2;
  memset(&v9, 0, 0xF8uLL);
  *(_DWORD *)&v9.NdisReserved[16] |= 8u;
  v9.PortNumber = 0;
  *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
  v9.Header = (NDIS_OBJECT_HEADER)15466902;
  v9.DATA.QUERY_INFORMATION.InformationBuffer = v8;
  v9.DATA.QUERY_INFORMATION.Oid = 66133;
  v9.RequestType = NdisRequestSetInformation;
  v9.DATA.QUERY_INFORMATION.InformationBufferLength = 6;
  v4 = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
  v5 = v4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x66u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  return v5;
}
