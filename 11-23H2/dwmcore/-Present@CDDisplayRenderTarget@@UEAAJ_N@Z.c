/*
 * XREFs of ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E80DC
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18011C790 (-Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180034778 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180042C70 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z @ 0x1800794FC (-Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x180079B74 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x18007A29C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800EB688 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z @ 0x1801E7E38 (-CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(struct IOverlaySwapChain **this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  struct IOverlaySwapChain **v5; // rsi
  unsigned __int8 v6; // r14
  bool v7; // cl
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(this - 2317) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&v16);
    v5 = this - 30;
    v6 = CTargetStats::Ready(
           (CTargetStats *)(this - 30),
           (const struct tagCOMPOSITION_TARGET_ID *)(this - 38),
           v16,
           *(this - 2317));
    v7 = *((_BYTE *)this - 56)
      || !*(_DWORD *)*(this - 20) && COverlayContext::NeedsPresent((COverlayContext *)(this - 2316));
    if ( *((_BYTE *)this - 55) | a2 || v6 && v7 )
    {
      v8 = (__int64)*(this - 2317);
      v15 = 0LL;
      v14 = 0LL;
      CRegion::GetRectangles((FastRegion::Internal::CRgnData **)(v8 + 136), &v14);
      v9 = COverlayContext::Present(
             this - 2316,
             *(this - 2317),
             0,
             (__int64)&v14,
             *((_DWORD *)this - 59) + 1 + *((_DWORD *)this - 58),
             0);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x21Au, 0LL);
      }
      else
      {
        *((_WORD *)this - 28) = 0;
        v11 = CDDisplayRenderTarget::CheckForOcclusionChange((CDDisplayRenderTarget *)(this - 2340), v9);
        ++*(_DWORD *)v5;
        v2 = v11;
        v12 = v16;
        ++*((_DWORD *)v5 + 1);
        v5[7] = (struct IOverlaySwapChain *)v12;
        v5[8] = (struct IOverlaySwapChain *)GetCurrentFrameId();
      }
      if ( (_QWORD)v14 )
        std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else if ( v7 )
    {
      ScheduleCompositionPass(0, 2u);
    }
  }
  if ( *((_BYTE *)this - 54) )
    return 142213121;
  return v2;
}
