/*
 * XREFs of ?Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180050AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 56));
}
