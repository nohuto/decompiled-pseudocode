/*
 * XREFs of ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180050AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 128));
}
