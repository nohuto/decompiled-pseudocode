/*
 * XREFs of ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023980 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009F500 (-ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

__int64 __fastcall ndisLegacyRequest(_QWORD *a1, struct _NDIS_REQUEST *a2)
{
  unsigned __int8 v5; // bp
  unsigned int v6; // edi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  struct _NDIS_MINIPORT_BLOCK *v9; // r15
  _NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int InformationBufferLength; // r8d
  void *InformationBuffer; // r9
  unsigned int BytesWritten; // ecx
  unsigned int BytesNeeded; // eax

  if ( *(_BYTE *)(a1[3] + 56LL) >= 6u )
    return 3221291012LL;
  v5 = ndisReferenceOpenByHandle((__int64)a1, 6u);
  if ( v5 )
  {
    Pool2 = ExAllocatePool2(64LL, 248LL, 1701987406);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
      RequestType = a2->RequestType;
      *(_DWORD *)(Pool2 + 4) = RequestType;
      *(_DWORD *)Pool2 = 16253334;
      if ( (v9->DriverVerifyFlags & 0x400) == 0 )
        *(_BYTE *)(Pool2 + 232) = 1;
      if ( RequestType == NdisRequestMethod )
      {
        v6 = -1073741811;
      }
      else
      {
        InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        BytesWritten = a2->DATA.QUERY_INFORMATION.BytesWritten;
        BytesNeeded = a2->DATA.QUERY_INFORMATION.BytesNeeded;
        *(_DWORD *)(v8 + 32) = a2->DATA.QUERY_INFORMATION.Oid;
        *(_QWORD *)(v8 + 40) = InformationBuffer;
        *(_DWORD *)(v8 + 48) = InformationBufferLength;
        *(_DWORD *)(v8 + 52) = BytesWritten;
        *(_DWORD *)(v8 + 56) = BytesNeeded;
        *(_DWORD *)(v8 + 88) |= 0x20u;
        *(_QWORD *)(v8 + 96) = a2;
        *(_QWORD *)(v8 + 104) = a1;
        v6 = ndisQueueOidRequest((struct _NDIS_OID_REQUEST *)v8, v9, 0LL, 0LL);
        if ( v6 == 259 )
          return v6;
      }
      ndisCompleteOidRequestToRequest(
        (void (__fastcall **)(_QWORD, _QWORD, _QWORD))a1,
        (struct _NDIS_OID_REQUEST *)v8,
        v6);
      v6 = 259;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v5 == 1 )
      ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
    return v6;
  }
  return (unsigned int)-1073676286;
}
