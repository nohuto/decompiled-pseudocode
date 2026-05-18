/*
 * XREFs of ??0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z @ 0x180029158
 * Callers:
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 * Callees:
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

__int64 __fastcall Spectre::Engine::PerformanceManager::MemoryBlock::MemoryBlock(__int64 a1, int a2, __int64 a3)
{
  struct Spectre::Engine::PerformanceManager *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r10

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v3 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter(v3, v4, 2LL, v5);
  return v6;
}
