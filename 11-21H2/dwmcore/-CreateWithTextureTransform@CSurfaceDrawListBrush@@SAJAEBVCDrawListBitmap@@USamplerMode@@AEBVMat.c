/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18000BE80 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003EEB0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180055AA0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800879D0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180209E10 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18023A940 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180243EF0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1802ACC78 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180088DD8 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18008BAA0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(
        struct CSurfaceDrawListBrush *a1,
        __int16 *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned int v8; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v10; // rbx
  int v11; // r9d
  __int16 v12; // r12
  char v13; // r15
  __int64 v14; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v8 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    v12 = *a2;
    v13 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v10 + 8) = *(_OWORD *)&_xmm;
    v10[52] = 0;
    *(_QWORD *)v10 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v14 = *(_QWORD *)a1;
    *((_QWORD *)v10 + 7) = *(_QWORD *)a1;
    if ( v14 )
    {
      v16 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      v10 + 64,
      *((_QWORD *)a1 + 1));
    v10[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v10 + 40) = v12;
    v10[82] = v13;
    *((_DWORD *)v10 + 21) = *a3;
    *((_DWORD *)v10 + 22) = a3[1];
    *((_DWORD *)v10 + 23) = a3[2];
    *((_DWORD *)v10 + 24) = a3[3];
    *((_DWORD *)v10 + 25) = a3[4];
    *((_DWORD *)v10 + 26) = a3[5];
    *((_DWORD *)v10 + 27) = a3[6];
    *((_DWORD *)v10 + 28) = a3[7];
    *((_DWORD *)v10 + 29) = a3[8];
    *((_DWORD *)v10 + 36) = 256;
    v10[148] = 0;
    *(_OWORD *)(v10 + 120) = _xmm;
    *a4 = v10;
  }
  else
  {
    *a4 = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2147024882, 0x3Au);
  }
  return v8;
}
