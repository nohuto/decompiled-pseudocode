/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E8C24
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E84C4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014E3C (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C298 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18003F8D0 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800411BC (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x180045144 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004516C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180045434 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18006C304 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800742C8 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180075778 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18007E130 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180080628 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A13C4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800AD554 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DFC1C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18012DBFE (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1801309AA (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180130A6C (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801311FA (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E8038 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801F6CA4 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801F6CF8 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // r14d
  unsigned int v10; // ebx
  bool IsCurrent; // al
  __int64 v12; // rcx
  struct MilRectF *v13; // r8
  COcclusionContext *v14; // r13
  struct CVisualTree *v15; // rcx
  __int64 v16; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  __int64 v18; // rcx
  CDirectFlipInfo *v19; // rbx
  int DeviceTarget; // eax
  __int64 v21; // rcx
  char *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  float v27; // xmm1_4
  int v28; // eax
  __int64 v29; // rcx
  char v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r9
  float v33; // xmm6_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  unsigned int v38; // [rsp+28h] [rbp-A9h]
  char v39; // [rsp+58h] [rbp-79h]
  struct IDeviceTarget *v40; // [rsp+60h] [rbp-71h] BYREF
  _QWORD *v41; // [rsp+68h] [rbp-69h]
  __int64 v42; // [rsp+70h] [rbp-61h]
  __int64 v43; // [rsp+78h] [rbp-59h] BYREF
  float v44; // [rsp+80h] [rbp-51h]
  float v45; // [rsp+84h] [rbp-4Dh]
  __int128 v46; // [rsp+88h] [rbp-49h] BYREF
  __int64 v47; // [rsp+98h] [rbp-39h]

  v41 = a5;
  v8 = 0;
  v42 = a6;
  v10 = 0;
  IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a3 + 16));
  v39 = 0;
  v14 = (COcclusionContext *)(v12 & -(__int64)IsCurrent);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(v12, (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start);
    v13 = (struct MilRectF *)(a1 + 18164);
  }
  if ( v14 )
  {
    *((_DWORD *)v14 + 300) = 0x7FFFFFFF;
    v15 = *(struct CVisualTree **)(a1 + 176);
    v16 = *(_QWORD *)(a1 + 18460);
    v46 = *(_OWORD *)(a1 + 18444);
    v47 = v16;
    CDesktopTree::UpdateCVIRenderTargets(v15, (struct RenderTargetInfo *)&v46, v13);
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
      dword_1803E59F4 |= 2u;
      return v10;
    }
    v18 = (unsigned int)(EffectiveDirectFlipMode - 3);
    if ( (unsigned int)v18 <= 1 )
    {
      v19 = *(CDirectFlipInfo **)(a1 + 11360);
      *((_DWORD *)v14 + 300) = CDirectFlipInfo::GetCutoffZ(v19, *(const struct CVisualTree **)(a1 + 96));
      v40 = 0LL;
      wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)&v40);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v19, &v40);
      v10 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, DeviceTarget, 0x2CFu, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((RenderTargetInfo *)(a1 + 18444)) )
        {
          v22 = (char *)v40 + *(int *)(*((_QWORD *)v40 + 1) + 12LL) + 8;
          v23 = (**(__int64 (__fastcall ***)(char *, __int64 *))v22)(v22, &v43);
          if ( IsDXGIColorSpaceHDR(*(_DWORD *)(v23 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v40 + 40LL))(v40);
        }
        v24 = CDrawingContext::PushRenderTarget(a2, v40);
        v10 = v24;
        if ( v24 >= 0 )
        {
          v39 = 1;
          wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v40);
          goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x2D7u, 0LL);
      }
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v40);
      return v10;
    }
  }
LABEL_19:
  if ( *(_BYTE *)(a3 + 4420) )
  {
    if ( *(_BYTE *)(a1 + 11217) )
    {
LABEL_27:
      v30 = 0;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a1 + 18412) )
    {
      v26 = *(_DWORD *)(a1 + 104);
      v43 = 0LL;
      v27 = (float)*(int *)(a1 + 108);
      v44 = (float)v26;
      v45 = v27;
      v28 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v43, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v10 = v28;
      if ( v28 < 0 )
      {
        v38 = 751;
        goto LABEL_43;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180386510);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( (v10 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v10, 0x2F7u, 0LL);
        goto LABEL_38;
      }
      CDDisplayRenderTarget::NotifyRenderedRect(a1, 0LL, 0);
    }
  }
  if ( *(_BYTE *)(a1 + 11217) )
    goto LABEL_27;
  v30 = 1;
  if ( !*(_BYTE *)(a1 + 18414) )
    goto LABEL_27;
LABEL_28:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_36:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v18, (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop);
    goto LABEL_38;
  }
  while ( 1 )
  {
    CDirtyRegion::GetOptimizedRect(
      a3,
      &v43,
      v8,
      a1 + 18164,
      0LL,
      (CMILMatrix *)(a1 + (*(_BYTE *)(a1 + 11217) != 0 ? 18344LL : 18208LL)),
      v30,
      v41,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v43) )
      goto LABEL_35;
    v33 = v45;
    v34 = v44;
    v35 = *((float *)&v43 + 1);
    LODWORD(v36) = v43;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v18, v31, v8, v32, v43, SBYTE4(v43), SLOBYTE(v44), SLOBYTE(v45));
    v47 = 0LL;
    *(_QWORD *)&v46 = __PAIR64__(LODWORD(v35), LODWORD(v36));
    *((_QWORD *)&v46 + 1) = __PAIR64__(LODWORD(v33), LODWORD(v34));
    dword_1803E5A08 += (int)(float)((float)(v34 - v36) * (float)(v33 - v35));
    v28 = CDrawingContext::DrawVisualTree(
            a2,
            *(struct CVisualTree **)(a1 + 96),
            (__int64)&v46,
            v14,
            *(_BYTE *)(a1 + 140) != 0 ? 2 : 0,
            v30,
            0LL);
    v10 = v28;
    if ( v28 < 0 )
      break;
    CDDisplayRenderTarget::NotifyRenderedRect(a1, (struct MilRectF *)&v43, 0);
    if ( v42 )
    {
      v28 = CComposeTop::SubtractOverdraw(v42);
      v10 = v28;
      if ( v28 < 0 )
      {
        v38 = 813;
        goto LABEL_43;
      }
    }
LABEL_35:
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_36;
  }
  v38 = 803;
LABEL_43:
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v28, v38, 0LL);
LABEL_38:
  if ( v39 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v10;
}
