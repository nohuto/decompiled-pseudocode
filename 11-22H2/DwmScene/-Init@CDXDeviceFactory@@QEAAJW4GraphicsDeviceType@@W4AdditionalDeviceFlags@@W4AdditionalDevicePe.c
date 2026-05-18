/*
 * XREFs of ?Init@CDXDeviceFactory@@QEAAJW4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@3W4DeviceFeatureFlags@@@Z @ 0x1800DBA00
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 */

__int64 __fastcall CDXDeviceFactory::Init(
        __int64 *a1,
        int a2,
        char a3,
        int a4,
        enum D3D_FEATURE_LEVEL a5,
        signed int a6,
        char a7)
{
  return CDXDeviceFactory::CreateDeviceResources((__int64)a1, a1, a1 + 40, a1 + 41, a2, a3, a4, a5, a6, a7);
}
