/*
 * XREFs of ?Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180067BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 136));
}
