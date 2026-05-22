/*
 * XREFs of ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88
 * Callers:
 *     ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4 (-InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilR.c)
 *     ?SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800FD004 (-SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ??$ComputeTransformedRectBounds@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x18003BEF8 (--$ComputeTransformedRectBounds@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C054 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003C15C (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::Invalidate(
        DirectComposition::CPrimitiveGroup *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  if ( !a3 || !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3) )
  {
    v6 = 0LL;
    if ( v3 )
    {
      v6 = *(_OWORD *)DirectComposition::ComputeTransformedRectBounds<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                        v7,
                        v3,
                        a2 + 72);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v6, v5);
    }
    else
    {
      v6 = *(_OWORD *)(a2 + 184);
    }
    (*(void (__fastcall **)(char *, __int128 *))(*((_QWORD *)this + 38) + 16LL))((char *)this + 304, &v6);
    DirectComposition::CPrimitiveGroup::InvalidateRealization(this);
  }
}
