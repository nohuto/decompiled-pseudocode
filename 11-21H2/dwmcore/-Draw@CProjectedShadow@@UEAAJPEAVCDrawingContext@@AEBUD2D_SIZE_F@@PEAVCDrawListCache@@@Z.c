/*
 * XREFs of ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233140
 * Callers:
 *     ?Draw@CProjectedShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107950 (-Draw@CProjectedShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x180114772 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180201004 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x180232FD8 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // r14
  __int64 v6; // rbp
  char *v11; // rbx
  __m128 v12; // xmm1
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  int updated; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  struct _D3DCOLORVALUE v21; // [rsp+30h] [rbp-48h] BYREF

  v4 = *((_QWORD *)a2 + 991);
  v6 = *((_QWORD *)this - 43);
  *(_QWORD *)&v21.r = v4;
  if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
         v6 + 80,
         (__int64)&v21) == *(_QWORD *)(v6 + 80) )
    return 0LL;
  *(_QWORD *)&v21.r = v4;
  v11 = (char *)this - 424;
  v12 = (__m128)_mm_loadu_si128((const __m128i *)(std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
                                                    v6 + 80,
                                                    (__int64)&v21)
                                                + 60));
  *((float *)this - 8) = fminf(
                           _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v12.m128_f32[0],
                           _mm_shuffle_ps(v12, v12, 255).m128_f32[0] - _mm_shuffle_ps(v12, v12, 85).m128_f32[0]);
  v13 = CProjectedShadow::ComputeShadowPath((__int64)this - 424, (__int64)a2);
  if ( *((_DWORD *)this - 24) != v13 )
  {
    *((_DWORD *)this - 24) = v13;
    (*(void (__fastcall **)(char *, _QWORD, char *))(*(_QWORD *)v11 + 72LL))(
      (char *)this - 424,
      0LL,
      (char *)this - 424);
    v14 = *((_QWORD *)this - 6);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v14 + 16, 0x18u);
      *(_BYTE *)(v14 + 200) = 1;
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this - 6);
    }
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this - 5);
  }
  CProjectedShadow::ComputeShadowColor((CProjectedShadowCaster **)this - 53, &v21, a2);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 15) - v21.a) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 18) - v21.r) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 17) - v21.g) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this - 16) - v21.b) & _xmm) > 0.0000011920929 )
  {
    v15 = *(_QWORD *)v11;
    *(struct _D3DCOLORVALUE *)((char *)this - 72) = *(struct _D3DCOLORVALUE *)&v21.r;
    (*(void (__fastcall **)(char *, __int64, char *))(v15 + 72))((char *)this - 424, 5LL, (char *)this - 424);
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 51) + 1112LL)
    || (updated = CProjectedShadow::UpdateShadowIntermediates((CProjectedShadow *)((char *)this - 424), a2),
        v18 = updated,
        updated >= 0) )
  {
    v19 = CContent::Draw((CProjectedShadow *)((char *)this - 328), a2, a3, a4);
    v18 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x168u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, updated, 0x164u);
  }
  return v18;
}
