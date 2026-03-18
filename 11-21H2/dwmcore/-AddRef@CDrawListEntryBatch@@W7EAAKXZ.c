/*
 * XREFs of ?AddRef@CDrawListEntryBatch@@W7EAAKXZ @ 0x1801072B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListEntryBatch::AddRef(__int64 a1)
{
  return CDrawListEntryBatch::AddRef((CDrawListEntryBatch *)(a1 - 8));
}
