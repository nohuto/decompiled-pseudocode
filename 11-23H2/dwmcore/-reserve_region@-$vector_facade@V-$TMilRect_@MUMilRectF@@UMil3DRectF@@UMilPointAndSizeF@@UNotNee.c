/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18003AC7C
 * Callers:
 *     ?resize@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003AC20 (-resize@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x18003B064 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180057090 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801B1174 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801B1270 (--$uninitialized_move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _OWORD *v15; // r9
  __int64 v16; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  void *v24; // rbx
  char *v25; // rcx
  bool v26; // zf
  _OWORD *v27; // r14
  _OWORD *v28; // r10
  unsigned __int64 v29; // rax
  void *v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < a3 )
  {
    v18 = (v3 - *(_QWORD *)a1) >> 4;
    v19 = v18 + a3;
    if ( v19 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v19);
    v21 = operator new(saturated_mul(v20, 0x10uLL));
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(char **)a1;
    v24 = v21;
    v30 = v21;
    v31 = v18;
    v32 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, void **))std::uninitialized_move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      v33,
      v23,
      v22,
      &v30);
    v25 = *(char **)a1;
    v26 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v3 = *(_QWORD *)a1 + 16 * v18;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v20;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 4;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 16 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_25;
  v12 = ((v3 - *(_QWORD *)a1) >> 4) - a2;
  if ( a3 < v10 )
    v12 = a3;
  v13 = 16 * a3;
  v14 = 16 * v12;
  v15 = (_OWORD *)(v3 - v14);
  if ( v3 != v3 - v14 )
  {
    v27 = (_OWORD *)(v3 - 16);
    v28 = (_OWORD *)(v13 + v11);
    v29 = a3;
    if ( v11 )
    {
      while ( v29 )
      {
        --v29;
        --v28;
        if ( v29 >= a3 )
          break;
        *v28 = *v27;
        if ( v27 == v15 )
          goto LABEL_8;
        --v27;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v16 = 16 * a2;
      v31 = v9;
      v32 = v9;
      v30 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, void **))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
        v33,
        &v8[v16],
        &v8[16 * (v9 - a3)],
        &v30);
      goto LABEL_10;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  v16 = 16 * a2;
LABEL_10:
  *((_QWORD *)a1 + 1) += v13;
  return &v8[v16];
}
