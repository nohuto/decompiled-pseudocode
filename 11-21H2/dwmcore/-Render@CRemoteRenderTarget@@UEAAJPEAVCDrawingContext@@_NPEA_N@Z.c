/*
 * XREFs of ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630
 * Callers:
 *     ?Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801069D0 (-Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EBAC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800DFFD4 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x1800FEA10 (-IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEA3C (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C9D98 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r15
  CComposeTop *v10; // rsi
  char v11; // bl
  bool v12; // r11
  const struct COcclusionContext *OcclusionContext; // r14
  struct IDeviceTarget *v14; // rax
  __int64 v15; // rcx
  struct CVisualTree *v16; // rbx
  struct MilRectF *Bounds; // rax
  __int64 v18; // xmm1_8
  unsigned int v19; // r14d
  struct CVisualTree *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  bool IsPrimaryMonitor; // r14
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD); // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // [rsp+20h] [rbp-A9h]
  COcclusionContext *v33; // [rsp+50h] [rbp-79h]
  int v34[4]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v35; // [rsp+68h] [rbp-61h] BYREF
  __int64 v36; // [rsp+78h] [rbp-51h]
  __int64 v37[2]; // [rsp+80h] [rbp-49h] BYREF
  int *v38; // [rsp+90h] [rbp-39h] BYREF
  int v39; // [rsp+98h] [rbp-31h] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  *a4 = 0;
  v7 = 0;
  if ( !*((_QWORD *)this - 34) )
    goto LABEL_21;
  v8 = *((_QWORD *)this - 32);
  if ( !v8 || *(int *)(*((_QWORD *)this - 53) + 1104LL) > 3 )
    goto LABEL_21;
  v9 = v8 + 104;
  v10 = *(CComposeTop **)(v8 + 4744);
  v11 = 1;
  if ( v10 && CComposeTop::HasNewContent(v10) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 34) + 24LL))(*((_QWORD *)this - 34));
  else
    v11 = 0;
  if ( CDirtyRegion::IsEmpty((CDirtyRegion *)v9) )
  {
    IsPrimaryMonitor = v12;
    if ( !v11 )
      goto LABEL_18;
  }
  CDirtyRegion::CalcOcclusion((CDirtyRegion *)v9);
  OcclusionContext = CDirtyRegion::GetOcclusionContext((CDirtyRegion *)v9);
  v33 = OcclusionContext;
  v14 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 34))(*((_QWORD *)this - 34));
  v7 = CDrawingContext::BeginFrame(
         a2,
         v14,
         (CRemoteRenderTarget *)((char *)this - 224),
         (const struct _D3DCOLORVALUE *)((char *)this - 316),
         0LL);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v7, 0xA2u);
    goto LABEL_21;
  }
  if ( OcclusionContext )
  {
    v16 = (struct CVisualTree *)*((_QWORD *)this - 32);
    Bounds = (struct MilRectF *)CDirtyRegion::GetBounds(v9, (__int64)v37);
    v18 = *(_QWORD *)((char *)this - 140);
    v35 = *(_OWORD *)((char *)this - 156);
    v36 = v18;
    CDesktopTree::UpdateCVIRenderTargets(v16, (struct RenderTargetInfo *)&v35, Bounds);
  }
  v19 = 0;
  if ( !*(_DWORD *)(v9 + 2820) )
  {
LABEL_16:
    if ( v10 )
    {
      v7 = CRemoteRenderTarget::RenderComposeTop(
             (CRemoteRenderTarget *)((char *)this - 440),
             a2,
             v10,
             *(_BYTE *)(v9 + 4424));
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v7, 0xD2u);
        goto LABEL_36;
      }
    }
    IsPrimaryMonitor = CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)((char *)this - 296));
LABEL_18:
    v24 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v7 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0xDCu);
    }
    else if ( *((_BYTE *)this - 56) || IsPrimaryMonitor )
    {
      *a4 = 1;
    }
    goto LABEL_21;
  }
  while ( 1 )
  {
    v38 = &v39;
    v39 = 0;
    v37[0] = 0LL;
    v37[1] = 0LL;
    CDirtyRegion::GetOptimizedRect(
      (struct CComposition **)v9,
      (__int64)v34,
      v19,
      (__int64)this - 240,
      (FastRegion::CRegion *)&v38,
      (__int64)this - 224,
      0,
      v37,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v34) )
      goto LABEL_15;
    v36 = 0LL;
    v20 = (struct CVisualTree *)*((_QWORD *)this - 43);
    v32 = *((_BYTE *)this - 300) != 0 ? 2 : 0;
    v35 = *(_OWORD *)v34;
    v7 = CDrawingContext::DrawVisualTree(a2, v20, (__int64)&v35, v33, v32, 0, 0LL);
    if ( v7 < 0 )
      break;
    CRemoteRenderTarget::NotifyRenderedRect((char *)this - 440, v34, 0LL);
    v22 = FastRegion::CRegion::Union(
            (const struct FastRegion::Internal::CRgnData **)this - 16,
            (const struct FastRegion::Internal::CRgnData **)&v38);
    if ( v22 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v22, retaddr);
    if ( v10 )
    {
      v7 = CComposeTop::SubtractOverdraw((__int64)v10);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v7, 0xC7u);
        goto LABEL_32;
      }
    }
LABEL_15:
    FastRegion::CRegion::FreeMemory((void **)&v38);
    if ( ++v19 >= *(_DWORD *)(v9 + 2820) )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v7, 0xBBu);
LABEL_32:
  FastRegion::CRegion::FreeMemory((void **)&v38);
LABEL_36:
  CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_21:
  if ( g_LockAndReadTarget )
  {
    v29 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 34);
    if ( v29 )
    {
      v30 = (**v29)(v29);
      v31 = *(int *)(*(_QWORD *)(v30 + 8) + 16LL) + v30 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v31 + 24LL))(
        v31,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return (unsigned int)v7;
}
