/*
 * XREFs of ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180228644
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180228500 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228540 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1802285E0 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180228610 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180228710 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorVisual::IsVisible(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 90);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 184) != 0LL;
  return result;
}
