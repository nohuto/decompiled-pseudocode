/*
 * XREFs of ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CA42C
 * Callers:
 *     ?Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801069B0 (-Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCC10 (-GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::Render(
        CLegacyStereoRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // r11
  unsigned int IntersectingRectCount; // r15d
  int v12; // eax
  __int64 v13; // rcx
  char v14; // bl
  struct IDeviceTarget *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF

  *a4 = 0;
  v7 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    v8 = *((_QWORD *)this - 2318);
    if ( v8 )
    {
      if ( a3 || !*((_BYTE *)this - 91) )
      {
        v9 = v8 + 104;
        IntersectingRectCount = CDirtyRegion::GetIntersectingRectCount(v8 + 104, (float *)this - 135);
        if ( IntersectingRectCount )
        {
          v12 = CLegacyRenderTarget::Render((CLegacyStereoRenderTarget *)((char *)this - 16), a2, v10, a4);
          v7 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x22u);
          }
          else if ( !*((_BYTE *)this - 56) || *(_DWORD *)(*((_QWORD *)this - 2336) + 436LL) )
          {
            v14 = *((_BYTE *)this - 7487);
            v15 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this - 8))(
                                            *((_QWORD *)this - 8),
                                            2LL);
            v16 = CDrawingContext::BeginFrame(
                    a2,
                    v15,
                    (CLegacyStereoRenderTarget *)((char *)this + (v14 != 0 ? -360LL : -496LL)),
                    (const struct _D3DCOLORVALUE *)((char *)this - 18580),
                    (CLegacyStereoRenderTarget *)((char *)this - 18512));
            v7 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x2Bu);
            }
            else
            {
              v23[0] = 0LL;
              v23[1] = 0LL;
              v18 = CLegacyRenderTarget::RenderDirtyRegion(
                      (__int64)this - 18704,
                      a2,
                      v9,
                      IntersectingRectCount,
                      v23,
                      0LL);
              v7 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x30u);
                CDrawingContext::EndFrame((CD3DDevice **)a2);
              }
              else
              {
                v20 = CDrawingContext::EndFrame((CD3DDevice **)a2);
                v7 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x33u);
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
