/*
 * XREFs of ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x1800D4F5C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1800B804C (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?at@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBAAEBUVisualTreePathUnit@CVisualTreePath@@_K@Z @ 0x1800DE304 (-at@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVis.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

DwmDbg::DbgString *__fastcall CVisualTreePath::GetDebugString(_QWORD *a1, DwmDbg::DbgString *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rcx
  const void **v6; // rax
  void *v7; // rbx
  size_t Size; // rsi
  __int64 v9; // rcx
  const char *v10; // rdx
  char **v12; // rdi
  char *v13; // rdi
  __int64 v14; // rcx
  char **v15; // rax
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  char *v17[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  unsigned __int64 v19; // [rsp+50h] [rbp-10h]

  v18 = 0LL;
  v3 = 0LL;
  LOBYTE(v17[0]) = 0;
  v4 = 15LL;
  v19 = 15LL;
  if ( (__int64)(a1[1] - *a1) >> 4 )
  {
    do
    {
      v6 = (const void **)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                            a1,
                            v3);
      DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&Src, "{0x%p, 0x%p}", *v6, v6[1]);
      v7 = Src;
      Size = -1LL;
      do
        ++Size;
      while ( *((_BYTE *)Src + Size) );
      v9 = v18;
      if ( Size <= v19 - v18 )
      {
        v12 = v17;
        v18 += Size;
        if ( v19 >= 0x10 )
          v12 = (char **)v17[0];
        v13 = (char *)v12 + v9;
        memmove_0(v13, Src, Size);
        v13[Size] = 0;
      }
      else
      {
        std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
          v17,
          Size);
      }
      if ( v7 )
        DefaultHeap::Free(v7);
      if ( v3 < ((__int64)(a1[1] - *a1) >> 4) - 1 )
      {
        v14 = v18;
        if ( v19 - v18 < 4 )
        {
          std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
            v17,
            4uLL);
        }
        else
        {
          v18 += 4LL;
          v15 = v17;
          if ( v19 >= 0x10 )
            v15 = (char **)v17[0];
          strcpy((char *)v15 + v14, " -> ");
        }
      }
      ++v3;
    }
    while ( v3 < (__int64)(a1[1] - *a1) >> 4 );
    v4 = v19;
  }
  v10 = (const char *)v17;
  if ( v4 >= 0x10 )
    v10 = v17[0];
  DwmDbg::DbgString::DbgString(a2, v10);
  if ( v19 >= 0x10 )
    std::_Deallocate<16,0>(v17[0], v19 + 1);
  return a2;
}
