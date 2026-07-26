/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B77F0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00B7F30 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C00B8AC0 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00B8E30 (NdisCmDispatchIncomingCall.c)
 *     NdisClRegisterSap @ 0x1C00B9570 (NdisClRegisterSap.c)
 *     NdisCoOidRequest @ 0x1C00BB8C0 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C00BBDF0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C00BC260 (NdisMCmOidRequest.c)
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
