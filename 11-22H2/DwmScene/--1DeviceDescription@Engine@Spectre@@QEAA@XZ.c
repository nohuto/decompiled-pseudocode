/*
 * XREFs of ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@PEBUSpectreNativeRendererCreateOptions@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x1800159F4 (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectr_ea_1800159F4.c)
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 *     ??1EngineDescription@Engine@Spectre@@QEAA@XZ @ 0x180017A28 (--1EngineDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     _Spectre::dtor$0::Engine::CreateDevice_Spectre::Engine::RenderDeviceGeneric__::_1_::dtor$0 @ 0x1800E440A (_Spectre--dtor$0--Engine--CreateDevice_Spectre--Engine--RenderDeviceGeneric__--_1_--dtor$0.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$10 @ 0x1800E4C7A (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$10.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceDescription::~DeviceDescription(Spectre::Engine::DeviceDescription *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((char *)this + 48);
}
