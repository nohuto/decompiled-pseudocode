/*
 * XREFs of _lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator() @ 0x180103B2C
 * Callers:
 *     CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___ @ 0x180103A80 (CComposition--ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator()(__int64 a1, CExcludeVisualReference *a2)
{
  unsigned int v3; // ebx
  struct CVisual *Visual; // rsi
  __int128 *Bounds; // rax
  struct CVisualTree *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  Visual = CExcludeVisualReference::GetVisual(a2);
  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*(_QWORD *)a1 + 96LL), (__int64)Visual, 0) )
  {
    if ( CVisualTree::_IsInTree(*(_QWORD *)(a1 + 16), (__int64)Visual, 0) )
    {
      Bounds = CVisual::GetBounds((__int64)Visual, *(_QWORD *)(a1 + 16));
      v7 = CDrawingContext::DrawVisualTree(
             *(CDrawingContext **)(a1 + 8),
             v6,
             (__int64)Bounds,
             0LL,
             0,
             1,
             (__int64)Visual);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x10Eu);
    }
  }
  return v3;
}
