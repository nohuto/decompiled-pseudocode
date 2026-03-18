/*
 * XREFs of ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801AF824
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8EC0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AB310 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180260414 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, _OWORD *a2, __int64 a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 result; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a3 = *a2;
  v14 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1);
  v13 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 368));
  result = CMILMatrix::Get2DBoundsUsing2DInverse(TopByReference, &v14, &v13);
  if ( (_BYTE)result )
  {
    v7 = *(float *)a3;
    v8 = *(float *)&v13;
    if ( *(float *)&v13 > *(float *)a3 )
    {
      *(_DWORD *)a3 = v13;
      v7 = v8;
    }
    if ( *((float *)&v13 + 1) > *(float *)(a3 + 4) )
      *(_DWORD *)(a3 + 4) = DWORD1(v13);
    v9 = *(float *)(a3 + 8);
    v10 = *((float *)&v13 + 2);
    if ( v9 > *((float *)&v13 + 2) )
    {
      *(_DWORD *)(a3 + 8) = DWORD2(v13);
      v9 = v10;
    }
    v11 = *(float *)(a3 + 12);
    v12 = *((float *)&v13 + 3);
    if ( v11 > *((float *)&v13 + 3) )
    {
      *(_DWORD *)(a3 + 12) = HIDWORD(v13);
      v11 = v12;
      v9 = *(float *)(a3 + 8);
    }
    if ( v9 <= v7 || v11 <= *(float *)(a3 + 4) )
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return result;
}
