/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CA42C (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EBAC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC84 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18005D298 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180112DBE (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180112E80 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C091C (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801DF524 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801DF578 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801DFB78 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // r14d
  unsigned int v10; // ebx
  int v11; // ecx
  struct MilRectF *v12; // r8
  char v13; // r9
  const struct COcclusionContext *OcclusionContext; // r13
  struct CVisualTree *v15; // rcx
  __int64 v16; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  __int64 v18; // rcx
  char v19; // r12
  int v20; // edx
  int v21; // ecx
  int v22; // r9d
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  int v26; // xmm9_4
  int v27; // eax
  struct CVisualTree *v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  const struct FastRegion::Internal::CRgnData **v36; // rcx
  int v38; // eax
  __int64 v39; // rcx
  CDirectFlipInfo *v40; // rbx
  int DeviceTarget; // eax
  __int64 v42; // rcx
  char *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  char *v46; // rcx
  char *v47; // rcx
  int v48; // eax
  float v49; // xmm1_4
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  char v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+68h] [rbp-98h] BYREF
  float v56; // [rsp+6Ch] [rbp-94h]
  float v57; // [rsp+70h] [rbp-90h]
  float v58; // [rsp+74h] [rbp-8Ch]
  struct IDeviceTarget *v59[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v60; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h]
  __int128 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-50h]
  const struct FastRegion::Internal::CRgnData *v65; // [rsp+C0h] [rbp-40h] BYREF
  int v66; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0;
  v10 = 0;
  OcclusionContext = CDirtyRegion::GetOcclusionContext((CDirtyRegion *)a3);
  v54 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(
      v11,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v13);
    v12 = (struct MilRectF *)(a1 + 18164);
  }
  if ( OcclusionContext )
  {
    *((_DWORD *)OcclusionContext + 300) = 0x7FFFFFFF;
    v15 = *(struct CVisualTree **)(a1 + 160);
    v16 = *(_QWORD *)(a1 + 18440);
    v63 = *(_OWORD *)(a1 + 18424);
    v64 = v16;
    CDesktopTree::UpdateCVIRenderTargets(v15, (struct RenderTargetInfo *)&v63, v12);
  }
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(a1 + 192);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*(CDirectFlipInfo **)(a1 + 11360)) )
      return v10;
  }
  else
  {
    if ( EffectiveDirectFlipMode == 2 )
    {
      dword_1803D3144 |= 2u;
      return v10;
    }
    if ( EffectiveDirectFlipMode > 2 && EffectiveDirectFlipMode <= 4 )
    {
      v40 = *(CDirectFlipInfo **)(a1 + 11360);
      *((_DWORD *)OcclusionContext + 300) = CDirectFlipInfo::GetCutoffZ(v40, *(const struct CVisualTree **)(a1 + 96));
      v59[0] = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v59);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v40, v59);
      v10 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0LL, DeviceTarget, 0x2DFu);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((RenderTargetInfo *)(a1 + 18424)) )
        {
          v43 = (char *)v59[0] + *(int *)(*((_QWORD *)v59[0] + 1) + 12LL) + 8;
          v44 = (**(__int64 (__fastcall ***)(char *, int *))v43)(v43, &v55);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v44 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v59[0] + 40LL))(v59[0]);
        }
        v45 = CDrawingContext::PushRenderTarget(a2, v59[0]);
        v10 = v45;
        if ( v45 >= 0 )
        {
          v54 = 1;
          if ( v59[0] )
          {
            v46 = (char *)v59[0] + *(int *)(*((_QWORD *)v59[0] + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v46 + 16LL))(v46);
          }
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v45, 0x2E7u);
      }
      if ( v59[0] )
      {
        v47 = (char *)v59[0] + *(int *)(*((_QWORD *)v59[0] + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v47 + 16LL))(v47);
      }
      return v10;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a3 + 4424) )
  {
    if ( *(_BYTE *)(a1 + 11217) )
    {
LABEL_11:
      v19 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(a1 + 18412) )
    {
      v48 = *(_DWORD *)(a1 + 104);
      v55 = 0;
      v56 = 0.0;
      v49 = (float)*(int *)(a1 + 108);
      v57 = (float)v48;
      v58 = v49;
      v50 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v55, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v10 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0LL, v50, 0x2FEu);
        goto LABEL_24;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180377378);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( (v10 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, v10, 0x306u);
        goto LABEL_24;
      }
      CLegacyRenderTarget::NotifyRenderedRect(a1, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 11217) )
    goto LABEL_11;
  v19 = 1;
  if ( !*(_BYTE *)(a1 + 18414) )
    goto LABEL_11;
LABEL_12:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_22:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v18, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
    goto LABEL_24;
  }
  while ( 1 )
  {
    v66 = 0;
    v65 = (const struct FastRegion::Internal::CRgnData *)&v66;
    CDirtyRegion::GetOptimizedRect(
      (struct CComposition **)a3,
      (__int64)&v55,
      v8,
      a1 + 18164,
      (FastRegion::CRegion *)((unsigned __int64)&v65 & -(__int64)(*(_QWORD *)(a1 + 18600) != 0LL)),
      a1 + (*(_BYTE *)(a1 + 11217) != 0 ? 18344LL : 18208LL),
      v19,
      a5,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v55) )
      goto LABEL_21;
    v23 = v58;
    v24 = v57;
    v25 = v56;
    v26 = v55;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v21, v20, v8, v22, v55, SLOBYTE(v56), SLOBYTE(v57), SLOBYTE(v58));
    dword_1803D3158 += (int)(float)((float)(v24 - *(float *)&v26) * (float)(v23 - v25));
    v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
    v28 = *(struct CVisualTree **)(a1 + 96);
    v61 = 0;
    v62 = 0;
    *(_QWORD *)&v60 = __PAIR64__(LODWORD(v25), v26);
    *((_QWORD *)&v60 + 1) = __PAIR64__(LODWORD(v23), LODWORD(v24));
    v29 = CDrawingContext::DrawVisualTree(a2, v28, (__int64)&v60, OcclusionContext, v27, v19, 0LL);
    v10 = v29;
    if ( v29 < 0 )
      break;
    v32 = *(_BYTE *)(a1 + 11217) == 0;
    v33 = a1 + 18208;
    v60 = 0LL;
    *(_OWORD *)v59 = 0LL;
    if ( !v32 )
      v33 = a1 + 18344;
    CMILMatrix::Transform2DBoundsHelper<0>(v33, (__int64)&v55, (float *)v59, v31);
    v34 = PixelAlign(&v63, (__int64)v59);
    v35 = *(_QWORD *)(a1 + 176);
    v60 = *(_OWORD *)v34;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v35 + 16LL))(v35, &v60);
    v36 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 18600);
    *(_BYTE *)(a1 + 18611) = 1;
    if ( v36 )
    {
      v53 = FastRegion::CRegion::Union(v36, &v65);
      if ( v53 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v53, retaddr);
    }
    if ( a6 )
    {
      v38 = CComposeTop::SubtractOverdraw(a6);
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0x33Au);
        goto LABEL_55;
      }
    }
LABEL_21:
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v65);
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x32Bu);
LABEL_55:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v65);
LABEL_24:
  if ( v54 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v10;
}
