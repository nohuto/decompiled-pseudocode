/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180232D48
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802334E4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800DBF38 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCComponentTransform2D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComponentTransform2D@@@Z @ 0x180232954 (--4-$com_ptr_t@VCComponentTransform2D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompone.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x180232ECC (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180240684 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CSurfaceBrush *a3)
{
  __m128 v4; // xmm6
  struct D2D_MATRIX_3X2_F *v6; // r9
  CComponentTransform2D *v7; // rax
  __int64 v8; // rcx
  struct CComponentTransform2D *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-60h]
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-50h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v17; // [rsp+50h] [rbp-30h] BYREF

  v4 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 152));
  CProjectedShadow::CalculateBounds(this, &v16, a3, *((_QWORD *)a2 + 991));
  LODWORD(v15.left) = v4.m128_i32[0];
  LODWORD(v15.top) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  LODWORD(v15.right) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  LODWORD(v15.bottom) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  D2DMatrixHelper::ComputeRectangleTransform(&v15, &v16, &v17, v6);
  *(_QWORD *)&v16.left = 0LL;
  v7 = (CComponentTransform2D *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v7 )
    v7 = CComponentTransform2D::CComponentTransform2D(v7, this[2]);
  wil::com_ptr_t<CComponentTransform2D,wil::err_returncode_policy>::operator=((__int64 *)&v16, (__int64)v7);
  v9 = *(struct CComponentTransform2D **)&v16.left;
  if ( *(_QWORD *)&v16.left )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, void *, struct D2D_RECT_F *))xmmword_1803D0018)(
            *(_QWORD *)&v16.left + SDWORD2(xmmword_1803D0018),
            &CComponentTransform2D::sc_TransformMatrix,
            &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 1240;
    }
    else
    {
      v11 = CSurfaceBrush::SetTransform(a3, v9);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v14 = 1242;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, v14);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024882, 0x4D6u);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v10;
}
