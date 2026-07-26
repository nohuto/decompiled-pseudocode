/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC8A0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00BCFF0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C00BDB80 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00BDF00 (NdisCmDispatchIncomingCall.c)
 *     NdisClRegisterSap @ 0x1C00BE650 (NdisClRegisterSap.c)
 *     NdisCoOidRequest @ 0x1C00C09E0 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C00C0F20 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C00C13D0 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(struct _NDIS_CO_AF_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rsi
  char v3; // di
  KIRQL v4; // al

  p_Lock = &a1->Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    ++a1->References;
    v3 = 1;
  }
  KeReleaseSpinLock(p_Lock, v4);
  return v3;
}
