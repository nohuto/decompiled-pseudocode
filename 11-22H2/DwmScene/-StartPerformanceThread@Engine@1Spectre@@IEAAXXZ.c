/*
 * XREFs of ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 * Callees:
 *     ??$make_unique@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@P8Engine@3Spectre@@EAAXXZPEAV334@$0A@@std@@YA?AV?$unique_ptr@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@U?$default_delete@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@@2@@0@$$QEAP8Engine@2Spectre@@EAAXXZ$$QEAPEAV223@@Z @ 0x1800308AC (--$make_unique@V-$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@P8Engine@3Spectre@@EAAXXZPEAV334@.c)
 *     ??1?$unique_ptr@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@U?$default_delete@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@@2@@std@@QEAA@XZ @ 0x180031B7C (--1-$unique_ptr@V-$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@U-$default_delete@V-$tuple@P8Eng.c)
 *     ??1thread@std@@QEAA@XZ @ 0x180032088 (--1thread@std@@QEAA@XZ.c)
 *     ??4thread@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180032120 (--4thread@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::StartPerformanceThread(Spectre::Engine::Engine *this)
{
  __int128 v2; // [rsp+30h] [rbp-20h] BYREF
  __int128 v3; // [rsp+40h] [rbp-10h] BYREF
  void *v4; // [rsp+60h] [rbp+10h] BYREF
  Spectre::Engine::Engine *v5; // [rsp+68h] [rbp+18h] BYREF

  v5 = this;
  *(_QWORD *)&v2 = Spectre::Engine::Engine::SendPerformanceSummaryTimer;
  DWORD2(v2) = 0;
  v3 = v2;
  std::make_unique<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>,void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *,0>(
    &v4,
    &v3,
    &v5);
  *(_QWORD *)&v2 = _o__beginthreadex(
                     0LL,
                     0LL,
                     std::thread::_Invoke<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>,0,1>,
                     v4,
                     0,
                     (char *)&v2 + 8);
  if ( !(_QWORD)v2 )
  {
    DWORD2(v2) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180036FC9LL);
  }
  v4 = 0LL;
  std::unique_ptr<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>>::~unique_ptr<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>>(&v4);
  std::thread::operator=((__int64)this + 1184, &v2);
  std::thread::~thread((std::thread *)&v2);
}
