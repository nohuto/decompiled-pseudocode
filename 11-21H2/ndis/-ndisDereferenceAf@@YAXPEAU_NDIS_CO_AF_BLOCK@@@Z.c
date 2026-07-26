/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B763C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B7900 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B7E30 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00B8AC0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B8C60 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B8F80 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B9670 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B96D0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00BB8C0 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BBD20 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00BBDF0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BC1B0 (NdisCoRequestComplete.c)
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
