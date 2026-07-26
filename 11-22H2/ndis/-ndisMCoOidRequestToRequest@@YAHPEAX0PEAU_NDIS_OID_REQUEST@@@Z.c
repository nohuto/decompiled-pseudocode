/*
 * XREFs of ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FE40
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C009BA84 (WPP_RECORDER_SF_qqDd_ea_1C009BA84.c)
 *     NdisMCoRequestComplete @ 0x1C00C14D0 (NdisMCoRequestComplete.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *a1, void *a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // r14d
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rsi
  PVOID InformationBuffer; // r8
  UINT InformationBufferLength; // edx
  UINT BytesWritten; // ecx
  UINT BytesNeeded; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  NDIS_STATUS v16; // eax
  char v18[4]; // [rsp+38h] [rbp-40h]
  char v19[4]; // [rsp+40h] [rbp-38h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v7 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = a3->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)a3,
      *(_DWORD *)v18);
  }
  if ( a3->RequestType == NdisRequestMethod )
  {
    v7 = -1073741637;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = a3->RequestType;
      InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
      InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
      BytesWritten = a3->DATA.QUERY_INFORMATION.BytesWritten;
      BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_DWORD *)(v9 + 40) = a3->DATA.QUERY_INFORMATION.Oid;
      *(_QWORD *)(v9 + 48) = InformationBuffer;
      *(_DWORD *)(v9 + 56) = InformationBufferLength;
      *(_DWORD *)(v9 + 60) = BytesWritten;
      *(_DWORD *)(v9 + 64) = BytesNeeded;
      v14 = a1[470];
      *(_DWORD *)(v9 + 24) |= 0x400u;
      v15 = a1[3];
      *(_QWORD *)(v9 + 8) = a3;
      v16 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(v14 + 288))(v15, a2, v9);
      v7 = v16;
      if ( v16 != 259 )
      {
        NdisMCoRequestComplete(v16, a1, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = v7;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x1Du,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)a3,
      Oid,
      *(_DWORD *)v19);
  }
  return v7;
}
