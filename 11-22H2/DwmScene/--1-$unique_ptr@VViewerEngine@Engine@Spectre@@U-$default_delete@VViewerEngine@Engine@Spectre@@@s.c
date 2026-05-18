/*
 * XREFs of ??1?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800179B4
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     _Spectre::dtor$8::Engine::Create_Spectre::Engine::ViewerEngine_Spectre::Engine::D3D11::RenderDeviceD3D11__::_1_::dtor$8 @ 0x1800E4339 (_Spectre--dtor$8--Engine--Create_Spectre--Engine--ViewerEngine_Spectre--Engine--D3D11--RenderDev.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unique_ptr<Spectre::Engine::ViewerEngine>::~unique_ptr<Spectre::Engine::ViewerEngine>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
