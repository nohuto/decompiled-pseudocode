/*
 * XREFs of ?SurfaceReclaimed@CAtlasSurface@DirectComposition@@QEAAJ_N0@Z @ 0x180013DCC
 * Callers:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::SurfaceReclaimed(
        DirectComposition::CAtlasSurface *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  unsigned int v4; // r9d

  v3 = *((_QWORD *)this + 12);
  v4 = 0;
  if ( v3 && (unsigned int)(*((_DWORD *)this + 6) - 2) <= 1 )
    return (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 48LL))(
             *((_QWORD *)this + 12),
             a2,
             a3,
             0LL);
  return v4;
}
