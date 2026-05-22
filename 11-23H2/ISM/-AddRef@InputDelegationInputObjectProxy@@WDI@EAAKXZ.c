/*
 * XREFs of ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180067A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 56));
}
