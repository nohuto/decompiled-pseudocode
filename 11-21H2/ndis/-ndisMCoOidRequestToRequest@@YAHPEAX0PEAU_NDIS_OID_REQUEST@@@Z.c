/*
 * XREFs of ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0099E50
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0095A60 (WPP_RECORDER_SF_qqDd.c)
 *     NdisMCoRequestComplete @ 0x1C00BC450 (NdisMCoRequestComplete.c)
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
  NDIS_OID v13; // r9d
  UINT BytesNeeded; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  NDIS_STATUS v17; // eax
  char v19[4]; // [rsp+38h] [rbp-40h]
  char v20[4]; // [rsp+40h] [rbp-38h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v7 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = a3->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a3,
      *(_DWORD *)v19);
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
      InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
      InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
      BytesWritten = a3->DATA.QUERY_INFORMATION.BytesWritten;
      v13 = a3->DATA.QUERY_INFORMATION.Oid;
      *(_DWORD *)(Pool2 + 32) = a3->RequestType;
      BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_DWORD *)(v9 + 40) = v13;
      *(_QWORD *)(v9 + 48) = InformationBuffer;
      *(_DWORD *)(v9 + 56) = InformationBufferLength;
      *(_DWORD *)(v9 + 60) = BytesWritten;
      *(_DWORD *)(v9 + 64) = BytesNeeded;
      v15 = a1[470];
      *(_DWORD *)(v9 + 24) |= 0x400u;
      v16 = a1[3];
      *(_QWORD *)(v9 + 8) = a3;
      v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(v15 + 288))(v16, a2, v9);
      v7 = v17;
      if ( v17 != 259 )
      {
        NdisMCoRequestComplete(v17, a1, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v20 = v7;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x1Du,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a3,
      Oid,
      *(_DWORD *)v20);
  }
  return v7;
}
