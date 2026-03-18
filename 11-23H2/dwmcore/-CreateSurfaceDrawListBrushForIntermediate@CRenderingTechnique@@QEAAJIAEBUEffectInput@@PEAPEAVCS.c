/*
 * XREFs of ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800A9858
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x1800A94EC (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18007D9F8 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800A6914 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?InflateToHalf@@YAMM@Z @ 0x1800A9A18 (-InflateToHalf@@YAMM@Z.c)
 *     ?DeflateToHalf@@YAMM@Z @ 0x1800A9A58 (-DeflateToHalf@@YAMM@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801D2A34 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 */

__int64 __fastcall CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
        CRenderingTechnique *this,
        unsigned int a2,
        const struct EffectInput *a3,
        struct CSurfaceDrawListBrush **a4)
{
  __int64 v6; // rdx
  char v7; // al
  char v8; // r8
  char v9; // si
  int v10; // edi
  CSurfaceDrawListBrush *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  struct CSurfaceDrawListBrush *v22; // rax
  __int128 v24; // [rsp+28h] [rbp-29h] BYREF
  char v25; // [rsp+38h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v27; // [rsp+B8h] [rbp+67h] BYREF
  struct CSurfaceDrawListBrush *v28; // [rsp+C8h] [rbp+77h] BYREF

  v6 = 44LL * a2;
  v7 = *((_BYTE *)this + v6 + 92);
  v8 = *((_BYTE *)this + v6 + 93);
  if ( !v7 )
  {
    v7 = 1;
    v8 = 1;
  }
  v9 = *((_BYTE *)a3 + 100);
  v28 = 0LL;
  v24 = (unsigned __int64)&v28;
  BYTE2(v27) = v8;
  v25 = 1;
  LOBYTE(v27) = v9;
  BYTE1(v27) = v7;
  v10 = CSurfaceDrawListBrush::CreateWithTextureTransform(a3, (__int16 *)&v27, (_DWORD *)a3 + 12, (_QWORD *)&v24 + 1);
  if ( v25 )
  {
    v11 = *(CSurfaceDrawListBrush **)v24;
    *(_QWORD *)v24 = *((_QWORD *)&v24 + 1);
    if ( v11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)(unsigned int)v10,
      v24);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v28);
    return (unsigned int)v10;
  }
  else
  {
    if ( v9 )
    {
      v12 = *((float *)a3 + 21);
      v13 = InflateToHalf(v12);
      v14 = DeflateToHalf(*((float *)a3 + 23));
      v15 = v14;
      if ( v12 > v14 )
        v13 = v14;
      v16 = *((float *)a3 + 22);
      v17 = InflateToHalf(v16);
      v18 = DeflateToHalf(*((float *)a3 + 24));
      v19 = v18;
      if ( v16 > v18 )
        v17 = v18;
    }
    else
    {
      v24 = *(_OWORD *)((char *)a3 + 84);
      v19 = *((float *)&v24 + 3);
      v15 = *((float *)&v24 + 2);
      v17 = *((float *)&v24 + 1);
      v13 = *(float *)&v24;
    }
    CDrawListBitmap::GetSize(a3, &v27);
    v20 = (float)(int)v27;
    v21 = (float)SHIDWORD(v27);
    v22 = v28;
    *((_BYTE *)v28 + 145) = 0;
    *((float *)&v24 + 1) = v17 / v21;
    *((float *)&v24 + 3) = v19 / v21;
    *(float *)&v24 = v13 / v20;
    *((float *)&v24 + 2) = v15 / v20;
    *(_OWORD *)((char *)v22 + 120) = v24;
    *((_BYTE *)v28 + 146) = 1;
    *a4 = v28;
    return 0LL;
  }
}
