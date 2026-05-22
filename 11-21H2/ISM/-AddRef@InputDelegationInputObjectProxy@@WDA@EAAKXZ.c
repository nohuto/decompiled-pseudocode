/*
 * XREFs of ?AddRef@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180050A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 48));
}
