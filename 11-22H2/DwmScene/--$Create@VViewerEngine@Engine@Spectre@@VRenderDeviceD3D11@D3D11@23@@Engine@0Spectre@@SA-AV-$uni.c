/*
 * XREFs of ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@PEBUSpectreNativeRendererCreateOptions@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x1800159F4 (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectr_ea_1800159F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 *     ??0DeviceDescription@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180017754 (--0DeviceDescription@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??1?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800179B4 (--1-$unique_ptr@VViewerEngine@Engine@Spectre@@U-$default_delete@VViewerEngine@Engine@Spectre@@@s.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C40 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z @ 0x180017D08 (--4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z.c)
 *     ??9type_info@@QEBA_NAEBV0@@Z @ 0x180017E2C (--9type_info@@QEBA_NAEBV0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@XZ @ 0x1800201A0 (-CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA-AV-$shared_ptr@VPerformanceLogge.c)
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?GetTelemetryTraceLogger@Engine@1Spectre@@QEBA?AV?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@std@@XZ @ 0x18003487C (-GetTelemetryTraceLogger@Engine@1Spectre@@QEBA-AV-$shared_ptr@VITelemetryTraceLogger@Utils@Spect.c)
 *     ?Initialize@Engine@1Spectre@@IEAAXAEBUEngineDescription@12@@Z @ 0x1800349C0 (-Initialize@Engine@1Spectre@@IEAAXAEBUEngineDescription@12@@Z.c)
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 *     ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10 (-StartPerformanceThread@Engine@1Spectre@@IEAAXXZ.c)
 *     ??0ViewerEngine@Engine@Spectre@@IEAA@W4ThreadingMode@Lockable@12@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@6@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@6@@Z @ 0x180063D48 (--0ViewerEngine@Engine@Spectre@@IEAA@W4ThreadingMode@Lockable@12@V-$shared_ptr@VPerformanceLogge.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall Spectre::Engine::Engine::Create<Spectre::Engine::ViewerEngine,Spectre::Engine::D3D11::RenderDeviceD3D11>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx
  void *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rbx
  __int64 HardwareVersion; // rax
  _QWORD *TelemetryTraceLogger; // rax
  bool v22; // di
  std::_Ref_count_base *v23; // rcx
  std::_Ref_count_base *v24; // rcx
  std::_Ref_count_base *v25; // rcx
  __int64 *result; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdi
  void (__fastcall *v29)(__int64, _QWORD, __int64, const char *); // rbx
  const char *PackageVersion; // rax
  __int64 v31; // r8
  __int64 v32; // [rsp+30h] [rbp-1D8h] BYREF
  char v33[8]; // [rsp+38h] [rbp-1D0h] BYREF
  std::_Ref_count_base *v34; // [rsp+40h] [rbp-1C8h]
  _QWORD *v35; // [rsp+48h] [rbp-1C0h]
  int v36; // [rsp+50h] [rbp-1B8h]
  _QWORD *v37; // [rsp+58h] [rbp-1B0h]
  __int128 v38; // [rsp+60h] [rbp-1A8h]
  __int128 v39; // [rsp+70h] [rbp-198h]
  _OWORD v40[2]; // [rsp+80h] [rbp-188h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp-168h]
  _QWORD *v42; // [rsp+A8h] [rbp-160h]
  Spectre::Utils::SpectreException *v43; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-140h] BYREF
  std::_Ref_count_base *v46; // [rsp+E0h] [rbp-128h]
  char v47[96]; // [rsp+E8h] [rbp-120h] BYREF
  char v48[96]; // [rsp+148h] [rbp-C0h] BYREF
  std::_Ref_count_base *v49[2]; // [rsp+1A8h] [rbp-60h] BYREF

  v41 = a3;
  v42 = a4;
  v37 = a5;
  v35 = a5;
  v9 = 0;
  v36 = 0;
  if ( std::operator==<Spectre::Engine::Scene>(a3) )
  {
    v10 = (__int64 *)Spectre::Utils::PerformanceLogger::CreateWithDefaultProviders(v33);
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a3 = v11;
    v13 = (std::_Ref_count_base *)a3[1];
    a3[1] = v12;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
  }
  v14 = operator new(0x660uLL);
  try
  {
    v32 = (__int64)v14;
    if ( v14 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v44,
        a5);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v45,
        a4);
      v15 = (unsigned int)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                            v40,
                            a3);
      v19 = Spectre::Engine::ViewerEngine::ViewerEngine(v18, *(_DWORD *)(a2 + 20), v15, v17, v16);
    }
    else
    {
      v19 = 0LL;
    }
    v32 = v19;
    HardwareVersion = Spectre::Engine::Engine::GetHardwareVersion((Spectre::Engine::Engine *)v19);
    std::string::operator=(&Spectre::Engine::g_hardwareVersion, HardwareVersion);
    std::string::_Tidy_deallocate((__int64)v49);
    *(_OWORD *)(v19 + 528) = *(_OWORD *)a2;
    *(_OWORD *)(v19 + 544) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v19 + 560) = *(_QWORD *)(a2 + 32);
    Spectre::Engine::DeviceDescription::operator=(v19 + 568, a2 + 40);
    *(_OWORD *)(v19 + 664) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v19 + 680) = *(_OWORD *)(a2 + 152);
    v38 = *(_OWORD *)(a2 + 136);
    *(_OWORD *)v49 = *(_OWORD *)(a2 + 152);
    Spectre::Engine::DeviceDescription::DeviceDescription(
      (Spectre::Engine::DeviceDescription *)v47,
      (const struct Spectre::Engine::DeviceDescription *)(a2 + 40));
    v39 = *(_OWORD *)v49;
    Spectre::Engine::Engine::CreateDevice<Spectre::Engine::RenderDeviceGeneric>((Spectre::Engine::Engine *)v19);
    Spectre::Engine::Engine::Initialize(
      (Spectre::Engine::Engine *)v19,
      (const struct Spectre::Engine::EngineDescription *)a2);
    if ( (unsigned __int8)type_info::operator!=(
                            &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor') )
    {
      *(_OWORD *)v49 = *(_OWORD *)(a2 + 136);
      v38 = *(_OWORD *)(a2 + 152);
      Spectre::Engine::DeviceDescription::DeviceDescription(
        (Spectre::Engine::DeviceDescription *)v48,
        (const struct Spectre::Engine::DeviceDescription *)(a2 + 40));
      v40[0] = *(_OWORD *)v49;
      v40[1] = v38;
      Spectre::Engine::Engine::CreateDevice<Spectre::Engine::D3D11::RenderDeviceD3D11>((Spectre::Engine::Engine *)v19);
      if ( v49[1] )
        std::_Ref_count_base::_Decref(v49[1]);
    }
    Spectre::Engine::Engine::SendEngineInitializedTelemetry((Spectre::Engine::Engine *)v19);
    v22 = 0;
    if ( *(_BYTE *)(a2 + 28) )
    {
      TelemetryTraceLogger = (_QWORD *)Spectre::Engine::Engine::GetTelemetryTraceLogger(v19, v49);
      v9 = 1;
      if ( std::operator!=<Spectre::Engine::Scene>(TelemetryTraceLogger) )
        v22 = 1;
    }
    if ( (v9 & 1) != 0 && v49[1] )
      std::_Ref_count_base::_Decref(v49[1]);
    if ( v22 )
      Spectre::Engine::Engine::StartPerformanceThread((Spectre::Engine::Engine *)v19);
    v32 = 0LL;
    *a1 = v19;
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
    std::unique_ptr<Spectre::Engine::ViewerEngine>::~unique_ptr<Spectre::Engine::ViewerEngine>(&v32);
    v23 = (std::_Ref_count_base *)a3[1];
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    v24 = (std::_Ref_count_base *)a4[1];
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    v25 = (std::_Ref_count_base *)v37[1];
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    result = a1;
  }
  catch ( Spectre::Utils::SpectreException *v43 )
  {
    if ( std::operator!=<Spectre::Engine::Scene>(v35) )
    {
      v28 = *v27;
      v29 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)*v27 + 24LL);
      (*(void (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v43 + 8LL))(v43);
      PackageVersion = Spectre::Engine::Engine::GetPackageVersion();
      v29(v28, 0LL, v31, PackageVersion);
    }
    throw;
  }
  return result;
}
