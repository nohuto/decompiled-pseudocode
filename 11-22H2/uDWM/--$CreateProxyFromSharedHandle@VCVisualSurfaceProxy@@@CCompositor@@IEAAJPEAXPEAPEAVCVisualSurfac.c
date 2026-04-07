/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18005766C
 * Callers:
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180057280 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180020B0C (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualSurfaceProxy>(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3)
{
  __int64 v6; // rax
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = (CBaseObject *)v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = &CCombinedGeometryProxy::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v8 = CResourceProxy::InitializeFromSharedHandle(v6, 0x2Au, *(_QWORD *)(a1 + 24), a2, 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x93u, 0LL);
    }
    else
    {
      *a3 = v7;
      v9 = 0;
    }
  }
  else
  {
    v7 = 0LL;
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du, 0LL);
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
