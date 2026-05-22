/*
 * XREFs of ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x18004EB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessor::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 8));
}
