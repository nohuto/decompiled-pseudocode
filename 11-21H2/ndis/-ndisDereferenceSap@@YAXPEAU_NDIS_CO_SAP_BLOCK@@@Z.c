/*
 * XREFs of ?ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z @ 0x1C00B9460
 * Callers:
 *     NdisCmDispatchIncomingCall @ 0x1C00B8E30 (NdisCmDispatchIncomingCall.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B9670 (NdisCmDeregisterSapComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceSap(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(P + 5);
  v3 = --*((_DWORD *)P + 9);
  KeReleaseSpinLock(P + 5, v2);
  if ( !v3 )
    ExFreePoolWithTag(P, 0);
}
