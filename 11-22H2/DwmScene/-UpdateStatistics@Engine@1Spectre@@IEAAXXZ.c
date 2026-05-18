/*
 * XREFs of ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?AddMark@PerformanceLogger@Utils@Spectre@@QEBAXHPEBDH00@Z @ 0x180020014 (-AddMark@PerformanceLogger@Utils@Spectre@@QEBAXHPEBDH00@Z.c)
 *     ??$AddMeasurement@_K@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_K@Z @ 0x18002A78C (--$AddMeasurement@_K@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_K@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::Engine::UpdateStatistics(Spectre::Utils::PerformanceLogger **this)
{
  Spectre::Utils::PerformanceLogger *v2; // rcx
  Spectre::Engine::PerformanceManager *v3; // rax
  char *v4; // [rsp+28h] [rbp-10h]

  Spectre::Utils::PerformanceLogger::AddMark(
    this[58],
    0,
    "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1661,
    "UpdateStatistics",
    "FrameTick");
  v4 = (char *)this[118];
  v2 = this[58];
  this[118] = (Spectre::Utils::PerformanceLogger *)(v4 + 1);
  Spectre::Utils::PerformanceLogger::AddMeasurement<unsigned __int64>(
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    (unsigned __int64)v4);
  v3 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::FrameTick(v3);
}
