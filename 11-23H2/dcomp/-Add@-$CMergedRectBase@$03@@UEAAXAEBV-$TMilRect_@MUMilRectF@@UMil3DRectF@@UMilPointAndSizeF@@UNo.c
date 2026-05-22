/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B860
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180033B14 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18003B94C (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003C0C4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C0FC (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

void __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  unsigned int v4; // r13d
  unsigned int v5; // ebp
  unsigned int v6; // esi
  _BYTE *v7; // r14
  _OWORD *v8; // r12
  float *v9; // rdx
  float *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v4 = -1;
    v5 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v6 = 0;
    v7 = (_BYTE *)(a1 + 72);
    v8 = (_OWORD *)(a1 + 8);
    do
    {
      if ( *v7 )
      {
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                16LL * v6 + a1 + 8,
                                a2) )
        {
          v10 = (float *)(16LL * v6 + a1 + 8);
          goto LABEL_12;
        }
        if ( *(_DWORD *)(a1 + 80) == 4 )
        {
          *(_OWORD *)v15 = *v8;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v15, v9);
          v11 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v15);
          v12 = v11 - TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(16LL * v6 + a1 + 8);
          v13 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          if ( v14 > (float)(v12 - v13) )
            v4 = v6;
        }
      }
      else
      {
        v5 = v6;
      }
      ++v6;
      ++v7;
      ++v8;
    }
    while ( v6 < 4 );
    if ( v5 != -1 )
    {
      *(_OWORD *)(a1 + 16LL * v5 + 8) = *(_OWORD *)a2;
      *(_BYTE *)(v5 + a1 + 72) = 1;
      ++*(_DWORD *)(a1 + 76);
      ++*(_DWORD *)(a1 + 80);
      return;
    }
    v9 = a2;
    v10 = (float *)(16LL * v4 + a1 + 8);
LABEL_12:
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v10, v9);
    ++*(_DWORD *)(a1 + 76);
  }
}
