/*
 * XREFs of NdisCmDropPartyComplete @ 0x1C00BC6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

void __stdcall NdisCmDropPartyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisPartyHandle)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD))NdisPartyHandle + 4))(Status, *((_QWORD *)NdisPartyHandle + 2));
  if ( !Status )
  {
    ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
    ExFreePoolWithTag(NdisPartyHandle, 0);
  }
}
