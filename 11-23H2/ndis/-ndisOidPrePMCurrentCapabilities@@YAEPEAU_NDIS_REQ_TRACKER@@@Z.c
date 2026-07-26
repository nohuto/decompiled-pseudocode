/*
 * XREFs of ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00962E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x1C0096114 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCurrentCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  return ndisOidPrePMCapabilities(a1, 0);
}
