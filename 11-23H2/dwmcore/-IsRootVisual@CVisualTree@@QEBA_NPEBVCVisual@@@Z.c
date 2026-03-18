/*
 * XREFs of ?IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1801B0DEC
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180213BE8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualTree::IsRootVisual(const struct CVisual **this, const struct CVisual *a2)
{
  return a2 == this[8];
}
