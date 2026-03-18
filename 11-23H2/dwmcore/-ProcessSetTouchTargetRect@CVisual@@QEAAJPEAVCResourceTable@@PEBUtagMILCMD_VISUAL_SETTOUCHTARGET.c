/*
 * XREFs of ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x180097530
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800975F8 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800977E0 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180097B04 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F34A8 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::ProcessSetTouchTargetRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTOUCHTARGETRECT *a3)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF

  v4 = (float)*((int *)a3 + 3);
  *(float *)&v8 = (float)*((int *)a3 + 2);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 4));
  *((float *)&v8 + 1) = v4;
  v6 = (float)*((int *)a3 + 5);
  DWORD2(v8) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v8 + 3) = v6;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(&v8) )
    v8 = 0uLL;
  CVisual::GetTouchTargetBounds(this, &v9);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v9, &v8) )
  {
    v9 = v8;
    CVisual::SetTouchTargetBounds(this, &v9);
    CVisual::PropagateFlags((__int64)this, 1u);
  }
  return 0LL;
}
