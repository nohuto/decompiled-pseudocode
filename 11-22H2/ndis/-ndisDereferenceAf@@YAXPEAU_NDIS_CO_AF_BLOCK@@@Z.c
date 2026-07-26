/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC6EC
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00BC9B0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00BCEF0 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00BDB80 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00BDD20 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00BE050 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00BE750 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00BE7B0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00C09E0 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00C0E40 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00C0F20 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00C12F0 (NdisCoRequestComplete.c)
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
