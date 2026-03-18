/*
 * XREFs of ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3910
 * Callers:
 *     ?GetBounds@CAtlasedRectsGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180105C50 (-GetBounds@CAtlasedRectsGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800D3948 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax

  CAtlasedRectsGroup::EnsureBounds((CAtlasedRectsGroup *)(a1 - 144));
  result = 0LL;
  *a3 = *(_OWORD *)(a1 - 48);
  return result;
}
