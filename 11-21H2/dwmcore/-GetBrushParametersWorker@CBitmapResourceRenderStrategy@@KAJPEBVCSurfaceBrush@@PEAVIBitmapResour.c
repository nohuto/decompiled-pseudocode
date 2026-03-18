/*
 * XREFs of ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800567A4
 * Callers:
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180056710 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18005D490 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x18005692C (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResourceRenderStrategy::GetBrushParametersWorker(
        const struct CSurfaceBrush *a1,
        struct IBitmapResource *a2,
        struct CContent::LayoutData *a3,
        unsigned int a4,
        struct CBrushDrawListGenerator *a5)
{
  int v9; // edi
  int v10; // r12d
  CSurfaceDrawListBrush *v11; // rcx
  CSurfaceDrawListBrush *v12; // rax
  __int64 v13; // rcx
  CSurfaceDrawListBrush *v15; // rax
  unsigned __int64 v16; // xmm0_8
  char v17; // [rsp+30h] [rbp-50h] BYREF
  __int16 v18; // [rsp+31h] [rbp-4Fh]
  CSurfaceDrawListBrush *v19; // [rsp+40h] [rbp-40h] BYREF
  CSurfaceDrawListBrush *v20; // [rsp+48h] [rbp-38h] BYREF
  CSurfaceDrawListBrush **v21; // [rsp+50h] [rbp-30h]
  CSurfaceDrawListBrush *v22; // [rsp+58h] [rbp-28h] BYREF
  char v23; // [rsp+60h] [rbp-20h]
  _BYTE v24[8]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-10h] BYREF

  v9 = 0;
  CBrushDrawListGenerator::Reset(a5);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v24, a2);
  v10 = 0;
  if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v24) )
    v10 = 2;
  if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v24) && *(_BYTE *)(*((_QWORD *)a1 + 2) + 1274LL) )
  {
    *(_OWORD *)((char *)a5 + 20) = _xmm;
LABEL_14:
    *((_DWORD *)a5 + 4) = v10;
    goto LABEL_15;
  }
  v19 = 0LL;
  v21 = &v19;
  v22 = 0LL;
  v23 = 1;
  v17 = InterpolationMode::FromD2D1InterpolationMode(a4);
  v18 = 257;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(v24, &v17, (char *)a3 + 24, &v22);
  if ( v23 )
  {
    v11 = *v21;
    *v21 = v22;
    if ( v11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
  }
  if ( v9 >= 0 )
  {
    v12 = v19;
    *(_OWORD *)((char *)v19 + 8) = *(_OWORD *)a3;
    *((_QWORD *)v12 + 3) = *((_QWORD *)a3 + 2);
    if ( (*(unsigned __int8 (__fastcall **)(const struct CSurfaceBrush *))(*(_QWORD *)a1 + 304LL))(a1) )
    {
      v15 = v19;
      v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 6), (__m128)*((unsigned int *)a3 + 7)).m128_u64[0];
      *((_BYTE *)v19 + 148) = 1;
      *((_QWORD *)v15 + 17) = v16;
    }
    v20 = v19;
    v19 = 0LL;
    CBrushDrawListGenerator::AttachInput(a5, 0LL, &v20);
    if ( v20 )
      std::default_delete<CDrawListBrush>::operator()(v13, v20);
    if ( v19 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v9, 0x2C8u, 0LL);
  if ( v19 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v25);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v24);
  return (unsigned int)v9;
}
