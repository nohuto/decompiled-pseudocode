/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x180044CB8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F1228 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014E3C (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C298 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18003167C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18003F8D0 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800411BC (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x180045144 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004516C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180045434 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18005A37C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18006C304 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800742C8 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180075778 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18007E130 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A13C4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800AD554 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DFC1C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18012DBFE (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1801309AA (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180130A6C (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801311FA (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E7504 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801F6CA4 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801F6CF8 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
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
  bool IsCurrent; // al
  __int64 v12; // rcx
  char v13; // r9
  COcclusionContext *v14; // r15
  struct CVisualTree *v15; // rcx
  __int64 v16; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  unsigned __int64 v18; // rcx
  char v19; // r12
  bool v20; // zf
  CMILMatrix *v21; // rdx
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  int v29; // eax
  struct CVisualTree *v30; // rdx
  int v31; // eax
  unsigned int v32; // ecx
  CMILMatrix *v33; // rcx
  __int128 *v34; // rax
  __int64 v35; // rcx
  const struct FastRegion::Internal::CRgnData **v36; // rcx
  int v38; // eax
  unsigned int v39; // ecx
  CDirectFlipInfo *v40; // rbx
  int DeviceTarget; // eax
  unsigned int v42; // ecx
  char *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  float v48; // xmm0_4
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  _DWORD **v53; // rax
  int v54; // r9d
  int v55; // r10d
  _DWORD *v56; // rdx
  _DWORD *v57; // r8
  int v58; // eax
  int v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  float v62; // [rsp+70h] [rbp-90h]
  float v63; // [rsp+74h] [rbp-8Ch]
  struct IDeviceTarget *v64[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+88h] [rbp-78h] BYREF
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  void *lpMem; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v71[18]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0;
  v10 = 0;
  IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a3 + 16));
  v60 = 0;
  v14 = (COcclusionContext *)(v12 & -(__int64)IsCurrent);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xqq_EventWriteTransfer(
      v12,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v13);
  if ( v14 )
  {
    *((_DWORD *)v14 + 300) = 0x7FFFFFFF;
    v15 = *(struct CVisualTree **)(a1 + 168);
    v16 = *(_QWORD *)(a1 + 18476);
    v68 = *(_OWORD *)(a1 + 18460);
    v69 = v16;
    CDesktopTree::UpdateCVIRenderTargets(v15, (struct RenderTargetInfo *)&v68);
  }
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(a1 + 200);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*(CDirectFlipInfo **)(a1 + 11368)) )
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
    if ( (unsigned int)v18 < 2 )
    {
      v40 = *(CDirectFlipInfo **)(a1 + 11368);
      *((_DWORD *)v14 + 300) = CDirectFlipInfo::GetCutoffZ(v40, *(const struct CVisualTree **)(a1 + 96));
      v64[0] = 0LL;
      wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v64);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v40, v64);
      v10 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, DeviceTarget, 0x2A9u, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((RenderTargetInfo *)(a1 + 18460)) )
        {
          v43 = (char *)v64[0] + *(int *)(*((_QWORD *)v64[0] + 1) + 12LL) + 8;
          v44 = (**(__int64 (__fastcall ***)(char *, __int64 *))v43)(v43, &v61);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v44 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v64[0] + 40LL))(v64[0]);
        }
        v45 = CDrawingContext::PushRenderTarget(a2, v64[0]);
        v10 = v45;
        if ( v45 >= 0 )
        {
          v60 = 1;
          wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v64);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x2B1u, 0LL);
      }
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v64);
      return v10;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a3 + 4420) )
  {
    if ( *(_BYTE *)(a1 + 11225) )
    {
LABEL_11:
      v19 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(a1 + 18420) )
    {
      v47 = *(_DWORD *)(a1 + 104);
      v61 = 0LL;
      LOBYTE(v59) = 1;
      v48 = (float)v47;
      v49 = *(_DWORD *)(a1 + 108);
      v62 = v48;
      v63 = (float)v49;
      v50 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v61, 1LL, v59);
      v10 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x2C8u, 0LL);
        goto LABEL_29;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180386510);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( (v10 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v10, 0x2D0u, 0LL);
        goto LABEL_29;
      }
      CLegacyRenderTarget::NotifyRenderedRect(a1, 0LL, 0LL);
      v53 = *(_DWORD ***)(a1 + 18656);
      if ( v53 )
      {
        v54 = *(_DWORD *)(a1 + 104);
        v55 = *(_DWORD *)(a1 + 108);
        if ( v54 <= 0 || v55 <= 0 )
        {
          **v53 = 0;
        }
        else
        {
          v56 = *v53;
          v57 = *v53 + 7;
          *(_QWORD *)v56 = 2LL;
          *v57 = 0;
          v18 = (unsigned __int64)(v56 + 3);
          v57[1] = v54;
          v56[2] = v54;
          v56[4] = (_DWORD)v57 - ((_DWORD)v56 + 12);
          v56[3] = 0;
          v56[5] = v55;
          v56[6] = (_DWORD)v57 - ((_DWORD)v56 + 20) + 8;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 11225) )
    goto LABEL_11;
  v19 = 1;
  if ( !*(_BYTE *)(a1 + 18422) )
    goto LABEL_11;
LABEL_12:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_27:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v18, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
    goto LABEL_29;
  }
  while ( 1 )
  {
    v71[0] = 0;
    v20 = *(_BYTE *)(a1 + 11225) == 0;
    v21 = (CMILMatrix *)(a1 + 18216);
    lpMem = v71;
    if ( !v20 )
      v21 = (CMILMatrix *)(a1 + 18352);
    CDirtyRegion::GetOptimizedRect(
      a3,
      &v61,
      v8,
      a1 + 18172,
      (FastRegion::CRegion *)((unsigned __int64)&lpMem & -(__int64)(*(_QWORD *)(a1 + 18656) != 0LL)),
      v21,
      v19,
      a5,
      0LL);
    v25 = v62;
    LODWORD(v26) = v61;
    if ( v62 <= *(float *)&v61 )
      goto LABEL_24;
    v27 = v63;
    v28 = *((float *)&v61 + 1);
    if ( v63 <= *((float *)&v61 + 1) )
      goto LABEL_24;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v23, v22, v8, v24, v61, SBYTE4(v61), SLOBYTE(v62), SLOBYTE(v63));
    dword_1803E5A08 += (int)(float)((float)(v25 - v26) * (float)(v27 - v28));
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
    v30 = *(struct CVisualTree **)(a1 + 96);
    v66 = 0;
    v67 = 0;
    *(_QWORD *)&v65 = __PAIR64__(LODWORD(v28), LODWORD(v26));
    *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v25));
    v31 = CDrawingContext::DrawVisualTree(a2, v30, (__int64)&v65, v14, v29, v19, 0LL);
    v10 = v31;
    if ( v31 < 0 )
      break;
    v20 = *(_BYTE *)(a1 + 11225) == 0;
    v33 = (CMILMatrix *)(a1 + 18216);
    v65 = 0LL;
    *(_OWORD *)v64 = 0LL;
    if ( !v20 )
      v33 = (CMILMatrix *)(a1 + 18352);
    CMILMatrix::Transform2DBoundsHelper<0>(v33, (struct MilRectF *)&v61);
    v34 = (__int128 *)PixelAlign(&v68, v64);
    v35 = *(_QWORD *)(a1 + 184);
    v65 = *v34;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v35 + 16LL))(v35, &v65);
    v36 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 18656);
    *(_BYTE *)(a1 + 18700) = 1;
    if ( v36 )
    {
      v58 = FastRegion::CRegion::Union(v36, (const struct FastRegion::Internal::CRgnData **)&lpMem);
      if ( v58 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v58, retaddr);
    }
    if ( a6 )
    {
      v38 = CComposeTop::SubtractOverdraw(a6);
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x30Cu, 0LL);
        goto LABEL_61;
      }
    }
LABEL_24:
    v18 = (unsigned __int64)lpMem;
    if ( v71 != lpMem )
      operator delete(lpMem);
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x2FDu, 0LL);
LABEL_61:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
LABEL_29:
  if ( v60 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v10;
}
