/*
 * XREFs of ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18008A11C
 * Callers:
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180011FDC (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008A298 (-HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008A2C4 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CScopedClipStack::GetTopGpuClipInScope(CScopedClipStack *a1, __int128 *a2, char a3)
{
  char result; // al
  __int64 v6; // rcx
  _OWORD *v7; // r10
  CScopedClipStack *v8; // r11
  __int64 v9; // r11
  __int64 v10; // r10
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  __int128 v17; // xmm0
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  result = CScopedClipStack::HasGpuClipsInScope(a1);
  if ( result )
  {
    result = CBaseClipStack::Top(v6 + 2064, v7);
  }
  else
  {
    if ( a2 )
      v17 = *a2;
    else
      v17 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *v7 = v17;
  }
  if ( a3 )
  {
    result = CScopedClipStack::HasClipBoundsInScope(v8);
    if ( result )
    {
      v18 = 0LL;
      result = CBaseClipStack::Top(v9 + 2096, &v18);
      v11 = *(float *)v10;
      v12 = *(float *)&v18;
      if ( *(float *)&v18 > *(float *)v10 )
      {
        *(_DWORD *)v10 = v18;
        v11 = v12;
      }
      if ( *((float *)&v18 + 1) > *(float *)(v10 + 4) )
        *(_DWORD *)(v10 + 4) = DWORD1(v18);
      v13 = *(float *)(v10 + 8);
      v14 = *((float *)&v18 + 2);
      if ( v13 > *((float *)&v18 + 2) )
      {
        *(_DWORD *)(v10 + 8) = DWORD2(v18);
        v13 = v14;
      }
      v15 = *(float *)(v10 + 12);
      v16 = *((float *)&v18 + 3);
      if ( v15 > *((float *)&v18 + 3) )
      {
        *(_DWORD *)(v10 + 12) = HIDWORD(v18);
        v15 = v16;
        v13 = *(float *)(v10 + 8);
      }
      if ( v13 <= v11 || v15 <= *(float *)(v10 + 4) )
      {
        *(_DWORD *)(v10 + 12) = 0;
        *(_DWORD *)(v10 + 8) = 0;
        *(_DWORD *)(v10 + 4) = 0;
        *(_DWORD *)v10 = 0;
      }
    }
  }
  return result;
}
