/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18003CA54
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18003CFC8 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E3B8 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x18003B958 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18003CD8C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180052C34 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800F7F34 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  unsigned int v1; // edi
  __int64 v3; // r14
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int128 *, char *); // rbx
  struct IDeviceTarget *v9; // rax
  CDrawingContext *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  struct CVisualTree *v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  CComposeTop *v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  CComposition *v19; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct CDrawingContext *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+90h] [rbp-70h]
  _OWORD v31[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+E0h] [rbp-20h]
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h] BYREF
  __int128 *v35; // [rsp+108h] [rbp+8h]
  __int128 v36; // [rsp+110h] [rbp+10h] BYREF
  int v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+124h] [rbp+24h]

  v1 = 0;
  v25[0] = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  v26 = _xmm;
  v28 = _xmm;
  v27 = _xmm;
  v33 = 0LL;
  LOBYTE(v30) = 85;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 409));
  v29 = _xmm;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 410));
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  BYTE1(v30) = BYTE1(v30) & 0xC0 | 0x17;
  LODWORD(v35) = _mm_cvtepi32_ps(v4).m128_u32[0];
  HIDWORD(v35) = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v6[8] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v6 + 184LL))(v6) )
      v3 = *((_QWORD *)this + 6);
    CComposition::ShowHideCursors(g_pComposition, 0);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 406) - 1.0) & _xmm) >= 0.0000011920929 )
      CMILMatrix::Scale((CMILMatrix *)&v26, *((float *)this + 406), *((float *)this + 406), 1.0);
    CMILMatrix::Translate(
      (CMILMatrix *)&v26,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 407)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 408)) ^ _xmm));
    CDrawingContext::Create(v25);
    *((_BYTE *)g_pComposition + 1274) = 1;
    v31[0] = v26;
    v31[1] = v27;
    v31[2] = v28;
    v31[3] = v29;
    v32 = v30;
    if ( CMILMatrix::Invert((CMILMatrix *)v31) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v31, &v34, &v33);
      v7 = *((_QWORD *)this + 6);
      v34 = 1LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v7 + 192LL);
      v35 = &v33;
      gsl::span<float const,-1>::span<float const,-1>(&v36, &v34);
      v8(v7, &v36, (char *)this + 72);
    }
    else
    {
      v33 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v9 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    v10 = v25[0];
    v11 = CDrawingContext::BeginFrame(v25[0], v9, (const struct CMILMatrix *)&v26, &stru_1802D2718, 0LL);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x19Eu, 0LL);
    }
    else
    {
      ++dword_1803D3148;
      v13 = (struct CVisualTree *)*((_QWORD *)this + 6);
      v37 = 0;
      v38 = 0;
      v36 = v33;
      v14 = CDrawingContext::DrawVisualTree(v10, v13, 2, 0, 0LL);
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A7u, 0LL);
      }
      else
      {
        if ( !v3
          || (v16 = *(CComposeTop **)(v3 + 4744)) == 0LL
          || (v21 = CComposeTop::FullRender(v16, (__int64)v10, (__int64)&v26), v1 = v21, v21 >= 0) )
        {
          v17 = CDrawingContext::EndFrame(v10);
          v1 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1BAu, 0LL);
          }
          else if ( g_LockAndReadOffscreenTarget )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
            v24 = *(int *)(*(_QWORD *)(v23 + 8) + 16LL) + v23 + 8;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 24LL))(
              v24,
              ((unsigned __int64)v10 + 24) & -(__int64)(v10 != 0LL));
          }
          goto LABEL_15;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1B5u, 0LL);
      }
      CDrawingContext::EndFrame(v10);
    }
LABEL_15:
    v19 = g_pComposition;
    *((_BYTE *)g_pComposition + 1274) = 0;
    CComposition::RestoreCursors(v19);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v25);
  return v1;
}
