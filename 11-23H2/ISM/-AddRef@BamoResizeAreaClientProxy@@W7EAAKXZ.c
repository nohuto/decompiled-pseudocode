/*
 * XREFs of ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x180065CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoResizeAreaClientProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 8));
}
