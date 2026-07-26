/*
 * XREFs of NdisCoOidRequestComplete @ 0x1C00C0E40
 * Callers:
 *     NdisCoOidRequest @ 0x1C00C09E0 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C00C12F0 (NdisCoRequestComplete.c)
 *     NdisMCmOidRequest @ 0x1C00C13D0 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC6EC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 */

void __stdcall NdisCoOidRequestComplete(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  __int64 v5; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)&OidRequest->NdisReserved[32];
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v5 + 1152))(
      *(_QWORD *)&OidRequest->NdisReserved[64],
      *(_QWORD *)&OidRequest->NdisReserved[56],
      *(_QWORD *)&OidRequest->NdisReserved[40]);
  }
  else if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
  {
    v8 = *(_QWORD *)&OidRequest->NdisReserved[24];
    *(_QWORD *)(v8 + 60) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.OutputBufferLength;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
      (unsigned int)Status,
      *(_QWORD *)&OidRequest->NdisReserved[64],
      *(_QWORD *)&OidRequest->NdisReserved[56],
      *(_QWORD *)&OidRequest->NdisReserved[40],
      v8);
    ExFreePoolWithTag(OidRequest, 0);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)NdisAfHandle + 4) + 128LL))(
      *(_QWORD *)&OidRequest->NdisReserved[64],
      *(_QWORD *)&OidRequest->NdisReserved[56],
      *(_QWORD *)&OidRequest->NdisReserved[40]);
  }
  ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
}
