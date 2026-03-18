/*
 * XREFs of ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x18006EC10
 * Callers:
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18006EBC0 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800AE77C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800129B0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CScopedClipStack::ApplyDeferredD2DLayersInScope(
        CScopedClipStack *this,
        struct CDrawingContext *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 i; // rsi
  __int64 v11; // r14
  char v12; // al
  CD2DLayer *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx

  v4 = *((_QWORD *)this + 1);
  v5 = 0;
  v6 = 0;
  for ( i = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 234) - *((_QWORD *)this + 233)) >> 3)
          - *(_DWORD *)(v4 - 176); *(_QWORD *)(v4 - 160); i = (unsigned int)(i + 1) )
  {
    v11 = *((_QWORD *)this + 233);
    v12 = 0;
    v13 = *(CD2DLayer **)(v11 + 40 * i + 24);
    if ( v13 )
    {
      v14 = CD2DLayer::ApplyState(v13, a2);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x21Au, 0LL);
        return v5;
      }
      *(_QWORD *)(v11 + 40 * i + 24) = 0LL;
      v12 = 1;
      --*(_QWORD *)(v4 - 160);
    }
    if ( *(_BYTE *)(v11 + 40 * i + 36) )
    {
      if ( v12 )
      {
        v16 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v4 - 16), a2, v6, a4);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x236u, 0LL);
          return v5;
        }
      }
      ++v6;
    }
  }
  return v5;
}
