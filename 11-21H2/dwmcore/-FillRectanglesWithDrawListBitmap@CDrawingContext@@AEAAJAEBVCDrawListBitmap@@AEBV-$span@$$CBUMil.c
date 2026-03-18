/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800B05F8
 * Callers:
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800B10C4 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x1801AFCE0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_1801AFCE0.c)
 * Callees:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x18005692C (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B0AC4 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B0AD8 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$out_param@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@Z @ 0x1801AF24C (--$out_param@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawList.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801AF414 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801AF44C (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        struct CDrawingContext *a1,
        CDrawListBitmap *this,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  CSurfaceDrawListBrush *v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, struct CThreadContext **); // rcx
  __int64 v14; // rax
  int v15; // xmm7_4
  int v16; // xmm1_4
  __int64 v17; // rax
  int v18; // ecx
  _DWORD *v19; // r14
  unsigned int v20; // edx
  int Current; // eax
  struct CThreadContext *v22; // rcx
  char *v23; // rbx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  CSurfaceDrawListBrush *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  CSurfaceDrawListBrush *v34; // [rsp+38h] [rbp-79h] BYREF
  struct CThreadContext *v35; // [rsp+40h] [rbp-71h] BYREF
  __int16 v36; // [rsp+48h] [rbp-69h]
  _DWORD v37[9]; // [rsp+4Ch] [rbp-65h] BYREF
  _BYTE v38[40]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v39; // [rsp+98h] [rbp-19h] BYREF
  float v40; // [rsp+A8h] [rbp-9h]
  float v41; // [rsp+ACh] [rbp-5h]
  void *retaddr; // [rsp+110h] [rbp+5Fh]

  if ( CDrawListBitmap::IsProtected(this) && *((_BYTE *)g_pComposition + 1274) )
  {
    v34 = 0LL;
    v8 = wil::out_param<std::unique_ptr<CGeometryOnlyDrawListBrush>>(&v39, &v34);
    v9 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)(v8 + 8));
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>(&v39);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x333u);
    }
    else
    {
      v11 = v34;
      *((_OWORD *)v34 + 2) = 0LL;
      *((_BYTE *)v11 + 52) = 1;
      *((_DWORD *)v11 + 12) = 0;
      v39 = _xmm;
      v35 = v34;
      v34 = 0LL;
      v9 = CDrawingContext::FillRectanglesWithDrawListBrush(a1, (__int64 **)&v35, a3, &v39);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v35);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v9, 0x33Bu);
      else
        *((_BYTE *)a1 + 7967) = 1;
    }
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&v34);
    return (unsigned int)v9;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, struct CThreadContext **))*((_QWORD *)this + 1);
  v14 = 0LL;
  if ( v13 )
    v14 = *(_QWORD *)(**v13)(v13, &v35);
  v15 = (int)FLOAT_1_0;
  *(_QWORD *)((char *)&v39 + 4) = 0LL;
  v37[2] = 0;
  v37[5] = 0;
  v34 = 0LL;
  v37[8] = 1065353216;
  *(float *)&v39 = 1.0 / (float)(int)v14;
  *((float *)&v39 + 3) = 1.0 / (float)SHIDWORD(v14);
  v40 = 0.0 - (float)(*(float *)&v39 * 0.0);
  v37[1] = a4[1];
  v37[4] = a4[3];
  v16 = a4[5];
  v41 = 0.0 - (float)(*((float *)&v39 + 3) * 0.0);
  v37[0] = *a4;
  v37[3] = a4[2];
  v37[6] = a4[4];
  v37[7] = v16;
  v17 = Matrix3x3::operator*(v37, v38, &v39);
  v18 = *((_DWORD *)a1 + 75);
  v19 = (_DWORD *)v17;
  v20 = 0;
  if ( v18 == 1 )
  {
    v20 = 1;
    goto LABEL_21;
  }
  if ( v18 > 1 )
  {
    if ( v18 <= 3 )
    {
      v20 = 2;
      goto LABEL_21;
    }
    switch ( v18 )
    {
      case 4:
        goto LABEL_17;
      case 5:
        v20 = 4;
        break;
      case 6:
LABEL_17:
        v20 = 3;
        break;
    }
  }
LABEL_21:
  LOBYTE(v36) = InterpolationMode::FromD2D1InterpolationMode(v20);
  HIBYTE(v36) = 1;
  Current = CThreadContext::GetCurrent(&v35);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v22 = v35;
  v23 = 0LL;
  v24 = *((_DWORD *)v35 + 57);
  if ( v24 )
  {
    v23 = (char *)*((_QWORD *)v35 + 29);
    *((_QWORD *)v35 + 29) = *(_QWORD *)v23;
    *((_DWORD *)v22 + 57) = v24 - 1;
  }
  if ( v23 || (v23 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    *(_OWORD *)(v23 + 8) = *(_OWORD *)&_xmm;
    v23[52] = 0;
    *(_QWORD *)v23 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v23 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v26 = *(_QWORD *)this;
    *((_QWORD *)v23 + 7) = *(_QWORD *)this;
    if ( v26 )
    {
      v27 = v26 + 8 + *(int *)(*(_QWORD *)(v26 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    }
    v28 = *((_QWORD *)this + 1);
    *((_QWORD *)v23 + 8) = v28;
    if ( v28 )
    {
      v29 = v28 + 8 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    }
    v23[72] = *((_BYTE *)this + 16);
    *((_WORD *)v23 + 40) = v36;
    v23[82] = 1;
    *((_DWORD *)v23 + 21) = *v19;
    *((_DWORD *)v23 + 22) = v19[1];
    *((_DWORD *)v23 + 23) = v19[2];
    *((_DWORD *)v23 + 24) = v19[3];
    *((_DWORD *)v23 + 25) = v19[4];
    *((_DWORD *)v23 + 26) = v19[5];
    *((_DWORD *)v23 + 27) = v19[6];
    *((_DWORD *)v23 + 28) = v19[7];
    *((_DWORD *)v23 + 29) = v19[8];
    *(_OWORD *)(v23 + 120) = _xmm;
    *((_DWORD *)v23 + 36) = 256;
    v23[148] = 0;
    v9 = 0;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024882, 0x3Au);
    v23 = 0LL;
  }
  v30 = v34;
  v34 = (CSurfaceDrawListBrush *)v23;
  if ( v30 )
  {
    CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
    v23 = (char *)v34;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0LL, v9, 0x31Fu);
  }
  else
  {
    v23[52] = 1;
    *((_OWORD *)v23 + 2) = 0LL;
    *((_DWORD *)v23 + 12) = 0;
    v31 = *((_DWORD *)a1 + 776);
    if ( v31 )
      v15 = *(_DWORD *)(*((_QWORD *)a1 + 390) + 4LL * (unsigned int)(v31 - 1));
    v35 = v34;
    HIDWORD(v39) = v15;
    *(_QWORD *)&v39 = 0x3F8000003F800000LL;
    DWORD2(v39) = 1065353216;
    v34 = 0LL;
    v9 = CDrawingContext::FillRectanglesWithDrawListBrush(a1, (__int64 **)&v35, a3, &v39);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v35);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v9, 0x32Au);
  }
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v34);
  return (unsigned int)v9;
}
