/*
 * XREFs of ??1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ @ 0x1800292BC
 * Callers:
 *     ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8 (--1RendererResource@Engine@Spectre@@UEAA@XZ.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 * Callees:
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::PerformanceManager::MemoryBlock::~MemoryBlock(
        Spectre::Engine::PerformanceManager::MemoryBlock *this)
{
  struct Spectre::Engine::PerformanceManager *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r9

  v1 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter(v1, v2, 2LL, v3);
}
