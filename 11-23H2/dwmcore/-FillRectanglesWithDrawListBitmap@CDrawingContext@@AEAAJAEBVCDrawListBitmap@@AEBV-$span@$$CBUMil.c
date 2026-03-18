/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180071D50
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000E084 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000E084.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180073D58 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180072078 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800721A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800726C0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180073290 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x1800A8DBC (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800A945C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800A9AA0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800DBD0C (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1801186D0 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        CDrawingContext *this,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 (__fastcall ***v8)(_QWORD, struct CThreadContext **); // rcx
  __int64 v9; // rax
  int v10; // xmm1_4
  _DWORD *v11; // r12
  unsigned int v12; // eax
  char v13; // di
  int Current; // eax
  struct CThreadContext *v15; // rcx
  char *v16; // rbx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  int v22; // ebx
  unsigned int v24; // ecx
  CGeometryOnlyDrawListBrush *v25; // rax
  CGeometryOnlyDrawListBrush *v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rcx
  CGeometryOnlyDrawListBrush *v31; // [rsp+38h] [rbp-79h] BYREF
  struct CThreadContext *v32; // [rsp+40h] [rbp-71h] BYREF
  __int16 v33; // [rsp+48h] [rbp-69h]
  _DWORD v34[9]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v35[36]; // [rsp+7Ch] [rbp-35h] BYREF
  struct CGeometryOnlyDrawListBrush *v36[2]; // [rsp+A0h] [rbp-11h] BYREF
  float v37; // [rsp+B0h] [rbp-1h]
  float v38; // [rsp+B4h] [rbp+3h]
  void *retaddr; // [rsp+110h] [rbp+5Fh]

  v5 = a2[1];
  if ( v5
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5)
    && *((_BYTE *)g_pComposition + 1274) )
  {
    v31 = 0LL;
    v36[0] = (struct CGeometryOnlyDrawListBrush *)&v31;
    LOBYTE(v37) = 1;
    v36[1] = 0LL;
    v22 = CGeometryOnlyDrawListBrush::Create(&v36[1]);
    if ( LOBYTE(v37) )
    {
      v24 = (unsigned int)v36[1];
      v25 = *(CGeometryOnlyDrawListBrush **)v36[0];
      *(_QWORD *)v36[0] = v36[1];
      if ( v25 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
    }
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v22, 0x353u, 0LL);
    }
    else
    {
      v26 = v31;
      *((_OWORD *)v31 + 2) = 0LL;
      *((_BYTE *)v26 + 52) = 1;
      *((_DWORD *)v26 + 12) = 0;
      *(_OWORD *)v36 = _xmm;
      v32 = v31;
      v31 = 0LL;
      v22 = CDrawingContext::FillRectanglesWithDrawListBrush(this);
      if ( v32 )
        std::default_delete<CDrawListBrush>::operator()();
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v22, 0x35Bu, 0LL);
      else
        *((_BYTE *)this + 8095) = 1;
    }
    if ( v31 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v31, 1u);
  }
  else
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, struct CThreadContext **))a2[1];
    v9 = 0LL;
    if ( v8 )
      v9 = *(_QWORD *)(**v8)(v8, &v32);
    HIDWORD(v36[0]) = 0;
    LODWORD(v36[1]) = 0;
    v34[2] = 0;
    v34[5] = 0;
    v34[8] = 1065353216;
    *(float *)v36 = 1.0 / (float)(int)v9;
    *((float *)&v36[1] + 1) = 1.0 / (float)SHIDWORD(v9);
    v34[1] = a4[1];
    v10 = a4[3];
    v37 = 0.0 - (float)(*(float *)v36 * 0.0);
    v34[4] = v10;
    v34[7] = a4[5];
    v38 = 0.0 - (float)(*((float *)&v36[1] + 1) * 0.0);
    v34[0] = *a4;
    v34[3] = a4[2];
    v34[6] = a4[4];
    v11 = (_DWORD *)Matrix3x3::operator*(v34, v35, v36);
    v12 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 83));
    v13 = InterpolationMode::FromD2D1InterpolationMode(v12);
    Current = CThreadContext::GetCurrent(&v32);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v15 = v32;
    v16 = 0LL;
    v17 = *((_DWORD *)v32 + 69);
    if ( v17 )
    {
      v16 = (char *)*((_QWORD *)v32 + 35);
      *((_QWORD *)v32 + 35) = *(_QWORD *)v16;
      *((_DWORD *)v15 + 69) = v17 - 1;
    }
    if ( v16 || (v16 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
    {
      *(_OWORD *)(v16 + 8) = *(_OWORD *)&_xmm;
      v16[52] = 0;
      *(_QWORD *)v16 = &CSurfaceDrawListBrush::`vftable';
      *((_QWORD *)v16 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v18 = *a2;
      LOBYTE(v33) = v13;
      HIBYTE(v33) = 1;
      *((_QWORD *)v16 + 7) = v18;
      if ( v18 )
      {
        v30 = v18 + 8 + *(int *)(*(_QWORD *)(v18 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      }
      v19 = a2[1];
      *((_QWORD *)v16 + 8) = v19;
      if ( v19 )
      {
        v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      }
      v16[72] = *((_BYTE *)a2 + 16);
      *((_WORD *)v16 + 40) = v33;
      v16[82] = 1;
      *((_DWORD *)v16 + 21) = *v11;
      *((_DWORD *)v16 + 22) = v11[1];
      *((_DWORD *)v16 + 23) = v11[2];
      *((_DWORD *)v16 + 24) = v11[3];
      *((_DWORD *)v16 + 25) = v11[4];
      *((_DWORD *)v16 + 26) = v11[5];
      *((_DWORD *)v16 + 27) = v11[6];
      *((_DWORD *)v16 + 28) = v11[7];
      *((_DWORD *)v16 + 29) = v11[8];
      *(_OWORD *)(v16 + 120) = _xmm;
      *((_DWORD *)v16 + 36) = 256;
      v16[148] = 0;
      v16[52] = 1;
      *((_DWORD *)v16 + 12) = 0;
      *((_OWORD *)v16 + 2) = 0LL;
      v36[0] = (struct CGeometryOnlyDrawListBrush *)0x3F8000003F800000LL;
      LODWORD(v36[1]) = 1065353216;
      HIDWORD(v36[1]) = CDrawingContext::GetOpacity(this);
      v32 = (struct CThreadContext *)v16;
      v22 = CDrawingContext::FillRectanglesWithDrawListBrush(this);
      if ( v32 )
        std::default_delete<CDrawListBrush>::operator()();
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v22, 0x34Au, 0LL);
    }
    else
    {
      v22 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024882, 0x3Au, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024882, 0x33Fu, 0LL);
    }
  }
  return (unsigned int)v22;
}
