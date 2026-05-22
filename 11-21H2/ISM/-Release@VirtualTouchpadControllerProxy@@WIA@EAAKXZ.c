/*
 * XREFs of ?Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180050B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 128));
}
