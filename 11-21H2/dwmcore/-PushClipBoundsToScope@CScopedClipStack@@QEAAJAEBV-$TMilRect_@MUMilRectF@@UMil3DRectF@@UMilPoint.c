/*
 * XREFs of ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18001057C
 * Callers:
 *     ?PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800104B4 (-PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_.c)
 * Callees:
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800105E0 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180013404 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008A298 (-HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

__int64 __fastcall CScopedClipStack::PushClipBoundsToScope(_DWORD *a1)
{
  CD2DClipStack *v1; // rbx
  enum D2D1_ANTIALIAS_MODE v3; // r10d
  const struct MilRectF *v4; // r11
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // ecx

  v1 = (CD2DClipStack *)(a1 + 524);
  if ( CScopedClipStack::HasClipBoundsInScope((CScopedClipStack *)a1) )
  {
    v10 = CD2DClipStack::Push(v1, v4, v3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1C3u, 0LL);
      return v7;
    }
  }
  else
  {
    v5 = CD2DClipStack::PushExact(v1, v4, v3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1BFu, 0LL);
      return v7;
    }
  }
  v8 = 88LL * (unsigned int)(a1[6] - 1);
  ++*(_DWORD *)(v8 + *(_QWORD *)a1 + 8);
  return v7;
}
