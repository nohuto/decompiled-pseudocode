/*
 * XREFs of ??$ReleaseInterface@UID3D11Device1@@@@YAXAEAPEAUID3D11Device1@@@Z @ 0x18001B210
 * Callers:
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID3D11Device1>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
