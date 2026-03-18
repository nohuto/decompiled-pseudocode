/*
 * XREFs of ?IncrementDrawListGenerationCount@CVisualTree@@UEBAXXZ @ 0x180118670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualTree::IncrementDrawListGenerationCount(CVisualTree *this)
{
  ++*((_QWORD *)this + 588);
}
