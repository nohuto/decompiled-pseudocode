/*
 * XREFs of ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@PEBUSpectreNativeRendererCreateOptions@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x1800159F4
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 *     ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC (--1DeviceDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ?UpgradeOptionsToDescription@Engine@Spectre@@YA?AUEngineDescription@12@USpectreNativeRendererCreateOptions@@@Z @ 0x180037DDC (-UpgradeOptionsToDescription@Engine@Spectre@@YA-AUEngineDescription@12@USpectreNativeRendererCre.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Spectre::Engine::Engine::Create<Spectre::Engine::ViewerEngine,Spectre::Engine::D3D11::RenderDeviceD3D11>(
        __int64 *a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v15[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[152]; // [rsp+F8h] [rbp-8h] BYREF

  v15[0] = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  v15[3] = a2[3];
  v15[4] = a2[4];
  v15[5] = a2[5];
  Spectre::Engine::UpgradeOptionsToDescription(v16, v15);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v13, a4);
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v14,
         a3);
  v12 = 0LL;
  Spectre::Engine::Engine::Create<Spectre::Engine::ViewerEngine,Spectre::Engine::D3D11::RenderDeviceD3D11>(
    a1,
    (__int64)v16,
    &v12,
    v7,
    v8);
  Spectre::Engine::DeviceDescription::~DeviceDescription((Spectre::Engine::DeviceDescription *)v17);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = (std::_Ref_count_base *)a4[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
