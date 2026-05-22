/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18003B94C
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18003B7C0 (-GetRects@-$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B860 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18003BA60 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003C0C4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C0FC (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?MergeExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800FA818 (-MergeExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

__int64 __fastcall CMergedRectBase<4>::Optimize(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  float v5; // xmm3_4
  __int64 v6; // rsi
  char v7; // bp
  float v8; // xmm2_4
  __int64 v9; // r14
  float v10; // xmm0_4
  unsigned int v11; // eax
  unsigned int v12; // r10d
  _BYTE *v13; // r11
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2 || (*(_BYTE *)(a1 + 76) & 0xF) == 0 )
  {
    v4 = 0;
    *(_DWORD *)(a1 + 76) = 1;
    if ( *(_DWORD *)(a1 + 80) > 1u )
    {
      v5 = 0.0;
      v6 = 0LL;
      do
      {
        v7 = 0;
        v8 = v5;
        if ( *(_BYTE *)(v6 + a1 + 72) )
        {
          v9 = a1 + 16LL * (unsigned int)v6;
          v10 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v9 + 8);
          if ( v10 > v5 )
            v5 = v10;
          v11 = v6;
          v12 = v6 + 1;
          if ( v10 <= v8 )
            v11 = v4;
          v4 = v11;
          if ( v12 < 4 )
          {
            v13 = (_BYTE *)(v12 + a1 + 72);
            while ( !*v13
                 || !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v9 + 8,
                                        16LL * v12 + a1 + 8) )
            {
              ++v12;
              ++v13;
              if ( v12 >= 4 )
                goto LABEL_23;
            }
            CMergedRectBase<4>::MergeExisting(a1, (unsigned int)v6, v12);
            v7 = 1;
          }
        }
LABEL_23:
        result = (unsigned int)(v6 + 1);
        v6 = 0LL;
        if ( !v7 )
          v6 = (unsigned int)result;
      }
      while ( (unsigned int)v6 < 4 );
    }
    else
    {
      if ( *(_DWORD *)(a1 + 80) != 1 )
        return result;
      result = a1 + 72;
      while ( !*(_BYTE *)result )
      {
        ++v4;
        ++result;
        if ( v4 >= 4 )
          return result;
      }
    }
    if ( v4 )
      return CMergedRectBase<4>::SwapExisting(a1, 0LL, v4);
  }
  return result;
}
