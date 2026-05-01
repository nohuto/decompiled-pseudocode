/*
 * XREFs of ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180403850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowManagerBridge::Uninitialize(wil::details **this, void *a2)
{
  wil::details::SetEvent(this[35], a2);
}
