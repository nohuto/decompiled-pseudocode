/*
 * XREFs of ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1801B5EA0
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180213BE8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsInTree(CVisualTree *this, const struct CVisual *a2)
{
  return CVisualTree::_IsInTree(this, (__int64)a2, 0);
}
