/*
 * XREFs of ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8
 * Callers:
 *     ??1DeviceResource@Engine@Spectre@@UEAA@XZ @ 0x18002802C (--1DeviceResource@Engine@Spectre@@UEAA@XZ.c)
 *     ??1SharedResource@Engine@Spectre@@UEAA@XZ @ 0x1800280B8 (--1SharedResource@Engine@Spectre@@UEAA@XZ.c)
 *     ??_GRendererResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800293E0 (--_GRendererResource@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     _Spectre::Engine::SharedResource::SharedResource_::_1_::dtor$0 @ 0x1800E4E98 (_Spectre--Engine--SharedResource--SharedResource_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??F?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D3C4 (--F-$_Atomic_integral@H$03@std@@QEAAHXZ.c)
 *     ??1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ @ 0x1800292BC (--1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::RendererResource::~RendererResource(Spectre::Engine::RendererResource *this)
{
  struct Spectre::Engine::PerformanceManager *v2; // rax

  *(_QWORD *)this = &Spectre::Engine::RendererResource::`vftable';
  v2 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter(v2, *((unsigned int *)this + 12), 0LL, -1LL);
  std::_Atomic_integral<int,4>::operator--((__int64)&Spectre::Engine::RendererResource::sInstanceCounters + 4 * *((int *)this + 11));
  Spectre::Engine::PerformanceManager::MemoryBlock::~MemoryBlock((Spectre::Engine::RendererResource *)((char *)this + 56));
  std::string::_Tidy_deallocate((__int64)this + 8);
  *(_QWORD *)this = &Spectre::Engine::IVisitable::`vftable';
}
