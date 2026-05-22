/*
 * XREFs of ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800794B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMCursorBroker::Release(__int64 a1)
{
  return OneCoreUAPInputHost::Release((OneCoreUAPInputHost *)(a1 - 8));
}
