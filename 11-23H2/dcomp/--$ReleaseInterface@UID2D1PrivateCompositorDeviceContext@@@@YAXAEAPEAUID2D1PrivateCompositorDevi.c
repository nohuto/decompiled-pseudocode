/*
 * XREFs of ??$ReleaseInterface@UID2D1PrivateCompositorDeviceContext@@@@YAXAEAPEAUID2D1PrivateCompositorDeviceContext@@@Z @ 0x180038BA8
 * Callers:
 *     ?FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038B0C (-FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID2D1PrivateCompositorDeviceContext>(__int64 *a1)
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
