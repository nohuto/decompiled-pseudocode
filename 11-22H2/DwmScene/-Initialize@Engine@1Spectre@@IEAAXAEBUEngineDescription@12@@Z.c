/*
 * XREFs of ?Initialize@Engine@1Spectre@@IEAAXAEBUEngineDescription@12@@Z @ 0x1800349C0
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::Initialize(
        Spectre::Engine::Engine *this,
        const struct Spectre::Engine::EngineDescription *a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v4);
  *((_QWORD *)this + 114) = *(_QWORD *)a2;
  *((_QWORD *)this + 115) = *((_QWORD *)a2 + 1);
  (*(void (__fastcall **)(Spectre::Engine::Engine *, const struct Spectre::Engine::EngineDescription *))(*(_QWORD *)this + 88LL))(
    this,
    a2);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v4);
}
