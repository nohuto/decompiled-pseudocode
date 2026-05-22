/*
 * XREFs of ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180067B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 136));
}
