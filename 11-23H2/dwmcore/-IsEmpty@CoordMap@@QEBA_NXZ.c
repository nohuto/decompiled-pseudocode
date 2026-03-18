/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x1800A8C98
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180070420 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x1800A8390 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  return ((*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) & 0xFFFFFFFFFFFFFFF0uLL) == 0;
}
