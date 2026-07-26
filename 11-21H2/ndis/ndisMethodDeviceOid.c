/*
 * XREFs of ndisMethodDeviceOid @ 0x1C00ACC98
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1C0010654 (ndisIsOidAllowedFromUsermode.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisMethodDeviceOid(
        __int64 a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v9; // ecx
  struct _NDIS_MINIPORT_BLOCK *v11; // rsi
  int v12; // r8d
  int v13; // ecx

  if ( !ndisIsOidAllowedFromUsermode(*a3) )
    return 3221225506LL;
  if ( v9 != 66086
    && (v9 <= 0x10228
     || v9 > 0x1022A && v9 != 66104 && (v9 <= 0x10241 || v9 > 0x10243 && (v9 <= 0x10246 || v9 > 0x10248))) )
  {
    return 3221225659LL;
  }
  if ( a4 < 8 || a5 < 8 )
    return 3221291029LL;
  v11 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->RequestType = NdisRequestMethod;
  v13 = *a3;
  a2->DATA.QUERY_INFORMATION.Oid = *a3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = a3[1];
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a3 + 2;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a4 - 8;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a5 - 8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v12,
      0xCu,
      (struct _GUID *)&WPP_5eb2c2b9ff2532e0d02b0f2c9580dec3_Traceguids,
      (char)a2,
      v13,
      v11);
  return ndisQuerySetMiniportEx(v11, 0LL, a2, 0, 0LL, 0LL);
}
