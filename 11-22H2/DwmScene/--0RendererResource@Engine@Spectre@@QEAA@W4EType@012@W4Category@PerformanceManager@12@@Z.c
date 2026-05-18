/*
 * XREFs of ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C
 * Callers:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 * Callees:
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D354 (--E-$_Atomic_integral@H$03@std@@QEAAHXZ.c)
 *     ??0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z @ 0x180029158 (--0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

__int64 __fastcall Spectre::Engine::RendererResource::RendererResource(__int64 a1, int a2, int a3)
{
  __int64 v4; // r11
  struct Spectre::Engine::PerformanceManager *v5; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  Spectre::Engine::PerformanceManager::MemoryBlock::MemoryBlock(a1 + 56, a3, 0LL);
  std::_Atomic_integral<int,4>::operator++((__int64)&Spectre::Engine::RendererResource::sInstanceCounters + 4 * v4);
  v5 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter(v5, *(unsigned int *)(a1 + 48), 0LL, 1LL);
  return a1;
}
