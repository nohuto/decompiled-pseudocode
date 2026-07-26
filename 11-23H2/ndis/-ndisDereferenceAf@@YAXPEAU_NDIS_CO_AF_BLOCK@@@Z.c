/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC70C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00BC9D0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00BCF10 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00BDBA0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00BDD40 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00BE070 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00BE770 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00BE7D0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00C0A00 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00C0E60 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00C0F40 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00C1310 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  int v4; // ebx

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
    ExFreePoolWithTag(P, 0);
}
