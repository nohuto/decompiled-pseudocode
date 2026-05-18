/*
 * XREFs of ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C (-RenderDisplays@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ @ 0x18002034C (-HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ.c)
 *     ??$AddMeasurement@_J@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_J@Z @ 0x18002DCB4 (--$AddMeasurement@_J@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_J@Z.c)
 *     ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18 (-GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::Engine::LogInstanceCounts(Spectre::Engine::Engine *this)
{
  struct Spectre::Engine::PerformanceManager *v2; // rax
  _QWORD *v3; // rbx
  struct Spectre::Engine::PerformanceManager *v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rdx

  if ( (unsigned __int8)Spectre::Utils::PerformanceLogger::HasSubscriber(*((Spectre::Utils::PerformanceLogger **)this
                                                                         + 58)) )
  {
    v2 = Spectre::Engine::PerformanceManager::Instance();
    v3 = (_QWORD *)*((_QWORD *)this + 58);
    v4 = v2;
    Spectre::Engine::PerformanceManager::GetCounter(v2, 14LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v3, v5, 2019LL);
    v6 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 7LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v6, v7, 2020LL);
    v8 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 6LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v8, v9, 2021LL);
    v10 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 5LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v10, v11, 2022LL);
    v12 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 1LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v12, v13, 2023LL);
    v14 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 10LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v14, v15, 2024LL);
    v16 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 12LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v16, v17, 2025LL);
    v18 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 8LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v18, v19, 2026LL);
    v20 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 13LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v20, v21, 2027LL);
    v22 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 11LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v22, v23, 2028LL);
    v24 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 0LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v24, v25, 2029LL);
    v26 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 4LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v26, v27, 2030LL);
    v28 = (_QWORD *)*((_QWORD *)this + 58);
    Spectre::Engine::PerformanceManager::GetCounter(v4, 3LL, 0LL, 3LL);
    Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(v28, v29, 2031LL);
  }
}
