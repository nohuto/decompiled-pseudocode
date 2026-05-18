/*
 * XREFs of ?Shutdown@Engine@1Spectre@@QEAAXXZ @ 0x180036EAC
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::Shutdown(Spectre::Engine::Engine *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v2);
  if ( !*((_BYTE *)this + 1160) )
  {
    Spectre::Engine::Engine::SendShutdownOrSuspendTelemetry(this);
    (*(void (__fastcall **)(Spectre::Engine::Engine *))(*(_QWORD *)this + 64LL))(this);
    *((_BYTE *)this + 1160) = 1;
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v2);
}
