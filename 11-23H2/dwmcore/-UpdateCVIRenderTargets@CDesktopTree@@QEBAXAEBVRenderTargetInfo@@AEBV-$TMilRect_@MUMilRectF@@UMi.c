/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004516C
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x180044CB8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A1FC (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E8C24 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180035140 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x1800410F0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180042164 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180044BC8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180045434 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004582C (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180046054 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180076268 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800A2940 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800DF3C0 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800DF8D4 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E31E8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800E4A48 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CDesktopTree::UpdateCVIRenderTargets(
        struct CVisualTree *a1,
        struct RenderTargetInfo *a2,
        struct MilRectF *a3)
{
  float *v4; // rdi
  bool IsCurrent; // al
  __int64 v7; // rcx
  __int64 v8; // r12
  CVisual **v9; // rax
  CVisual **v10; // rsi
  struct CBackdropVisualImage *BackdropVisualImage; // r14
  __int64 v12; // rbx
  __int64 v13; // rdi
  CVisual *v14; // rbx
  char *v15; // rax
  __int64 **TreeData; // rax
  _BYTE *v17; // rbx
  bool v18; // al
  float *v19; // rax
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v21; // r8
  DwmDbg::DbgString *v22; // rbx
  DwmDbg::DbgString *v23; // rax
  struct COcclusionInfo *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  HANDLE ProcessHeap; // rax
  const char *v28; // rdi
  const struct MilRectF *Bounds; // rax
  const char *v30; // rbx
  const char **v31; // rax
  DwmDbg::DbgString *v32; // rbx
  DwmDbg::DbgString *v33; // rax
  struct IDeviceTexture *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v35; // [rsp+38h] [rbp-C8h]
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  void *v37; // [rsp+48h] [rbp-B8h] BYREF
  void *v38; // [rsp+50h] [rbp-B0h] BYREF
  CVisual **v39; // [rsp+58h] [rbp-A8h]
  char *v40; // [rsp+60h] [rbp-A0h] BYREF
  char *v41; // [rsp+68h] [rbp-98h] BYREF
  char *v42; // [rsp+70h] [rbp-90h] BYREF
  char *v43; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v46; // [rsp+A0h] [rbp-60h] BYREF
  const struct CVisualTree **v47; // [rsp+A8h] [rbp-58h]
  _BYTE *v48; // [rsp+B0h] [rbp-50h]
  _BYTE v49[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v50[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v51; // [rsp+E8h] [rbp-18h]
  char v52[16]; // [rsp+F8h] [rbp-8h] BYREF

  v35 = a3;
  v4 = (float *)a3;
  IsCurrent = COcclusionContext::IsCurrent((struct CVisualTree *)((char *)a1 + 120));
  v8 = v7 & -(__int64)IsCurrent;
  if ( !v8 )
    return;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
  v9 = (CVisual **)*((_QWORD *)a1 + 686);
  v10 = (CVisual **)*((_QWORD *)a1 + 685);
  v39 = v9;
  while ( 1 )
  {
    BackdropVisualImage = 0LL;
    if ( v10 == v9 )
      break;
    v14 = *v10;
    v46 = v49;
    *(_QWORD *)&v51 = 0LL;
    *((_QWORD *)&v51 + 1) = a1;
    v47 = (const struct CVisualTree **)v49;
    v48 = v50;
    v15 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
            (detail::liberal_expansion_policy *)&v46,
            0LL,
            1uLL);
    *(_OWORD *)v15 = v51;
    TreeData = CVisual::FindTreeData(v14, *(v47 - 1));
    if ( TreeData )
      BackdropVisualImage = CTreeData::GetBackdropVisualImage(
                              (CTreeData *)TreeData,
                              (const struct CVisualTreePath *)&v46);
    v17 = v46;
    if ( ((char *)v47 - v46) >> 4 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        &v46,
        0LL);
      v17 = v46;
    }
    v46 = 0LL;
    if ( v17 == v49 )
      v17 = 0LL;
    if ( v17 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v17);
    }
    if ( BackdropVisualImage )
    {
      v44 = *((_OWORD *)BackdropVisualImage + 6);
      v18 = CBackdropVisualImage::RequiresRendering(BackdropVisualImage, a2);
      if ( dword_1803E3760 )
      {
        if ( !v18 )
          goto LABEL_21;
        v28 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v38, (const struct MilRectF *)&v44);
        Bounds = (const struct MilRectF *)CDirtyRegion::GetBounds((char *)a1 + 104, v50);
        v30 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v37, Bounds);
        v31 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, v35);
        v32 = DwmDbg::DbgString::DbgString(&v40, "renderTarget=[%s], dirtyRegion=[%s], bviBounds=[%s]", *v31, v30, v28);
        v33 = DwmDbg::DbgString::DbgString(&v41, "BVI-AttemptPreRender");
        CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v33, v32);
        if ( lpMem )
          operator delete(lpMem);
        if ( v37 )
          operator delete(v37);
        if ( v38 )
          operator delete(v38);
        v4 = (float *)v35;
      }
      else if ( !v18 )
      {
        goto LABEL_21;
      }
      v19 = (float *)CDirtyRegion::GetBounds((char *)a1 + 104, v52);
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v19, (float *)&v44)
        && TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v4, (float *)&v44) )
      {
        OcclusionInfo = CVisual::GetOcclusionInfo(
                          *v10,
                          a1,
                          (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
        if ( !OcclusionInfo
          || (v21 = *((unsigned int *)OcclusionInfo + 7),
              v45 = *((_OWORD *)BackdropVisualImage + 6),
              !(unsigned __int8)COcclusionContext::IsOccluded(v8, &v45, v21, 0LL)) )
        {
          v34 = 0LL;
          if ( (int)CCachedVisualImage::GetDeviceTexture(
                      (struct CBackdropVisualImage *)((char *)BackdropVisualImage + 72),
                      a2,
                      &v34) >= 0 )
          {
            v22 = DwmDbg::DbgString::DbgString(&v42, word_18033C470);
            v23 = DwmDbg::DbgString::DbgString(&v43, "BVI-SuccessfulPreRender");
            CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v23, v22);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
        }
      }
    }
LABEL_21:
    v9 = v39;
    ++v10;
  }
  v12 = *((_QWORD *)a1 + 602);
  v13 = *((_QWORD *)a1 + 603);
  while ( v12 != v13 )
  {
    if ( (int)CThreadContext::RegisterGraphWalkRoot(*(const void **)v12) >= 0 )
    {
      v24 = CVisual::GetOcclusionInfo(
              *(CVisual **)v12,
              a1,
              (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
      if ( !*(_BYTE *)(v12 + 32)
        || !v24
        || !(unsigned __int8)COcclusionContext::IsOccluded(v8, v12 + 16, *((unsigned int *)v24 + 7), 0LL) )
      {
        v25 = (__int64 *)(*(_QWORD *)(v12 + 8) + 72LL);
        v26 = *v25;
        v34 = 0LL;
        (*(void (__fastcall **)(__int64 *, struct RenderTargetInfo *, struct IDeviceTexture **))(v26 + 48))(
          v25,
          a2,
          &v34);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
    v12 += 40LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
}
