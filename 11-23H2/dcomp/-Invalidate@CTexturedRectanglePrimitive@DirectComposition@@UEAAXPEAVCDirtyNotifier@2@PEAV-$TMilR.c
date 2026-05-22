/*
 * XREFs of ?Invalidate@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C240
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4 (-InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilR.c)
 */

__int64 __fastcall DirectComposition::CTexturedRectanglePrimitive::Invalidate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  DirectComposition::CPrimitive::InvalidateHelper(a1 - 16, a2, a3, a1 + 224);
  result = (*(_QWORD *)(a1 + 216) + 56LL) & -(__int64)(*(_QWORD *)(a1 + 216) != 0LL);
  if ( a2 == result )
    *(_BYTE *)(a1 + 272) &= ~1u;
  return result;
}
