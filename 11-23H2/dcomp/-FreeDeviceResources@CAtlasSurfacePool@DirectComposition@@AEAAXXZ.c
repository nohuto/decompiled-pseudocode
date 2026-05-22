/*
 * XREFs of ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x1800389D4
 * Callers:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z @ 0x180038A1C (--$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z.c)
 *     ??$ReleaseInterface@UID3D11ShaderResourceView@@@@YAXAEAPEAUID3D11ShaderResourceView@@@Z @ 0x180038A58 (--$ReleaseInterface@UID3D11ShaderResourceView@@@@YAXAEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x180038A94 (--$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     ?FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038B0C (-FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::FreeDeviceResources(DirectComposition::CAtlasSurfacePool *this)
{
  ReleaseInterface<ID3D11Texture2D>((char *)this + 32);
  ReleaseInterface<IUnknown>((char *)this + 16);
  DirectComposition::CAtlasSurfacePool::FreeD2DDeviceResources(this);
  ReleaseInterface<ID3D11ShaderResourceView>((char *)this + 40);
  ReleaseInterface<ID3D11RenderTargetView>((char *)this + 48);
  *((_QWORD *)this + 3) = 0LL;
}
