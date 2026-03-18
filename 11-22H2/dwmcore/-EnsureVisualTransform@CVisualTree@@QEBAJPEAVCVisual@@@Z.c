/*
 * XREFs of ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1802140D8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180087B2C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3790 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001E17C (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004C6A4 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180088B84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800895E0 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008974C (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18008A730 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@QEAA_NXZ @ 0x180118A24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcore.c)
 *     ??1?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801194A8 (--1-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@de.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x180119678 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1801B12BC (-IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1801B6370 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?IsWorldTransformCurrent@CTreeData@@IEBA_N_K@Z @ 0x1801B6380 (-IsWorldTransformCurrent@CTreeData@@IEBA_N_K@Z.c)
 */

__int64 __fastcall CVisualTree::EnsureVisualTransform(CVisual **this, CVisual **a2)
{
  unsigned __int64 CurrentFrameId; // rdi
  unsigned int v5; // esi
  const struct CVisual *v6; // rdx
  CVisual *v7; // rbx
  CTreeData *v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  CVisual *v12; // rbx
  __int64 **TreeData; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rax
  const struct CVisual *v17; // r15
  unsigned __int64 v18; // r12
  _BYTE *v19; // rbx
  CTreeData *v20; // rax
  void *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // r12
  CVisual **v24; // r13
  CVisual *v25; // rbx
  struct CTreeData *v26; // rax
  const struct CVisual *TransformParent; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v30; // [rsp+48h] [rbp-B8h]
  _BYTE *v31; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v32; // [rsp+58h] [rbp-A8h]
  __int64 *v33; // [rsp+60h] [rbp-A0h]
  _BYTE v34[512]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+268h] [rbp+168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::GetImpl'::`2'::impl) )
  {
    v31 = v34;
    v32 = v34;
    v33 = &v35;
    CurrentFrameId = GetCurrentFrameId();
    if ( CVisualTree::IsInTree((CVisualTree *)this, (const struct CVisual *)a2) )
    {
      v6 = (const struct CVisual *)a2;
      while ( !CVisualTree::IsRootVisual(this, v6) )
      {
        TransformParent = CVisual::GetTransformParent((CVisual *)a2, this, 0LL);
        v7 = TransformParent;
        if ( !TransformParent )
        {
          v7 = a2[11];
          TransformParent = v7;
        }
        v8 = CVisual::EnsureTreeData(v7, (const struct CVisualTree *)this);
        if ( CTreeData::IsWorldTransformCurrent(v8, CurrentFrameId) )
          break;
        detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
          &v31,
          &TransformParent);
        v6 = v7;
        a2 = (CVisual **)v7;
      }
      v9 = v31;
      v10 = (v32 - v31) >> 3;
      v11 = (int)v10;
      if ( (int)v10 > 0 )
      {
        while ( 1 )
        {
          v12 = *(CVisual **)&v9[8 * v11 - 8];
          TreeData = CVisual::FindTreeData(v12, (const struct CVisualTree *)this);
          CVisual::EnsureWorldTransform(v12, (const struct CVisualTree *)this, (struct CTreeData *)TreeData);
          if ( --v11 <= 0 )
            break;
          v9 = v31;
        }
      }
      v5 = 0;
    }
    else
    {
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
        (const char *)0x80070057LL);
    }
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::~vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>((__int64)&v31);
  }
  else
  {
    v5 = 0;
    if ( CVisualTree::IsInTree((CVisualTree *)this, (const struct CVisual *)a2) )
    {
      v15 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v16 = GetCurrentFrameId();
      v17 = a2[11];
      v18 = v16;
      v19 = 0LL;
      for ( TransformParent = v17; TransformParent; v17 = TransformParent )
      {
        v20 = CVisual::EnsureTreeData(v17, (const struct CVisualTree *)this);
        if ( CTreeData::IsWorldTransformCurrent(v20, v18) )
          break;
        if ( v19 == v15 )
        {
          std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(&v29, v19, &TransformParent);
          v15 = v30;
          v19 = (_BYTE *)*((_QWORD *)&v29 + 1);
          v17 = TransformParent;
        }
        else
        {
          *(_QWORD *)v19 = v17;
          v19 += 8;
          *((_QWORD *)&v29 + 1) = v19;
        }
        if ( CVisualTree::IsRootVisual(this, v17) )
          break;
        TransformParent = (const struct CVisual *)*((_QWORD *)v17 + 11);
      }
      v21 = (void *)v29;
      v22 = (__int64)&v19[-v29] >> 3;
      v23 = (int)v22;
      if ( (int)v22 > 0 )
      {
        v24 = (CVisual **)(v29 - 8 + 8LL * (int)v22);
        do
        {
          v25 = *v24;
          v26 = CVisual::EnsureTreeData(*v24, (const struct CVisualTree *)this);
          CVisual::EnsureWorldTransform(v25, (const struct CVisualTree *)this, v26);
          --v23;
          --v24;
        }
        while ( v23 > 0 );
      }
      if ( v21 )
        std::_Deallocate<16,0>(v21, (v15 - (_BYTE *)v21) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0xA6u, 0LL);
    }
  }
  return v5;
}
