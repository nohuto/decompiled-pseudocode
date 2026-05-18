/*
 * XREFs of ?GetFeatureLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEAA?AW4DeviceFeatureLevel@34@XZ @ 0x1800C58B4
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?IsFeatureSupported@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NW4DeviceFeature@34@@Z @ 0x1800C68A0 (-IsFeatureSupported@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NW4DeviceFeature@34@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetFeatureLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 4288);
}
