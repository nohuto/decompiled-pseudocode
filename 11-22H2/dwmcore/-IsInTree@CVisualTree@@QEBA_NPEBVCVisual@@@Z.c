/*
 * XREFs of ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1801B6370
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1802140D8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsInTree(CVisualTree *this, const struct CVisual *a2)
{
  return CVisualTree::_IsInTree(this, (__int64)a2, 0);
}
