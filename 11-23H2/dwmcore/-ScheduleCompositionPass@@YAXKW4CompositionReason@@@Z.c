/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800EB688
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800770C0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180079928 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x180079B0C (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180130BA0 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E80DC (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E84C4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801E91E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801EAC18 (-Present@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801ECFB0 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F9270 (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 82) + 32LL))(
             *((_QWORD *)g_pComposition + 82),
             a1,
             a2);
  return result;
}
