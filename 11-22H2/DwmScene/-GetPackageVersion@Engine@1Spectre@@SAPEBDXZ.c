/*
 * XREFs of ?GetPackageVersion@Engine@1Spectre@@SAPEBDXZ @ 0x1800346EC
 * Callers:
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 *     _Spectre::catch$18::Engine::Create_Spectre::Engine::ViewerEngine_Spectre::Engine::D3D11::RenderDeviceD3D11__::_1_::catch$18 @ 0x1800E435D (_Spectre--catch$18--Engine--Create_Spectre--Engine--ViewerEngine_Spectre--Engine--D3D11--RenderD.c)
 * Callees:
 *     <none>
 */

const char *Spectre::Engine::Engine::GetPackageVersion(void)
{
  return "2.7.0.2";
}
