/*
 * XREFs of ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180211CC4
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180211B80 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180211BC0 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEAA_NXZ @ 0x180211C60 (-HasNonEmptyContent@CCursorVisual@@UEAA_NXZ.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180211C90 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorVisual::IsVisible(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 93);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 184) != 0LL;
  return result;
}
