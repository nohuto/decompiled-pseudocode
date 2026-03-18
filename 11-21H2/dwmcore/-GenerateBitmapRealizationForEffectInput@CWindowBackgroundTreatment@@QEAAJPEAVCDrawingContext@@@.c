/*
 * XREFs of ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x18000A5F4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180054EB8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x180055710 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800D530C (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800E109C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTransparentBlackEffectInput@CDrawingContext@@QEBA?AUEffectInput@@AEBUD2D_SIZE_F@@@Z @ 0x1801B2C3C (-GetTransparentBlackEffectInput@CDrawingContext@@QEBA-AUEffectInput@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  int v2; // esi
  float v4; // xmm0_4
  float v5; // xmm1_4
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rax
  const struct CVisualTreePath *v10; // r15
  CVisual *v11; // r13
  const char **DebugString; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v18; // r15
  __int64 v19; // rcx
  __int64 EffectInput; // rax
  int v21; // ebx
  int v22; // r12d
  char v23; // r12
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // ecx
  char *v31; // rcx
  __int64 v32; // xmm1_8
  int v33; // r14d
  __int64 v35; // xmm1_8
  const char **v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // [rsp+30h] [rbp-D0h]
  void *v44; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v46[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v47[8]; // [rsp+50h] [rbp-B0h] BYREF
  const struct CVisualTreePath *v48; // [rsp+58h] [rbp-A8h]
  __int128 v49; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  char v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  char v53[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v54[104]; // [rsp+E8h] [rbp-18h] BYREF
  char v55[8]; // [rsp+150h] [rbp+50h] BYREF
  char v56[104]; // [rsp+158h] [rbp+58h] BYREF

  v2 = 0;
  v4 = *((float *)this + 24) - *((float *)this + 22);
  v5 = *((float *)this + 25) - *((float *)this + 23);
  v45 = 0LL;
  v7 = 0;
  *(float *)v46 = v4;
  *(float *)&v46[1] = v5;
  CWindowBackgroundTreatment::InvalidateBitmapRealization(this);
  v51 = 0;
  v50 = 0LL;
  v52 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v50);
  v8 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 39) = &v50;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 20LL) )
  {
    v35 = *((_QWORD *)this + 13);
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
    *((_QWORD *)this + 19) = v35;
    goto LABEL_28;
  }
  v7 = *((_BYTE *)this + 303);
  v43 = v7;
  if ( *((_QWORD *)this + 38) )
  {
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    v10 = (const struct CVisualTreePath *)*((_QWORD *)a2 + 994);
    v48 = v10;
    v11 = (CVisual *)v9;
    DebugString = (const char **)CVisualTreePath::GetDebugString(v10, &v44);
    v13 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v47, "bviPath=[%s]", *DebugString);
    v14 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v49, "WindowBackgroundTreatment-ValidateBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v14, v11, v13);
    if ( v44 )
      DefaultHeap::Free(v44);
    v49 = *(_OWORD *)((char *)this + 88);
    v15 = CDrawingContext::ValidateBVIEffectInputForRender(a2, &v49, 0LL);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB8u, 0LL);
LABEL_27:
      v7 = v43;
      goto LABEL_28;
    }
    BackdropVisualImage = CVisual::GetBackdropVisualImage(v11, v10);
    v18 = BackdropVisualImage;
    if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
    {
      EffectInput = CBackdropVisualImage::GenerateEffectInput(v19, v55);
      v21 = 0;
      v22 = 1;
    }
    else
    {
      *(float *)&v44 = *((float *)&v49 + 2) - *(float *)&v49;
      *((float *)&v44 + 1) = *((float *)&v49 + 3) - *((float *)&v49 + 1);
      EffectInput = CDrawingContext::GetTransparentBlackEffectInput(a2, v53, &v44);
      v22 = 0;
      v21 = 2;
    }
    EffectInput::operator=(&v50, EffectInput);
    if ( v21 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v54);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v53);
    }
    if ( v22 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v56);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v55);
    }
    if ( dword_1803D0F60 )
    {
      if ( v18 )
      {
        if ( !CBackdropVisualImage::CanUseAsEffectInput(v18) )
        {
          v39 = DwmDbg::DbgString::DbgString(
                  (DwmDbg::DbgString *)&v49,
                  "CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput");
          v40 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v47, "BVI-FallbackToTransparentBlack");
          CBackdropVisualImage::LogEtwEvent(v18, v40, v39);
        }
      }
      else
      {
        v36 = (const char **)CVisualTreePath::GetDebugString(v48, &v44);
        v37 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v49, "bviPath=[%s]", *v36);
        v38 = DwmDbg::DbgString::DbgString(
                (DwmDbg::DbgString *)v47,
                "WindowBackgroundTreatment-FallbackToTransparentBlack-NoBVI");
        DwmDbg::Backdrops::LogBrushEtwEvent(v38, v11, v37);
        if ( v44 )
          DefaultHeap::Free(v44);
      }
    }
    v7 = v43;
    v23 = 1;
  }
  else
  {
    v23 = 0;
  }
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v45);
  v24 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
  DWORD2(v49) = 31;
  *(_QWORD *)&v49 = "DWM Window Background Treatment";
  if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, &v49, v46, *(unsigned int *)(v24 + 8), 4, &v45) >= 0 )
  {
    v25 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v27 = v45;
    v2 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xE8u, 0LL);
    }
    else
    {
      v28 = *((_QWORD *)this + 9) + 64LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 9) + 64LL) + 8LL);
      v29 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, _DWORD *, _QWORD))(*(_QWORD *)v28 + 16LL))(
              v28,
              a2,
              v46,
              0LL);
      v2 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xEDu, 0LL);
      }
      else
      {
        if ( g_LockAndReadWindowBackdropTexture )
        {
          v41 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 64LL))(v27);
          v42 = *(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v42 + 24LL))(
            v42,
            ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
        }
        v31 = (char *)v27 + *(int *)(v27[1] + 8LL) + 8;
        (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v31 + 40LL))(
          v31,
          -(__int64)(this != 0LL) & ((unsigned __int64)this + 64));
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((char *)this + 80, v27);
        v32 = *((_QWORD *)this + 13);
        *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
        *((_QWORD *)this + 19) = v32;
        if ( v23
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 991) + 184LL))(*((_QWORD *)a2 + 991)) )
        {
          *((_BYTE *)this + 301) = 1;
        }
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    v33 = CDrawingContext::PopLayer(a2);
    if ( v2 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v27 + 24LL))(v27, DisplayId::None);
      if ( v33 < 0 )
        v2 = v33;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( CWindowBackgroundTreatment::HasValidSource(this) && v7 )
    *((_QWORD *)this + 40) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  *((_QWORD *)this + 39) = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v50 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v50);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v45);
  return (unsigned int)v2;
}
