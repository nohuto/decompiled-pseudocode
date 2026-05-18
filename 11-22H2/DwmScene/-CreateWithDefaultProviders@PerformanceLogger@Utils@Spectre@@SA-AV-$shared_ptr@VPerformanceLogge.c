/*
 * XREFs of ?CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@XZ @ 0x1800201A0
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$make_shared@VPerformanceLogger@Utils@Spectre@@V?$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V?$shared_ptr@UITimeProvider@Utils@Spectre@@@5@V?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@5@@std@@YA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITraceProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITimeProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@0@@Z @ 0x18001FB18 (--$make_shared@VPerformanceLogger@Utils@Spectre@@V-$shared_ptr@UITraceProvider@Utils@Spectre@@@s.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Utils::PerformanceLogger::CreateWithDefaultProviders(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rax
  std::_Ref_count_base *v3; // rdx
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  std::_Ref_count_base *v16; // [rsp+60h] [rbp-10h]

  v2 = (std::_Ref_count_base *)operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ETWTraceProvider>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::ETWTraceProvider::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v9 = (__int64)v3 + 16;
  v10 = v3;
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v15, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v4 = (std::_Ref_count_base *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Utils::DefaultTimeProvider>::`vftable';
    *((_QWORD *)v4 + 2) = &Spectre::Utils::DefaultTimeProvider::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v9 = (__int64)v5 + 16;
  v10 = v5;
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v13, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v6 = (std::_Ref_count_base *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    *((_QWORD *)v6 + 2) = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v9 = (__int64)v7 + 16;
  v10 = v7;
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v11, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  std::make_shared<Spectre::Utils::PerformanceLogger,std::shared_ptr<Spectre::Utils::ITraceProvider>,std::shared_ptr<Spectre::Utils::ITimeProvider>,std::shared_ptr<Spectre::Utils::IMemoryStatsProvider>>(
    a1,
    &v15,
    &v13,
    &v11);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return a1;
}
