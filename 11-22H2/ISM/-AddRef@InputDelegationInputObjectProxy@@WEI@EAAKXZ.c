/*
 * XREFs of ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x18007B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 72));
}
