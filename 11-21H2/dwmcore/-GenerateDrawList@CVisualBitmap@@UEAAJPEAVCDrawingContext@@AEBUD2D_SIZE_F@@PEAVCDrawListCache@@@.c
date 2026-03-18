/*
 * XREFs of ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180208E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 */

__int64 __fastcall CVisualBitmap::GenerateDrawList(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  int v8; // eax
  CSurfaceDrawListBrush *v9; // rcx
  int v10; // ebx
  CSurfaceDrawListBrush *v11; // rax
  __int64 v12; // rcx
  int DrawList; // eax
  __int64 v14; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+31h] [rbp-CFh]
  CSurfaceDrawListBrush *v18; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v19; // [rsp+48h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush **v20; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  float v24; // [rsp+70h] [rbp-90h]
  float v25; // [rsp+74h] [rbp-8Ch]
  _BYTE v26[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+ECh] [rbp-14h]
  char v31; // [rsp+F0h] [rbp-10h]
  _BYTE v32[16]; // [rsp+100h] [rbp+0h] BYREF
  int v33; // [rsp+110h] [rbp+10h]
  _BYTE v34[4432]; // [rsp+150h] [rbp+50h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  v19 = 0LL;
  v7 = 0;
  v23 = 0LL;
  v8 = *((_DWORD *)a2 + 75);
  if ( v8 == 1 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  if ( v8 > 1 )
  {
    if ( v8 <= 3 )
    {
      v7 = 2;
      goto LABEL_11;
    }
    switch ( v8 )
    {
      case 4:
        goto LABEL_7;
      case 5:
        v7 = 4;
        break;
      case 6:
LABEL_7:
        v7 = 3;
        break;
    }
  }
LABEL_11:
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v32, a2);
  v29 = 0;
  v30 = 257;
  v28 = 0LL;
  v31 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v26,
    (struct IBitmapResource *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
  CDrawListBitmap::GetSize((CDrawListBitmap *)v26, &v18);
  v24 = (float)(int)v18;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v26, &v18);
  v21 = 0LL;
  v22 = 1;
  v20 = &v19;
  v25 = (float)SHIDWORD(v18);
  v16 = InterpolationMode::FromD2D1InterpolationMode(v7);
  v17 = 257;
  v10 = CSurfaceDrawListBrush::CreateWithContentRect(
          (CDrawListBitmap *)v26,
          (__int16 *)&v16,
          (float *)&v23,
          (__int64 *)&v21);
  if ( v22 )
  {
    v9 = *v20;
    *v20 = v21;
    if ( v9 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0LL, v10, 0xB6u);
  }
  else
  {
    v11 = v19;
    v19 = 0LL;
    v18 = v11;
    CBrushDrawListGenerator::AttachInput((__int64)v32, 0, &v18);
    if ( v18 )
      std::default_delete<CDrawListBrush>::operator()(v12, (__int64 (__fastcall ***)(_QWORD, __int64))v18);
    v33 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v32,
                 (__int64)&v28,
                 (struct CDrawListEntryBuilder *)v34);
    v10 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, DrawList, 0xBAu);
    }
    else
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v34);
      v10 = 0;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v26);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v32);
  if ( v19 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  return (unsigned int)v10;
}
