/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8
 * Callers:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180080F7C (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BD1A8 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180112FB0 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801C2A38 (-Present@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801C4C78 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801E1250 (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 82) + 120LL))(
             *((_QWORD *)g_pComposition + 82),
             a1,
             a2);
  return result;
}
