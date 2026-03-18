/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180035198
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18007879C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180033E88 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ??$GetRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x1800345B0 (--$GetRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UM.c)
 *     ?SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@AEBVCMILMatrix@@@Z @ 0x180034DD8 (-SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV-$unique_ptr@VCDrawListPrimitive@@U-$def.c)
 *     CreateMegaRectVertex @ 0x180035720 (CreateMegaRectVertex.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800358AC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180035C34 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x18003F4DC (-GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180093100 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800E5E30 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x18020AED4 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  __int64 *v2; // r15
  __int64 *v3; // r14
  __int64 *v4; // rdi
  int v6; // eax
  unsigned int v7; // r12d
  size_t v8; // rax
  FastRegion::Internal::CRgnData **v9; // rcx
  char *v10; // r9
  char *v11; // rdx
  unsigned __int64 v12; // r13
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *v15; // rbx
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  CMegaRect *v21; // r14
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int16 v24; // bx
  int v25; // eax
  int v26; // r12d
  __int64 v27; // r8
  float v28; // xmm0_4
  _WORD *v29; // rdx
  _WORD *v30; // rdx
  _WORD *v31; // rdx
  __int16 v32; // r15
  _WORD *v33; // rdx
  _WORD *v34; // rdx
  _WORD *v35; // rdx
  __m128 v36; // xmm6
  __m128 v37; // xmm6
  int v38; // xmm1_4
  unsigned int v39; // xmm0_4
  int v40; // xmm1_4
  float v41; // xmm0_4
  CMegaRectBatchCommand *v42; // rcx
  int v43; // r8d
  struct CDrawListPrimitive *Primitive; // rax
  __int64 v45; // rbx
  char v46; // si
  gsl::details *v47; // rcx
  int v48; // r8d
  unsigned int v49; // ecx
  int v50; // ebx
  __int64 v51; // rdx
  unsigned __int64 v53; // rbx
  char *v54; // rax
  size_t v55; // rsi
  char *v56; // rax
  int v57; // [rsp+30h] [rbp-A1h]
  int v58; // [rsp+48h] [rbp-89h] BYREF
  int v59; // [rsp+4Ch] [rbp-85h]
  int v60; // [rsp+50h] [rbp-81h]
  char *v61; // [rsp+58h] [rbp-79h]
  __int64 v62; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-69h]
  int v64; // [rsp+6Ch] [rbp-65h]
  int v65; // [rsp+70h] [rbp-61h]
  int v66; // [rsp+74h] [rbp-5Dh]
  int v67; // [rsp+78h] [rbp-59h]
  size_t v68; // [rsp+80h] [rbp-51h] BYREF
  CMegaRect *v69; // [rsp+88h] [rbp-49h]
  int v70[2]; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v71; // [rsp+98h] [rbp-39h]
  int v72; // [rsp+9Ch] [rbp-35h]
  __int64 v73; // [rsp+A8h] [rbp-29h]
  __int64 v74; // [rsp+B0h] [rbp-21h]
  int v75[2]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v76; // [rsp+C0h] [rbp-11h]
  int v77; // [rsp+C4h] [rbp-Dh]
  __int64 v78[2]; // [rsp+C8h] [rbp-9h] BYREF
  char v79; // [rsp+D8h] [rbp+7h]

  v2 = (__int64 *)((char *)a2 + 24);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (__int64 *)((char *)a2 + 48);
  v4 = (__int64 *)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)this + 6);
  v69 = this;
  v78[0] = (__int64)a2;
  v77 = 4;
  v7 = 8 * v6 + 16;
  v8 = *((_QWORD *)this + 2);
  v9 = (FastRegion::Internal::CRgnData **)*((_QWORD *)this + 1);
  v68 = v8;
  *(_QWORD *)v75 = v8;
  LODWORD(v62) = v7;
  v76 = v7;
  CRegion::GetRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(
    v9,
    (__int64)a2);
  v10 = (char *)v2[1];
  v11 = (char *)*v2;
  v12 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v13 = &v10[-*v2];
  v61 = v10;
  v14 = 4 * v12 * v7;
  *(_QWORD *)v70 = 4 * v12;
  if ( v14 < (unsigned __int64)v13 )
  {
    v54 = &v11[v14];
  }
  else
  {
    if ( v14 <= (unsigned __int64)v13 )
      goto LABEL_5;
    if ( v14 > v2[2] - (__int64)v11 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v2, 4 * v12 * v7);
      goto LABEL_5;
    }
    v53 = v14 - (_QWORD)v13;
    memset_0(v10, 0, v14 - (_QWORD)v13);
    v54 = &v61[v53];
  }
  v2[1] = (__int64)v54;
LABEL_5:
  v15 = (char *)v3[1];
  v16 = *v3;
  v17 = &v15[-*v3];
  v61 = (char *)*v2;
  if ( v14 < (unsigned __int64)v17 )
  {
    v56 = (char *)(v16 + v14);
  }
  else
  {
    if ( v14 <= (unsigned __int64)v17 )
      goto LABEL_9;
    if ( v14 > v3[2] - v16 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v3, 4 * v12 * v7);
      goto LABEL_9;
    }
    v55 = v14 - (_QWORD)v17;
    memset_0(v15, 0, v55);
    v56 = &v15[v55];
  }
  v3[1] = (__int64)v56;
LABEL_9:
  v18 = *v3;
  v19 = 6 * v12;
  v20 = (v4[2] - *v4) >> 1;
  v73 = *v3;
  if ( 6 * v12 > v20 )
  {
    if ( v19 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<unsigned short>::_Reallocate_exactly((__int64)v4, v19);
  }
  v21 = v69;
  v63 = 0;
  if ( v12 )
  {
    v22 = (_QWORD *)v78[0];
    v60 = 3 * v7;
    v67 = 4 * v7;
    v23 = 0LL;
    v59 = 3 * v7;
    v24 = 0;
    v65 = -2 * v7;
    v25 = -3 * v7;
    v66 = -v7;
    v26 = 0;
    v64 = v25;
    do
    {
      *(__m128 *)v78 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*v22 + 16 * v23))), (__m128)_xmm);
      v28 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v78);
      v29 = (_WORD *)v4[1];
      LOWORD(v58) = v24;
      v26 += (int)v28;
      if ( v29 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v29, &v58);
        v27 = 2LL;
      }
      else
      {
        *v29 = v24;
        v4[1] += v27;
      }
      v30 = (_WORD *)v4[1];
      LOWORD(v58) = v24 + 1;
      if ( v30 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v30, &v58);
        v27 = 2LL;
      }
      else
      {
        *v30 = v24 + 1;
        v4[1] += v27;
      }
      v31 = (_WORD *)v4[1];
      v32 = v27 + v24;
      LOWORD(v58) = v27 + v24;
      if ( v31 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v31, &v58);
        v27 = 2LL;
      }
      else
      {
        *v31 = v27 + v24;
        v4[1] += v27;
      }
      v33 = (_WORD *)v4[1];
      LOWORD(v58) = v24;
      if ( v33 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v33, &v58);
        v27 = 2LL;
      }
      else
      {
        *v33 = v24;
        v4[1] += v27;
      }
      v34 = (_WORD *)v4[1];
      LOWORD(v58) = v32;
      if ( v34 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v34, &v58);
        v27 = 2LL;
      }
      else
      {
        *v34 = v32;
        v4[1] += v27;
      }
      v35 = (_WORD *)v4[1];
      LOWORD(v58) = v24 + 3;
      if ( v35 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v35, &v58);
      }
      else
      {
        *v35 = v24 + 3;
        v4[1] += v27;
      }
      v18 = v73;
      v36 = (__m128)HIDWORD(v78[0]);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v78[0]), (__m128)HIDWORD(v78[0])).m128_u32[0],
        (unsigned int)v75,
        *((_DWORD *)v21 + 6),
        (_DWORD)v61 + v64 + v60,
        v73 + v64 + v59);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v78[1]), v36).m128_u32[0],
        (unsigned int)v75,
        *((_DWORD *)v21 + 6),
        (_DWORD)v61 + v65 + v60,
        v18 + v65 + v59);
      v37 = (__m128)HIDWORD(v78[1]);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v78[0]), (__m128)HIDWORD(v78[1])).m128_u32[0],
        (unsigned int)v75,
        *((_DWORD *)v21 + 6),
        (_DWORD)v61 + v60,
        v18 + v59);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v78[1]), v37).m128_u32[0],
        (unsigned int)v75,
        *((_DWORD *)v21 + 6),
        (_DWORD)v61 + v66 + v60,
        v18 + v66 + v59);
      v24 += 4;
      v59 += v67;
      v60 += v67;
      v23 = ++v63;
    }
    while ( v63 < v12 );
    v58 = v26;
    v7 = v62;
  }
  v38 = *(_DWORD *)(v68 + 4);
  v75[0] = *(_DWORD *)v68;
  v39 = *(_DWORD *)((int)(2 * v7) + v68);
  v75[1] = v38;
  v40 = *(_DWORD *)((int)(2 * v7) + v68 + 4);
  v76 = v39;
  v77 = v40;
  v41 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v75);
  v42 = *(CMegaRectBatchCommand **)v21;
  v62 = 0LL;
  v78[1] = 0LL;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v41 - v43;
  v78[0] = (__int64)&v62;
  v79 = 1;
  v68 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  Primitive = CMegaRectBatchCommand::GetPrimitive(v42);
  v45 = *v4;
  v46 = *((_BYTE *)Primitive + 104);
  gsl::details::extent_type<-1>::extent_type<-1>(v75, (v4[1] - *v4) >> 1);
  if ( *(_QWORD *)v75 == -1LL || !v45 && *(_QWORD *)v75 )
  {
    gsl::details::terminate(v47);
    __debugbreak();
  }
  v48 = *((_DWORD *)v21 + 6);
  v73 = *(_QWORD *)v75;
  v77 = v70[0];
  *(_QWORD *)v70 = v61;
  v72 = v77;
  LOBYTE(v57) = v46;
  *(_QWORD *)v75 = v18;
  v76 = v7;
  v71 = v7;
  v74 = v45;
  v50 = CDrawListPrimitive::Create((int)v70, (int)v75, v48, (size_t)&v68, v57, (__int64)&v78[1]);
  if ( v79 )
  {
    v51 = *(_QWORD *)v78[0];
    *(_QWORD *)v78[0] = v78[1];
    if ( v51 )
      std::default_delete<CDrawListPrimitive>::operator()();
  }
  if ( v50 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v50, 0x1A2u, 0LL);
  else
    CMegaRectBatchCommand::SetMegaRectPrimitive(*(_QWORD *)v21);
  if ( v62 )
    std::default_delete<CDrawListPrimitive>::operator()();
  return (unsigned int)v50;
}
