/*
 * XREFs of ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180040D80
 * Callers:
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800B2FA0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800E6230 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x1800410F0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1800BFDA8 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800C0048 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ?AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@@Z @ 0x1800E307C (-AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV-$vector@U-$pair@PEBVCVisu.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memmove_0 @ 0x18011B674 (memmove_0.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801B10C0 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

void __fastcall CBackdropVisualImage::EnsureAncestorList(CBackdropVisualImage *this)
{
  _QWORD *v1; // r12
  CBackdropVisualImage *v2; // rdi
  detail::liberal_expansion_policy *v3; // rcx
  __int64 v4; // r13
  __int128 **v5; // rsi
  __int128 *v6; // rdi
  __int128 *v7; // rbx
  __int128 *v8; // r15
  __int128 *v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int128 *v12; // r10
  __int64 v13; // r8
  _OWORD *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  __int128 *v17; // rax
  _QWORD *v18; // rdx
  _BYTE *v19; // rdi
  _OWORD *v20; // rbx
  _OWORD *i; // rax
  _OWORD *v22; // rcx
  _BYTE *v23; // rbx
  __int64 v24; // rax
  __int128 *v25; // rdi
  __int128 *v26; // rbx
  _OWORD *v27; // rax
  _QWORD *v28; // rdx
  __int128 *v29; // rdi
  __int128 *v30; // rbx
  _OWORD *v31; // rax
  _BYTE *v32; // rcx
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  unsigned __int64 v35; // rsi
  SIZE_T v36; // r9
  SIZE_T v37; // rax
  void *v38; // rbx
  void *v39; // rcx
  bool v40; // zf
  __int128 *v41; // r11
  signed __int64 v42; // r9
  HANDLE ProcessHeap; // rax
  detail::liberal_expansion_policy *v45; // [rsp+28h] [rbp-61h]
  __int128 **v46; // [rsp+30h] [rbp-59h]
  _QWORD v47[4]; // [rsp+40h] [rbp-49h] BYREF
  char v48[24]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v49; // [rsp+78h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+80h] [rbp-9h] BYREF
  _BYTE *v51; // [rsp+88h] [rbp-1h]
  char *v52; // [rsp+90h] [rbp+7h]
  _BYTE Src[32]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v54; // [rsp+B8h] [rbp+2Fh] BYREF

  v1 = (_QWORD *)((char *)this + 1960);
  v2 = this;
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
    *((_QWORD *)this + 245),
    *((_QWORD *)this + 246));
  v1[1] = *v1;
  v3 = *(detail::liberal_expansion_policy **)(*((_QWORD *)v2 + 225) - 8LL);
  v45 = v3;
  v4 = *(_QWORD *)(*((_QWORD *)v2 + 223) + 88LL);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (__int128 **)((char *)v2 + 1792);
      v46 = (__int128 **)((char *)v2 + 1792);
      v49 = v4;
      if ( v4 == *((_QWORD *)v3 + 8) )
        break;
      v6 = (__int128 *)*((_QWORD *)v2 + 225);
      v7 = (__int128 *)Src;
      v8 = *v5;
      v9 = Src;
      lpMem = Src;
      v51 = Src;
      v10 = v6 - v8;
      v52 = (char *)&v54;
      if ( v10 > 2 )
      {
        v35 = detail::liberal_expansion_policy::expand(v3, 2uLL, v6 - v8);
        v37 = 16 * v35;
        if ( !is_mul_ok(v35, 0x10uLL) )
          v37 = v36;
        v38 = operator new(v37);
        v47[0] = v38;
        v47[1] = 0LL;
        v47[2] = 0LL;
        std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v48,
          lpMem,
          v51,
          v47);
        v39 = lpMem;
        v40 = lpMem == Src;
        lpMem = v38;
        if ( v40 )
          v39 = 0LL;
        operator delete(v39);
        v7 = (__int128 *)lpMem;
        v9 = lpMem;
        v51 = lpMem;
        v52 = (char *)lpMem + 16 * v35;
      }
      v11 = v9 - v7;
      v12 = &v7[v11];
      if ( v10 && (!v12 || (v10 & 0x8000000000000000uLL) != 0LL) )
LABEL_45:
        _invalid_parameter_noinfo_noreturn();
      if ( v10 < v11 )
        v13 = v6 - v8;
      else
        v13 = v9 - v7;
      v14 = &v9[-v13];
      v15 = v10;
      v16 = v6 - v8;
      if ( v9 != v14 )
      {
        v41 = &v12[v15];
        do
        {
          --v9;
          if ( !v12 )
            goto LABEL_45;
          if ( !v16 )
            goto LABEL_45;
          --v16;
          --v41;
          if ( v16 >= v10 )
            goto LABEL_45;
          *v41 = *v9;
        }
        while ( v9 != v14 );
        v9 = v51;
      }
      if ( v11 > v10 )
      {
        if ( v11 && (!v7 || (v11 & 0x8000000000000000uLL) != 0LL) )
          goto LABEL_45;
        v42 = 16 * v11 - v15 * 16;
        if ( v42 >> 4 > 0 && v11 < v42 >> 4 )
          goto LABEL_45;
        if ( v42 >> 4 < 0 )
          goto LABEL_45;
        memmove_0(&v7[v15], v7, v42);
        v9 = v51;
      }
      v51 = &v9[v15];
      while ( 1 )
      {
        v17 = v8;
        if ( v8 == v6 )
          break;
        ++v8;
        *v7++ = *v17;
      }
      v18 = (_QWORD *)v1[1];
      if ( v18 == (_QWORD *)v1[2] )
      {
        std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
          v1,
          v18,
          &v49);
      }
      else
      {
        *v18 = v49;
        v18[1] = v18 + 4;
        v18[2] = v18 + 4;
        v18[3] = v18 + 8;
        v19 = v51;
        v20 = lpMem;
        for ( i = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                              v18 + 1,
                              0LL,
                              (v51 - (_BYTE *)lpMem) >> 4); ; ++i )
        {
          v22 = v20;
          if ( v20 == (_OWORD *)v19 )
            break;
          ++v20;
          *i = *v22;
        }
        v1[1] += 64LL;
      }
      v23 = lpMem;
      v24 = (v51 - (_BYTE *)lpMem) >> 4;
      if ( v24 )
        v51 -= 16 * v24;
      lpMem = 0LL;
      if ( v23 != Src && v23 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v23);
      }
      v4 = *(_QWORD *)(v4 + 88);
      if ( !v4 )
      {
        v5 = v46;
        goto LABEL_35;
      }
      v2 = this;
      v3 = v45;
    }
    v25 = (__int128 *)*((_QWORD *)v2 + 225);
    v26 = *v5;
    lpMem = Src;
    v51 = Src;
    v52 = (char *)&v54;
    v27 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      &lpMem,
                      0LL,
                      v25 - v26);
    while ( v26 != v25 )
    {
      v33 = *v26++;
      *v27++ = v33;
    }
    v28 = (_QWORD *)v1[1];
    if ( v28 == (_QWORD *)v1[2] )
    {
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        v1,
        v28,
        &v49);
    }
    else
    {
      *v28 = v49;
      v28[1] = v28 + 4;
      v28[2] = v28 + 4;
      v28[3] = v28 + 8;
      v29 = (__int128 *)v51;
      v30 = (__int128 *)lpMem;
      v31 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                        v28 + 1,
                        0LL,
                        (v51 - (_BYTE *)lpMem) >> 4);
      while ( v30 != v29 )
      {
        v34 = *v30++;
        *v31++ = v34;
      }
      v1[1] += 64LL;
    }
    v32 = lpMem;
    if ( (v51 - (_BYTE *)lpMem) >> 4 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        0LL);
      v32 = lpMem;
    }
    lpMem = 0LL;
    if ( v32 == Src )
      v32 = 0LL;
    operator delete(v32);
  }
  else
  {
    v5 = (__int128 **)((char *)v2 + 1792);
  }
LABEL_35:
  CVisualTreePath::AppendAncestorListAboveInnermostVisualTree(v5, v1);
}
