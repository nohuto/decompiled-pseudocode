/*
 * XREFs of ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800DF6EC
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180020F00 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A1FC (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EB180 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A948C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180042C70 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180045434 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800DF88C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800DF924 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::CalcOcclusion(CDirtyRegion *this)
{
  unsigned int v1; // ebx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v3; // rcx
  CDirtyRegion *v4; // r11
  __int64 v5; // r11
  __int64 v6; // rsi
  __int64 *v7; // r11
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rbx
  __int64 DirtyRects; // rax
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *((_QWORD *)v4 + 1) == CurrentFrameId )
  {
    if ( !CDirtyRegion::IsEmpty(v4) )
    {
      v6 = v5 + 16;
      if ( !COcclusionContext::IsCurrent((COcclusionContext *)(v5 + 16)) )
      {
        v8 = *v7;
        v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v7 + 200LL);
        DirtyRects = CDirtyRegion::GetDirtyRects(v7, v14);
        v11 = v9(v8, DirtyRects, v6);
        v1 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x432u, 0LL);
      }
    }
  }
  else
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292412, 0x437u, 0LL);
  }
  return v1;
}
