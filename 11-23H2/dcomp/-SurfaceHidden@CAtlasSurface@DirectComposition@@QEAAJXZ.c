/*
 * XREFs of ?SurfaceHidden@CAtlasSurface@DirectComposition@@QEAAJXZ @ 0x1800392FC
 * Callers:
 *     ?Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039250 (-Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::SurfaceHidden(DirectComposition::CAtlasSurface *this)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 && (unsigned int)(*((_DWORD *)this + 6) - 2) <= 1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 40LL))(*((_QWORD *)this + 12), 0LL);
  return v2;
}
