/*
 * XREFs of ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009617C
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016FB0 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019598 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisMDoProtocolRequest(
        struct _NDIS_OPEN_BLOCK *a1,
        __int64 a2,
        int a3,
        void *a4,
        UINT a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int v11; // eax
  int v12; // edx
  char v15[4]; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v16; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x3Bu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      a3);
  MiniportHandle = a1->MiniportHandle;
  memset(&v16, 0, 0xF8uLL);
  *(_DWORD *)&v16.NdisReserved[16] |= 8u;
  *(_QWORD *)&v16.NdisReserved[32] = a1;
  ndisMReferenceOpen((__int64)a1, 6u);
  *(_DWORD *)&v16.NdisReserved[16] |= 0x220u;
  v16.RequestType = NdisRequestSetInformation;
  v16.Header = (NDIS_OBJECT_HEADER)16253334;
  v16.DATA.QUERY_INFORMATION.Oid = a3;
  v16.DATA.QUERY_INFORMATION.InformationBuffer = a4;
  v16.DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  v11 = ndisQuerySetMiniportEx(MiniportHandle, 0LL, &v16, 1, 0LL, 0LL);
  if ( v11 )
  {
    v9 = a6;
    if ( v11 != -1 )
      v9 = a6 + 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v9;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      6u,
      0x3Cu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      a3,
      *(_DWORD *)v15);
  }
  return v9;
}
