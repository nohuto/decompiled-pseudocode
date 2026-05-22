/*
 * XREFs of ?Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039250
 * Callers:
 *     ?HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ @ 0x1800195A0 (-HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ?HideSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ @ 0x1800391EC (-HideSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SurfaceHidden@CAtlasSurface@DirectComposition@@QEAAJXZ @ 0x1800392FC (-SurfaceHidden@CAtlasSurface@DirectComposition@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::Hide(DirectComposition::CAtlasSurfacePool *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  DirectComposition::CAtlasSurface *v8; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 12);
  if ( !v3
    || (v2 = DirectComposition::CResourceProxy::SetHandleProperty((DirectComposition::CResourceProxy *)(v3 + 8), 0, 0LL),
        v2 >= 0) )
  {
    v4 = *((_QWORD *)this + 13);
    if ( v4 )
      v2 = DirectComposition::CResourceProxy::SetHandleProperty((DirectComposition::CResourceProxy *)(v4 + 8), 0, 0LL);
  }
  v5 = 0LL;
  while ( v2 >= 0 )
  {
    if ( (unsigned int)v5 >= *((_DWORD *)this + 34) )
    {
      v8 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 25);
      if ( v8 )
        return (unsigned int)DirectComposition::CAtlasSurface::SurfaceHidden(v8);
      return (unsigned int)v2;
    }
    v2 = 0;
    v6 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v5);
    v7 = *(_QWORD *)(v6 + 96);
    if ( v7 && (unsigned int)(*(_DWORD *)(v6 + 24) - 2) <= 1 )
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, 0LL);
    v5 = (unsigned int)(v5 + 1);
  }
  return (unsigned int)v2;
}
