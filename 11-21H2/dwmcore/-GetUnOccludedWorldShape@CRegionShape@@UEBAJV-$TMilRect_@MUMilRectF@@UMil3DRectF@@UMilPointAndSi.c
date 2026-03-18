/*
 * XREFs of ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180190BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800892B0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x1800B6DFC (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800D3334 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRegionShape::GetUnOccludedWorldShape(__int64 a1, const __m128i *a2, void *a3, _QWORD *a4)
{
  char *v4; // rdi
  FastRegion::Internal::CRgnData *v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // r9
  char *v9; // rbx
  void *v10; // r12
  __int64 v11; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v13; // rcx
  __m128i v14; // xmm0
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  char v18; // al
  __int64 v19; // r8
  unsigned int v20; // eax
  char *v21; // rsi
  __int64 v22; // r14
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v24; // r12
  CRectanglesShape *v25; // rcx
  int v26; // r8d
  char *v27; // rsi
  CRectanglesShape *v28; // rax
  CRectanglesShape *v29; // r14
  int v30; // eax
  __int64 v31; // rcx
  void *v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  void *v35[2]; // [rsp+48h] [rbp-B8h] BYREF
  char *v36; // [rsp+58h] [rbp-A8h]
  char v37[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-98h]
  struct CRectanglesShape *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v43[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v44[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v45[64]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v34 = (unsigned __int64)a4;
  *a4 = 0LL;
  v6 = *(FastRegion::Internal::CRgnData **)(a1 + 16);
  v33[0] = a3;
  v7 = 0;
  v36 = 0LL;
  *(_OWORD *)v35 = 0LL;
  FastRegion::Internal::CRgnData::BeginIterator(v6, (struct FastRegion::CRegion::Iterator *)v37);
  v9 = 0LL;
  v10 = v33[0];
  while ( (unsigned __int64)v39 < v38 )
  {
    v43[1] = *(_DWORD *)v39;
    v43[3] = *((_DWORD *)v39 + 2);
    v11 = 2 * v41;
    v42 = 0LL;
    v43[0] = *(_DWORD *)(v40 + 4 * v11);
    v43[2] = *(_DWORD *)(v40 + 4 * v11 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v44[i] = (float)(int)v43[i];
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v10, (__int64)v44, (float *)&v42, v8);
    v14 = _mm_loadu_si128(a2);
    *(__m128i *)v33 = v14;
    LODWORD(v33[0]) = v14.m128i_i32[0];
    if ( *(float *)&v42 > *(float *)v14.m128i_i32 )
    {
      LODWORD(v33[0]) = v42;
      v14.m128i_i32[0] = v42;
    }
    v15 = *((float *)v33 + 1);
    if ( *((float *)&v42 + 1) > *((float *)v33 + 1) )
    {
      HIDWORD(v33[0]) = DWORD1(v42);
      v15 = *((float *)&v42 + 1);
    }
    v16 = *(float *)&v33[1];
    if ( *(float *)&v33[1] > *((float *)&v42 + 2) )
    {
      LODWORD(v33[1]) = DWORD2(v42);
      v16 = *((float *)&v42 + 2);
    }
    v17 = *((float *)&v33[1] + 1);
    if ( *((float *)&v33[1] + 1) > *((float *)&v42 + 3) )
    {
      HIDWORD(v33[1]) = HIDWORD(v42);
      v17 = *((float *)&v42 + 3);
    }
    if ( v16 <= *(float *)v14.m128i_i32 || v17 <= v15 )
    {
      v33[1] = 0LL;
      v33[0] = 0LL;
      v18 = 0;
    }
    else
    {
      v18 = 1;
    }
    if ( v18 )
    {
      `vector constructor iterator'(
        v45,
        16LL,
        4LL,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
      v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
              (float *)&v42,
              (__int64)v33,
              v19,
              (__int64)v45);
      if ( v20 )
      {
        v21 = v45;
        v22 = v20;
        do
        {
          if ( v9 == v4 )
          {
            std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
              (__int64)v35,
              v9,
              v21);
            v4 = v36;
            v9 = (char *)v35[1];
          }
          else
          {
            *(_OWORD *)v9 = *(_OWORD *)v21;
            v9 += 16;
            v35[1] = v9;
          }
          v21 += 16;
          --v22;
        }
        while ( v22 );
      }
    }
    else if ( v9 == v4 )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        (__int64)v35,
        v9,
        &v42);
      v4 = v36;
      v9 = (char *)v35[1];
    }
    else
    {
      *(_OWORD *)v9 = v42;
      v9 += 16;
      v35[1] = v9;
    }
    FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v37);
  }
  ObjectCache = CThreadContext::GetObjectCache(v39);
  v24 = (_QWORD *)v34;
  v25 = 0LL;
  v26 = *((_DWORD *)ObjectCache + 1);
  if ( v26 )
  {
    v25 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v25;
    *((_DWORD *)ObjectCache + 1) = v26 - 1;
  }
  v27 = (char *)v35[0];
  if ( (v25 || (v25 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v28 = CRectanglesShape::CRectanglesShape(v25), (v29 = v28) != 0LL) )
  {
    if ( v27 == v9 || (v30 = CRectanglesShape::BuildFromRectFs(v28, v27, (v9 - v27) >> 4), v7 = v30, v30 >= 0) )
    {
      *v24 = v29;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0xC1u);
      CRectanglesShape::`scalar deleting destructor'(v29, 1);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0LL, -2147024882, 0xBDu);
  }
  if ( v27 )
  {
    v33[0] = v27;
    v34 = (v4 - v27) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v34 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v33, &v34);
      v27 = (char *)v33[0];
    }
    operator delete(v27);
  }
  return v7;
}
