/*
 * XREFs of ?Release@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180067AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 48));
}
