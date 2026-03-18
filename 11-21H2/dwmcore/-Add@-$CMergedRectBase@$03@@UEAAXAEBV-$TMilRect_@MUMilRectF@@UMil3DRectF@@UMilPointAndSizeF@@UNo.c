/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085350
 * Callers:
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800852E0 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180085884 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800B34A0 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

_UNKNOWN **__fastcall CMergedRectBase<4>::Add(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // esi
  unsigned int v7; // r11d
  _BYTE *v8; // rbp
  _OWORD *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  double v13; // xmm0_8
  float v14; // xmm4_4
  float v15; // xmm5_4
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)(a2 + 8) > *(float *)a2 && *(float *)(a2 + 12) > *(float *)(a2 + 4) )
  {
    v5 = -1;
    v6 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v7 = 0;
    v8 = (_BYTE *)(a1 + 72);
    v9 = (_OWORD *)(a1 + 8);
    do
    {
      if ( *v8 )
      {
        v10 = 16LL * v7 + a1 + 8;
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                v10,
                                a2) )
          goto LABEL_10;
        if ( *(_DWORD *)(a1 + 80) == 4 )
        {
          v16[0] = *v9;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v16, v11);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v16);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v10);
          v13 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          if ( v15 > (float)(v14 - *(float *)&v13) )
            v5 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
      ++v7;
      ++v8;
      ++v9;
    }
    while ( v7 < 4 );
    if ( v6 != -1 )
    {
      result = (_UNKNOWN **)(2LL * v6);
      *(_OWORD *)(a1 + 16LL * v6 + 8) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 72) = 1;
      ++*(_DWORD *)(a1 + 76);
      ++*(_DWORD *)(a1 + 80);
      return result;
    }
    v11 = a2;
    v12 = 16LL * v5 + a1 + 8;
LABEL_10:
    result = (_UNKNOWN **)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12, v11);
    ++*(_DWORD *)(a1 + 76);
  }
  return result;
}
