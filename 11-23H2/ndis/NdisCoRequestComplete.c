/*
 * XREFs of NdisCoRequestComplete @ 0x1C00C1310
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00BD010 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00BD1A0 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequest @ 0x1C00C0F40 (NdisCoRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC70C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00BC9D0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C00C0E60 (NdisCoOidRequestComplete.c)
 */

void __fastcall NdisCoRequestComplete(
        __int64 Status,
        KSPIN_LOCK *P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Pa)
{
  struct _NDIS_OID_REQUEST *v7; // r9

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
    v7 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Pa + 1);
    v7->DATA.QUERY_INFORMATION.BytesWritten = *((_DWORD *)Pa + 15);
    v7->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Pa + 16);
    NdisCoOidRequestComplete(P, NdisVcHandle, NdisPartyHandle, v7, Status);
    ExFreePoolWithTag(Pa, 0);
  }
}
