/*
 * XREFs of ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x1800AA02C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18007AD18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180072078 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18007A870 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18007B588 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1800A9F54 (-GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD694 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CBackdropVisualImage::GenerateEffectInput(__int64 a1, __int64 a2)
{
  struct IBitmapResource *v2; // rsi
  float *v5; // rax
  float *v6; // rax
  CDrawListBitmap *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  float v10[12]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 48) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  *(_BYTE *)(a2 + 44) = 1;
  CBackdropVisualImage::GetViewBoxToUVTransform(a1, (D2D1::Matrix3x2F *)&v9);
  v6 = Matrix3x3::operator*((float *)(a1 + 1916), v10, v5);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 64) = *((_OWORD *)v6 + 1);
  *(float *)(a2 + 80) = v6[8];
  v9 = *(_OWORD *)(a1 + 1848);
  *(_OWORD *)(a2 + 84) = v9;
  if ( a1 )
    v2 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(a1 + 64) + 8LL) + a1 + 64);
  v7 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v9, v2);
  CDrawListBitmap::operator=(a2, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
  *(_DWORD *)(a2 + 40) |= 0x800u;
  result = a2;
  *(_WORD *)(a2 + 100) = 257;
  *(_BYTE *)(a2 + 102) = 1;
  return result;
}
