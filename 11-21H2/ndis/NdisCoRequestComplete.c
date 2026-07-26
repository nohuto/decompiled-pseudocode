/*
 * XREFs of NdisCoRequestComplete @ 0x1C00BC1B0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00B7F30 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00B80C0 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequest @ 0x1C00BBDF0 (NdisCoRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B763C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B7900 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C00BBD20 (NdisCoOidRequestComplete.c)
 */

void __fastcall NdisCoRequestComplete(
        __int64 Status,
        KSPIN_LOCK *P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Pa)
{
  struct _NDIS_OID_REQUEST *v8; // r9

  if ( *((_DWORD *)Pa + 10) == -33554422 && *((_DWORD *)Pa + 8) == 1 )
  {
    if ( *((_DWORD *)P + 98) < 6u )
    {
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, PVOID))Pa + 9))(
        Status,
        *((_QWORD *)Pa + 11),
        *((_QWORD *)Pa + 10),
        *((_QWORD *)Pa + 12),
        Pa);
      ndisDereferenceAf(P);
    }
    else
    {
      NdisClNotifyCloseAddressFamilyComplete(P, Status);
    }
  }
  else
  {
    v8 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Pa + 1);
    v8->DATA.QUERY_INFORMATION.BytesWritten = *((_DWORD *)Pa + 15);
    v8->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Pa + 16);
    NdisCoOidRequestComplete(P, NdisVcHandle, NdisPartyHandle, v8, Status);
    ExFreePoolWithTag(Pa, 0);
  }
}
