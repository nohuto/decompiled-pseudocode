/*
 * XREFs of ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008E2B4
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18007E198 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002FB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800358AC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180080D68 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x18008F954 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCpuClippingData::ShouldRealizeCpuClipOnGpu(const struct CShape *a1, const struct CMILMatrix *a2)
{
  __int64 v4; // rax
  double v5; // xmm0_8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !CShape::IsAxisAlignedRectangle(a1) )
    return 0;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving(a2) )
    return 0;
  v4 = *(_QWORD *)a1;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v4 + 48))(a1, &v7, a2) < 0
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v7) )
  {
    return 0;
  }
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v7);
  return *(float *)&v5 >= (float)CCommonRegistryData::CpuClipAreaThreshold;
}
