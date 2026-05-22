/*
 * XREFs of ?FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038B0C
 * Callers:
 *     ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034C64 (-EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 *     ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x1800389D4 (-FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z @ 0x180038B6C (--$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z.c)
 *     ??$ReleaseInterface@UID2D1DrawingStateBlock@@@@YAXAEAPEAUID2D1DrawingStateBlock@@@Z @ 0x180038BE4 (--$ReleaseInterface@UID2D1DrawingStateBlock@@@@YAXAEAPEAUID2D1DrawingStateBlock@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::FreeD2DDeviceResources(
        DirectComposition::CAtlasSurfacePool *this)
{
  __int64 v2; // rcx

  ReleaseInterface<ID2D1DrawingStateBlock>((char *)this + 80);
  ReleaseInterface<ID2D1Bitmap1>((char *)this + 64);
  ReleaseInterface<ID2D1Bitmap1>((char *)this + 72);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  ReleaseInterface<ID2D1PrivateCompositorDeviceContext>((char *)this + 88);
}
