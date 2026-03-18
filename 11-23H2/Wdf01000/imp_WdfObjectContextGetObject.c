/*
 * XREFs of imp_WdfObjectContextGetObject @ 0x1C0043830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

unsigned __int64 __fastcall imp_WdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *__formal, FxObject **ContextPointer)
{
  return FxObject::GetObjectHandleUnchecked(*(ContextPointer - 6));
}
