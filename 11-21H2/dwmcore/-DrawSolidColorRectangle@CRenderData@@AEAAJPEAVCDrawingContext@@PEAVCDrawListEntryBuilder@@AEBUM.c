/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005BB20
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x18005BCC8 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const struct MilRectF *a4,
        const struct _D3DCOLORVALUE *a5)
{
  struct _D3DCOLORVALUE v8; // xmm0
  int v9; // eax
  __m128 v10; // xmm2
  __int128 v11; // xmm0
  CGeometryOnlyDrawListBrush *v12; // rcx
  int v13; // ebx
  CGeometryOnlyDrawListBrush *v14; // rax
  __int128 v15; // xmm0
  CGeometryOnlyDrawListBrush *v16; // rax
  __int64 v17; // rcx
  int DrawList; // eax
  unsigned int v19; // ecx
  CGeometryOnlyDrawListBrush *v21; // [rsp+38h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v22; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v23[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+B4h] [rbp-54h]
  char v26; // [rsp+B8h] [rbp-50h]
  struct _D3DCOLORVALUE v27; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v28[20]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v29; // [rsp+ECh] [rbp-1Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v28, a2);
  v24 = 0;
  *(_OWORD *)&v23[1] = 0LL;
  v25 = 257;
  *(struct _D3DCOLORVALUE *)&v8.r = *(struct _D3DCOLORVALUE *)&a5->r;
  v9 = *((_DWORD *)a2 + 776);
  v26 = 0;
  *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v8.r;
  if ( v9 )
    v10 = (__m128)*(unsigned int *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = (__m128)(unsigned int)FLOAT_1_0;
  *(struct _D3DCOLORVALUE *)&v27.r = (struct _D3DCOLORVALUE)_mm_mul_ps(*(__m128 *)&v27.r, _mm_shuffle_ps(v10, v10, 0));
  v11 = *(_OWORD *)&Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v22, &v27)->r;
  v21 = 0LL;
  *(_QWORD *)&v22.b = 0LL;
  v29 = v11;
  *(_QWORD *)&v22.r = &v21;
  LOBYTE(v23[0]) = 1;
  v13 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v22.b);
  if ( LOBYTE(v23[0]) )
  {
    v12 = **(CGeometryOnlyDrawListBrush ***)&v22.r;
    **(_QWORD **)&v22.r = *(_QWORD *)&v22.b;
    if ( v12 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v12, 1);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v13, 0x3AAu, 0LL);
  }
  else
  {
    v14 = v21;
    v15 = *(_OWORD *)a4;
    *((_BYTE *)v21 + 52) = 1;
    *((_OWORD *)v14 + 2) = v15;
    *((_DWORD *)v14 + 12) = 50529027;
    v16 = v21;
    v21 = 0LL;
    *(_QWORD *)&v27.b = *((_QWORD *)&v15 + 1);
    *(_QWORD *)&v27.r = v16;
    CBrushDrawListGenerator::AttachInput(v28, 0LL, &v27);
    if ( *(_QWORD *)&v27.r )
      std::default_delete<CDrawListBrush>::operator()(v17, *(_QWORD *)&v27.r);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v28,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v23[1],
                 a3);
    v13 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DrawList, 0x3AEu, 0LL);
  }
  if ( v21 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v21, 1);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v28);
  return (unsigned int)v13;
}
