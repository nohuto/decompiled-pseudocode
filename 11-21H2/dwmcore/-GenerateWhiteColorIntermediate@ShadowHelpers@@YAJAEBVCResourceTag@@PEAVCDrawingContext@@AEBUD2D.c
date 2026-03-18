/*
 * XREFs of ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9CA0
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180201E44 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FD9C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180010070 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GenerateWhiteColorIntermediate(
        ShadowHelpers *this,
        const struct CResourceTag *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct IBitmapRealization *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct D2D_SIZE_F v12; // rax
  __int64 (__fastcall *v13)(const struct D2D_SIZE_F *, __int64, __int64 *, _QWORD); // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int CachedEffectNoRef; // eax
  __int64 v19; // rcx
  struct ID2D1Effect *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // [rsp+20h] [rbp-71h]
  __int64 v32; // [rsp+30h] [rbp-61h] BYREF
  struct ID2D1Effect *v33; // [rsp+38h] [rbp-59h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-51h] BYREF
  _OWORD v35[3]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v36; // [rsp+80h] [rbp-11h]
  int v37; // [rsp+88h] [rbp-9h]
  __m128i si128; // [rsp+8Ch] [rbp-5h]
  int v39; // [rsp+9Ch] [rbp+Bh]

  v34[0] = 0LL;
  memset(v35, 0, sizeof(v35));
  v36 = 0LL;
  v37 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v39 = 0;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v34);
  LODWORD(v31) = 4;
  v9 = CDrawingContext::PushOffScreenRenderingLayer(a2, (__int64)this, (float *)a3, DisplayId::None, v31, (__int64)v34);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x173u);
  }
  else
  {
    v12 = *a4;
    v32 = 0LL;
    v13 = *(__int64 (__fastcall **)(const struct D2D_SIZE_F *, __int64, __int64 *, _QWORD))(*(_QWORD *)&v12 + 56LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v32);
    v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
    v15 = v13(a4, v14, &v32, 0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x17Du);
    }
    else
    {
      v17 = *((_QWORD *)a2 + 5);
      v33 = 0LL;
      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(v17 + 16, 0, &v33);
      v11 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, CachedEffectNoRef, 0x181u);
      }
      else
      {
        v20 = v33;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v33 + 112LL))(
          v33,
          0LL,
          v32,
          1LL);
        LODWORD(v33) = 1;
        v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v20 + 72LL))(
                v20,
                1LL,
                0LL,
                &v33,
                4);
        v11 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x18Au);
        }
        else
        {
          v23 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v20 + 72LL))(
                  v20,
                  0LL,
                  0LL,
                  v35,
                  80);
          v11 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x18Du);
          }
          else
          {
            LODWORD(v33) = 1;
            v25 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v20 + 72LL))(
                    v20,
                    2LL,
                    0LL,
                    &v33,
                    4);
            v11 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x190u);
            }
            else
            {
              v27 = CDrawingContext::FillEffect(a2, v20, 0LL, 0LL, 1);
              v11 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x195u);
              }
              else
              {
                v29 = v34[0];
                v34[0] = 0LL;
                *(_QWORD *)a5 = v29;
              }
            }
          }
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(
          v20,
          0LL,
          0LL,
          1LL);
      }
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v32);
    CDrawingContext::PopLayer(a2);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v34);
  return v11;
}
