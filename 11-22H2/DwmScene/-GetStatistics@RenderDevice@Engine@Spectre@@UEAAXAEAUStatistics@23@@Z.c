/*
 * XREFs of ?GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z @ 0x180026870
 * Callers:
 *     ?GetStatistics@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEAUStatistics@34@@Z @ 0x1800C59E0 (-GetStatistics@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEAUStatistics@34@@Z.c)
 * Callees:
 *     ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18 (-GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::GetStatistics(
        Spectre::Engine::RenderDevice *this,
        struct Spectre::Engine::Statistics *a2)
{
  struct Spectre::Engine::PerformanceManager *v3; // rbx

  *(_DWORD *)a2 = *((_DWORD *)this + 972);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 973);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 974);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 975);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 976);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 492);
  *((_QWORD *)a2 + 5) = *((_QWORD *)this + 494);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 493);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 491);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 495);
  *((_QWORD *)a2 + 9) = *((_QWORD *)this + 496);
  v3 = Spectre::Engine::PerformanceManager::Instance();
  *((_DWORD *)a2 + 5) = Spectre::Engine::PerformanceManager::GetCounter(v3, 0LL, 1LL, 1LL);
  *((_DWORD *)a2 + 6) = Spectre::Engine::PerformanceManager::GetCounter(v3, 1LL, 1LL, 1LL);
  *((_DWORD *)a2 + 7) = Spectre::Engine::PerformanceManager::GetCounter(v3, 11LL, 1LL, 1LL);
}
