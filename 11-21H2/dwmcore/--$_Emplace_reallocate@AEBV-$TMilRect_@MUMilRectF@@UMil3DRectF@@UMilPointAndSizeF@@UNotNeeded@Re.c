/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x1800B6DFC
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800B6BF0 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180190BF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180191078 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800B6FA0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        __int64 a1,
        char *a2,
        _OWORD *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v6; // rbp
  char *v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // r14
  char *v15; // r15
  char *v16; // rdx
  char *v17; // rcx
  _OWORD *v18; // r8
  __int128 v19; // xmm0
  void *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  char *result; // rax
  __int128 v24; // xmm0
  signed __int64 v25; // rax
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  void *v27; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v7 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v15 = *a3;
  v16 = *(char **)(a1 + 8);
  v17 = *(char **)a1;
  if ( v7 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *(_OWORD *)v17;
      v17 += 16;
      *v18++ = v19;
    }
  }
  else
  {
    if ( v17 != v7 )
    {
      do
      {
        v24 = *(_OWORD *)v17;
        v17 += 16;
        *v13++ = v24;
      }
      while ( v17 != v7 );
      v16 = *(char **)(a1 + 8);
    }
    if ( v7 != v16 )
    {
      v25 = v15 - v7;
      do
      {
        *(_OWORD *)&v7[v25 + 16] = *(_OWORD *)v7;
        v7 += 16;
      }
      while ( v7 != v16 );
    }
  }
  v20 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v21 = *(_QWORD *)(a1 + 16) - (_QWORD)v20;
    v27 = *(void **)a1;
    v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = v22;
    if ( v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v26);
      v22 = v26;
      v20 = v27;
    }
    operator delete(v20, v22);
  }
  result = v15;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = &v14[v9];
  *(_QWORD *)(a1 + 16) = &v14[v3];
  return result;
}
