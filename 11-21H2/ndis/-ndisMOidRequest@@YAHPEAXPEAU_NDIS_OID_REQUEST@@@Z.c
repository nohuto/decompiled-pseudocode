/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0026610
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0025C84 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0026928 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     NdisMResetMiniport @ 0x1C006C340 (NdisMResetMiniport.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008EF04 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

__int64 __fastcall ndisMOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rdi
  unsigned int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  NDIS_REQUEST_TYPE RequestType; // eax
  NDIS_OID Oid; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v12; // [rsp+20h] [rbp-A8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-98h] BYREF

  v2 = a2;
  LOBYTE(a2) = 6;
  v4 = 0;
  if ( !(unsigned __int8)ndisReferenceOpenByHandle(a1, a2) )
    return (unsigned int)-1073676286;
  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
  if ( (v5->DriverVerifyFlags & 0x400) == 0 )
    v2->SupportedRevision = 1;
  RequestType = v2->RequestType;
  if ( RequestType == NdisRequestSetInformation )
  {
    Oid = v2->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == 66058 )
    {
      if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
      {
        v12 = *(_DWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v12;
        StatusIndication.SourceHandle = v5;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx(v5, &StatusIndication);
      }
      else
      {
        v4 = -1073676266;
      }
    }
    else
    {
      if ( Oid != 66066 )
        goto LABEL_7;
      if ( (*(_DWORD *)(a1[3] + 64LL) & 0x20000000) != 0 )
        NdisMResetMiniport(v5);
      else
        v4 = -1073741637;
    }
LABEL_18:
    ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
    return v4;
  }
  if ( RequestType == NdisRequestQueryInformation && v2->DATA.QUERY_INFORMATION.Oid == 66059 )
  {
    if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
    {
      *(_QWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer = v5->MediaSpecificAttributes;
      v2->DATA.QUERY_INFORMATION.BytesWritten = v5->MediaSpecificAttributes != 0LL ? 8 : 0;
    }
    else
    {
      v4 = -1073676268;
    }
    goto LABEL_18;
  }
LABEL_7:
  memset(v2->NdisReserved, 0, 0x60uLL);
  *(_DWORD *)&v2->NdisReserved[16] |= 0x20u;
  *(_QWORD *)&v2->NdisReserved[32] = a1;
  *(_QWORD *)&v2->NdisReserved[24] = 0LL;
  if ( v2->RequestType == NdisRequestSetInformation
    && (v8 = v2->DATA.QUERY_INFORMATION.Oid + 50265846, v8 <= 5)
    && (v9 = 43, _bittest(&v9, v8)) )
  {
    v10 = ndisOidPMAddRemove(v5, 0LL, v2);
  }
  else
  {
    v10 = ndisQueueOidRequest(v2, v5, 0LL, 0LL);
  }
  v4 = v10;
  if ( v10 != 259 )
    goto LABEL_18;
  return v4;
}
