/*
 * XREFs of ?Release@BamoActivationControllerProxy@@W7EAAKXZ @ 0x180065D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoActivationControllerProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 8));
}
