/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1800646F8
 * Callers:
 *     ?insert@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@2@V?$basic_iterator@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@2@_KAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800645F8 (-insert@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180190340 (--$uninitialized_move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  __int64 v5; // rdx
  char *v7; // r12
  char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  char *v12; // r9
  unsigned __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  LPVOID v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r9
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v7 = a1;
  if ( (v5 - (__int64)v3) >> 4 < a3 )
  {
    v17 = (__int64)&v3[-*(_QWORD *)a1] >> 4;
    v18 = v17 + a3;
    if ( v18 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v5 - *(_QWORD *)a1) >> 4,
            v18);
    v20 = operator new(saturated_mul(v19, 0x10uLL));
    v21 = *((_QWORD *)v7 + 1);
    v22 = *(char **)v7;
    *(_QWORD *)&v28 = v20;
    v23 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v28,
      v22,
      v21,
      &v30);
    v24 = *(char **)v7;
    v25 = *(_QWORD *)v7 == (_QWORD)(v7 + 24);
    *(_QWORD *)v7 = v23;
    if ( v25 )
      v24 = 0LL;
    DefaultHeap::Free(v24);
    v3 = (char *)(*(_QWORD *)v7 + 16 * v17);
    *((_QWORD *)v7 + 2) = *(_QWORD *)v7 + 16 * v19;
    *((_QWORD *)v7 + 1) = v3;
  }
  v8 = *(char **)v7;
  v9 = (__int64)&v3[-*(_QWORD *)v7];
  *((_QWORD *)&v28 + 1) = a3;
  v10 = v9 >> 4;
  v11 = v10 - a2;
  v12 = &v8[16 * v10];
  *(_QWORD *)&v28 = v12;
  if ( a3 && (!v12 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
LABEL_27:
    v31 = v10;
    v15 = 16 * a2;
    v28 = v30;
    v29 = v10;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      &v30,
      &v8[v15],
      &v8[16 * (v10 - a3)],
      &v28);
    goto LABEL_10;
  }
  v29 = a3;
  v13 = a3;
  if ( a3 >= v11 )
    v13 = v10 - a2;
  v30 = v28;
  a1 = (char *)(16 * v13);
  v14 = (char *)(v3 - a1);
  v31 = a3;
  if ( v3 != (char *)(v3 - a1) )
  {
    v26 = v31;
    a1 = &v12[16 * a3];
    v27 = a3;
    do
    {
      v3 -= 16;
      if ( !(_QWORD)v30 )
        goto LABEL_26;
      if ( !v27 )
        goto LABEL_26;
      v27 = v26 - 1;
      a1 -= 16;
      v26 = v27;
      if ( v27 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_26;
      *(_OWORD *)a1 = *(_OWORD *)v3;
    }
    while ( v3 != v14 );
  }
  if ( v11 > a3 )
  {
    *(_QWORD *)&v30 = v8;
    *((_QWORD *)&v30 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v15 = 16 * a2;
LABEL_10:
  *((_QWORD *)v7 + 1) += 16 * a3;
  return &v8[v15];
}
