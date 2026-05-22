/*
 * XREFs of ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x18004ED40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoResizeAreaClientProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 8));
}
