/*
 * XREFs of ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x18007B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 128));
}
