/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EBAC
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x180017000 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??$?4U?$default_delete@VCShape@@@std@@$0A@@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062834 (--$-4U-$default_delete@VCShape@@@std@@$0A@@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E1E84 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1)
{
  int v1; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  struct CShape *v8; // rdx
  __int64 v9; // rdx
  struct CShape *v10; // [rsp+30h] [rbp-39h] BYREF
  struct CShape **v11; // [rsp+38h] [rbp-31h] BYREF
  struct CShape *v12; // [rsp+40h] [rbp-29h] BYREF
  char v13; // [rsp+48h] [rbp-21h]
  _QWORD v14[3]; // [rsp+50h] [rbp-19h] BYREF
  int v15; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v10 = 0LL;
    v14[1] = 0LL;
    v15 = 0;
    v16 = 0LL;
    v14[0] = &CRegionShape::`vftable';
    v14[2] = &v15;
    v4 = CMilRectLFromMilRectF(&v11);
    CRegionShape::BuildFromRects(v14, v4, 1LL);
    v5 = *(_QWORD *)(a1 + 160);
    v12 = 0LL;
    v11 = &v10;
    v13 = 1;
    v1 = CShape::Combine(v5, v6, v14, a1 + 92, 2, &v12);
    if ( v13 )
    {
      v7 = (unsigned int)v12;
      v8 = *v11;
      *v11 = v12;
      if ( v8 )
        std::default_delete<CShape>::operator()();
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v1, 0xA6u, 0LL);
    }
    else if ( ShapeBoundsEmpty(v10) )
    {
      v9 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = 0LL;
      if ( v9 )
        std::default_delete<CShape>::operator()();
    }
    else
    {
      std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>(a1 + 160, &v10);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v14);
    if ( v10 )
      std::default_delete<CShape>::operator()();
  }
  return (unsigned int)v1;
}
