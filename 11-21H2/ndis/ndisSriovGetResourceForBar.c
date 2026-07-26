/*
 * XREFs of ndisSriovGetResourceForBar @ 0x1C01236F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisSriovGetResourceForBar(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2, __int16 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  struct _NDIS_OID_REQUEST v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+140h] [rbp+40h] BYREF
  __int16 v13; // [rsp+144h] [rbp+44h]
  __int16 v14; // [rsp+146h] [rbp+46h]
  unsigned int v15; // [rsp+148h] [rbp+48h]
  __int128 v16; // [rsp+14Ch] [rbp+4Ch]
  int v17; // [rsp+15Ch] [rbp+5Ch]

  memset(&v11.Header.Revision, 0, 0xF7uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Du,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  v17 = 0;
  v12 = 786816;
  v13 = a2;
  v15 = 12;
  v14 = a3;
  v16 = 0LL;
  memset(&v11, 0, 0xF8uLL);
  *(_DWORD *)&v11.NdisReserved[16] |= 8u;
  v11.PortNumber = 0;
  *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
  v11.Header = (NDIS_OBJECT_HEADER)15466902;
  v11.DATA.QUERY_INFORMATION.InformationBuffer = &v12;
  v11.DATA.QUERY_INFORMATION.InformationBufferLength = 32;
  *(_QWORD *)&v11.DATA.METHOD_INFORMATION.OutputBufferLength = 32LL;
  v11.RequestType = NdisRequestMethod;
  v11.DATA.QUERY_INFORMATION.Oid = 66137;
  v8 = ndisQuerySetMiniport(a1, 0LL, &v11, 0, 0LL);
  if ( !v8 )
  {
    v9 = v15;
    *(_OWORD *)a4 = *(_OWORD *)((char *)&v12 + v15);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)((char *)&v16 + v9 + 4);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Eu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)a1,
      v8);
  return v8;
}
