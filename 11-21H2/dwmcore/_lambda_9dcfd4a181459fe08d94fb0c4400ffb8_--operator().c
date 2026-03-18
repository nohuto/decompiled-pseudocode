/*
 * XREFs of _lambda_9dcfd4a181459fe08d94fb0c4400ffb8_::operator() @ 0x1801C40F8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___::_Do_call @ 0x1801C5A90 (std--_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___--_Do_ca.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 */

__int64 __fastcall lambda_9dcfd4a181459fe08d94fb0c4400ffb8_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int128 *Bounds; // rax
  struct CVisualTree *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v4 = 0;
  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*(_QWORD *)a1 + 96LL), a2, 0) )
  {
    if ( CVisualTree::_IsInTree(*(_QWORD *)(a1 + 16), a2, 0) )
    {
      Bounds = CVisual::GetBounds(a2, *(_QWORD *)(a1 + 16));
      v7 = CDrawingContext::DrawVisualTree(*(CDrawingContext **)(a1 + 8), v6, (__int64)Bounds, 0LL, 0, 1, a2);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x12Bu);
    }
  }
  return v4;
}
