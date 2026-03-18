/*
 * XREFs of ?FindFullScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1800BBD94
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18000CE8C (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall COverlayContext::FindFullScreenContent(__int64 a1)
{
  __int64 v1; // rax
  const struct COverlayContext::OverlayPlaneInfo *v3; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v4; // rsi
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 11168);
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 16);
    if ( v6 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6) == 1 )
        return *(_QWORD **)(*(_QWORD *)(a1 + 11168) + 16LL);
    }
  }
  v3 = *(const struct COverlayContext::OverlayPlaneInfo **)(a1 + 7304);
  v4 = *(const struct COverlayContext::OverlayPlaneInfo **)(a1 + 7312);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0LL;
    if ( COverlayContext::IsFullscreen((__int64 **)a1, v3)
      && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v3 + 2) + 88LL))(*((_QWORD **)v3 + 2)) == 1 )
    {
      break;
    }
    v3 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v3 + 224);
  }
  return (_QWORD *)*((_QWORD *)v3 + 2);
}
