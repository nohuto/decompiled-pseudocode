/*
 * XREFs of ?FrameTick@Engine@1Spectre@@QEAAXXZ @ 0x180033BC4
 * Callers:
 *     ?FrameTick@SpectreRenderer@@UEAAXXZ @ 0x180018980 (-FrameTick@SpectreRenderer@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::FrameTick(Spectre::Engine::Engine *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v2);
  (*(void (__fastcall **)(Spectre::Engine::Engine *, _BYTE *))(*(_QWORD *)this + 8LL))(this, v2);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v2);
}
