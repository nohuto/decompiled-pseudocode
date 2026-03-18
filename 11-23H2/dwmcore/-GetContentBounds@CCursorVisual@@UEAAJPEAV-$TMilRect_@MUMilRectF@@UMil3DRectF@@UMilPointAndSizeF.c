/*
 * XREFs of ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F1F0 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C5AB0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180228644 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

__int64 __fastcall CCursorVisual::GetContentBounds(CCursorVisual *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContentBounds = CVisual::GetContentBounds((char *)this, a2);
  v5 = ContentBounds;
  if ( ContentBounds >= 0 )
  {
    if ( CCursorVisual::IsVisible(this) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        a2,
        (float *)(*((_QWORD *)this + 90) + 120LL));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)ContentBounds);
    return v5;
  }
}
